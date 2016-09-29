boold add(int a, int b, int *c)
{
  *c = a + b;
  return (a > 0 && b > 0 && (*c < a || *c < b) || (a < 0 && b < 0 && (*c > a || *c > b)));
}

// 检查2个无符号数相加是否溢出

bool checkUAddOverflow(unsigned int x,unsigned int y)
 {
     return x+y < x;
 }
 
 // 检查2个有符号数相加是否溢出 
bool checkAddOverflow(int x,int y)
{
    int sum = x+y;
    bool neg = x < 0 && y < 0 && sum > 0;
    bool pos = x>=0 && y>= 0 && sum < 0;
    return neg || pos;

}

bool checkAddOverflow2(int x,int y)
{
    return (x < 0 == y < 0) && (x+y < 0 != x < 0);
}

// 检查2个有符号数相减是否溢出
// 注意不要用试图转化为加法进行溢出判断，比如checkAddOverflow(x,-y)，因为-INT_MIN是溢出的
bool checkSubtractOverflow(int x,int y)
{
    int sum = x-y;
    bool neg = x < 0 && y > 0 && sum > 0;
    bool pos = x>=0 && y<= 0 && sum < 0;
    return neg || pos;
}

bool checkSubtractOverflow2(int x,int y)
{
    return (x<0 == y >0) && (x-y > 0 == x<0); //x==0要和y<0在一组
}

// 检查2个整数相乘是否溢出
bool checkMultOverflow(int x,int y)
{
    int t = x*y;
    return x!=0 && y!=t/x;
}

bool checkMultOverflow2(int x,int y) //long long长度大于int的情况，比如int32位，longlong64位
{
    long long t = (long long)x*y; //不要写成long long（x*y）
    return t != (int)t;
}
