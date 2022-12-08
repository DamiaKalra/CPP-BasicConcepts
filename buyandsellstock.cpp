#include<iostream>
using namespace std;
 int maxProfit(int prices[],int length) {
        int min = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < length; i++) {
            if (prices[i] < min)
                min= prices[i];
            else if (prices[i] - min > maxprofit)
                maxprofit = prices[i] - min;
        }
        return maxprofit;
    }
    
    int main(){
   	int n;
	cin >> n;
	int prices[n];
for (int i = 0; i < n; i++)
		{
    cin >> prices[i];
		}
    cout << maxProfit(prices,n);	
    	return 0;
}
