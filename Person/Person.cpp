#include <iostream>
#include "Person.h"


int main()
{
	Person pers;
	Person6PersonParam(&pers,"Nairi","Baveyan","nb@mail",27);
	std::cout<<pers.m_name<<std::endl;
}
