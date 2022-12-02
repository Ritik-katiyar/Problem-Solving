//Ashish Kumar Verma
vector<int> singleNumber(vector<int>& nums) {
        long long xora=0;
        for(int i=0;i<nums.size();i++){
            xora=xora^nums[i];
        }
        long long d= xora & (-xora);
        long xor1=xora;
        long xor2=xora;
        for(int i=0;i<nums.size();i++){
            if((d&nums[i])>=1){
                xor1=xor1^nums[i];
            }
            else{
                xor2=xor2^nums[i];
            }
        }
        vector<int>v;
        v.push_back(xor1);
        v.push_back(xor2);
        return v;
    }
