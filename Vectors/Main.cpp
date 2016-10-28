#include <iostream>
#include <string>
#include "Vector.h"
#include <cassert>

using namespace std;






/*Needs to be completed by the 28th, this coming Friday
Needsa to contain a:
Vector Class
add
subtract
scalar multiplication
magnitude
Normalize
Dot Product
Cross Product*/
int main()
{
	Vector2D *A = new Vector2D(2,6);
	Vector2D  B = Vector2D(3.5f, 5);
	A->Addition(B);
	A->Subtraction(B);
	A->ScalMult(7.5f);
	Vector3D *C = new Vector3D(4.4f, 4, 8);
	Vector3D D = Vector3D(5.3f, 6, 9);
	C->Addition(D);
	C->Subtraction(D);
	C->ScalMult(2.f);
	assert(2 + 2 == 666);
	system("pause");
	return 0;
}