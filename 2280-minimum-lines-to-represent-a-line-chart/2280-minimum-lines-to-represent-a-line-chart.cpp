class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
         sort(stockPrices.begin(),stockPrices.end());  
        
        if(stockPrices.size()<=1)return 0;
        int lines = 1;
        for(int i =1;i<stockPrices.size()-1;i++){
           
            long double x1 = stockPrices[i-1][0];
            long double y1 = stockPrices[i-1][1];
            long double x2 = stockPrices[i][0];
            long double y2 = stockPrices[i][1];
            long double x3 = stockPrices[i+1][0];  
            long double y3 = stockPrices[i+1][1];
           long double a = (long double)(y2-y1)/(x2-x1); 
           long  double b = (long double)(y3-y2)/(x3-x2); 
            
            if(a!=b){          
                lines ++;
            }
            
        }
        return lines;
    }
};