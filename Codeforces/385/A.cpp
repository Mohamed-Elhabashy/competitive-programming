#include<bits/stdc++.h>
using namespace std;

const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
/////////////////////
string multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
    return "0";

    // will keep the result number in vector
    // in reverse order
    vector<int> result(n1 + n2, 0);

    // Below two indexes are used to find positions
    // in result.
    int i_n1 = 0;
    int i_n2 = 0;

    // Go from right to left in num1
    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        // To shift position to left after every
        // multiplication of a digit in num2
        i_n2 = 0;

        // Go from right to left in num2
        for (int j=n2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';

            // Multiply with current digit of first number
            // and add result to previously stored result
            // at current position.
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            // Carry for next iteration
            carry = sum/10;

            // Store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        // To shift position to left after every
        // multiplication of a digit in num1.
        i_n1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
    return "0";

    // generate the result string
    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}
///////////////////////////

int decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  int cnt=0;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--){

        cnt++;
        }
        return cnt;
}
int arr[N];
int main(){
    int n=d(),t=d();
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);

    int mx=INT_MIN;
    for(int i=1;i<n;i++){
        mx=max(mx,(arr[i-1]-arr[i]-t));
        if(mx==16)
            printf("%d\n",i);
        }
    if(mx>=0)
    printf("%d\n",mx);
    else
    printf("0\n");
}
