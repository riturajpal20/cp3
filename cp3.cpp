#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=a+b;
        int p=0;
        while(x!=0){
            int n=x%10;
          
            if((n==2)||(n==3)||(n==5)){
              p=p+5;
                
            }
             else if((n==0)||(n==6)||(n==9)){
                p=p+6;
             
                
            }
             else if(n==1){
                p=p+2;
              
                
            }
            else if(n==4){
                p=p+4;
              
                
            }
            else if(n==7){
                p=p+3;
               
                
            }
            else if(n==8){
                p=p+7;
            }
           
              x=x/10;
        }
        cout<<p<<endl;
    }
	// your code goes here
	return 0;
}
