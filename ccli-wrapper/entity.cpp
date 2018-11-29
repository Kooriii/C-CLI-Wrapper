#include "entity.h"

Core::Entity::Entity(const char * name, float x_pos, float y_pos)
  : mName {name}
  , x_    { x_pos }
  , y_    { y_pos }
{
}

void Core::Entity::Move(float x, float y)
{
  x_ += x;
  y_ += y;
}

inline float Core::Entity::GetX() const
{
  return x_;
}

inline float Core::Entity::GetY() const
{
  return y_;
}
