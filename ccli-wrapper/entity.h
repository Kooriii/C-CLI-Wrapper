#pragma once
#include <string>

namespace Core
{
  class __declspec(dllexport) Entity
  {
  public:
    Entity(const char* name, float x, float y);
    
    void Move(float x, float y);

    inline float GetX() const;
    inline float GetY() const;

    const char* mName;
  private:
    float x_, y_;
  };
}