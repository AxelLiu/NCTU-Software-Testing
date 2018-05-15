HW1_TRI=hw1/triangle
HW2_TRI=hw2/triangle
HW2_ND=hw2/nextdate
HW2_COM=hw2/commission
all : 
	cd ${HW1_TRI}; make
	cd ${HW2_TRI}; make
	cd ${HW2_ND}; make
	cd ${HW2_COM}; make

test : ${HW1_TRI}/hw1_unittest
	cd ${HW1_TRI}; make test
	cd ${HW2_TRI}; make test
	cd ${HW2_ND}; make test
	cd ${HW2_COM}; make test

gcov : ${HW1_TRI}/hw1_unittest
	cd ${HW1_TRI}; make gcov
	cd ${HW2_TRI}; make gcov
	cd ${HW2_ND}; make gcov
	cd ${HW2_COM}; make gcov

clean :
	cd ${HW1_TRI}; make clean
	cd ${HW2_TRI}; make clean
	cd ${HW2_ND}; make clean
	cd ${HW2_COM}; make clean