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

	This Project is available at https://github.com/DIT202003G1/DIT1253_Assignment1
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

//What the user will be seeing on screen! (if possible i wish this is in json)
namespace interface{
	string tableHeader = "  Plan type    Speed     Price(including 6\% SST)    Domestic Voice Call    Quota\n----------------------------------------------------------------------------------";
	string homePlans[3] = {
		"1 Home         30Mbps    RM94.34                    Free for Cikkoo Line   200Mb",
		"2 Home         100Mbps   RM126.14                   Free                   Unlimited",
		"3 Home         300Mbps   RM189.74                   Free                   Unlimited"
	};
	string bisnuessPlans[3] = {
		"1 Business     100Mbps   RM136.74                   Free for Cikkoo Line   500Mb",
		"2 Business     300Mbps   RM200.34                   Free                   Unlimited",
		"3 Business     500Mbps   RM274.54                   Free                   Unlimited"
	};
	string logo = "   _____ _ _    _  __              _____                          \n  / ____(_) |  | |/ /             / ____|                         \n | |     _| | _| ' / ___   ___   | |     ___  _ __ ___  _ __ ___  \n | |    | | |/ /  < / _ \\ / _ \\  | |    / _ \\| '_ ` _ \\| '_ ` _ \\ \n | |____| |   <| . \\ (_) | (_) | | |___| (_) | | | | | | | | | | |\n  \\_____|_|_|\\_\\_|\\_\\___/ \\___/   \\_____\\___/|_| |_| |_|_| |_| |_|\n";
	string greetings = "Welcome to CikKoo Comm Ltd. Our ultimate goal is to provide excellent service to customers with affordable price. Please follow the guide step by step so that we can suggest you with the best plan\n\n";
	char getPlanType(){
		char planTypeEntered;
		do{
			cout<<"Enter \'H\' for home plan or \'B\' for business plan (case sensitive!): ";
			cin>>planTypeEntered;
			if (planTypeEntered=='H' || planTypeEntered=='B')
			{
				cout<<"Selected "<<planTypeEntered<<endl<<endl;
				return planTypeEntered;
			}
			cout<<"Invalid plan type entered!\n\n";
		}while (true);
	}
	int getSpeedOption(char type){
		int speedOptionEntered;
		char orderConfirm;
		while (true) {
			cout<<interface::tableHeader<<endl;
			if (type == 'B') 
				for (string i:interface::bisnuessPlans) cout<<i<<endl;
			else if (type == 'H')
					for (string i:interface::homePlans) cout<<i<<endl;
			cout<<endl<<"Enter a number (1~3) to select a plan: ";
			cin>>speedOptionEntered;
			if (speedOptionEntered >= 1 && speedOptionEntered <= 3){
				while (true){
					cout<<"You have selected option "<<speedOptionEntered<<", do you confirm the order?(Y/N)";
					cin>>orderConfirm;
					if (orderConfirm == 'Y') return speedOptionEntered;
					else {cout<<"order canceled";return 0;}
				}
			}else cout<<"\nInvalid option number typed!\n\n";
		}
	}
}

//main
int main(){
	cout << interface::logo << endl;
	cout << constant::COPYRIGHT << ", You are using version " << constant::VERSION << endl;
	cout << endl << interface::greetings;
	typeOptions = interface::getPlanType();
	speedOptions = interface::getSpeedOption(typeOptions);
	if (speedOptions == 0) {
		cout<<"Thank-you for using this system! see you next time";
		cout<<"\n\nWe are very sorry for the inconvenience. We will continue improving our plans to suit your needs."<<endl;
	}else{
		cout<<"Please enter your full name: ";
        cin>>name;
        cout<<"Please enter your identification number: ";
        cin>>icNum;
        cout<<"Please enter your email address: ";
        cin>>email;
        cout<<"\n\nThank you for choosing CikKoo Comm Ltd! Your subscription is in process."<<endl;
	}
	return 0;
}