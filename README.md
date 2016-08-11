# Flyweight-Test
Just seeing what flyweight is all about

So this is a "game".

How it works is the "Enemy" class has a pointer to a "Enemy_Preset". The derived clases pass through a preset from a data base defined in Enemy_Preset.cpp from a static function in Enemy_Preset.h

So multiple enemies of the same type have a pointer to the same preset, saving memory and time for allcation of memory for said enemy.

