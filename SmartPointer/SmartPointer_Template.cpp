#include "pch.h"
#include "SmartPointer_Template.h"

template <typename T>

SmartPointer_Template::SmartPointer_Template(T* p = nullptr)
{
	this->ptr = p;
}


SmartPointer_Template::~SmartPointer_Template()
{
	delete(this->ptr);
}
