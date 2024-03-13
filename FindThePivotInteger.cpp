class Solution {
public:
    int pivotInteger(int n) { //S(n) = n(n+1) / 2
        int nTotal = (n * (n + 1))/2;
        int xTotal = 0;
        for(int i = 1; i <= n; i++){
            xTotal += i;
            int xToN = nTotal - xTotal + i;
            if(xTotal == xToN) return i;
        }

        return -1;
    }
};
