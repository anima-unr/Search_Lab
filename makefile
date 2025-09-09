label: labelInformation.o main.o
	g++ -o label labelInformation.o main.o -g

main.o: labelInformation.h main.cpp
	g++ -c main.cpp -g

labelInformation.o: labelInformation.h labelInformation.cpp
	g++ -c labelInformation.cpp -g

clean:
	rm *.o label