/*

Scrivi una funzione che prenda in input un array di interi e
la sua lunghezza e restituisca l'elemento più grande
dell'array.

*/


#include<iostream>

using namespace std;

int max(int arr[],int len){
    int result = arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>result){
            result = arr[i];
        }
    return result;
}
}

int main()
{
    int arr[] = {5,8,2,7,1}
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<< "L'elemento piu' grande del array: ";

    return 0;
}

