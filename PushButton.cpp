#include "PushButton.hpp"

/**
 * @brief Increments press count
*/
void PushButton::increment(void) {
	++(this->press_cnt);
}

/**
 * @brief Resets press count
*/
void PushButton::reset(void) {
	this->press_cnt = 0;
}

/**
 * @brief Returns press count
 * @retval uint32_t press count
*/
uint32_t PushButton::get_press(void) {
	return this->press_cnt;
}
