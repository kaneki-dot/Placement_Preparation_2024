class Solution {
public:
   vector<Interval> merge(vector<Interval>& ins) {
    if (ins.empty()) return vector<Interval>{};
    vector<Interval> res;
    sort(ins.begin(), ins.end(), [](Interval a, Interval b){return a.start < b.start;});
    res.push_back(ins[0]);
    for (int i = 1; i < ins.size(); i++) {
        if (res.back().end < ins[i].start) res.push_back(ins[i]);
        else
            res.back().end = max(res.back().end, ins[i].end);
    }
    return res;
}
};
