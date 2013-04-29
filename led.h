#ifndef LED_H
#define LED_H

void led_init(void);
void led_invert(void);
void output32(unsigned int num);
void output(unsigned int num);
void gpio_init(void);
void gpio_check(void);

#endif	/* LED_H */
