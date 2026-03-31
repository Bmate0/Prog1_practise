#pragma once

#include <iostream>
typedef float ProductNumber;

class Product
{
public:
	Product();
	~Product() = default;
private:
	ProductNumber   category;
	ProductNumber   quantity;
	ProductNumber   price;
	unsigned char  id[13];
};

