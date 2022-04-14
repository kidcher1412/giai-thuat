
// C program to generate random numbers
#include <bits/stdc++.h>
#include <stdlib.h>
#include<time.h>
 using namespace std;
 
// Driver program
int main(void)
{
    // This program will create different sequence of
    // random numbers on every program run
 
    // Use current time as seed for random generator
    srand(time(0));
    int s=0,temp;
 	
    for(int i = 0; i<3; i++){
    	temp= rand()%6+1;
    	s=s+temp;
    	cout<<" "<<temp;
	}
	cout<<" "<<endl;
    if(s%2==0) cout<<"chan ra TAI ~~~";
    else cout<<"le ra xiu ~~~";
 
    return 0;
}
