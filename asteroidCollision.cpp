class Solution {
public:
    vector<int> findans(vector<int> ast){
        vector<int> temp;
        int step = 0;
        for(int i=0;i<ast.size()-1;i++){
            if(ast[i]+ast[i+1]==0){
                step = 1;
                continue;
            }
            else if(ast[i]*ast[i+1]<0){
                step = 1;
                if(abs(ast[i])>abs(ast[i+1])){
                    if(temp.size()==0){
                        temp.push_back(ast[i]);
                    }
                    else if(ast[i]!=temp[temp.size()-1]){
                        temp.push_back(ast[i]);
                    }
                }
                else  if(abs(ast[i])<abs(ast[i+1])){
                    if(temp.size()==0){
                        temp.push_back(ast[i+1]);
                    }
                    else if(ast[i+1]!=temp[temp.size()-1]){
                        temp.push_back(ast[i+1]);
                    }
            }
        }
    }
    if(step == 1 ){
        return findans(temp);
    }
    else{
        return temp;
    }
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> final = findans(asteroids);
        return final;
    }
};