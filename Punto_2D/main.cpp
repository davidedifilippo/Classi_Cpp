#include <iostream>
#include "punto.h"

using namespace std;

int main()
{   
	Punto p1;

	cout << "Ascissa: "<< p1.getX() << endl;
	cout << "Ascissa: "<< p1.getY() << endl;

	float x = 0;
	float y = 0;

	cout << "Inserire l'ascissa del punto: \n";
	cin >> x;
	cout << "Inserire l'ordinata del punto: \n";
	cin >> y;
		
	p1.setX(x);
	p1.setY(y);


	cout << "Ascissa: " << p1.getX() << endl;
	cout << "Ordinata: "<< p1.getY() << endl;

	return 0;
}
