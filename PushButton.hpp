#ifndef PUSHBUTTON_HPP_
#define PUSHBUTTON_HPP_


#ifdef __cplusplus
extern "C"{
#endif

#include "stm32l1xx_hal.h"

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus

class PushButton {
public:
	void increment(void);
	void reset(void);
	uint32_t get_press(void);

private:
	uint32_t press_cnt = 0;
};

#endif


#endif /* PUSHBUTTON_HPP_ */
