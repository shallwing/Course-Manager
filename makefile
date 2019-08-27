CC=gcc
object=usage.o base.o
course: ${object}

usage.o: usage.c
	@${CC} usage.c -c 
base.o: base.c
	@${CC} base.c -c

course: ${object}
	@${CC} course.c -o course ${object}

rm:		
	@rm -rf ${object}
