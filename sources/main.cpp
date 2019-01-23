#include <vec3.h>

void Test() {
    Vector3 a(1.0f, 2.0f, 3.0f);
    Vector3 b(1.0f, 2.0f, 3.0f);
    Vector3 c(3.0f);

    c = a + b;
    a = b += c - a * 3.f;
}

int main() {

}