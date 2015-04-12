#include "basic.h"
typedef vector<int> vi;
void dfs(unordered_map<int,int> &m, vi &path, vector<vi> &result, int size, int target){
    if(size == target){
        result.push_back(path);
        return;
    }
    for(auto &each:m){
        int tmp;
        if(each.second == 0) continue;
        path.push_back(each.first);
        each.second--;
        dfs(m,path,result,size+1,target);
        each.second++;
        path.pop_back();
    }
}

vector<vector<int>> permuteUnique(vector<int> &num) {
    vi path;
    vector<vi> result;
    if(num.empty()) return result;
    unordered_map<int,int> m;
    for(int each :num){
        if(m.find(each) != m.end())
            m[each]++;
        else
            m.insert({each,1});
    }
    dfs(m,path,result,0,num.size());
    return result;
}

int main(){
    int x[] = {1};
    int l = sizeof(x)/sizeof(x[0]);
    vi num = getVector(x,l);
    print(num);
    vector<vi> result = permuteUnique(num);
    print(result);
}
