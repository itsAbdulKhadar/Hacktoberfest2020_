/*
Given a number N >= 0, find its representation in binary.

Example:

if N = 6,

binary form = 110

https://www.interviewbit.com/problems/binary-representation/
*/

// Solution 1
string Solution::findDigitsInBinary(int A) {
    int r;
    string result;
    
    if(A==0)
        return "0"; //prev used result += to_string(0); return result;

    while(A>0)
    {
        r = A%2;
        result += to_string(r); //Or result.push_back((char)('0' + r)); will also work
        A /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

// Solution 2
string Solution::findDigitsInBinary(int A) {
    if (A == 0)
        return "0";
    
    string result = "";
    
    while (A != 0) {
        result += A%2 + '0';
        A /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}
