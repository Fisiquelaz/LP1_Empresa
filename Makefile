.DEFAULT_GOAL = empresa

funcionario.o: funcionario.cpp funcionario.h
	g++ funcionario.cpp -c
empresa.o: empresa.cpp empresa.h
	g++ empresa.cpp -c
# dado.o: dado.cpp dado.h
# 	g++ dado.cpp -c

empresa: main.cpp funcionario.o empresa.o
	g++ main.cpp funcionario.o empresa.o -o empresa

clear: 
	rm *.o
	rm empresa