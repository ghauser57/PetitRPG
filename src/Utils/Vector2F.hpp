//
// Created by dederobert on 13/09/17.
//

#ifndef PETITRPG_VECTOR2F_HPP
#define PETITRPG_VECTOR2F_HPP


class Vector2F {
public:
    float x;
    float y;

    Vector2F():x(0),y(0) {}
    Vector2F(float x, float y):x(x),y(y) {}

    inline Vector2F& operator+(const Vector2F &vector) {x += vector.x; y += vector.y; return *this; }
    inline Vector2F& operator-(const Vector2F &vector) {x -= vector.x; y -= vector.y; return *this; }
    inline Vector2F& operator*(int i) {x *= i; y *= i; return *this; }
    inline Vector2F& operator*(float i) {x *= i; y *= i; return *this; }

    inline bool operator==(const Vector2F &vector) {return x==vector.x && y==vector.y; }
    inline bool operator!=(const Vector2F &vector) {return !(*this==vector); }
};


#endif //PETITRPG_VECTOR2D_HPP
