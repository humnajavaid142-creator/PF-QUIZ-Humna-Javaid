#include <iostream>
using namespace std;
int main()
{
    int number_of_clients;
    float price;
    int basicCut=0, styleCut=0;
    int totalrevenue=0;
    
    cout<<"Enter number of clients : ";
    cin>>number_of_clients;
    
    for (int i=1; i<=number_of_clients; i++)
    {
        cout<<"Enter haircut price : ";
        cin>>price;
        
        if (price<400)
        {
            cout << "Basic Cut" << endl;
                basicCut ++;
        }
        else
        {
            cout << "Styled Cut" << endl;
                styleCut ++;
        }
        
        totalrevenue += price;
    }
    
    cout << "Number   of  clients : " << number_of_clients << endl;
    cout << "Number of basic cut :  " << basicCut << endl;
    cout << "Number of styled cut : " << styleCut << endl;
    cout << "The total revenue generated is : "  << totalrevenue << endl;

    return 0;
}