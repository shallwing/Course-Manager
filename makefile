#!/bin/bash

chmod u+x ./makefile

gcc base.c -c
gcc usage.c -c

object=`ls ./*.o`

gcc course.c -o course $object

rm $object

#end
