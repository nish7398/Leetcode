class Solution {
public:
    double average(vector<int>& salary) {
        if(salary.size() <=2 ) 
            return 0;
        
        int min =salary[0] > salary[1] ? salary[0]:salary[1];
        int max=salary[0]>salary[1]?salary[1]:salary[0];
        
        double res=0;
         for(int i=0;i<salary.size();i++){
             if(min > salary[i]){
                 min=salary[i];
             }
             if(max<salary[i]){
                 max=salary[i];
             }
             
             res = res + salary[i];
         }
        res=res - min;
        res = res - max;
        
        return res/(salary.size()-2);
    }
};