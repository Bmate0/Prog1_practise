#pragma once

#include <iostream>

class Test
{
public:
	void eljaras5();
	virtual void eljaras1() = 0;
};

class Test2 : public Test {
public:
	void eljaras5();
	void eljaras1()
	{
		std::cout << "k";
	}
};

void kiirat(Test& t) {
	t.eljaras1();
	t.eljaras5();

}

int main() {
	Test t();
	Test2 t2();
	kiirat(t);
	kiirast(t2);
}

