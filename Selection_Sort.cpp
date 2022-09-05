#include <iostream>
using namespace std;

void selection_sort(int are[]){
    int min;
    for(int i = 0; i<4; i++){
        min = i;

        for(int j = i+1; j<5; j++){
            if(are[min] > are[j])
                min = j;
        }
        
        if(min != i){
            int temp = are[min];
            are[min] = are[i];
            are[i] = temp;

        }

    }

}

int main(){
    int myArray[5] = {99, 22, 11, 245, 88};
    int yourArray[5] = {11, 22, 33, 44, 55};

    selection_sort(myArray);
    for(int i = 0; i<5; i++){
        cout<<myArray[i]<<" ";
    }

    cout<<" \n"<<endl;
    
    selection_sort(yourArray);
    for(int i = 0; i<5; i++){
        cout<<yourArray[i]<<" ";
    }
    
    return 0;
}