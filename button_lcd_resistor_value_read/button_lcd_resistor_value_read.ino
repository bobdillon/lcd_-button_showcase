define btnRIGHT 0
 #define btnUP 1
 #define btnDOWN 2
 #define btnLEFT 3
 #define btnSELECT 4
 #define btnNONE 5
 #define btnUNKNOWN 6

int readkeypad(){
      int adc_key_in = analogRead(0); //
      int ret = btnUNKNOWN;

      if (adc_key_in < 50) ret = btnRIGHT;
      if ((adc_key_in > 500) && (adc_key_in < 1150)) ret = btnNONE;
      if ( (adc_key_in > 120) && (adc_key_in < 150) ) ret = btnUP;
      if ( (adc_key_in > 250) && (adc_key_in < 350) ) ret = btnDOWN;
      if ( (adc_key_in > 450) && (adc_key_in < 500) ) ret = btnLEFT;
      if ( (adc_key_in > 700) && (adc_key_in < 750) ) ret = btnSELECT;

      return ret;
 }
