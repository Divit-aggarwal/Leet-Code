// Last updated: 02/12/2025, 16:59:53
class Solution {
public:
bool check(int count1[26],int count2[26]){
 for(int i=0;i<26;i++){
    if(count1[i] !=count2[i]){
        return 0;
    }
 }
 return 1;
}
    bool checkInclusion(string s1, string s2) {
    
       int count1[26]= {0};
       int index=0;
       for(int i=0;i<s1.length();i++){
        index = s1[i]-'a';
        count1[index]++;
         }

         int count2[26]={0};
        int i=0;
        int windowsize = s1.length();

        while(i<windowsize && i<s2.length()){
            index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(check(count1,count2)){
            return 1;
        }

        while(i<s2.length()){
          char newchar = s2[i];
         int index = newchar-'a';
               count2[index]++;
             char oldchar = s2[i-windowsize];
            index = oldchar-'a';
        count2[index]--;

     if(check(count1,count2)){
    return 1;
    }
      i++;
        }

return 0;

     
    }
};