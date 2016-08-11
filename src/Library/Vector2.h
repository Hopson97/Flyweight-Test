#ifndef VECTOR2_H_INCLUDED
#define VECTOR2_H_INCLUDED

template <typename T>
struct Vector2
{
    T x = 0;
    T y = 0;

    T operator +( const Vector2 other )
    {
        x += other.x;
        y += other.y;
    }
};

typedef Vector2<float> Vector2f;

#endif // VECTOR2_H_INCLUDED
