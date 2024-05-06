/*
Prompt: make a top down shooter game for raylib

Response:

Sure! I can help you with the basic structure and mechanics of a top-down shooter game using the Raylib game development library. Here's an example to get you started:

```C
#include "raylib.h"

#define MAX_BULLETS 100
#define PLAYER_SPEED 200
#define BULLET_SPEED 800

typedef struct {
    Vector2 position;
    float rotation;
} Player;

typedef struct {
    Vector2 position;
    Vector2 speed;
    bool active;
} Bullet;

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Top-Down Shooter");
    
    Player player = {0};
    player.position = (Vector2){screenWidth / 2, screenHeight / 2};
    
    Bullet bullets[MAX_BULLETS] = {0};
    
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        // Update
        if (IsKeyDown(KEY_W)) player.position.y -= PLAYER_SPEED * GetFrameTime();
        if (IsKeyDown(KEY_S)) player.position.y += PLAYER_SPEED * GetFrameTime();
        if (IsKeyDown(KEY_A)) player.position.x -= PLAYER_SPEED * GetFrameTime();
        if (IsKeyDown(KEY_D)) player.position.x += PLAYER_SPEED * GetFrameTime();
        
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            // Create a new bullet
            for (int i = 0; i < MAX_BULLETS; i++) {
                if (!bullets[i].active) {
                    bullets[i].position = player.position;
                    bullets[i].speed = (Vector2){BULLET_SPEED * cosf(player.rotation * DEG2RAD),
                                                BULLET_SPEED * sinf(player.rotation * DEG2RAD)};
                    bullets[i].active = true;
                    break;
                }
            }
        }
        
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (bullets[i].active) {
                bullets[i].position.x += bullets[i].speed.x * GetFrameTime();
                bullets[i].position.y += bullets[i].speed.y * GetFrameTime();
                
                // Deactivate bullet if it goes off-screen
                if (bullets[i].position.x < 0 || bullets[i].position.x > screenWidth ||
                    bullets[i].position.y < 0 || bullets[i].position.y > screenHeight) {
                    bullets[i].active = false;
                }
            }
        }
        
        player.rotation = atan2f(GetMouseY() - player.position.y, GetMouseX() - player.position.x) * RAD2DEG;
        
        // Draw
        BeginDrawing();
        
        ClearBackground(RAYWHITE);
        
        // Draw player
        DrawRectanglePro((Rectangle){player.position.x, player.position.y, 40, 40}, 20, 20, player.rotation, RED);
        
        // Draw bullets
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (bullets[i].active) {
                DrawCircle(bullets[i].position.x, bullets[i].position.y, 5, BLUE);
            }
        }
        
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
```

This example sets up a basic top-down shooter game using Raylib. The player is controlled using the WASD keys, and their rotation follows the mouse cursor. When the left mouse button is pressed, a bullet is created and fired in the direction of the mouse cursor. The bullets move across the screen and are deactivated when they go off-screen. The player and bullets are drawn on the screen using basic shapes.

Feel free to customize and expand upon this code to create a more complex and engaging game.
*/