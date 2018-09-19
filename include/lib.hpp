/**
 * @file       lib.hpp
 * @author     Ashish Patel
 * @version    1.0
 * @copyright  MIT License (c) 2018 Ashish Patel
 * @brief      functions header file
 */

#ifndef INCLUDE_LIB_HPP_
#define INCLUDE_LIB_HPP_

#include <iostream>
#include <string>

/**
 * @brief searchPosition
 *
 * @param[in] first As main string
 * @param[in] second As substring
 *
 * @section DESCRIPTION
 * This function returns the position of the first occurrence of the substring to search from the main string.
 *
 * @return return position of substring as integer or -1 if not found
 */
auto searchPosition(const std::string& text, const std::string& array_to_search1) -> decltype(text.size()) {
  auto position1 = text.find(array_to_search1);
  if (position1 != std::string::npos)
    return position1;
  else
    return -1;
}

/**
 * @brief printPosition
 *
 * @section DESCRIPTION
 * This function initializes the main string and the substring to search from the main string.
 * It calls the function name searchPosition() which returns the value of position in Integer form.
 *
 * @return return none
 */
void printPosition() {
  std::string text = "1234567890";
  std::string array_to_search1 = "23";
  auto position = searchPosition(text, array_to_search1);
  if(position != -1)
    std::cout << "Position :" << position << std::endl;
  else
    std::cout << "Substring is not present in a given main string..." << std::endl;
}

#endif // INCLUDE_LIB_HPP_
