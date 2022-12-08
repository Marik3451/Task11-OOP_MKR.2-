#include <iostream> 
#include <conio.h> 
#include <fstream>
#include <stdio.h> 
#include <windows.h> 
#include <string>
#pragma once
using namespace std;
class Toy
{
public:
	Toy();
	~Toy();
	ostream& operator<< (ostream& ostream);
};

class Car : public Toy
{
public:
	Car();
	ostream& operator<< (ostream& ostream);
};

class SoftToy : public Toy
{
public:
	SoftToy();
	ostream& operator<< (ostream& ostream);
};


