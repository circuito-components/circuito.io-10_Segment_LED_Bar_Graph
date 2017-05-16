// This code is processed by the circuito engine, only edit lines within specified code blocks, other changes will be discarded
// {CIRCUITO_DRIVER_API_1.0}

#include "Arduino.h"
// ======================= ENTER INCLUDE STATEMETNS HERE // ====================
// {INCLUDE}

// {/INCLUDE}
// ======================= END OF INCLUDE BLOCK // =============================

// =======================Pin Definitions - ONLY MODIFY PIN NUMBERS // =========
#define LEDBAR_PIN_AA	2
#define LEDBAR_PIN_BA	3
#define LEDBAR_PIN_CA	4
#define LEDBAR_PIN_DA	5
#define LEDBAR_PIN_EA	6
#define LEDBAR_PIN_FA	7
#define LEDBAR_PIN_GA	8
#define LEDBAR_PIN_HA	9
#define LEDBAR_PIN_IA	10
#define LEDBAR_PIN_JA	11

// =======================Pin Definitions // ===================================


// ====================== DEFINE GLOBAL VARIABLES ===============================
// {GLOBAL}

// {/GLOBAL}
// ======================= END OF GLOBAL BLOCK // ==============================


// // ======================  OBJECT INITIALIZATION // // ====================== 
// {OBJ}

// {/OBJ}
// =========================  END OF OBJECT INITIALIZATION // ================== 




/* This code sets up the essentials for your circuit to work. It runs first every time your circuit is powered with electricity. */
void setup() {                                                                      
    // Setup Serial which is useful for debugging                                   
    // Use the Serial Monitor to view printed messages                              
    Serial.begin(9600);                                                             
    while (!Serial) ; // wait for serial port to connect. Needed for native USB     
    Serial.println("start");                                                        
    
// =========================  SETUP // ========================================= 
// {SETUP}
   
// {/SETUP}
// =========================  END OF SETUP // ================================== 
}

/* This code is the main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop. */
void loop() {

// =========================  TESTCODE // ====================================== 
// {TESTCODE}
    
// {/TESTCODE}
// =========================  END OF TESTCODE // =============================== 
    
}