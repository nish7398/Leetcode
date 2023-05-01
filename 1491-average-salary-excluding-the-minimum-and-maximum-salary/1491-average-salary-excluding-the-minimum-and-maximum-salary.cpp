// Approach:- 

// Sort the array of salaries in ascending order.
// Compute the sum of salaries by iterating over the sorted array.
// Compute the sum of salaries excluding the minimum and maximum values (i.e., the first and last elements of the sorted array).
// Divide the sum of salaries excluding the minimum and maximum values by the count of salaries minus two to obtain the average salary.
// Return the average salary.


class Solution {
public:
    double average(vector<int>& salary) {
        sort (salary.begin() , salary.end());
        
        double sum=0;
        
        for(int i=0;i<salary.size();i++){
            sum +=salary[i];
        }
        
        return (sum - salary[0] -salary[salary.size()-1]) / (salary.size() - 2);
        
    }
};