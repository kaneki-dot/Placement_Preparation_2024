int count=1;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int end_time=v[0].first;
        for(int i=1;i<n;i++){
            if(v[i].second>end_time){
                end_time=v[i].first;
                count++;
            }
        }
        return count;
