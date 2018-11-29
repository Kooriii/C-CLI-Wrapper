#pragma once

using namespace System::Runtime::InteropServices;

static const char* string_to_char_array(System::String^ string)
{
  const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
  return str;
}

static void int_array_conversion(array<int>^ data)
{
  pin_ptr<int> arrayPin = &data[0];
  unsigned int size = data->Length;
}

namespace KooriCLI
{
  template<typename T>
  public ref class ManagedObject
  {
  protected:
    T* mInstance;
  public:
    ManagedObject(T* instance)
      : mInstance{ instance }
    {

    }

    virtual ~ManagedObject()
    {
      if (mInstance != nullptr)
        delete mInstance;
    }

    // Finalizer for garbage collector
    !ManagedObject()
    {
      if (mInstance != nullptr)
        delete mInstance;
    }

    T* GetInstance()
    {
      return mInstance;
    }
  };
}