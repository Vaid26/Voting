#include<iostream>
using namespace std;

int main()
{
    int age=0,num=0,Name;
    cout<<"Enter your age";
    cin>>age;

    if(age>=25)
    {
        cout<<"\nYou can Vote";
        cout<<"\n\nEnter the state you want to vote for:\n1]Maharashtra \n2]Rajashthan \n3]Punjab \n4]Karnatak \n5]Gujarat\n";
        cin>>num;
        switch(num)
        {
            case 1:
                {
                cout<<"\nEnter the party you want to vote for:\n1]BJP \n2]Congress \n3]BSP \n4]AAP \n5]Others\n";
                cin>>Name;
                cout<<Name;
            }
            break;
            case 2:
                {
                cout<<"\nEnter the party you want to vote for:\n1]BJP \n2]Congress \n3]BSP \n4]AAP \n5]Others\n";
                cin>>Name;
                cout<<Name;
                }
            break;
            case 3:
                {
                cout<<"\nEnter the party you want to vote for:\n1]BJP \n2]Congress \n3]BSP \n4]AAP \n5]Others\n";
                cin>>Name;
                cout<<Name;
                }
            break;
            case 4:
                {
                cout<<"\nEnter the party you want to vote for:\n1]BJP \n2]Congress \n3]BSP \n4]AAP \n5]Others\n";
                cin>>Name;
                cout<<Name;
                }
            break;
            case 5:
                {
                cout<<"\nEnter the party you want to vote for:\n1]BJP \n2]Congress \n3]BSP \n4]AAP \n5]Others\n";
                cin>>Name;
                cout<<Name;
                }
            break;
            default:
            {cout<<"invalid choice";}
        }
        cout<<"Your vote is recorded";
    }
    else{
        cout<<"You are not eligible to age";
    }
    return 0;
}
