#include <iostream>

int main()
{
	int Number{ 4096 }; // This kind of attribution doesn't work with pointers.
	int* ptr; // Creates a pointer without attribution, this may be dangerous to the code.
	ptr = &Number; // Points to Number's RAM memory address.
	int* ptr2;
	ptr2 = ptr; // Points to a previously declared pointer.

	std::cout << "Value of Number: " << Number << "\n";
	std::cout << "RAM memory address of Number: " << &Number << "\n\n";
	std::cout << "RAM memory address stored inside ptr pointer: " << ptr << "\n";
	std::cout << "ptr's RAM memory address: " << &ptr << "\n";
	std::cout << "RAM memory address stored inside ptr2 pointer: " << ptr2 << "\n";
	std::cout << "ptr2's RAM memory address: " << &ptr2 << "\n";
	*ptr2 = *ptr + 10; // This is a example on how you change the value of a varible using pointers. 
	std::cout << "\nValue of Number updated: " << Number << "\n";
	*ptr = Number++; // To set a valor to variable through a pointer you just need to add an asterisk in the pointer's name and make a regular attribuition. 
	std::cout << "\nValue of Number set through pointer: " << Number << "\n";

}