#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars) {

    int i=0;
    vector<char>temp;
    int ansIndex=0;
    int n=chars.size();

    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ansIndex++]=chars[i];
         int count=j-i;
         if(count>1){
             string cnt=to_string(count);
             for(char ch:cnt){
                 chars[ansIndex++]=ch;
            }
         }   
            i=j;

    }
        return ansIndex; 
}

void printVector(vector<char>str, int n){
    for(int i=0;i<n;i++){
        cout<<str[i] <<" ";
    }
}

int main()
{
    vector<char>s{'a','a','a','b','b','b'};
    int n=compress(s);
    cout<<"the length of compressed array is : ";
    cout<<"Then length of the compressed array is : "<<n;
    cout<<"char array after compression"<<endl;
    printVector(s,n);

return 0;
}

