class Solution {
public:
    int kthGrammar(int n, int k) {
        // if(n==1){
        //     return 0;
        // }
        // int parent = kthGrammar(n-1, (k+1)/2);
        // if(k %2 == 0){
        //     return parent == 1? 0: 1;
        // }
        // else{
        //     return parent;
        // }

        //Binary Search
        int l=1, r=pow(2,n-1);
        int ans=0;
        while (l<r) 
        {
            int mid=(l+r)/2;
            if (k<=mid) r=mid;
            else 
            {
                ans=1-ans;
                l=mid+1;
            }
        }
        return ans;
    }
};