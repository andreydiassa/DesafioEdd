#include <iostream>

using namespace std;

int main(int argc, char** argv) {


	int x, y, *p;y = 0;
	p = &y;
	x = *p;
	x = 4;
	(*p)++;
	--x;
	(*p) += x;
	
	cout << "Imprima x: "   << x << endl;
	cout << "Imprima y: "  << y << endl;

}