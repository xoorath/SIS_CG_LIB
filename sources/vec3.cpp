
#include <vec3.h>
#include <math.h>
#include <stdexcept>

struct Vec3Todo : public std::exception {
    virtual char const * what() const throw() { return "TODO"; }
};

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
    throw Vec3Todo();
    return 0.f;
}

// Evaluates the cross product of this vector with the {other} vector.
Vector3 Vector3::CrossProduct(const Vector3& other) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

// Simple math operators.
Vector3 Vector3::operator + (const Vector3& other) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator - (const Vector3& other) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator * (const Vector3& other) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator / (const Vector3& other) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator + (float value) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator - (float value) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator * (float value) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3 Vector3::operator / (float value) const {
    throw Vec3Todo();
    return Vector3(0.f);
}

Vector3& Vector3::operator += (const Vector3& other) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator -= (const Vector3& other) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator *= (const Vector3& other) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator /= (const Vector3& other) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator += (float value) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator -= (float value) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator *= (float value) {
    throw Vec3Todo();
    return *this;
}

Vector3& Vector3::operator /= (float value) {
    throw Vec3Todo();
    return *this;
}

bool Vector3::operator == (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator != (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator < (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator <= (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator > (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator >= (const Vector3& other) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator < (float value) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator <= (float value) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator > (float value) const {
    throw Vec3Todo();
    return false;
}

bool Vector3::operator >= (float value) const {
    throw Vec3Todo();
    return false;
}