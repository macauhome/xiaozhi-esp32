#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include <driver/gpio.h>

// ======== 音頻配置 ========
// MAX98357A I2S音頻放大器
#define AUDIO_INPUT_SAMPLE_RATE 16000
#define AUDIO_OUTPUT_SAMPLE_RATE 16000
#define AUDIO_I2S_GPIO_WS GPIO_NUM_25  // I2S_WS (LRCK)
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_26 // I2S_BCK (SCK)
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_33 // I2S_DOUT (DATA)

// ======== 顯示屏配置 ========
// ST7789V SPI顯示屏
#define DISPLAY_SPI_SCK_PIN GPIO_NUM_18  // TFT_SCLK
#define DISPLAY_SPI_MOSI_PIN GPIO_NUM_19 // TFT_MOSI
#define DISPLAY_DC_PIN GPIO_NUM_27       // TFT_DC
#define DISPLAY_SPI_CS_PIN GPIO_NUM_5    // TFT_CS
#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_12 // TFT_BL
#define DISPLAY_WIDTH 240
#define DISPLAY_HEIGHT 240
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

// ======== 傳感器配置 ========
// BMA423加速度計 (I2C)
#define BMA423_SDA GPIO_NUM_21
#define BMA423_SCL GPIO_NUM_22
#define BMA423_INT GPIO_NUM_39

// ======== 電源管理 ========
// AXP202 PMIC (I2C)
#define AXP202_SDA GPIO_NUM_21  // 與BMA423共享I2C總線
#define AXP202_SCL GPIO_NUM_22
#define AXP202_INT GPIO_NUM_35  // 電池中斷

// ======== 觸摸屏配置 ========
// FT6336U 觸摸控制器 (I2C)
#define TOUCH_I2C_SDA_PIN GPIO_NUM_23
#define TOUCH_I2C_SCL_PIN GPIO_NUM_32
#define TOUCH_I2C_ADDR 0x38
#define TOUCH_INT_PIN GPIO_NUM_38 //36 // 注意與BOOT按鈕衝突

// ======== 其他外設 ========
#define MOTOR_PIN GPIO_NUM_4  // 震動電機
#define IR_PIN GPIO_NUM_13    // 紅外發射
#define RTC_PIN GPIO_NUM_37   // RTC中斷
#define BOOT_BUTTON_GPIO GPIO_NUM_36 // 與觸摸中斷共享GPIO

#endif // BOARD_CONFIG_H
