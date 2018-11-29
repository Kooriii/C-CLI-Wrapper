#pragma once

#include "managed_objects.h"
#include "..\ccli-wrapper\Core.h"

using namespace System;
namespace KooriCLI
{
  public ref class Entity : public ManagedObject<Core::Entity>
  {
  public:
    Entity(String^ name, float x, float y);

    void Move(float x, float y);

    property float x_position
    {
    public:
      float get()
      {
        return mInstance->GetX();
      }
    private:
      void set(float value)
      {
      }
    }

    property float y_position
    {
    public:
      float get()
      {
        return mInstance->GetY();
      }
    private:
      void set(float value)
      {
      }
    }

    property System::String^ name
    {
    public:
      System::String^ get()
      {
        return gcnew String(mInstance->mName);
      }
    }
  };
}