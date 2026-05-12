# include <iostream>



 using namespace std;



int main(){

   int array [] = {21,4,56,217,53,87,5,12,45};

   int n = 9;

    for (int i = 0; i < n-1; i++){

        for (int j = 0; j < n-1;j++){

            if (array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            }

        }

    }


    cout << "Sorted array: " ;

    for (int i = 0; i < n; i++){

        cout << array[i] << " " ;
  
    }
  
  
    return 0;


}