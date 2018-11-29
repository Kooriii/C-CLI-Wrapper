#include "entity.h"

namespace KooriCLI
{
  Entity::Entity(String^ name, float x, float y)
    : ManagedObject(new Core::Entity(string_to_char_array(name), x, y))
  {
    Console::WriteLine("Creating Entity Wrapper object...");
  }

  void Entity::Move(float x, float y)
  {
    mInstance->Move(x, y);
  }
}