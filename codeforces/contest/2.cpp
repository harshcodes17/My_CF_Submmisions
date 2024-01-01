vector<vector<int>>v(26);
        for(int i=0;i<s.size();i++){
            int j=i;
            while(j<s.size() and s[j]==s[i]){
                v[s[i]-'a'].push_back(j);
            }
           
        }
        for(auto x:v){
            for(auto y:x){
                cout<<y<<" ";
            }
        }