class MedianFinder {
public:
priority_queue<int>pq1;   //maxheap
priority_queue<int,vector<int>,greater<int>>pq2; //minheap
    MedianFinder() {
    }
   
    void addNum(int num) {
     pq1.push(num);
     pq2.push(pq1.top());
     pq1.pop();
   
     if(pq1.size()<pq2.size())
     {
        pq1.push(pq2.top());
        pq2.pop();
     }

    }
   
    double findMedian() {
        if(pq1.size()==pq2.size())
       {
        return (pq1.top()+pq2.top())/2.0;
       }
       return pq1.top();
    }
};