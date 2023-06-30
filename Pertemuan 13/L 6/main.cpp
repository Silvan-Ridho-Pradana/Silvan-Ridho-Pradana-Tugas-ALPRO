#include <bits/stdc++.h>

using namespace std;

enum Arah{UTARA,TIMUR,SELATAN,BARAT};

int main()
{
    int arah = 2;
    if(arah == Arah::UTARA)
        cout << "ke Utara";

    else if(arah == Arah::TIMUR)
        cout << "ke Timur";

    else if(arah == Arah::SELATAN)
        cout << "ke Selatan";

    else if (arah == Arah::BARAT)
        cout << "ke Barat";

    return 0;
}
