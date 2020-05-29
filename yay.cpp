#include<iostream>
using namespace std;

int main()
{
    cout<<"Welcome to CikKoo Comm Ltd. Our ultimate goal is to provide excellent service to customers with affordable price. Please follow the guide step by step so that we can suggest you with the best plan\n\n";
    string plan_type;
    do
    {
        cout<<"Enter \'H\' for home plan or \'B\' for business plan: ";
        cin>>plan_type;
        if (plan_type=="H" || plan_type=="h" || plan_type=="B" || plan_type=="b")
        {
            break;
        }
        cout<<"Invalid plan type entered!\n\n";
    }while (true);
    
    int speed;
    do
    {
        cout<<"Enter expected speed: ";
        cin>>speed;
        if (speed>0)
        {
            break;
        }
        cout<<"Invalid speed entered!\n\n";
    }while (true);
    
    cout<<"\nThe best plan to fit your requirements:\n";
    cout<<"Plan type\t\tSpeed\t\tPrice(including 6\% SST)\t\tDomestic Voice Call\t\t\tQuota\n";
    cout<<"-------------------------------------------------------------------------------------------------\n";
    
    if (plan_type=="H" || plan_type=="h")
    {
        if (speed<66)
        {
            cout<<"Home\t\t\t30Mbps\t\tRM94.34\t\t\t\t\t\tFree for Cikkoo Line\t\t200Mb";
        }
        else if (speed>65&&speed<201)
        {
            cout<<"Home\t\t\t100Mbps\t\tRM126.14\t\t\t\t\tFree\t\t\t\t\t\tUnlimited";
        }
        else
        {
            cout<<"Home\t\t\t300Mbps\t\tRM189.74\t\t\t\t\tFree\t\t\t\t\t\tUnlimited";
        }
    }
    
    else
    {
        if (speed<201)
        {
            cout<<"Business\t\t100Mbps\t\tRM136.74\t\t\t\t\tFree for Cikkoo Line\t\t500Mb";
        }
        else if (speed>200&&speed<401)
        {
            cout<<"Business\t\t300Mbps\t\tRM200.34\t\t\t\t\tFree\t\t\t\t\t\tUnlimited";
        }
        else
        {
            cout<<"Business\t\t500Mbps\t\tRM274.54\t\t\t\t\tFree\t\t\t\t\t\tUnlimited";
        }
    }
    
    string verify;
    do
    {
        cout<<"\n\nDo you want to subscribe to this plan? Enter \'Y\' if yes or enter \'N\' if no: ";
        cin>>verify;
        if (verify=="Y" || verify=="y" || verify=="N" || verify=="n")
        {
            break;
        }
        cout<<"Invalid reply entered!";
    }while (true);
    
    if (verify=="Y" || verify=="y")
    {
        cout<<"\n\nThank you for choosing CikKoo Comm Ltd! Your subscription is in process.";
    }
    
    else
    {
        cout<<"\n\nWe are very sorry for the inconvenience. We will continue improving our plans to suit your needs.";
    }
    
    return 0;
}