class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int size =numbers.size();
        int indx1,num1,num2,indx2,j,flag;
        flag=0;
        
        for(int i=0;i<size;i++)
        {
            num1=numbers[i];
            num2=target-num1;
            j=i+1;
            while(j<size)
            {
               if(num2==numbers[j])
               {
                res.push_back(i+1);
                res.push_back(j+1);
                flag=1;
               }
               j++;
               if (flag==1) break;
            }
            if (flag==1) break;

        }
        return res;
    }
};
