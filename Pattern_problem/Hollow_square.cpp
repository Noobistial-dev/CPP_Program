#include <bits/stdc++.h>
using namespace std;

void printHollowSquare(int size) {
	int n=size;
    if (size < 2) {
        cout << "Size should be at least 2." <<endl;
        return;
    }
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            if (i == 1 || i == size || j == 1 || j == size ) {
                cout << "* ";
            } else if(i==(ceil(size/2)) || j==(ceil(size/2))){
            	cout<<"* ";
			}else if(i==(size-4) || j==(size-4)){
				cout<<"* ";
				
			}else {
                cout <<"  "; 
            }
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<< "Enter the size of the square: ";
    cin>> n;
    printHollowSquare(n);
    return 0;
}

