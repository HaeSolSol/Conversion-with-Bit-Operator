#include <iostream>

int main()
{
	int x = 3, y = 4;
	long long int changer;

	changer = x;
	changer <<= 32;
	changer += y;

	x = changer & 0xFFFF;
	y = changer >> 32 & 0xFFFF;

	std::cout << "x = " << x << "\n" << "y = " << y << std::endl;
}