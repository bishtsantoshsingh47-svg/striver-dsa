
// in brute force just insert the elements of both arays inside the set

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedarrays(vector<int>a ,vector<int>b){
   int  n1=a.size();
   int  n2=b.size();
   int j=0;
   int i=0;
   vector<int>unionarr;
   while(i<n1 && j<n2){
    if(a[i]<=b[j]){
    if(unionarr.size()==0 || unionarr.back()!=a[i]){
        unionarr.push_back(a[i]);
    }
    i++;
   }

   else{
    if(unionarr.size()==0 ||unionarr.back()!=b[j]){
       unionarr.push_back(b[j]);

    }
    j++;
}

}

while(j<n2){
    if(unionarr.size()==0 || unionarr.back()!=b[j]){
        unionarr.push_back(b[j]);
    }
}

while(i<n2){
    if(unionarr.size()==0 || unionarr.back()!=a[i]){
     unionarr.push_back(a[i]);
    }
    i++;
}


return unionarr;
}


// time complexity 
// o(n1+n2)
// space complexity
// o(n1+n2)
// returning the answer 
