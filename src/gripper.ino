#include <WiFi.h>

const char *ssid = "Your_SSID";   
const char *password = "gripper"; 
WiFiServer server(8080);

int s1 = 6;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 2;

int threshold = 105;

void setup()
{
    Serial.begin(115200);

    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(s4, OUTPUT);
    pinMode(s5, OUTPUT);

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to Wi-Fi...");
    }
    Serial.println("Connected to Wi-Fi");

    server.begin();
    Serial.println("Server started");
}

void loop()
{
    WiFiClient client = server.available();
    if (client)
    {
        String data = client.readStringUntil('\n');
        Serial.println("Data received: " + data);

        int values[5];
        int index = 0;

        for (int i = 0; i < data.length(); i++)
        {
            if (data[i] == ',')
            {
                index++;
            }
            else
            {
                values[index] = values[index] * 10 + (data[i] - '0');
            }
        }

        digitalWrite(s1, values[0] > threshold ? HIGH : LOW);
        digitalWrite(s2, values[1] > threshold ? HIGH : LOW);
        digitalWrite(s3, values[2] > threshold ? HIGH : LOW);
        digitalWrite(s4, values[3] > threshold ? HIGH : LOW);
        digitalWrite(s5, values[4] > threshold ? HIGH : LOW);
    }
}
