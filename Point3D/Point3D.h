#ifndef POINT3D_H_
#define POINT3D_H_

class Point3D
{
	public:
		Point3D();
		Point3D(double x,double y,double z);
		Point3D(const Point3D& other);
		Point3D& operator = (const Point3D& other);
		Point3D operator +(const Point3D& rhs);
		Point3D operator -(const Point3D& rhs);
		friend std::ostream& operator <<(std::iostream &out,const Point3D& point);
		friend std::istream& operator >>(std::iostream &in,const Point3D& point);

	public:
		void set_x(double x);
		void set_y(double y);
		void set_z(double z);
		void set_all(double x,double y,double z);
		double get_x()const;
		double get_y()const;
		double get_z()const;
		void show_all()const;

	
	private:
		
		double m_x;
		double m_y;
		double m_z;		
	
};





#endif //POINT3D_H_
