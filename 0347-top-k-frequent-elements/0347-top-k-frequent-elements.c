/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
   int freq[100001]={0};

   for(int i=0;i<numsSize;i++){
    freq[nums[i]+10000]++;
   }

   int*bucket[1000001]={0};
   int bucketSize[1000001]={0};

   for(int i=-10000;i<=10000;i++){
    int f=freq[i+10000];

    if(f>0){
        if(bucket[f]==NULL){
            bucket[f]=malloc(numsSize*sizeof(int));
        }
        bucket[f][bucketSize[f]]=i;
        bucketSize[f]++;

    }
   }

   int*result=malloc(k*sizeof(int));
   int count=0;

   for(int f=numsSize;f>=1&&count<k;f--){
    for(int j=0;j<bucketSize[f]&&count<k;j++){
        result[count]=bucket[f][j];
        count++;
    }
   }
   *returnSize=count;

   for(int f=1;f<numsSize;f++){
    free(bucket[f]);
   }
   return result;
}