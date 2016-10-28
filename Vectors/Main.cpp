#include <iostream>
#include <string>
#include "Vector.h"
#include <cassert>

using namespace std;

class nodeType
{
public:
	nodeType() {}
	int info;
	nodeType * link;
};
int main()
{	
	nodeType *a = new nodeType();
	nodeType *b = new nodeType();
	nodeType *c = new nodeType();
	a->info = 0;
	b->info = 2;
	c->info = 4;
	c->link = b;
	b->link = a;
	
	nodeType * head = c;
	
	while (head != nullptr)
	{
		cout<< head->info;
		head = head->link;
	}
	system("pause");
	return 1;
};



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
//int main()
//{
//	Vector2D *A =  new Vector2D(2,7);
//	Vector2D B = Vector2D(7, 2);
//	A->Subtraction(B);
//	A->ScalMult(7.5f);
//	Vector3D *C = new Vector3D(4.4f, 4, 8);
//	Vector3D D = Vector3D(3, 6, 9);
//	C->Addition(D);
//	C->Subtraction(D);
//	C->ScalMult(2.f);
//	system("pause");
//	return 0;
//}