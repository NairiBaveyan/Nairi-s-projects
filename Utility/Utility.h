#ifndef UTILITY_H_
#define UTILITY_H_
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


class Utility
{
	public:
		static bool isInteger(string word);
		static bool isFloat(string word);
		static bool isBoolean(string word);
		static bool isEmail(string word);
		static bool isURL(string word);
};


bool Utility::isBoolean(string word)
{
	if(word == "true"|| word == "false")
	{
		return true;
	}
	
	return false;
	
}

bool Utility::isFloat(string word)
{
	if(word[0] == '.' || word[word.size()-1] == '.')
	{
		return false;
	}
	int count{};
	for(int i{};i < word.size()-1;++i)
	{
		if(((word[i] >= 48) && (word[i] <= 57 )) || (word[i] == '.' && (i != 0 || i != word.size()-1)))
		{
			if(word[i] == '.' )
			{
				++ count;

			}

		}
		else
			return false;
	}
	if(count == 1)
	{
		return true; 
	}

	return false;
	
}


bool Utility::isInteger(string word)
{
	for(int i{};i < word.size();++i)
	{
		if (word[i] < 48 || word[i] > 57)
		{
			return false;
		}
	}
	return true;
}




bool Utility::isEmail(string word)
{
	char shnik{'@'};
	unsigned short shnik_count{};
	unsigned short dot_count{};
	for(int j{};j<word.size();++j)
	{
		if(word[j] == shnik)
		{
			++shnik_count;
		}
		else if(word[j] == '.')
		{
			++dot_count;
		}
	}
	
	if(shnik_count != 1 && dot_count != 1)
	{
		return false;
	}

	std::vector<char>first_vec;
	std::vector<char>second_vec;
	std::vector<char>third_vec;
	int i{};
	while(word[i] != '@')
	{
		first_vec.push_back(word[i]);
		++i;
	}

	++i;

	while(word[i] != '.')
	{
		second_vec.push_back(word[i]);
		++i;
	}

	++i;

	while(i < word.size())
	{
		if(word[i] >= 97 && word[i] <=122)
		{
			third_vec.push_back(word[i]);
			++i;
		}
		else
		{
			return false;
		}
	}

	if(5 > first_vec.size())   //first 5 simbols should be 
	{
		return false;
	}
	else if(2 > second_vec.size()) //count of second simbols can  minimum be 2
	{
		return false;
	}
	else if(2 > third_vec.size())
	{
		return false;
	}

	return true;     //all checks are good

}


bool Utility::isURL(string word)
{
	
	string url{"https://www."};
	char comp_str[12] = {};
	word.copy(comp_str,url.size());
	if((url == comp_str) && (word.size() > url.size()+2))
	{
		return true;
	}
	return false;
}


#endif 
