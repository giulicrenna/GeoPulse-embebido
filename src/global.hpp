#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

char key[16] = {'S', 'E', 'H', 'K', '1', '2', 'J', 'M', 'Z', 'P', 'O', 'Y', '6', '5', '7', 'Q'};

std::map<char, char> dict = {{'1', key[0]},
                             {'2', key[1]},
                             {'3', key[2]},
                             {'4', key[3]},
                             {'5', key[4]},
                             {'6', key[5]},
                             {'7', key[6]},
                             {'8', key[7]},
                             {'9', key[8]},
                             {'E', key[9]},
                             {'S', key[10]},
                             {'P', key[11]},
                             {'A', key[12]},
                             {'D', key[13]},
                             {'-', key[14]},
                             {'0', key[15]}};

String uuid = String(ESP.getEfuseMac());
String encryptedUUID;
String deviceID = uuid;
String deviceName = "Stich-" + String(random(10000, 99999999));