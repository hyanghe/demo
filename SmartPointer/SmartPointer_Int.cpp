#include "pch.h"
#include "SmartPointer_Int.h"
#include <iostream>

SmartPointer_Int::SmartPointer_Int(int* p = nullptr) {
	ptr = p;
	std::cout << "Constructor activated!" << '\n';
}

SmartPointer_Int::~SmartPointer_Int()
{
		std::cout << "Destructor activated!" << '\n';
		delete ptr;
}
