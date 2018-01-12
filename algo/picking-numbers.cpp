#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (auto& e : a)
        std::cin >> e;
    
    std::sort(a.begin(),a.end());
    
    int lcount=1,tcount=0;
    for (int i = 0; i < n; ++i) {
        lcount=1;
        for (int j = i+1; j < n; ++j) {
            if (std::abs(a[j] - a[i]) <= 1)
            {
                ++lcount;
                if(lcount>tcount)
                    tcount=lcount;
            }    
            else
                break;
        }
    }
    
    //std::cout << *std::max_element(counts.begin(),counts.end());
    std::cout<<tcount;
    
    return 0;
}
