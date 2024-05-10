#include "compression.hpp"

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(std::array<std::array<uint8_t, height>, width> tab) {
    std::vector<std::pair<uint8_t, uint8_t>> result;
    uint8_t counter = 1;
    uint8_t index = 0;
    uint8_t element = tab[0][0];
    for (uint8_t i = 0; i < height; i++) {  // loop for rows unsigned(ninja[1][10]);//height width

        for (uint8_t j = 0; j < (width - 1); j++) {  // loop for columns
            // 1st column
            // next one is equal
            if (element == tab[i][j + 1] && (j > 0 || i == 0)) {
                counter++;
            }

            else if (element != tab[i][j + 1]&& (j > 0 || i == 0)) {                     /// next one is not equal
                result.push_back(std::make_pair(element, counter));  // put data into vector
                counter = 1;                                         // reset counter
                element = tab[i][j ];                             // overtake next element value
            } else if (element == tab[i][j] && (j == 0 && i > 0)) {  // 1st elem of new row
                counter++;

            } else if (element != tab[i][j] && (j == 0 && i > 0)) {
                result.push_back(std::make_pair(element, counter));  // put data into vector
                counter = 1;                                         // reset counter
                element = tab[i][j];
                if (element == tab[i][j + 1] ) {
                counter++;
            }
                                                 // overtake next element value
            }
        }
    }
    return result;
};