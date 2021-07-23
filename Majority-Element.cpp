#include<bits/stdc++.h>
using namespace std;

        //  *************** USING Moore’s Voting Algorithm   ***********
        
//function to find the max repeating element in array
int maxValue(int a[], int size){
    int maxIndex=0;
    int count=1;
    for(int i=1;i<size;i++){
        if(a[maxIndex]==a[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            maxIndex=i;
            count=1;
        }
    }
    return a[maxIndex];
}

//main function 
int majorityElement(int a[], int size){
    int max=maxValue(a,size);
    int count=0;
    for(int i=0;i<size;i++){
        if(a[i]==max){
            count++;
        }
    }
    if(count>size/2){
        return max;
    }
    else{
        return -1;
    }
}