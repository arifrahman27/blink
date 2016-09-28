/*
  Blink
  Menyalakan LED pada Pin 4 selama 2,5 detik dan Mematikanya selama 2,5 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 4;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 4.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(2500);               // Tunggu sampai 2,5 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(2500);               // Tunggu sampai 2,5 detik.
}
