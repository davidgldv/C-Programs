.PHONY:clean

all:life

life:interfaz.o life.o
	g++ -o life interfaz.o life.o

%.o:%.cpp
	g++ -c $<

clean:
	$(RM) *.o
