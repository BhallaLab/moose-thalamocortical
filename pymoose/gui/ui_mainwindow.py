# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'moose_gui.ui'
#
# Created: Fri Feb  5 23:56:33 2010
#      by: PyQt4 UI code generator 4.6
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(689, 611)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(MainWindow.sizePolicy().hasHeightForWidth())
        MainWindow.setSizePolicy(sizePolicy)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/moose_thumbnail.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        MainWindow.setWindowIcon(icon)
        self.centralwidget = QtGui.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtGui.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.baseContainerWidget = QtGui.QWidget(self.centralwidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.baseContainerWidget.sizePolicy().hasHeightForWidth())
        self.baseContainerWidget.setSizePolicy(sizePolicy)
        self.baseContainerWidget.setObjectName("baseContainerWidget")
        self.horizontalLayout = QtGui.QHBoxLayout(self.baseContainerWidget)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.tabWidget = QtGui.QTabWidget(self.baseContainerWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.tabWidget.sizePolicy().hasHeightForWidth())
        self.tabWidget.setSizePolicy(sizePolicy)
        self.tabWidget.setObjectName("tabWidget")
        self.modelTreeTab = QtGui.QWidget()
        self.modelTreeTab.setObjectName("modelTreeTab")
        self.modelTreeContainerWidget = QtGui.QWidget(self.modelTreeTab)
        self.modelTreeContainerWidget.setGeometry(QtCore.QRect(0, 0, 641, 491))
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.modelTreeContainerWidget.sizePolicy().hasHeightForWidth())
        self.modelTreeContainerWidget.setSizePolicy(sizePolicy)
        self.modelTreeContainerWidget.setObjectName("modelTreeContainerWidget")
        self.horizontalLayout_3 = QtGui.QHBoxLayout(self.modelTreeContainerWidget)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.modelTreeWidget = MooseTreeWidget(self.modelTreeContainerWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.modelTreeWidget.sizePolicy().hasHeightForWidth())
        self.modelTreeWidget.setSizePolicy(sizePolicy)
        self.modelTreeWidget.setObjectName("modelTreeWidget")
        self.horizontalLayout_3.addWidget(self.modelTreeWidget)
        self.mooseClassToolBox = MooseClassWidget(self.modelTreeContainerWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.mooseClassToolBox.sizePolicy().hasHeightForWidth())
        self.mooseClassToolBox.setSizePolicy(sizePolicy)
        self.mooseClassToolBox.setObjectName("mooseClassToolBox")
        self.page = QtGui.QWidget()
        self.page.setGeometry(QtCore.QRect(0, 0, 308, 413))
        self.page.setObjectName("page")
        self.mooseClassToolBox.addItem(self.page, "")
        self.page_2 = QtGui.QWidget()
        self.page_2.setGeometry(QtCore.QRect(0, 0, 96, 26))
        self.page_2.setObjectName("page_2")
        self.mooseClassToolBox.addItem(self.page_2, "")
        self.horizontalLayout_3.addWidget(self.mooseClassToolBox)
        self.tabWidget.addTab(self.modelTreeTab, "")
        self.runTab = QtGui.QWidget()
        self.runTab.setObjectName("runTab")
        self.gridLayout = QtGui.QGridLayout(self.runTab)
        self.gridLayout.setObjectName("gridLayout")
        self.simulationWidget = QtGui.QWidget(self.runTab)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.simulationWidget.sizePolicy().hasHeightForWidth())
        self.simulationWidget.setSizePolicy(sizePolicy)
        self.simulationWidget.setObjectName("simulationWidget")
        self.horizontalLayout_2 = QtGui.QHBoxLayout(self.simulationWidget)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.runControlWidget = QtGui.QWidget(self.simulationWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.runControlWidget.sizePolicy().hasHeightForWidth())
        self.runControlWidget.setSizePolicy(sizePolicy)
        self.runControlWidget.setObjectName("runControlWidget")
        self.verticalLayout_2 = QtGui.QVBoxLayout(self.runControlWidget)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.resetPushButton = QtGui.QPushButton(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.resetPushButton.sizePolicy().hasHeightForWidth())
        self.resetPushButton.setSizePolicy(sizePolicy)
        self.resetPushButton.setObjectName("resetPushButton")
        self.verticalLayout_2.addWidget(self.resetPushButton)
        self.runPushButton = QtGui.QPushButton(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.runPushButton.sizePolicy().hasHeightForWidth())
        self.runPushButton.setSizePolicy(sizePolicy)
        self.runPushButton.setObjectName("runPushButton")
        self.verticalLayout_2.addWidget(self.runPushButton)
        self.runTimeLabel = QtGui.QLabel(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.runTimeLabel.sizePolicy().hasHeightForWidth())
        self.runTimeLabel.setSizePolicy(sizePolicy)
        self.runTimeLabel.setObjectName("runTimeLabel")
        self.verticalLayout_2.addWidget(self.runTimeLabel)
        self.runTimeLineEdit = QtGui.QLineEdit(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Preferred, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.runTimeLineEdit.sizePolicy().hasHeightForWidth())
        self.runTimeLineEdit.setSizePolicy(sizePolicy)
        self.runTimeLineEdit.setObjectName("runTimeLineEdit")
        self.verticalLayout_2.addWidget(self.runTimeLineEdit)
        self.plotUpdateIntervalLabel = QtGui.QLabel(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.plotUpdateIntervalLabel.sizePolicy().hasHeightForWidth())
        self.plotUpdateIntervalLabel.setSizePolicy(sizePolicy)
        self.plotUpdateIntervalLabel.setWordWrap(True)
        self.plotUpdateIntervalLabel.setObjectName("plotUpdateIntervalLabel")
        self.verticalLayout_2.addWidget(self.plotUpdateIntervalLabel)
        self.plotUpdateIntervalLineEdit = QtGui.QLineEdit(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.plotUpdateIntervalLineEdit.sizePolicy().hasHeightForWidth())
        self.plotUpdateIntervalLineEdit.setSizePolicy(sizePolicy)
        self.plotUpdateIntervalLineEdit.setObjectName("plotUpdateIntervalLineEdit")
        self.verticalLayout_2.addWidget(self.plotUpdateIntervalLineEdit)
        self.rescalePlotsPushButton = QtGui.QPushButton(self.runControlWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.rescalePlotsPushButton.sizePolicy().hasHeightForWidth())
        self.rescalePlotsPushButton.setSizePolicy(sizePolicy)
        self.rescalePlotsPushButton.setObjectName("rescalePlotsPushButton")
        self.verticalLayout_2.addWidget(self.rescalePlotsPushButton)
        self.currentTimeLabel = QtGui.QLabel(self.runControlWidget)
        self.currentTimeLabel.setWordWrap(True)
        self.currentTimeLabel.setObjectName("currentTimeLabel")
        self.verticalLayout_2.addWidget(self.currentTimeLabel)
        self.horizontalLayout_2.addWidget(self.runControlWidget)
        self.plotsGroupBox = QtGui.QGroupBox(self.simulationWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.MinimumExpanding, QtGui.QSizePolicy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.plotsGroupBox.sizePolicy().hasHeightForWidth())
        self.plotsGroupBox.setSizePolicy(sizePolicy)
        self.plotsGroupBox.setObjectName("plotsGroupBox")
        self.horizontalLayout_2.addWidget(self.plotsGroupBox)
        self.gridLayout.addWidget(self.simulationWidget, 0, 0, 1, 1)
        self.tabWidget.addTab(self.runTab, "")
        self.horizontalLayout.addWidget(self.tabWidget)
        self.verticalLayout.addWidget(self.baseContainerWidget)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 689, 26))
        self.menubar.setObjectName("menubar")
        self.menuMOOSE = QtGui.QMenu(self.menubar)
        self.menuMOOSE.setObjectName("menuMOOSE")
        self.menuTutorials = QtGui.QMenu(self.menubar)
        self.menuTutorials.setObjectName("menuTutorials")
        self.menuHelp = QtGui.QMenu(self.menubar)
        self.menuHelp.setObjectName("menuHelp")
        self.menuRun = QtGui.QMenu(self.menubar)
        self.menuRun.setObjectName("menuRun")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionLoad = QtGui.QAction(MainWindow)
        self.actionLoad.setObjectName("actionLoad")
        self.actionDocumentation = QtGui.QAction(MainWindow)
        self.actionDocumentation.setObjectName("actionDocumentation")
        self.actionAbout_MOOSE = QtGui.QAction(MainWindow)
        self.actionAbout_MOOSE.setObjectName("actionAbout_MOOSE")
        self.actionReset = QtGui.QAction(MainWindow)
        self.actionReset.setObjectName("actionReset")
        self.actionStart = QtGui.QAction(MainWindow)
        self.actionStart.setObjectName("actionStart")
        self.actionStop = QtGui.QAction(MainWindow)
        self.actionStop.setObjectName("actionStop")
        self.actionQuit = QtGui.QAction(MainWindow)
        self.actionQuit.setObjectName("actionQuit")
        self.actionSquid_Axon = QtGui.QAction(MainWindow)
        self.actionSquid_Axon.setObjectName("actionSquid_Axon")
        self.actionIzhikevich_Neurons = QtGui.QAction(MainWindow)
        self.actionIzhikevich_Neurons.setObjectName("actionIzhikevich_Neurons")
        self.actionSettings = QtGui.QAction(MainWindow)
        self.actionSettings.setObjectName("actionSettings")
        self.actionGLCell = QtGui.QAction(MainWindow)
        self.actionGLCell.setObjectName("actionGLCell")
        self.actionGLView = QtGui.QAction(MainWindow)
        self.actionGLView.setObjectName("actionGLView")
        self.menuMOOSE.addAction(self.actionLoad)
        self.menuMOOSE.addAction(self.actionSettings)
        self.menuMOOSE.addAction(self.actionQuit)
        self.menuTutorials.addAction(self.actionSquid_Axon)
        self.menuTutorials.addAction(self.actionIzhikevich_Neurons)
        self.menuTutorials.addAction(self.actionGLCell)
        self.menuTutorials.addAction(self.actionGLView)
        self.menuHelp.addAction(self.actionDocumentation)
        self.menuHelp.addAction(self.actionAbout_MOOSE)
        self.menuRun.addAction(self.actionReset)
        self.menuRun.addAction(self.actionStart)
        self.menuRun.addAction(self.actionStop)
        self.menubar.addAction(self.menuMOOSE.menuAction())
        self.menubar.addAction(self.menuRun.menuAction())
        self.menubar.addAction(self.menuTutorials.menuAction())
        self.menubar.addAction(self.menuHelp.menuAction())

        self.retranslateUi(MainWindow)
        self.tabWidget.setCurrentIndex(1)
        self.mooseClassToolBox.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QtGui.QApplication.translate("MainWindow", "MainWindow", None, QtGui.QApplication.UnicodeUTF8))
        self.modelTreeWidget.headerItem().setText(0, QtGui.QApplication.translate("MainWindow", "1", None, QtGui.QApplication.UnicodeUTF8))
        self.mooseClassToolBox.setItemText(self.mooseClassToolBox.indexOf(self.page), QtGui.QApplication.translate("MainWindow", "Page 1", None, QtGui.QApplication.UnicodeUTF8))
        self.mooseClassToolBox.setItemText(self.mooseClassToolBox.indexOf(self.page_2), QtGui.QApplication.translate("MainWindow", "Page 2", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.modelTreeTab), QtGui.QApplication.translate("MainWindow", "Model Tree", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget.setTabToolTip(self.tabWidget.indexOf(self.modelTreeTab), QtGui.QApplication.translate("MainWindow", "Visualize the model as a tree structure", None, QtGui.QApplication.UnicodeUTF8))
        self.resetPushButton.setText(QtGui.QApplication.translate("MainWindow", "Reset", None, QtGui.QApplication.UnicodeUTF8))
        self.runPushButton.setText(QtGui.QApplication.translate("MainWindow", "Run", None, QtGui.QApplication.UnicodeUTF8))
        self.runTimeLabel.setText(QtGui.QApplication.translate("MainWindow", "Run for (seconds)", None, QtGui.QApplication.UnicodeUTF8))
        self.plotUpdateIntervalLabel.setText(QtGui.QApplication.translate("MainWindow", "Plot update interval (steps)", None, QtGui.QApplication.UnicodeUTF8))
        self.rescalePlotsPushButton.setText(QtGui.QApplication.translate("MainWindow", "Rescale plots", None, QtGui.QApplication.UnicodeUTF8))
        self.currentTimeLabel.setText(QtGui.QApplication.translate("MainWindow", "Current simulation time:", None, QtGui.QApplication.UnicodeUTF8))
        self.plotsGroupBox.setTitle(QtGui.QApplication.translate("MainWindow", "Plots", None, QtGui.QApplication.UnicodeUTF8))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.runTab), QtGui.QApplication.translate("MainWindow", "Run", None, QtGui.QApplication.UnicodeUTF8))
        self.menuMOOSE.setTitle(QtGui.QApplication.translate("MainWindow", "File", None, QtGui.QApplication.UnicodeUTF8))
        self.menuTutorials.setTitle(QtGui.QApplication.translate("MainWindow", "Tutorials", None, QtGui.QApplication.UnicodeUTF8))
        self.menuHelp.setTitle(QtGui.QApplication.translate("MainWindow", "Help", None, QtGui.QApplication.UnicodeUTF8))
        self.menuRun.setTitle(QtGui.QApplication.translate("MainWindow", "Run", None, QtGui.QApplication.UnicodeUTF8))
        self.actionLoad.setText(QtGui.QApplication.translate("MainWindow", "Load", None, QtGui.QApplication.UnicodeUTF8))
        self.actionLoad.setToolTip(QtGui.QApplication.translate("MainWindow", "Load a MOOSE/GENESIS/SBML Model", None, QtGui.QApplication.UnicodeUTF8))
        self.actionLoad.setShortcut(QtGui.QApplication.translate("MainWindow", "Ctrl+L", None, QtGui.QApplication.UnicodeUTF8))
        self.actionDocumentation.setText(QtGui.QApplication.translate("MainWindow", "Documentation", None, QtGui.QApplication.UnicodeUTF8))
        self.actionDocumentation.setShortcut(QtGui.QApplication.translate("MainWindow", "F1", None, QtGui.QApplication.UnicodeUTF8))
        self.actionAbout_MOOSE.setText(QtGui.QApplication.translate("MainWindow", "About MOOSE", None, QtGui.QApplication.UnicodeUTF8))
        self.actionReset.setText(QtGui.QApplication.translate("MainWindow", "Reset", None, QtGui.QApplication.UnicodeUTF8))
        self.actionReset.setShortcut(QtGui.QApplication.translate("MainWindow", "F7", None, QtGui.QApplication.UnicodeUTF8))
        self.actionStart.setText(QtGui.QApplication.translate("MainWindow", "Start", None, QtGui.QApplication.UnicodeUTF8))
        self.actionStart.setShortcut(QtGui.QApplication.translate("MainWindow", "F5", None, QtGui.QApplication.UnicodeUTF8))
        self.actionStop.setText(QtGui.QApplication.translate("MainWindow", "Stop", None, QtGui.QApplication.UnicodeUTF8))
        self.actionStop.setShortcut(QtGui.QApplication.translate("MainWindow", "F6", None, QtGui.QApplication.UnicodeUTF8))
        self.actionQuit.setText(QtGui.QApplication.translate("MainWindow", "Quit", None, QtGui.QApplication.UnicodeUTF8))
        self.actionQuit.setShortcut(QtGui.QApplication.translate("MainWindow", "Ctrl+Q", None, QtGui.QApplication.UnicodeUTF8))
        self.actionSquid_Axon.setText(QtGui.QApplication.translate("MainWindow", "Squid Axon", None, QtGui.QApplication.UnicodeUTF8))
        self.actionSquid_Axon.setToolTip(QtGui.QApplication.translate("MainWindow", "Squid Axon with Hodgkin-Huxley type Na and K channels.", None, QtGui.QApplication.UnicodeUTF8))
        self.actionIzhikevich_Neurons.setText(QtGui.QApplication.translate("MainWindow", "Izhikevich Neurons", None, QtGui.QApplication.UnicodeUTF8))
        self.actionIzhikevich_Neurons.setToolTip(QtGui.QApplication.translate("MainWindow", "Izhikevich Neurons", None, QtGui.QApplication.UnicodeUTF8))
        self.actionSettings.setText(QtGui.QApplication.translate("MainWindow", "Settings", None, QtGui.QApplication.UnicodeUTF8))
        self.actionGLCell.setText(QtGui.QApplication.translate("MainWindow", "GLCell", None, QtGui.QApplication.UnicodeUTF8))
        self.actionGLCell.setToolTip(QtGui.QApplication.translate("MainWindow", "Load the OpenGL based cell viewer with a sample mitral cell model.", None, QtGui.QApplication.UnicodeUTF8))
        self.actionGLView.setText(QtGui.QApplication.translate("MainWindow", "GLView", None, QtGui.QApplication.UnicodeUTF8))
        self.actionGLView.setToolTip(QtGui.QApplication.translate("MainWindow", "Load the OpenGL based object viewer with the same mitral cell", None, QtGui.QApplication.UnicodeUTF8))

from mooseclasses import MooseClassWidget
from moosetree import MooseTreeWidget
import moose_rc
