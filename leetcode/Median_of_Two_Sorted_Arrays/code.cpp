class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x, y;
        x = nums1.size();
        y = nums2.size();
        int so;
        so = x+y;
        int aux = (so)/2;
        int *s = (int*)malloc(sizeof(int)*(so));
        for(int i = 0; i < so; i++){
            s[i] = 0;
        }
        int a=0,b=0;

        int i = 0;
        while(i < so){
            if(a < x && b < y){
                if(nums1[a]<nums2[b]){
                    s[i] = nums1[a++];
                }else{
                    s[i] = nums2[b++];
                }
            }else if(a < x){
                int q = so - y - a;
                for(;a<q;){
                    s[i++] = nums1[a++];
                }
            }else{
                int q = so - b - x;
                for(;b<q;){
                    s[i++] = nums2[b++];
                }
            }
            i++;
        }
        if((x+y)%2 == 0){
            return (s[aux] + s[aux-1])/2.0;
        }else{
            return s[aux];
        }
    }
};
