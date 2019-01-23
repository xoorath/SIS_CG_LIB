
#include <vec3.h>
#include <math.h>

/*static*/ const Vector3 Vector3::Up        ( 0.f,  1.f,  0.f);
/*static*/ const Vector3 Vector3::Down      ( 0.f, -1.f,  0.f);
/*static*/ const Vector3 Vector3::Left      (-1.f,  0.f,  0.f);
/*static*/ const Vector3 Vector3::Right     ( 1.f,  0.f,  0.f);
/*static*/ const Vector3 Vector3::Forward   ( 0.f,  0.f,  1.f);
/*static*/ const Vector3 Vector3::Backward  ( 0.f,  0.f, -1.f);
/*static*/ const Vector3 Vector3::One       ( 1.f,  1.f,  1.f);
/*static*/ const Vector3 Vector3::Zero      ( 0.f,  0.f,  0.f);

Vector3::Vector3(float x, float y, float z)
: x(x)
, y(y)
, z(z) {
}

/*explicit*/ Vector3::Vector3(float xyz)
: x(xyz)
, y(xyz)
, z(xyz) {
}

float Vector3::Magnitude() const {
    return sqrt(MagnitudeSquared());
}

float Vector3::MagnitudeSquared() const {
    return x*x + y*y + z*z;
}

// Evaluates the dot of this vector with the {other} vector.
float Vector3::DotProduct(const Vector3& other) const {
    return x*other.x + y*other.y + y*other.y;
}

// Evaluates the cross product of this vector with the {other} vector.
Vector3 Vector3::CrossProduct(const Vector3& other) const {
    return Vector3(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x);
}

// Simple math operators.
Vector3 Vector3::operator + (const Vector3& other) const {
    return Vector3(x+other.x, y+other.y, z+other.z);
}

Vector3 Vector3::operator - (const Vector3& other) const {
    return Vector3(x-other.x, y-other.y, z-other.z);
}

Vector3 Vector3::operator * (const Vector3& other) const {
    return Vector3(x*other.x, y*other.y, z*other.z);
}

Vector3 Vector3::operator / (const Vector3& other) const {
    return Vector3(x/other.x, y/other.y, z/other.z);
}

Vector3 Vector3::operator + (float value) const {
    return Vector3(x+value, y+value, z+value);
}

Vector3 Vector3::operator - (float value) const {
    return Vector3(x-value, y-value, z-value);
}

Vector3 Vector3::operator * (float value) const {
    return Vector3(x*value, y*value, z*value);
}

Vector3 Vector3::operator / (float value) const {
    return Vector3(x/value, y/value, z/value);
}

Vector3& Vector3::operator += (const Vector3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vector3& Vector3::operator -= (const Vector3& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Vector3& Vector3::operator *= (const Vector3& other) {
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
}

Vector3& Vector3::operator /= (const Vector3& other) {
    x /= other.x;
    y /= other.y;
    z /= other.z;
    return *this;
}

Vector3& Vector3::operator += (float value) {
    x += value;
    y += value;
    z += value;
    return *this;
}

Vector3& Vector3::operator -= (float value) {
    x -= value;
    y -= value;
    z -= value;
    return *this;
}

Vector3& Vector3::operator *= (float value) {
    x *= value;
    y *= value;
    z *= value;
    return *this;
}

Vector3& Vector3::operator /= (float value) {
    x /= value;
    y /= value;
    z /= value;
    return *this;
}

bool Vector3::operator == (const Vector3& other) const {
    return x==other.x && y==other.y && z==other.z;
}

bool Vector3::operator != (const Vector3& other) const {
    return x!=other.x || y!=other.y || z!=other.z;
}

bool Vector3::operator < (const Vector3& other) const {
    return MagnitudeSquared() < other.MagnitudeSquared();
}

bool Vector3::operator <= (const Vector3& other) const {
    return MagnitudeSquared() <= other.MagnitudeSquared();
}

bool Vector3::operator > (const Vector3& other) const {
    return MagnitudeSquared() > other.MagnitudeSquared();
}

bool Vector3::operator >= (const Vector3& other) const {
    return MagnitudeSquared() >= other.MagnitudeSquared();
}

bool Vector3::operator < (float value) const {
    return MagnitudeSquared() < (value*value);
}

bool Vector3::operator <= (float value) const {
    return MagnitudeSquared() <= (value*value);
}

bool Vector3::operator > (float value) const {
    return MagnitudeSquared() > (value*value);
}

bool Vector3::operator >= (float value) const {
    return MagnitudeSquared() >= (value*value);
}