// 02.10.2020
#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Please enter size"<<endl;
	cin>>size;
	cout<<"size"<<endl;
	for(int i=1;i<=size;i++){
		cout<<"	"<<i<<"	";
}
	cout<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	for(int i=1;i<=size;i++){
		for(int k=1;k<size+1;k++)
		 cout<<"	"<<i*k<<"	";
	  cout<<endl;
	}
	
}
