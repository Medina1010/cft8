INTERFACE = complejos
NAME = complejos
SOURCE = complex_number_cpp
FINAL = complex_number_py
PYTHON_CFLAGS := $(shell python3-config --cflags)
PYTHON_LDFLAGS := $(shell python3-config --ldflags)
all: build clean
build:
	swig -c++ -python $(INTERFACE).i
	mv $(INTERFACE).py $(FINAL)/$(INTERFACE).py 
	g++ $(PYTHON_CFLAGS) -c $(SOURCE)/$(NAME).cpp $(INTERFACE)_wrap.cxx
	g++ -shared $(PYTHON_LDFLAGS) $(NAME).o $(INTERFACE)_wrap.o -o $(FINAL)/_$(NAME).so
clean:
	rm *.o
	rm $(INTERFACE)_wrap.cxx
