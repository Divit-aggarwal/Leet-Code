// Last updated: 19/12/2025, 22:24:59
1class Solution {
2public:
3    string intToRoman(int num) {
4        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
5        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
6        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
7        string ths[]={"","M","MM","MMM"};
8        
9        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
10    }
11};