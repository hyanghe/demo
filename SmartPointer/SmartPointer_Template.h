#pragma once
template <typename T>

class SmartPointer_Template
{
private: 
	T* ptr;

public:
	explicit SmartPointer_Template(T* p = nullptr) {
		this->ptr = p;
	};
	~SmartPointer_Template() {
		delete (ptr);
	};

	T& operator*() {
		return *ptr;
	};

	T* operator->() {
		return ptr;
	};
};

