#include "engine.h"
#include "game.h"
#include "scenes/scene_menu.h"

using namespace std;

MenuScene menu;
SteeringScene steeringScene;
//Level2Scene level2;

int main() {
  Engine::Start(1280, 720, "Platformer",&menu);
}