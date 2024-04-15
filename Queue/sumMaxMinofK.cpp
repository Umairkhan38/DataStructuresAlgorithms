#include<iostream>
#include<deque>
using namespace std;


int solve(int *arr, int n, int k){

    //two queue to keep track of max and min elements from the windows
    deque<int> maxi(k);
    deque<int> mini(k);


    //Addition of first k size window
    for(int i=0; i<k; i++) {

        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;

    //calculate ans for first window
    ans += arr[maxi.front()] + arr[mini.front()];


    //remaining windows ko process karlo
    for(int i=k; i<n; i++) {

        //next window
        //removal
        while(!maxi.empty() && i - maxi.front() >=k) {
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >=k) {
            mini.pop_front();
        }


        //addition
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back(); 

        maxi.push_back(i);
        mini.push_back(i);    

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}




int main()
{

int arr[6] = {2, 3, -5, 1, 6, 7};
    int k = 3;
    cout << solve(arr, 6, k) << endl;

    return 0;
}

     