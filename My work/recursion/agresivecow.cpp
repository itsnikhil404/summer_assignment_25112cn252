class Solution {
public:

 bool ispossible(vector<int>& position, int m , int mid ){
    int postions = 1;
    int lastposition =position[0] ; 
    for (int i = 0 ; i<position.size();i++){
        if (position[i]-lastposition>=mid){
            postions++;
            if(postions==m){
                return true;
            }
            lastposition = position[i];
        }
    }
    return false;
 }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int s = 0,ans = -1 ;
        int e = position[position.size()-1];
        int mid = s+(e-s)/2 ;
        while(s<=e){
            if(ispossible(position,m,mid)){
                ans = mid;
                s = mid +1;
            }
            else {
                e = mid -1 ; 
            }
             mid = s+(e-s)/2 ;
        }
        return ans ;
    }
};