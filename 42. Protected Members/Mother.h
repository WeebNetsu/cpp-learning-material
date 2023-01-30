#ifndef MOTHER_H
#define MOTHER_H 

class Mother{
public: // anything here can be accessed from anywhere
	int pub;

private: //this class, base classes and friends has access to these variables
	//any class inheriting from this class would NOT receive these variables
	//only this class has access to these variables
	int priv;

protected: 
	int protecc;

};

#endif