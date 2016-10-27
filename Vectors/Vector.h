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
	void Addition(const Vector2D &a)
	{
		x += a.x;
		y += a.y;
	};
	void Subtraction(const Vector2D &b)
	{
		x -= b.x;
		y -= b.y;
	};
	void ScalMult(float mult)
	{

		x *= mult;
		y *= mult;
	};
	Vector2D(float x2, float y2) : x(x2), y(y2)
	{
		x2 = x;
		y2 = y;
	}

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