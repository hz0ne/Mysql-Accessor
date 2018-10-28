INC_DIR:= ./
SRC_DIR:= ./
SRCS:=$(wildcard *.cc)
OBJS:= $(patsubst %.cc, %.o, $(SRCS))
LIBS:=  /usr/lib/x86_64-linux-gnu/libmysqlclient.so

CXX:=g++

CXXFLAGS:= -w -g -std=c++11 $(addprefix -I, $(INC_DIR)) $(LIBS) -Wno-deprecated

EXE:=./test.exe

$(EXE):$(OBJS)
		$(CXX) -o $(EXE) $(OBJS) $(CXXFLAGS)

clean:
		rm -rf $(EXE)
		rm -rf $(OBJS)

