// comparator function for the priority queue
class CompareFunc
{
public:
    bool operator() ( pair<int,int> n1, pair<int,int> n2 ) {
        return n1.second < n2.second;
    }
};

class Solution {
public:
  
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // frequency hash (o(n)-ish)
        // heap with tuples (log(n)-ish)
        
        std::vector<int> answer; 
        priority_queue<pair<int,int>, vector<pair<int,int>>, CompareFunc> maxHeap;
        
        std::unordered_map<int,int> hash; 
        
        for (auto element : nums) {
            hash[element]++;
        }
        
        // tuples into a heap
        for (auto element : hash) {
            // element.first()
            maxHeap.push(std::make_pair(element.first, element.second)); 
        }
        
        for (int i = 0; i < k; ++i) {
            answer.push_back(maxHeap.top().first); 
            maxHeap.pop();   
        }
           
        return answer; 
    }
};