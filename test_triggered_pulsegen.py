import moose
import numpy
import pylab

pg = moose.PulseGen('/pg')
pg.trigMode = 1
pg.firstDelay = 0.1
pg.firstWidth = 0.2
pg.firstLevel = 1.0
pg.trigTime = 0.0

pg1 = moose.PulseGen('/pg1')
pg1.firstDelay = 0.2
pg1.firstWidth = 0.2
pg1.firstLevel = 2.0

sg = moose.SpikeGen('/sg')
sg.threshold = 1.0
sg.refractT = 0.0
sg.aplitude = 2.0
pg1.connect('outputSrc', sg, 'Vm')
sg.connect('event', pg, 'input')

tab_pg = moose.Table('tab_pg')
tab_pg.stepMode = 3
tab_pg.connect('inputRequest', pg, 'output')
tab_trig = moose.Table('tab_trig')
tab_trig.stepMode = 3
tab_trig.connect('inputRequest', sg, 'state')

moose.context.setClock(0, 1e-3)
moose.context.setClock(1, 1e-3)
moose.context.useClock(0, '/##[TYPE=SpikeGen]')
moose.context.useClock(0, '/##[TYPE=PulseGen]')
moose.context.reset()
moose.context.step(1.0)
pg_data = numpy.asarray(tab_pg)
trig_data = numpy.asarray(tab_trig)
pylab.plot(pg_data, label='pg')
pylab.plot(trig_data, label='trg')
pylab.legend()
pylab.show()
numpy.savetxt('pulse.txt', pg_data)
