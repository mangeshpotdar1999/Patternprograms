#include<iostream>

using namespace std;

int main(){
	int i,row,j;
	
	cout<<"Enter number of rows :";
	cin>>row;
	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
return 0;
}
