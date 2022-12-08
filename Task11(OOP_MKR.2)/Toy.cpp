#include "Toy.h"

int main()
{
	Toy t;
	SoftToy s;
	Car c;

	int print();
	{
		t.operator<< (cout);
		s.operator<< (cout);
		c.operator<< (cout);
	}

	string path = "Toys.txt";
	ofstream sout;
	sout.open(path);
	if (!sout.is_open())
	{
		cout << "The file could not be opened";
	}
	else {
		t.operator<<(sout);
		s.operator<<(sout);
		c.operator<<(sout);
	};
}

Toy::Toy()
{

}

Toy::~Toy()
{
}

ostream& Toy::operator<<(ostream& ostream)
{
	ostream << "It is toy" << endl;
	return ostream;
}

Car::Car()
{

}

ostream& Car::operator<<(ostream& ostream)
{
	ostream << "It is car" << endl;
	return ostream;
}

SoftToy::SoftToy()
{
}

ostream& SoftToy::operator<<(ostream& ostream)
{
	ostream << "It is soft toy" << endl;
	return ostream;
}
