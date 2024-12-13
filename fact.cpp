#include<iostream>

using namespace std;


int main( ){
    int t , n ;
    cin>> t;
    int w=1;
     while( w<=t ){
     cin>>n;
     w=w+1;
    
        if(n>4) {
        
                if((n%2)==1){
                    if((((n+1)/2)%2)==1){
                        for(int i=1 ; i<=n ; i=i+2){
                            cout<<i<<" ";
                            }  
                            for(int j=n-1 ; j>=2 ; j=j-2){
                            cout<<j<<" ";
                            }
                    }
                    if((((n+1)/2)%2)==0){
                        for(int i=1 ; i<=n ; i=i+2){
                            cout<<i<<" ";
                            }  
                            for(int j=2 ; j<=n ; j=j+2){
                            cout<<j<<" ";
                            }
                    }

                }


                if ((n%2)==0){
                    if(((n/2)%2)==1){
                        for(int i=1 ; i<=n ; i=i+2){
                            cout<<i<<" ";
                            }  
                            for(int j=((n+2)/2) ; j<=n ; j=j+2){
                            cout<<j<<" ";
                            }
                            for(int z=2 ; z<=(n-((n+2)/2)) ; z=z+2){
                            cout<<z<<" ";
                            }
                    }
                }
                    if((n%2)==0) {
                        if(((n/2)%2)==0){
                            for(int i=1 ; i<=n ; i=i+2){
                            cout<<i<<" ";
                            }  
                            for(int j=n ; j>=2 ; j=j-2){
                            cout<<j<<" ";
                            }
                        
                        }
                    }
        }
                                            if(n<5){
                                                cout<<"-1";
                                            
                                            }
    }


     
  return 0;
}