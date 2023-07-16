bool isPossible(int boards[],int k,int mid){
    int paintersCount=1,sumLength=0;
    for(int i=0;i<sizeof(boards)/4;i++){
        if(boards[i]+sumLength<=mid){
            sumLength+=boards[i];
        }else{
            paintersCount++;
            if(paintersCount>k || boards[i]>mid){
                return false;
            }
            sumLength=boards[i];
        }
     
    }
    return true;
}


int findLargestMinDistance(int boards[], int k)
{
    int s=0,ans=-1,sum=0;
    for(int i=0;i<sizeof(boards)/4;i++){
          sum+=boards[i];
    }
    int e=sum,mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(boards,k,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int boards[5]={}
}