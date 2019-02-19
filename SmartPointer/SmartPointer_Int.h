#pragma once
class SmartPointer_Int
{
private:
	int* ptr;
public:
	explicit SmartPointer_Int(int* p);

	~SmartPointer_Int();

	int& operator*() {
		return *ptr;
	};

	int* operator->() {
		return ptr;
	};
};

