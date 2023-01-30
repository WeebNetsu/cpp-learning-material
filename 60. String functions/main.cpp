#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	/* 
		Basic common functions:
		str.length() - gets length of string
		str.size() - get length of string
		str.append(str2) - appends to string. You can just use "str += str2" for the same result
		str.pop_back() - removes last character in string
		str.compare(str2) - compares 2 strings. returns 0 if strings are the same
	*/

	std::string myStr("Hello World");
	//this will return the substring "Hello" in myStr
	std::cout << myStr.substr(0, 5) << std::endl;

	std::string str1 = "Apples";
	std::string str2 = "Coconuts";
	std::cout << str1 << "\t\t" << str2 << std::endl;
	//the below code swaps the values of 2 strings
	str1.swap(str2);
	std::cout << str1 << "\t" << str2 << std::endl;

	std::string text("Hello, my name is Netsu, you should call me by my last name, Dagneel");
	//find finds the location of something within a string
	std::cout << text.find("my") << std::endl; //should return 7
	//rfind searches from back to front
	std::cout << text.rfind("my") << std::endl;			   //should return 47
	std::cout << text.find_first_of("aiueo") << std::endl; // once it finds any of the letters, it returns its position
	// note: if item not found in above code, you'll receive a MASSIVE number. That number is an unsigned long, so it is
	// equivelant to -1

	text.erase(47); // deletes everything from the string from index 47
	// text.erase(3, 1) - tells from where to start erasing and how many characters
	std::cout << text << std::endl;

	//replace(start_index, count, replacement);
	text.replace(18, 5, "Largo"); // replaces "Netsu" with "Largo" in string
	std::cout << text << std::endl;

	//insert(start_index, text_to_insert)
	text.insert(text.find("by") + 2, " my last name, Dagneel"); //inserts into the string (doesn't remove anything)
	std::cout << text << std::endl;

	return 0;
}