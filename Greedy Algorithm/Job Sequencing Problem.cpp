/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        priority_queue<pair<int,int>>pq;
        int total_job=0,max_profit=0;
        for(int i=0;i<n;i++)
        {
            pq.push(make_pair(arr[i].profit,arr[i].dead));
        }
        int t=0;
        for(int i=0;i<n;i++)
        {
            t=max(t,arr[i].dead);
        }
        vector<bool>visit(t+1,0);
        while(!pq.empty() && t)
        {
            int j=pq.top().second;
            while(j>=1 && visit[j])
                j--;
            if(j>=1 && t)
            {
                max_profit+=pq.top().first;
                total_job++;
                visit[j]=1;
                pq.pop();
                t--;
            }
            else
            {
                pq.pop();
            }
        }
        return {total_job,max_profit};
    } 
};
