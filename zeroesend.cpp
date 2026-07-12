#include <bits/stdc++.h>
using namespace std;

vector<int> zeroesend(int n,vector<int>arr){

    vector<int>temp;
    // creating an array for storing the non zeroes values

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }

    }

    // putting zeroes to its place in from the starting
    
    int nz=temp.size();
        for(int i=0;i<nz;i++){
            arr[i]=temp[i];

        }
    

    // putting zeroes to its places

    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
   
    return arr;

}






// optimal solution is swapping the numbers using two pointer approach

vector<int> movezeroes(vector<int>arr,int n){

    // first writing the code so that i is not equal to j

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            i=j;
            break;

        }
    }

    // no non zero element
    if(j==-1){
        return arr;
    }

    // swapping of element using two pointer approach

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
return arr;
}
