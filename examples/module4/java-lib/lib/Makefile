
.PHONY: all clean

all: mylib.jar

mylib.jar: mypackage/Library.class
	jar cf mylib.jar mypackage/Library.class

mypackage/Library.class: mypackage/Library.java
	javac mypackage/Library.java


clean:
	rm -f mypackage/Library.class
	rm -f mylib.jar