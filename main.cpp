#include <iostream>
using namespace std;

class MaximumValue{
    //member data
    int n1,n2,n3;
public:
    //member Function.
    void getMaximumValue(double n1, double n2, double n3){
        if (n1 > n2 && n1 > n3){
            cout<<"Your maximum value is "<<n1<<endl;
        }
        else if(n2 > n1 && n2 > n3){
            cout<<"Your maximum value is "<<n2<<endl;
        }
        else if(n3 >n1 && n3 > n2){
            cout<<"Your maximum value is "<<n3<<endl;
        }
        else if(n1 == n2 && n2 == n3){
            cout<<"You have inputed the same Value. Therefore Your maximum value is "<<n2<<endl;
        }
        else if(n1 == n2 && n1 > n3){
            cout<<"Your maximum value is "<<n2<<endl;
            
        }
        else if(n1 == n2 && n1 > n3){
            cout<<"Your maximum value is "<<n1<<endl;
        }
        else if (n2 == n3 && n2 > n1){
            cout<<"Your maximum value is "<<n2<<endl;
        }
        else if (n3 == n1 && n3 > n2){
            cout<<"Your maximum value is "<<n3<<endl;
        }
    }
    
};
int main(){
    
     double n1, n2, n3;
    cout<<"Input you first Value: ";
    cin>>n1;
    cout<<"Input your Second Value: ";
    cin>> n2;
    cout<<"Input your Third Value: ";
    cin>>n3;
  
    //calling class in the main.
    MaximumValue calcMaximum;
    calcMaximum.getMaximumValue(n1 , n2, n3);
    
}
