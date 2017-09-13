//
// Created by dederobert on 13/09/17.
//

#ifndef PETITRPG_VECTOR2I_HPP
#define PETITRPG_VECTOR2I_HPP


class Vector2I {
public:
    int x;
    int y;

    Vector2I():x(0),y(0) {}
    Vector2I(int x, int y):x(x),y(y) {}

    inline Vector2I operator+(const Vector2I &vector) const
    {
        Vector2I tmp(*this);
        tmp.x += vector.x; tmp.y += vector.y;
        return tmp;
    }
    inline Vector2I& operator+=(const Vector2I &vector) { *this = *this + vector; return *this; }
    inline Vector2I operator-(const Vector2I &vector) const
    {
        Vector2I tmp(*this);
        tmp.x -= vector.x; tmp.y -= vector.y;
        return tmp;
    }
    inline Vector2I& operator-=(const Vector2I &vector) {*this = *this - vector; return *this; }
    inline Vector2I operator*(int i) const
    {
        Vector2I tmp(*this);
        tmp.x *= i; tmp.y *= i;
        return tmp;
    }
    inline Vector2I& operator*=(int i) {*this = *this * i; return *this; }

    inline bool operator==(const Vector2I &vector) {return x==vector.x && y==vector.y; }
    inline bool operator!=(const Vector2I &vector) {return !(*this==vector); }
};


#endif //PETITRPG_VECTOR2D_HPP
