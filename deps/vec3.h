
#pragma once

class Vector3 {
public:
    float x;
    float y;
    float z;

    Vector3()                               = default;
    ~Vector3()                              = default;
    Vector3(const Vector3&)                 = default;
    Vector3& operator = (const Vector3&)    = default;
    Vector3(Vector3&&)                      = default;
    Vector3& operator = (Vector3&&)         = default;

    // simple constructor, initializes all elements to the parameters with the same name
    Vector3(float x, float y, float z);

    // simple constructor, initializes all elements to the same value ({xyz})
    explicit Vector3(float xyz);

    // Calculates the magnitude of this vector.
    float Magnitude() const;

    // Calculates the squared magnitude of this vector.
    float MagnitudeSquared() const;

    // Evaluates the dot of this vector with the {other} vector.
    float DotProduct(const Vector3& other) const;
    
    // Evaluates the cross product of this vector with the {other} vector.
    Vector3 CrossProduct(const Vector3& other) const;

    // Simple math operators.
    Vector3 operator + (const Vector3& other) const;
    Vector3 operator - (const Vector3& other) const;
    Vector3 operator * (const Vector3& other) const;
    Vector3 operator / (const Vector3& other) const;
    Vector3 operator + (float value) const;
    Vector3 operator - (float value) const;
    Vector3 operator * (float value) const;
    Vector3 operator / (float value) const;
    Vector3& operator += (const Vector3& other);
    Vector3& operator -= (const Vector3& other);
    Vector3& operator *= (const Vector3& other);
    Vector3& operator /= (const Vector3& other);
    Vector3& operator += (float value);
    Vector3& operator -= (float value);
    Vector3& operator *= (float value);
    Vector3& operator /= (float value);
    
    // Returns true when all elements are exactly equal.
    bool operator == (const Vector3& other) const;
    // Returns true when any elements are not exactly equal.
    bool operator != (const Vector3& other) const;

    // Compares this vector's MagnitudeSquared to the {other} vector's MagnitudeSquared
    bool operator < (const Vector3& other) const;
    bool operator <= (const Vector3& other) const;
    bool operator > (const Vector3& other) const;
    bool operator >= (const Vector3& other) const;

    // Compares this vector's MagnitudeSquared to {value}*{value}
    bool operator < (float value) const;
    bool operator <= (float value) const;
    bool operator > (float value) const;
    bool operator >= (float value) const;


    // Direction vectors. (note: left handed coords with y-up and z-forward)
    static const Vector3 Up, Down, Left, Right, Forward, Backward;
    // Misc vectors.
    static const Vector3 One, Zero;
};