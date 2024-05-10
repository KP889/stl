#include "compression.hpp"

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(std::array<std::array<uint8_t, height>, width> tab) {
    std::vector<std::pair<uint8_t, uint8_t>> result;
    //result.reserve(height * width);
    uint8_t counter = 0;
    uint8_t index = 0;

    uint8_t element = tab[0][0];
    for (uint8_t i = 0; i < height; i++) {  // loop for rows unsigned(ninja[1][10]);//height width
        element = tab[i][0];
        for (uint8_t j = 0; j < (width); j++) {  // loop for columns
            // 1st column
            // next one is equal
            index = tab[i][j];

            if ( j == (width - 1) && element == index) {
                counter++;
                result.push_back(std::make_pair(element, counter));
                counter=0;
            } else if (element == index) {
                counter++;
            } else {
                result.push_back(std::make_pair(element, counter));
                counter = 1;
                element = index;
            }
        }
    }
    return result;
};