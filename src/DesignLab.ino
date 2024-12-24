#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>

const char *ssid = "Your_SSID";         
const char *password = "gripper"; 
const char *host = "192.168.1.100";     
const int port = 8080;

int littlefinger = A0;
int ringfinger = A4;
int middlefinger = A2;
int indexfinger = A3;
int thumbfinger = A1;

int val1, val2, val3, val4, val5;

WiFiClient client;

void setup()
{
  Serial.begin(115200);

  pinMode(littlefinger, INPUT);
  pinMode(ringfinger, INPUT);
  pinMode(middlefinger, INPUT);
  pinMode(indexfinger, INPUT);
  pinMode(thumbfinger, INPUT);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting to Wi-Fi...");
  }
  Serial.println("Connected to Wi-Fi");
}

int reading(int pinnumber)
{
  int flexposition = analogRead(pinnumber);
  return map(flexposition, 280, 80, 0, 120);
}

void loop()
{
  val1 = reading(littlefinger);
  val2 = reading(ringfinger);
  val3 = reading(middlefinger);
  val4 = reading(indexfinger);
  val5 = reading(thumbfinger);

  String data = String(val1) + "," + String(val2) + "," + String(val3) + "," + String(val4) + "," + String(val5);

  if (client.connect(host, port))
  {
    client.println(data);
    client.stop();
    Serial.println("Data sent: " + data);
  }
  else
  {
    Serial.println("Connection failed");
  }

  delay(1000);
}
