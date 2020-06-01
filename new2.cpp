/*
	Project Details
	
	Subject: Programming Concept
	Subject Details: DIT1253_202003_1
	
	Assignment Group: Group ?
	Group Members:
	 - Zhao Xuanao (20023404)
	 - Hee Kar Yan (20021994)
	 - Poo Yong Liang (20034864)
	 - Maisaa Ahmed Abdelrahman Ahmed (20028999)
	
	Begain Date: (WED) 13 MAY 2020
	
	Lecturer:
	Ms. Kumatha
	kumatham@sunway.edu.my
	016-5636585
*/

#include <iostream>
#include <string>

using namespace std;

//Global variables
char typeOptions; //TypeOptions Values: H for Home, B for Bisnuess
int speedOptions; //Option 1, 2, or 3.
string name,email,icNum;

//some sofrware information or other constant values
namespace constant{
	int VERSION = 3;
	string COPYRIGHT = "(c) 2020 CikKoo Comm Ltd, All rights reserved.";
}

//What the user will be seeing on screen!
namespace interface{
	string table = "Plan type\t\tSpeed\t\tPrice(including 6\% SST)\t\tDomestic Voice Call\t\t\tQuota\n";
	string bisnuessPlans[3] = {
		"",
		"",
		""
	};
	string homePlans[3] = {
		"",
		"",
		""
	};
	string logo = "   _____ _ _    _  __              _____                          \n  / ____(_) |  | |/ /             / ____|                         \n | |     _| | _| ' / ___   ___   | |     ___  _ __ ___  _ __ ___  \n | |    | | |/ /  < / _ \\ / _ \\  | |    / _ \\| '_ ` _ \\| '_ ` _ \\ \n | |____| |   <| . \\ (_) | (_) | | |___| (_) | | | | | | | | | | |\n  \\_____|_|_|\\_\\_|\\_\\___/ \\___/   \\_____\\___/|_| |_| |_|_| |_| |_|\n";
	string greetings = "Welcome to CikKoo Comm Ltd. Our ultimate goal is to provide excellent service to customers with affordable price. Please follow the guide step by step so that we can suggest you with the best plan\n\n";
	char getPlanType(){
		char planTypeEntered;
		do{
			cout<<"Enter \'H\' for home plan or \'B\' for business plan: ";
			cin>>planTypeEntered;
			if (planTypeEntered=='H' || planTypeEntered=='h' || planTypeEntered=='B' || planTypeEntered=='b')
			{
				return planTypeEntered;
			}
			cout<<"Invalid plan type entered!\n\n";
		}while (true);
	}
	int getSpeedOption(){
		for(int i;i<3;i++){

		}
	}
}

//main
int main(){
	cout<<interface::logo << endl;
	cout<<constant::COPYRIGHT << ", You are using version " << constant::VERSION << endl;
	cout << endl << interface::greetings;
	typeOptions = interface::getPlanType();
	speedOptions = interface::getSpeedOption();
	return 0;
}