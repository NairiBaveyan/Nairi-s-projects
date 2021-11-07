#ifndef PERSON_H_
#define PERSON_H_


/*
void Person6Person(Person* ptr);
void Person6PersonParam(Person* ptr,std::string name,std::string lastname,std::string email,unsigned short age);
void ~Person6Person(Person*);
void Person6PersonCopy(Person* this_ptr,Person* ptr);
std::iostream operator = (Person* this_ptr,Person* ptr);
*/

struct Person
{

		std::string m_name;
		std::string m_lastname;
		std::string m_email;
		unsigned short m_age{};

};


void Person6Person(Person* ptr)
{
	(*ptr).m_age = 0;
}

void Person6PersonParam(Person* ptr,std::string name,std::string lastname,std::string email,unsigned short age)
{
	(*ptr).m_age = age;
	(*ptr).m_name = name;
	(*ptr).m_lastname = lastname;
	(*ptr).m_email = email;
}

void PersonDtorPerson(Person*)
{
}

void Person6PersonCopy(Person* this_ptr,Person* ptr)
{
	(*this_ptr).m_age = (*ptr).m_age;
	(*this_ptr).m_name = (*ptr).m_name;
	(*this_ptr).m_lastname = (*ptr).m_lastname;
	(*this_ptr).m_email = (*ptr).m_email;
}

/*
void operator = (Person* this_ptr,Person* ptr)
{
	this_ptr = ptr;
}
*/

#endif 	//PERSON_H_
