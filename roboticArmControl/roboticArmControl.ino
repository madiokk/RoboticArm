                                                                                                                                                                                                                                                                                                                                                                                                                             #include <VarSpeedServo.h>

char degreeDistance  = '0';

int poz1, poz2, poz3, poz4;

VarSpeedServo servo_shoulder;
VarSpeedServo servo_elbow;
VarSpeedServo servo_base;
VarSpeedServo servo_arm;

const int SHOULDER_PIN = 2;
const int ELBOW_PIN = 4;
const int BASE_PIN = 6;
const int ARM_PIN = 8;

int arrshoulder[10]={180,170,160,150,140,130,120,110,100,90};
int arrelbow[12]={70,80,90,100,110,120,130,140,150,160,170,180};
int arrbase[5]={0,45,90,135,180};
int arrarm[2]={0,70};

void setup() 
{
  Serial.begin(9600);
  Serial.setTimeout(1000);
  servo_shoulder.attach(SHOULDER_PIN);
  servo_elbow.attach(ELBOW_PIN);
  servo_base.attach(BASE_PIN);
  servo_arm.attach(ARM_PIN);

  servo_shoulder.write(90, 10, true);
  servo_elbow.write(180, 10, true);
  servo_base.write(90, 10, true);
  servo_arm.write(0, 10, true);
  delay(500); 
  Serial.print("Specify the location of the object: degree base and step.\n");
  Serial.println("a - 0 and 1\tb - 0 and 2\tc - 0 and 3\nd - 45 and 1\te - 45 and 2\tf - 45 and 3\ng - 90 and 1\th - 90 and 2\ti - 90 and 3\nj - 135 and 1\tk - 135 and 2\tl - 135 and 3\nm - 180 and 1\tn - 180 and 2\to - 180 and 3\n");
}

void moving(int spoz1,int spoz2, int spoz3, int spoz4)
{
  servo_shoulder.write(arrshoulder[spoz1], 10, true);
  servo_elbow.write(arrelbow[spoz2], 10, true);
  servo_base.write(arrbase[spoz3], 10, true);
  servo_arm.write(arrarm[spoz4], 10, true);
}

void loop()
{
  if (Serial.available() > 0)
  {
    degreeDistance = Serial.read();
    Serial.print(degreeDistance);  
    if (degreeDistance == 'a')
    {
      poz1=6, poz2=3, poz3=0, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=0, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'b')
    {
      poz1=5, poz2=6, poz3=0, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=0, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=5, poz2=6, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 
    } else if(degreeDistance == 'c')
    {
      poz1=3, poz2=8, poz3=0, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=0, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=3, poz2=8, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'd')
    {
      poz1=6, poz2=3, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'e')
    {
      poz1=5, poz2=6, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=5, poz2=6, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 
    } else if(degreeDistance == 'f')
    {
      poz1=3, poz2=8, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=3, poz2=8, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'g')
    {
      poz1=6, poz2=3, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'h')
    {
      poz1=5, poz2=6, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=5, poz2=6, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 
    } else if(degreeDistance == 'i')
    {
      poz1=3, poz2=8, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=3, poz2=8, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'j')
    {
      poz1=6, poz2=3, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'k')
    {
      poz1=5, poz2=6, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=5, poz2=6, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 
    } else if(degreeDistance == 'l')
    {
      poz1=3, poz2=8, poz3=3, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=3, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=1, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=3, poz2=8, poz3=1, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'm')
    {
      poz1=6, poz2=3, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=6, poz2=3, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else if(degreeDistance == 'n') 
    {
      poz1=5, poz2=6, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=5, poz2=6, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=5, poz2=6, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 
    } else if(degreeDistance == 'o') 
    {
      poz1=3, poz2=8, poz3=4, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=4, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);

      poz1=3, poz2=8, poz3=2, poz4=1;
      moving(poz1, poz2, poz3, poz4);
      delay(1000); 

      poz1=3, poz2=8, poz3=2, poz4=0;
      moving(poz1, poz2, poz3, poz4);
      delay(1000);
    } else{
      delay(10000); 
    }
  }
}
