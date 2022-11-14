# RGB Strips
![Banner](https://www.elecrow.com/pub/media/catalog/product/cache/f8158826193ba5faa8b862a9bd1eb9e9/1/4/14519808930_1.jpg)
## RGB Strip Controller
The pit will have "[ESP8266 NodeMCU LUA CH340 ESP-12E WiFi Internet Development Board](https://www.amazon.com/ESP8266-Internet-Development-Wireless-Micropython/dp/B07RNX3W9J/ref=sr_1_5?)"s to control all of the RGB Strips. Currently we have a generic white box, an arduino, and a music sensitive box controlling our current strips. The ESP8266 Controller is programmable and can be controlled over wifi which blows all of our current options out of the water.
### Software Setup
1) Download the [Arduino IDE](https://www.arduino.cc/en/software)
1) Setup ESP8266 Board on Arduino IDE with [this repo](https://github.com/esp8266/Arduino#installing-with-boards-manager)'s instructions
1) [Compile](https://kno.wled.ge/advanced/compiling-wled/) & upload WLED with the [autosave usermod](https://github.com/Aircoookie/WLED/issues/1926) enabled
1) Profit
### Getting Mac IP
```
#include <ESP8266WiFi.h>
 
void setup(){
 
   Serial.begin(115200);
   delay(500);
 
   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress());
 
}
 
void loop(){}
```
### Connecting to WIFI
```
#include <ESP8266WiFi.h>        // Include the Wi-Fi library

const char* ssid     = "SSID";         // The SSID (name) of the Wi-Fi network you want to connect to
const char* password = "PASSWORD";     // The password of the Wi-Fi network

void setup() {
  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
  delay(10);
  Serial.println('\n');
  
  WiFi.begin(ssid, password);             // Connect to the network
  Serial.print("Connecting to ");
  Serial.print(ssid); Serial.println(" ...");

  int i = 0;
  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect
    delay(1000);
    Serial.print(++i); Serial.print(' ');
  }

  Serial.println('\n');
  Serial.println("Connection established!");  
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());         // Send the IP address of the ESP8266 to the computer
}

void loop() { }
```
### [WLED Install Website](https://install.wled.me)
