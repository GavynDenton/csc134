/*

#include "raylib.h"
#include <math.h>

#define MAX_BULLETS 100
#define MAX_TARGETS 10
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

typedef struct {
    Vector2 position;
    bool active;
} Target;

typedef struct {
    Rectangle rect;
    Color color;
} Wall;

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Top-Down Shooter");

    Player player = {0};
    player.position = (Vector2){screenWidth / 2, screenHeight / 2};

    Bullet bullets[MAX_BULLETS] = {0};
    Target targets[MAX_TARGETS] = {0};

    Wall walls[] = {
        {{100, 400, 600, 20}, GRAY},
        {{500, 700, 90, 20}, GRAY},
    };

    const int numWalls = sizeof(walls) / sizeof(walls[0]);

    SetTargetFPS(60);

    // Timer variables for target spawning
    double targetSpawnTimer = 0;
    const double targetSpawnInterval = 2.0; // Spawn a target every 2 seconds

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

        // Spawn new targets based on timer
        targetSpawnTimer += GetFrameTime();
        if (targetSpawnTimer >= targetSpawnInterval) {
            for (int i = 0; i < MAX_TARGETS; i++) {
                if (!targets[i].active) {
                    targets[i].position = (Vector2){GetRandomValue(0, screenWidth), GetRandomValue(0, screenHeight)};
                    targets[i].active = true;
                    break;
                }
            }
            targetSpawnTimer = 0; // Reset the timer
        }

        // Check for collision between bullets and targets
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (bullets[i].active) {
                for (int j =0; j < MAX_TARGETS; j++) {
                    if (targets[j].active && CheckCollisionCircles(bullets[i].position, 5, targets[j].position, 20)) {
                        bullets[i].active = false;
                        targets[j].active = false;
                        break;
                    }
                }
            }
        }

        // Check for collision between player and walls
        for (int i = 0; i < numWalls; i++) {
            if (CheckCollisionCircleRec(player.position, 20, walls[i].rect)) {
                // Adjust player position to prevent collision
                if (player.position.x < walls[i].rect.x) {
                    player.position.x = walls[i].rect.x - 20;
                } else if (player.position.x > walls[i].rect.x + walls[i].rect.width) {
                    player.position.x = walls[i].rect.x + walls[i].rect.width + 20;
                }
                if (player.position.y < walls[i].rect.y) {
                    player.position.y = walls[i].rect.y - 20;
                } else if (player.position.y > walls[i].rect.y + walls[i].rect.height) {
                    player.position.y = walls[i].rect.y + walls[i].rect.height + 20;
                }
            }
        }
        
        for (int i = 0; i < MAX_BULLETS; i++) {
    if (bullets[i].active) {
        bullets[i].position.x += bullets[i].speed.x * GetFrameTime();
        bullets[i].position.y += bullets[i].speed.y * GetFrameTime();

        // Check for collision with walls
        for (int j = 0; j < numWalls; j++) {
            if (CheckCollisionCircleRec(bullets[i].position, 5, walls[j].rect)) {
                bullets[i].active = false;
                break;
            }
        }

        // Check for bullet going off-screen
        if (bullets[i].position.x < 0 || bullets[i].position.x > screenWidth ||
            bullets[i].position.y < 0 || bullets[i].position.y > screenHeight) {
            bullets[i].active = false;
        }
    }
}
        

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw player
        DrawRectanglePro((Rectangle){player.position.x, player.position.y, 40, 40},
                         (Vector2){20, 20}, player.rotation, RED);

        // Draw bullets
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (bullets[i].active) {
                DrawCircle(bullets[i].position.x, bullets[i].position.y, 5, BLUE);
            }
        }

        // Draw targets
        for (int i = 0; i < MAX_TARGETS; i++) {
            if (targets[i].active) {
                DrawCircle(targets[i].position.x, targets[i].position.y, 20, GREEN);
            }
        }

        // Draw walls
        for (int i = 0; i < numWalls; i++) {
            DrawRectangleRec(walls[i].rect, walls[i].color);
        }
        
        #define SHOTGUN_BULLETS 6
        #define SHOTGUN_ANGLE_SPREAD 60

// ...

bool shotgunMode = false;

// ...

if (IsKeyDown(KEY_R)) {
    shotgunMode = true;
} else {
    shotgunMode = false;
}

// ...

if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    // Create bullets
    if (!shotgunMode) {
        // Single bullet
        for (int i = 0; i < MAX_BULLETS; i++) {
            if (!bullets[i].active) {
                bullets[i].position = player.position;
                bullets[i].speed = (Vector2){BULLET_SPEED * cosf(player.rotation * DEG2RAD),
                                            BULLET_SPEED * sinf(player.rotation * DEG2RAD)};
                bullets[i].active = true;
                break;
            }
        }
    } else {
        // Shotgun spread
        float startAngle = player.rotation - (SHOTGUN_ANGLE_SPREAD / 2);
        float angleIncrement = SHOTGUN_ANGLE_SPREAD / (float)(SHOTGUN_BULLETS - 1);

        for (int i = 0; i < SHOTGUN_BULLETS; i++) {
            for (int j = 0; j < MAX_BULLETS; j++) {
                if (!bullets[j].active) {
                    bullets[j].position = player.position;
                    bullets[j].speed = (Vector2){BULLET_SPEED * cosf((startAngle + i * angleIncrement) * DEG2RAD),
                                                BULLET_SPEED * sinf((startAngle + i * angleIncrement) * DEG2RAD)};
                    bullets[j].active = true;
                    break;
                }
            }
        }
    }
}
        

        EndDrawing();
    }

    CloseWindow();

    return 0;
}


*/