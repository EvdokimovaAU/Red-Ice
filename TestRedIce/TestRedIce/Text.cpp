#include "Text.h"
#include <fstream>
#include <iostream>

nlohmann::json Text::texts;

void Text::LoadTexts(const std::string& filePath) {
    std::ifstream file(filePath);
    file >> texts;
    file.close();
}

std::string Text::GetText(const std::string& level, const std::string& key) {
    if (texts.contains(level) && texts[level].contains(key)) {
        return texts[level][key].get<std::string>();
    }
}