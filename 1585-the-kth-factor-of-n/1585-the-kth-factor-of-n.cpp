class Solution {
public:
    int kthFactor(int n, int k) {
        int x=0;
        for(int i=1;i<(n/2)+1;i++){
            if(n%i==0){
                x++;
                if(x==k){
                    return i;
                }
            }
        }
        if(x==k-1){    // let say n=12 and k=6 the loop has checked all the no upto n/2 and didn’t find the 6th factor yet
            return n;   // so return the no. itself as it is the onlyfactor left
        }
        return -1;
    }
};