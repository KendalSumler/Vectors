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


template<typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

template<typename Type>
class linkedListIterator
{
private:
	nodeType<Type> * current; //pointer to point to the current node in the linked list

public:
	//Default constructor
	//Postcondition: current = NULL
	linkedListIterator() {};

	//Constructor with parameter
	//Postcondition: current = node
	linkedListIterator(nodeType<Type> *node);

	//Function to overlaod the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	Type operator*();

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	linkedListIterator<Type> operator++();

	//Overlaod the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator==(linkedListIterator<Type>& list) const;

	//Overlaod the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the 
	//iterator specified by right otherwise returns false
	bool operator!=(linkedListIterator<Type>& list) const;
};


template<typename Type>
class linkedListType
{
protected:
	int count; //variable to store the number of elements in the list
	nodeType<Type> *first; //pointer to the first node of the list
	nodeType<Type> *last; //pointer to the last node of the list

public:
	//Overload the assignment operator
	const linkedListType<Type>& operator = (const linkedListType<Type>& otherList);

	//Initialize the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	void initializeList()
	{

	};

	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty otherwise it returns false
	bool isEmptyList() const 
	{
		
	};

	//Function to output the data contained in each node
	//Postcondition: Node
	void print() const;

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const
	{
		count = first;
		while (count != nullptr)
		{
			count++;
			return count;
		}
	};

	//Function to delete all the nodes from the list
	//Postcondition: first = NULL, last = NULL, count = 0;
	void destroyList() 
	{
		return nullptr;
	};

	//Function to return the first element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the first element of the list is returned
	Type front() const
	{
		first->link;
		return Type();
	};

	//Function to return the last element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the last element of the list is returned
	Type back() const
	{
		tail->link;
		return Type();
	};

	//Function to determine whether node is in the list
	//Postcondition: Returns true if node is in the list
	//otherwise teh value false is returned
	bool search(const Type& nodeInfo) 
	{
		return Type();
	};

	//Function to insert node at the begining of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertFirst(const Type& nodeInfo)
	{
		nodeInfo.link = first;
		*first = nodeInfo;
		count++;
	};

	//Function to insert node at the end of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertLast(const Type& nodeInfo)
	{
		return Type();
	};

	//Function to delete node from the list
	//Postcondition: If found, the node containing the node is deleted from the list. first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const Type& nodeInfo)
	{
		return Type();
	};

	//Function to return an iterator at the begining of the linked list
	//Postcondition: Returns an iteratir such that the current is set to first
	linkedListIterator<Type> begin() ;
	
	//Funcion to rturn an iterator at the end of the linked list
	//Postcondition: Returns an iterator such that current is set to NULL
	linkedListIterator<Type> end()
	{
		return last;
	};

	//Default constructor
	//Initializes the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	linkedListType() 
	{
		
	};

	//copy constructor
	linkedListType(const linkedListType<Type> otherList);

	//deconstructor
	//Deletes all the nodes from the list
	//Postcondition: The list object is destroyed
	~linkedListType<Type>() {}

private:
	//Function to make a copy of list
	//Postcondition: A copy of list is created and assigned to this list
	void copyList(const linkedListType<Type>& otherList);
};

template<typename Type>
inline linkedListIterator<Type> linkedListType<Type>::begin()
{
	
	return linkedListIterator<Type>();
}
