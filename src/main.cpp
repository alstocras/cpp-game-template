#include "raylib.h"

int main(void) {

  const int screenHeight = 450;
  const int screenWidth = 800;

  InitWindow(screenWidth, screenHeight, "my game");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    // game logic

    BeginDrawing();

    // rendering logic
    ClearBackground(BLACK);

    DrawText("this is a window", GetScreenWidth() / 2, GetScreenHeight() / 2,
             20, RAYWHITE);

    EndDrawing();
  }
}
