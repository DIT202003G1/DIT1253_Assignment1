/*
	Project Details
	
	Subject: Programming Concept
	Subject Details: DIT1253_202003_1
	
	Assignment Group: Individual
	Group Member: Zhao Xuanao (20023404)
	
	Begain Date: (WED) 13 MAY 2020
	
	Lecturer:
	Ms. Kumatha
	kumatham@sunway.edu.my
	016-5636585
*/

#include <iostream>	//standart console io
#include <sstream>	//stringstream
#include <fstream>	//file io
#include <string>	//using string
#include <cctype>	//using tolower for charactor types
#include <map>		//using dictionary(maps)

using namespace std;


//inits
	int VERSION = 2; //version of this program
	string COPYRIGHT = "CikKoo Comm Ltd"; //not an actual copyright
	ofstream logFile("log"); //open an log file to put logs
	int RETURN_CODE; //assign to this variable to define return code, 0 for normal exit, 1 for error.

	//user inputs
	char planTypeSelected; //stores the plantype that user inputted
	int planSpeedSelected; //stores the planspeed as integer from user. example: 30 for 30Mbps


//log function (suppose to be in Logging.cpp). errtype E for Error, S for standard log, W for Warning
	void logToFile(string message, char errtype) {logFile << "[" << errtype << "]" << message << endl;}


//Error (suppose to be in Error.cpp)
	class Error{
	public:
		int code;
		string position, description;
		//constructor
		Error(int argCode,string argPosition,string argDescription){
			code = argCode;	//Error Code for faster tracing.
			position = argPosition;	//Error Position, which function did it happened.
			description = argDescription; //Error Description, description of error.
		}
		//returns log message for logging
		string getLogMsg(){
			stringstream logMessage;
			logMessage << "Error occured at: " << position << ", ErrCode: " << code << ", Description: " << description;
			return logMessage.str();}
	};

//Plan Class, Each store information about different Plans (suppose to be in Plans.cpp)
	class Plan{
	public:
		int speed,price;
		string vc,quota;
		Plan(int argSpeed,int argPrice,string argVC,string argQuota){
			speed = argSpeed;
			price = argPrice;
			vc = argVC;
			quota = argQuota;
		}
	};
	//bisnuess plans in a dict with speed as the key and Plan class as value
	map<int,Plan> bisnuessPlans = {
		{100,Plan(100,129,"Free for CikKoo Line","500Mb")},
		{300,Plan(300,189,"Free","Unlimited")},
		{500,Plan(500,259,"Free","Unlimited")}
	};
	//home plans in a dict with speed as the key and Plan class as value
	map<int,Plan> homePlans = {
		{30,Plan(30,89,"Free for CikKoo Line","200Mb")},
		{100,Plan(100,119,"Free","Unlimited")},
		{300,Plan(300,179,"Free","Unlimited")}
	};


//Intercace, Functions that user will use directly (suppose in Interface.cpp)
	namespace Interface {
		//Show Company Name, Copyright Info, Version etc.
		void greetings(){
			logToFile("Begain: Interface::greetings()",'S');
			cout<<"   _____ _ _    _  __              _____                          \n  / ____(_) |  | |/ /             / ____|                         \n | |     _| | _| ' / ___   ___   | |     ___  _ __ ___  _ __ ___  \n | |    | | |/ /  < / _ \\ / _ \\  | |    / _ \\| '_ ` _ \\| '_ ` _ \\ \n | |____| |   <| . \\ (_) | (_) | | |___| (_) | | | | | | | | | | |\n  \\_____|_|_|\\_\\_|\\_\\___/ \\___/   \\_____\\___/|_| |_| |_|_| |_| |_|"<<endl;
			cout<<"Copyright (c) "<<COPYRIGHT<<", All Rights Reserved."<<endl;
			cout<<"Thanks for using CikKoo Comm Internet Plan Auto Selector Ver "<<VERSION<<" !"<<endl;
			logToFile("End: Interface::greetings()",'S');
			return;
		}
	}


//main
int main(){
	logFile<<"# S for standard log, E for Error, W for Warning\n\n";
	try{
		logToFile("Initialized.",'S');
		Interface::greetings();
		RETURN_CODE = 0;
	}catch(Error e){
		logToFile(e.getLogMsg(),'E');
		RETURN_CODE = 1;
	}
	stringstream returnMessage;returnMessage << "Program exitted with code with "<<RETURN_CODE;
	logToFile(returnMessage.str(),'S');
	return RETURN_CODE;
}