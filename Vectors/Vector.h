#pragma once

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

/*Vector: Let ->A be a vector <Ax,Ay......>
Addiction: Let ->B be a vector <Bx,By......>
->A + ->B = ->C => <Ax - Bx,Ay - By, ..., An -Bn>

[Subtraction]
->A - ->B = ->C =>  <Ax - By, ...,An - Bn>

[Scalar Multiplying]
Let K be a constant variable
K  ->A => < K . Ax, K . Ay>
*/
class Vector2D
{
	float x, y;
public:
	Vector2D Addition(const Vector2D &a)
	{
		Vector2D tmp = Vector2D(x + a.x, y + a.y);
		return tmp;
	};
	Vector2D Subtraction(const Vector2D &b)
	{
		Vector2D tmp = Vector2D(x - b.x,y - b.y);
		return tmp;
	};
	Vector2D ScalMult(float mult)
	{
		Vector2D tmp = Vector2D(x * mult, y * mult);
		return tmp;
	};
	Vector2D(float x2, float y2) 
	{
		x2 = x;
		y2 = y;
	}
	bool operator == (Vector2D & yes) 
	{
		return x == yes.x && y == yes.y;
	};
	bool operator + (Vector2D & yes)
	{
		return x + yes.x && y + yes.y;
	};
};

class Vector3D
{
	float x, y, z;
public:
	Vector3D() {};
	Vector3D Addition(const Vector3D &a)
	{
		Vector3D tmp = Vector3D(x + a.x, y + a.y, z + a.z);
		return tmp;
	};
	Vector3D Subtraction(const Vector3D &b)
	{
		Vector3D tmp = Vector3D(x - b.x, y - b.y, z - b.z);
		return tmp;
	};
	Vector3D ScalMult(float mult)
	{
		Vector3D tmp = Vector3D(x *= mult,y *= mult,z *= mult);
		return tmp;
	};
	Vector3D(float x2, float y2, float z2)
	{
		x2 = x;
		y2 = y;
		z2 = z;
	}
};


//Linked Lists


template<typename T>
T LinkedList
{
private:
	Node<T> head;
	Node<T> tail;
	int size
public:
	LinkedList() {};
	LinkedList(LinkedList<T>);
	void addFirst(element T);
	void addLast(element T);
	const T getFirst();
	const T getLast();
	T removeFirst();
	T removeLast();
	void add(element T);
	void add(int index, element T);
	void clear() {};
	const bool contains(element T);
	const T get(int index);
	const int indexOf(element T);
	const bool isEmpty();
};

