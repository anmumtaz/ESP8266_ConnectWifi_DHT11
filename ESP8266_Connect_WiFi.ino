#include <ESP8266WiFi.h>                          // Include the WiFi library

const char* ssid = "NANDA POIN";             // The SSID (name) of the WiFi network you want to connect to
const char* password = "BOGEL123";      // The password of the WiFi network

void setup() {
  Serial.begin(115200);                           // Start the Serial communication to send messages to the computer
  
  WiFi.begin(ssid, password);                     // Connect to the network
  
  while (WiFi.status() != WL_CONNECTED) {         // Wait for the WiFi to connect
    delay(500);
    Serial.println("Connecting to WiFi...");
  }
  
  Serial.println("Connected to the WiFi network");// Wifi Connected
  Serial.print("IP Address: ");                   
  Serial.println(WiFi.localIP());                 // Send the IP address of the ESP8266 to the computer
}

void loop() {} 
