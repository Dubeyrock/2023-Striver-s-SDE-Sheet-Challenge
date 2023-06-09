Intuition
Using the for loops and just iterating through it..

Approach
just observe the pattern and see for every row the leading and ending 1's are in commmon..

Complexity
Time complexity:
O(n**2)

Space complexity:
O(n)

  cpp code 
   class Solution {
  public:
      vector<vector<int>> generate(int numRows) 
        { 
          vector<vector<int>>ans;
         vector<int>temp ={1};
         ans.emplace_back(temp);
            for(int i =1;i<numRows;i++)
             {
               vector<int>v={1};
             int res =1;
               for(int j =0;j<i;j++)
               {
                   res *=(i-j);
                 res/=(j+1);
                 v.push_back(res);
             }
             ans.emplace_back(v);
           }
        return ans;
    }
 };


vector<vector<long long int>> printPascal(int n) 

{

  vector<vector<long long int>> r(n);

  for(int i = 0 ; i < n ; i++){

    r[i].resize(i+1);

    r[i][0] = r[i][i] =1 ;

    for(int j = 1 ; j < i ; j++){

      r[i][j] = r[i-1][j-1]+ r[i-1][j];

    }

  }

  return r ;

}
Code
class Solution:
    def generate(self, n: int) -> List[List[int]]:
        dp=[]
        for i in range(1,n+1):
            dp.append([0]*i)
        for i in range(0,n):
            for j in range(0,i+1):
                if(j==0 or j==i):
                    #For leading and trailing of the row the 1 should be appended....
                    dp[i][j]=1
                else:
                    #The previous values both are added together
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j]
        return dp
        
        cpp
