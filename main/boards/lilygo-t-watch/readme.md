# Lilygo T-Watch 2020 V3 開發板

此文檔為 Lilygo T-Watch 2020 V3 開發板的小智 AI 專案配置與使用指南。

---

## 硬件特性
- **處理器**: ESP32 (雙核，內建 Wi-Fi 和藍牙)
- **顯示屏**: 1.54 吋 TFT LCD (240x240 分辨率)
- **音頻**: 支援 I2S 音頻輸入/輸出，ES8311 編解碼器
- **傳感器**: 整合觸摸屏與 RTC 實時鐘
- **電池支持**: 支援可充電鋰電池，內建電源管理
- **按鈕**: 多功能 Boot 按鈕
- **外部接口**: I2C、SPI、GPIO

---

## 軟件依賴
1. **ESP-IDF 框架** (版本 4.x 或更高) - 用於 ESP32 的開發。
2. **小智 AI SDK** - 包含語音處理和 AI 功能模塊。
3. **LVGL** - 用於顯示屏的圖形介面支持。

---

## 配置與使用指南

### 1. 文件結構
- **`config.h`**: 硬件配置，定義引腳映射和參數。
- **`config.json`**: 編譯時使用的配置文件。
- **`lilygo-t-watch.cc`**: 板級初始化代碼，包含初始化 I2C、SPI、顯示屏和音頻。

### 2. 環境設置
- 安裝 ESP-IDF 並設置開發環境。
- 克隆小智 AI 開源專案到本地。
- 切換到專案目錄，編譯並燒錄。

```bash
git clone https://github.com/xiaozhi-ai/xiaozhi-esp32.git
cd xiaozhi-esp32
idf.py set-target esp32
idf.py build
idf.py flash

3. 配置編譯文件
確保 config.json 中的內容符合 Lilygo T-Watch 2020 V3 硬件。

自定義 partitions_lilytwatch.csv 文件以適配 16MB Flash 分區。

4. 注意事項
確保所有引腳映射正確，避免短路或錯誤接線。

固件更新時，請勿覆蓋其他開發板配置。

常見問題
顯示屏無法正常工作

檢查 SPI 引腳配置是否正確。

驗證屏幕初始化代碼與硬件匹配。

音頻輸出無法正常工作

確保 I2S 和 ES8311 引腳連接正確。

確認 PA（音頻功放）引腳已啟用。

Wi-Fi 無法連接

驗證 Wi-Fi 配置是否正確。

檢查是否有信號干擾。

參考資料
ESP-IDF 官方文檔

LVGL 文檔

Lilygo T-Watch 2020 V3 硬件手冊