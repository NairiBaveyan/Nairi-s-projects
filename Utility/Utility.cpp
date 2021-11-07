#include <iostream>
#include "Utility.h"

using std::cout;
using std::endl;

int main()
{
	
	cout<<"false is Boolean "<<Utility::isBoolean("false")<<" 45.2 is Integer "<<Utility::isInteger("45.2")<<endl;
	cout<<" 154 is Float " <<Utility::isFloat("154.25")<<endl ;
	cout<<" email is "<<Utility::isEmail("nairikham@gmail.com")<<endl;
	cout<<"Url is "<<Utility::isURL("htps:www.youtube.com/watch?v=fYh7lp8w0S4&t=521s")<<endl;
}
