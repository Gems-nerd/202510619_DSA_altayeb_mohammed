#include <iostream>
#include <string>

using namespace std;

int main(){

string a[]= {"0792834656","0792829052","0792834656","0792829052"};

int size = 4;

string searchnumber;
cout << "enter your number to search: " ;
cin >> searchnumber;


for (int i=0 ; i<size ; i++){
if (a[i] == searchnumber){ 
cout << "your number is found at position " <<i + 1 << endl;
break;
}


}

return 0;

}