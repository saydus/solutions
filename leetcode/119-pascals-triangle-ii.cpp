class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer; 

        if (numRows == 1) {
            vector<int> first; 
            first.push_back(1); 
            answer.push_back(first);
            return answer;
        } else if (numRows == 2) {
            vector<int> first; 
            first.push_back(1); 
            answer.push_back(first);
            
            vector<int> two; 
            two.push_back(1); 
            two.push_back(1); 
            
            answer.push_back(two); 
            return answer;
        } else {
            // need to compute 
            vector<int> first; 
            first.push_back(1); 
            answer.push_back(first);
            
            vector<int> two; 
            two.push_back(1); 
            two.push_back(1); 
            
            answer.push_back(two); 
            
            for (int i = 2; i < numRows; ++i) {
                vector<int> temp; 
                temp.push_back(1); 
                
                vector<int> prevLayer = answer[i-1];
                
                // push in the addition of pairs 
                for (int j = 1; j < prevLayer.size(); ++j) {
                    int sum = answer[i-1][j] + answer[i - 1][j - 1]; 
                    // std::cout << sum << std::endl;
                    temp.push_back(sum);
                }
                
                temp.push_back(1); 
                
                answer.push_back(temp); 
            }
            
        }
            
        return answer; 
    }
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> answer; 
        answer = generate(rowIndex + 1); 
        return answer.at(rowIndex);
    }
};