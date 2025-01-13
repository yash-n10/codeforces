#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int result[x];
    int a,b,n,resultI,validMovesA,validMovesB=0;
    for(int i=0;i<x;i++){
        cin >> n >> a >> b;
        validMovesA=2;
        validMovesB=2;
        while(validMovesA!=0 && validMovesB!=0){
            if(a==1 or a==n){
                validMovesA--;
            }
            if(a + 1==b or a - 1==b){
                validMovesA--;
            }
            
            if(validMovesA<=0){
                result[i]=0;
                break;
            }
            else{
                    //MOVE A
                if(a==1){
                    a=a + 1; 
                }
                else if(a==n){
                    a= a - 1;
                }
                else{
                    if(b>a){
                        if(a + 1!=b){
                            a++;    
                        }
                        else{
                            a--;
                        }
                    }
                    else{
                        if(a - 1!=b){
                            a--;    
                        }
                        else{
                            a++;
                        }
                        
                    }
                }    
            }
            if(b==1 or b==n){
                validMovesB--;
            }
            if(b + 1==a or b - 1==a){
                validMovesB--;
            }
            if(validMovesB<=0){
                result[i]=1;
                break;
            }
            else{
                 //MOVE B
                if(b==1){
                    b=b + 1; 
                }
                else if(b==n){
                    b = b - 1;
                }
                else{
                    if(a>b){
                        if(b + 1!=a){
                            b++;    
                        }
                        else{
                            b--;
                        }
                    }
                    else{
                        if(b - 1!=a){
                            b--;    
                        }
                        else{
                            b++;
                        }
                        
                    }
                }
            }
        }
    }
    for(int i=0;i<x;i++){
        if(result[i]==1){
            cout << "YES\n";
        }   
        else{
            cout << "NO\n";            
        }
    }
    return 0;
}