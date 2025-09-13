#include "Text.h"
#include "GameManager.h"
#include <windows.h>

int main() {
    // кодировка UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Text::LoadTexts("texts.json");

    GameManager::startLevel1();
    return 0;
}