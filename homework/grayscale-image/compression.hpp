#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <vector>

constexpr size_t width = 32;
constexpr size_t height = 32;
std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(std::array<std::array<uint8_t, height>, width> tab);
std::array<std::array<uint8_t, height>, width> decompressGrayscale(std::vector<std::pair<uint8_t, uint8_t>> v);
void printMap(std::array<std::array<uint8_t, height>, width> tab);