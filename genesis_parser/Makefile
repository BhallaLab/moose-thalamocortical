#/**********************************************************************
#** This program is part of 'MOOSE', the
#** Messaging Object Oriented Simulation Environment,
#** also known as GENESIS 3 base code.
#**           copyright (C) 2004 Upinder S. Bhalla. and NCBS
#** It is made available under the terms of the
#** GNU General Public License version 2
#** See the file COPYING.LIB for the full notice.
#**********************************************************************/
# $Id: $
#
# $Log: $
#
# Normally this Makefile is called from the master Makefile to make the
# default SLI.o
#
# If you want to rebuild the parser from scratch, you need to do
# 'make parser' in this directory. You will need bison, flex, and sed.
#

TARGET = SLI.o
CXXFLAGS += -I..

ifneq (,$(findstring -DCRL_MPI,$(CXXFLAGS)))
OBJ = \
	GenesisParser.o \
	GenesisParserWrapper.o \
	ParGenesisParser.o \
	GenesisParser.tab.o \
	symtab.o \
	eval.o \
	exec_fork.o \
	parse.o \
	getopt.o \
	script.o 
else
OBJ = \
	GenesisParser.o \
	GenesisParserWrapper.o \
	GenesisParser.tab.o \
	symtab.o \
	eval.o \
	exec_fork.o \
	parse.o \
	getopt.o \
	script.o 
endif

HEADERS = \
	../basecode/header.h \
	../connections/Conn.h \
	../basecode/Element.h \
	../utility/utility.h	\

default: $(TARGET)


$(OBJ)	: GenesisParser.yy.cpp $(HEADERS)
GenesisParser.o:			GenesisParser.h
GenesisParserWrapper.o:		GenesisParser.h GenesisParserWrapper.h ../shell/Shell.h
ifneq (,$(findstring -DCRL_MPI,$(CXXFLAGS)))
ParGenesisParser.o:		GenesisParserWrapper.h ParGenesisParser.h ../shell/Shell.h
endif
GenesisParser.yy.o:			GenesisParser.yy.cpp
GenesisParser.tab.o:	GenesisParser.tab.cpp
GenesisParser.tab.o GenesisParser.yy.o GenesisParser.o: GenesisParser.yy.cpp GenesisParser.h GenesisParser.tab.h

.cpp.o:
	$(CXX) $(CXXFLAGS) -DYYMALLOC -DYYFREE -DYYSTYPE_IS_DECLARED -I../basecode -I../external/include $< -c

$(TARGET):		$(OBJ) $(HEADERS)
		$(LD) -r -o $(TARGET) $(OBJ) 
#		$(LD) -r -o $(TARGET) $(OBJ) $(LIBS)

clean:
	-rm -f *.o $(TARGET) core core.* GenesisParser.tab.o GenesisParser.yy.o

