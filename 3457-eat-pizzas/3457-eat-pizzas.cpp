class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();

        int days = n/4;
        int even = days/2;
        int odd = days - even;
        long long  sum = 0;
        

        sort(pizzas.begin(),pizzas.end());

        for(int i = n-1;i >= (n - odd);i--){
            sum += pizzas[i];
        }
        
        int i = n - odd - 1;

        while(even > 0){
            sum += pizzas[i-1];

            i-=2;
            even--;
        }
        return sum;
    }
};