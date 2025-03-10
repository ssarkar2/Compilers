#include <iostream>


class OneDPoint {
    public:
    OneDPoint(double x) : m_x(x) {}
    double get() const {return m_x;}

    private:
    double m_x;
};

class KeyValuePair {
    public:
    KeyValuePair(int k, int v) : m_k(k), m_v(v) {}
    int get() const {return m_k;}

    private:
    int m_k;
    int m_v;
};

template<typename T>
struct Print : T
{
    public:
    template<typename... Args>
    Print(Args&&... args) : T(std::forward<Args>(args)...) {}
    void print() const {
        std::cout << "---->" << this->get() << std::endl;
    }
};

int main() {
    Print<OneDPoint> pod(1.0);
    pod.print();

    Print<KeyValuePair> pkvp(2, 2);
    pkvp.print();
    return 0;
}