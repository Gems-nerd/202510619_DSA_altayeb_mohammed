#include <iostream>

using namespace std;

int main() {

    int n=4;
    int numbar[n];
    for (int i =0 ; i<n ; i++){

        cout << "Enter numbar " << n-i << ": ";
        cin >> numbar[i];
        

    }

    cout << "the add numbar is: " << numbar[0]+numbar[1]+numbar[2]+numbar[3] << endl;

    return 0;



}
