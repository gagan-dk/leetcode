double findMaxAverage(int* nums, int numsSize, int k) {
    int sum=0;

    for(int i=0;i<k;i++){
        sum+=nums[i];
        
    }

    int maxsum=sum;

    for(int j=k;j<numsSize;j++){
        sum+=nums[j];
        sum-=nums[j-k];
    
    if(sum>maxsum){
        maxsum=sum;

    }
    }
    
    return (double)maxsum/k;
}