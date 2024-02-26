#include <bits/stdc++.h>
using namespace std;



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        
                deque<long long int>dq;
                vector<long long>ans;
            
            for(int i=0;i<K;i++){
                    if(A[i]<0){
                        dq.push_back(i);
                    }
                }    
                
                if(dq.size() > 0){
                    ans.push_back(A[dq.front()]);    
                }
                else{
                    ans.push_back(0);
                }
                
                
                for(int i=K; i<N; i++){
                        
                    if(!dq.empty() && (i - dq.front()>=K) ){
                        dq.pop_front(); 
                    }
                    
                    if(A[i]<0){
                        dq.push_back(i);
                    }
                    
                    if(dq.size() > 0){
                        ans.push_back(A[dq.front()]);
                    }else{
                        ans.push_back(0);
                    }
                }

                    return ans;
                                                 
 }


 int main()
 {
    vector<long long>ans;
    long long int A[] = {-2, 56, -3, 6 , -8, 5};
    long long int K=2, N = sizeof(A)/4;


    ans = printFirstNegativeInteger(A,N, K);

    cout<<"First Negative Elements are ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 }