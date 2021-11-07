#include <iostream>
#include "Point3D.h"

//Constructors & operators

Point3D::Point3D()
{
	m_x = {};
	m_y = {};
	m_z = {};
}


Point3D::Point3D(double x,double y,double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

Point3D::Point3D(const Point3D& other)
{
	this->m_x = other.m_x;
	this->m_y = other.m_y;
	this->m_z = other.m_z;
}

Point3D& Point3D::operator = (const Point3D& rhs)
{
	this->m_x = rhs.m_x;
	this->m_y = rhs.m_y;
	this->m_z = rhs.m_z;
	return *this;
}

Point3D Point3D::operator + (const Point3D& rhs)
{
	Point3D result;
	result.m_x = this->m_x + rhs.m_x;
	result.m_y = this->m_y + rhs.m_y;
	result.m_z = this->m_z + rhs.m_z;
	return result;
}

Point3D Point3D::operator - (const Point3D& rhs)
{
	Point3D result;
	result.m_x = this->m_x - rhs.m_x;
        result.m_y = this->m_y - rhs.m_y;
        result.m_z = this->m_z - rhs.m_z;
	return result;
}


std::ostream& operator <<(std::ostream& out,const Point3D& point)
{
	out<<point.m_x<<point.m_y<<point.m_z;
	return out;
}


std::istream& operator >>(std::istream& in,Point3D& point) //non const
{
	in>>point.m_x>>point.m_y>>point.m_z;
	return in;
}


//Member Functions


void Point3D::set_x(double x)
{
	m_x = {x};
}

void Point3D::set_y(double y)
{
	m_y = {y};
}

void Point3D::set_z(double z)
{
	m_z = {z};
}

void Point3D::set_all(double x,double y,double z)  //is not effective but if you override this function it becomes effective
{
	set_x(x);
	set_y(y);
	set_z(z);
}

double Point3D::get_x()const
{
	return m_x;
}

double Point3D::get_y()const
{
	return m_y;
}

double Point3D::get_z()const
{
	return m_z;
}

void Point3D::show_all()const
{
	std::cout<<"x = "<<get_x()<<std::endl;
	std::cout<<"y = "<<get_y()<<std::endl;
	std::cout<<"z = "<<get_z()<<std::endl;
}











