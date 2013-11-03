/* created by proxhotdog
   QWERTY to Colemak layout remap
   only for keys that are in different position
   CAPSLOCK remains unchanged
*/

void translate_to_colemak(uint8_t *buf)
{
  uint8_t i;
  for (i=2; i<8; i++) {
    //Serial.println(buf[i],HEX); //uncomment this line for debug
    
    /** top row **/
    if (buf[i] == 0x08) { //e
      buf[i] = 0x09; //f
    }
    else if (buf[i] == 0x15) { //r
      buf[i] = 0x13;  //p
    }
    else if (buf[i] == 0x17) { //t
      buf[i] = 0x0A;  //g
    }
    else if (buf[i] == 0x1C) { //y
      buf[i] = 0x0D;  //j
    }
    else if (buf[i] == 0x18) { //u
      buf[i] = 0x0F; //l
    }
    else if (buf[i] == 0x0C) { //I
      buf[i] = 0x18; //u
    }
    else if (buf[i] == 0x12) { //O
      buf[i] = 0x1C;  //y
    }
    else if (buf[i] == 0x13) { //P
      buf[i] = 0x33;  //;
    }
    
    /** 2nd row **/
    else if (buf[i] == 0x16) { //S
      buf[i] = 0x15;  //r
    }
    else if (buf[i] == 0x07) { //D
      buf[i] = 0x16;  //s
    }
    else if (buf[i] == 0x09) { //F
      buf[i] = 0x17;  //t
    }
    else if (buf[i] == 0x0A) { //G
      buf[i] = 0x07;  //d
    }
    else if (buf[i] == 0x0D) { //J
      buf[i] = 0x11; //n
    }
    else if (buf[i] == 0x0E) { //K
      buf[i] = 0x08; //e
    }
    else if (buf[i] == 0x0F) { //L
      buf[i] = 0x0C; //i
    }
    else if (buf[i] == 0x33) { //;
      buf[i] = 0x12; //o
    }
    
    /** 3rd row **/
    
    else if (buf[i] == 0x11) { //N
      buf[i] = 0x0E; //k
    }

    
  } 
}

