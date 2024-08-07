#include<bits/stdc++.h>
using namespace std;

string printString(string s){
	string a=("Hii "+s);
	return a;
}

int main(){
	string s;
	cout<<"Enter the string :-";
	cin>>s;
	//using function
	string str=printString(s);
	cout<<str;
}
