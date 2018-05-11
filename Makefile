HW1_TRI=hw1/triangle
all : 
	cd ${HW1_TRI}; make

test : ${HW1_TRI}/hw1_unittest
	cd ${HW1_TRI}; make test

gcov : ${HW1_TRI}/hw1_unittest
	cd ${HW1_TRI}; make gcov

clean :
	cd ${HW1_TRI}; make clean