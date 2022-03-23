class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int oper=0;
while(target>startValue){
if(target%2==1)
target++;
else{
target/=2;
}
oper++;
}
return oper+startValue-target;
    }
};