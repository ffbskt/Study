#include <fstream>
#include <vector>

void w1t4() {
    std::ifstream inf("input.txt");
    std::ofstream ouf("output.txt");
    std::vector<int> t;
    std::vector<int> p;
    int n;
    int vt, vp;
    int mpt = 1e9;
    int ts = 0;
    int ps = 0;
    inf >> n;
    while( --n >= 0) {
        inf >> vt >> vp;
        if (vt >= vp) {
            ts += vt;
        } else {
            ps += vp;
        }
        mpt = std::min(mpt, std::abs(vp - vt));
    }
    if (ts and ps) {
        ouf << ts + ps;
    } else {
        ouf << ts + ps - mpt;
    }

}

void w1t3() {
    std::ifstream inf("input.txt");
    std::ofstream ouf("output.txt");
    int a0, a1, a2, k, n;
    // int k = 0;
    inf >> a0 >> a1 >> a2 >> n;
    for (int i = 0; i < n; ++i) {
        k = a1 + a2 - a0;
        a0 = a1;
        a1 = a2;
        a2 = k;
    }
    ouf << a0;// << std::endl;
}


int main(int argc, char const *argv[])
{
    w1t4();
    return 0;
}

