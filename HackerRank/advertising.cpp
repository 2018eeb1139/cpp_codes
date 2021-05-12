#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int j=5,sum=0;
    for(int i=1;i<=n;i++){
            j=j/2;sum=sum+j;
            j=j*3;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    cout << result << "\n";

    fout.close();

    return 0;
}

