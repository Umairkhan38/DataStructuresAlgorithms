#include <bits/stdc++.h> 
using namespace std;

class TwoStack {
    
public:
    int*arr;
    int top1;
    int top2;
    int size;
    

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1= -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
       if(top2-top1 > 1){
           top1++;
           arr[top1] = num;
       } 
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
         if(top2-top1 > 1){
           top2--;
           arr[top2] = num;
       } 
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 >= 0){
            int ans=arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
         if(top2<size){
            int ans=arr[top2];
             top2++; 
             return ans;
         }else{
             return -1;
         }   
    }

    bool isempty(){
        if(top1<0 && top2>=size){
            return true;
        }else{
            return false;
        }
    }
};



int main(){
   TwoStack ts(5); 
   ts.push1(52);
   ts.push1(10);
   ts.push1(11);
   ts.push2(10);
   
   while(!ts.isempty()){
       if(ts.top1 >=0){
         cout<<ts.arr[ts.top1]<<" ";
          cout<<"<- with top1 = "<<ts.top1<<endl;  
          ts.top1--;
       }   
       else if(ts.top2 <ts.size){
            cout<<ts.arr[ts.top2];
          cout<<"<- with top2 = "<<ts.top2<<endl;  
            ts.top2++;
       }      
   } 

}
