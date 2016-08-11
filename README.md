# Flyweight-Test
Just seeing what flyweight is all about

So this is code for a "game" to see if I understand the flyweight pattern correctly.

How it works is the "Enemy" class has a const reference to a "Enemy_Preset". The derived clases pass through a preset from a data base defined in Enemy_Preset.cpp from a static function in Enemy_Preset.h

So multiple enemies of the same type have a pointer to the same preset, saving memory and time for allcation of memory for said enemy.

I also added some stuff that you'd find in a typical game source so it makes more sense about useage (see Game.h and Game.cpp), as well as some stuff you'd typically find in some random game library such as SFML, such as Texture and Sprite classes.
