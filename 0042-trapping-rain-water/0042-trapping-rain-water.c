int trap(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;

    int leftmax=height[left];
    int rightmax=height[right];
    int water=0;

    while(left<right){
        if(leftmax<rightmax){
            left++;

            if(height[left]>leftmax){
                leftmax=height[left];
            }
            else{
                water+=leftmax-height[left];
            }

        }
        else{
            right--;
            if(height[right]>rightmax){
                rightmax=height[right];
            }
            else{
                water+=rightmax-height[right];
            }
        }
    }
    return water;
    
}