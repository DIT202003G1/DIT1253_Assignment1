/*
	Project Details
	
	Subject: Programming Concept
	Subject Details: DIT1253_202003_1
	
	Assignment Group: Group ?
	Group Members:
	 - Zhao Xuanao (20023404)
	 - Hee Kar Yan ()
	 - Maisaa Ahmed ()
	
	Begain Date: (WED) 13 MAY 2020
	
	Lecturer:
	Ms. Kumatha
	kumatham@sunway.edu.my
	016-5636585
*/

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

//SOFTWARE INFORMATION
namespace info{
	int version = 3;
	string copyright = "(c) 2020 CikKoo Comm Ltd, All rights reserved.";
}

//UTILS FUNCTIONS
namespace utils{
	//Error Class
	class Error{
	public:
		string description, position;
		Error(string argDescription, string argPosition)
	};
}

//PREDEFINES
namespace predefined{
	
}

//PREDEFINED PLANS
namespace plans{
	
}

//IO INTERFACE
namespace interface{

}

//main
int main(){
	int returnVal;
	try{
		returnVal = 0;
	}catch(utils::Error e){
		cout<<"ATTENTION: ==================================="<<endl;
		cout<<"\tAn Error has occured!"<<endl;
		cout<<"\tPlease contect a Technical Support"<<endl;
		cout<<"\tand provide them the following information"<<endl;
		cout<<"\t\tError description: "<<e.description<<endl;
		cout<<"\t\tError position: "<<e.position<<endl;
		returnVal = 1;
	}
	return returnVal;
}