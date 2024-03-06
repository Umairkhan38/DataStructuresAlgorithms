#include<bits/stdc++.h>
using namespace std;


string FirstNonRepeating(string A){
        
        unordered_map<char,int>count;
        string ans="";
        queue<int>q;
        
        for(int i=0; i <A.length(); i++){
                    
            char ch = A[i];
            
            count[ch]++;
            
            q.push(ch);
            
            while(!q.empty()){
                if(count[q.front()] > 1)
                {
                    q.pop();
                }else
                {
                    ans.push_back(q.front());
                    break;
                }
                
            }
            if(q.empty()){
                 ans.push_back('#');
            }
           
        }
        return ans;
	
    }



int main(){
    string str = "aabc";
    string ans = FirstNonRepeating(str);
    cout<<"The First Non Repeating characters in a stream are "<<ans<<endl;

	return 0;
}
