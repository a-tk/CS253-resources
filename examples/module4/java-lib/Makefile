

.PHONY: all run clean


all: Driver.class

Driver.class: Driver.java lib/mylib.jar
	javac -cp lib/mylib.jar Driver.java

lib/mylib.jar: lib/mypackage/Library.java
	cd lib ; make

run: Driver.class
	java -cp .:lib/mylib.jar Driver

clean: 
	cd lib ; make clean
	rm -f *.class
