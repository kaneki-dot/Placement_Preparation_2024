//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp (Item a, Item b)
    {
        return ((double)a.value/(double)a.weight>(double)b.value/(double)b.weight);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,comp);
        int i=0;
        double ans=0;
        while(i<n and W>0)
        {
            if(W-arr[i].weight>0)
            {
                ans+=arr[i].value;
                W-=arr[i].weight;
            }
            else
            {
               ans+= W*((double)arr[i].value/(double)arr[i].weight);
               break;
            }
            i++;
        }
        return ans;
        
    }
        
};
