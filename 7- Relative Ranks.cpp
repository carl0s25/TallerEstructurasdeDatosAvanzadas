#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> map;
        int n=score.size();
        vector<string> respuesta(score.size());
        for(int i=0;i<score.size();i++){
            map[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(i==0){
                respuesta[map[score[i]]]="Gold Medal";
            }else if(i==1){
                respuesta[map[score[i]]]="Silver Medal";
            }else if(i==2){
                respuesta[map[score[i]]]="Bronze Medal";
            }else{
                respuesta[map[score[i]]]=to_string(i+1);
            }
        }
        return respuesta;
    }
};