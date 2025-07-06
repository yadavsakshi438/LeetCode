class FindSumPairs {
public:
vector<int>num1;
vector<int>num2;
unordered_map<int,int>hash;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1=nums1;
        num2=nums2;
        for(int i=0;i<num2.size();i++)
        {
            hash[num2[i]]++;
        }
    }
    
    void add(int index, int val) {
        hash[num2[index]]--;
        if(hash[num2[index]]==0)
        {
            hash.erase(num2[index]);
        }
        num2[index]+=val;
        hash[num2[index]]++;
    }
    
    int count(int tot) {
        
        
        int count=0;
        for(int i=0;i<num1.size();i++)
        {
            if(hash.find(tot-num1[i])!=hash.end())
            {
                count+=hash[tot-num1[i]];
            }
        }
        return count;
    }
};
