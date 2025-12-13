class Solution {
public:
bool isValidCode(string code){
    if(code.empty()) return false;
    for(int i=0; i<code.size(); i++){
        char c = code[i];
        if(!isalnum(c) && c != '_'){
            return false;
        }
    }
    return true;
}

bool isBusinessFound(string b, set<string>& business){
    if(business.find(b) != business.end()){
        return true;
    }
    return false;
}

static bool comp(pair<string,string>& a, pair<string,string>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string, string>> order;
        set<string> businessType = {"electronics", "grocery", "pharmacy", "restaurant"};

        for(int i=0; i<code.size(); i++){
            string c = code[i];
            string b = businessLine[i];
            bool businessfound = isBusinessFound(b, businessType);
            if(isValidCode(c) && businessfound && isActive[i]){
                order.push_back({b,c});  
            }
            
        }
        sort(order.begin(), order.end(), comp);

        vector<string> ans;
        for(auto &s : order){
            ans.push_back(s.second);
        }
        return ans;
    }
};