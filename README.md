# Arduino-Smiley ![arduinoThumb](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/3546fb55-9369-4be6-94d4-7dda9561134d) ![C++-Logo wine](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/302622b4-3737-42e1-8740-c97751707820)

## Preview
![Psmile1](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/aa1a83d8-7a39-46a2-8e8e-204b9bb74d16)

## CODE
### SMILEY 1
### ![smile1](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/74784e4e-2363-407f-baac-39986e1c1d4a)


```C
void image1a()
{
	byte smiley1a[] =
{
   B00101111,  //Smiley #1
   B00101111,
   B01101111,
   B11000000,
   B11000000,
   B01101111,
   B00101111,
   B00101111
};
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,smiley1a[i]);
  }
}
```
### SMILEY 2
### ![smile2](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/4ae08884-7079-4a72-b72b-d1cfb7699899)

```C
void image1b()
{
	byte smiley1b[] =
{
   B00100100,  // Smiley #2
   B00100100,
   B01100100,
   B11000000,
   B11000000,
   B01100100,
   B00100100,
   B00100100
};
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,smiley1b[i]);
  }
}
```
### SMILEY 3
### ![smile3](https://github.com/ICAREMAKER/Arduino-Smiley/assets/107696317/ef4fc7df-f679-4c58-94d8-258620575c46)

```C
void image1c()
{
	byte smiley1c[] =
{
   B00001001,  // Smiley #3
   B00001111,
   B01000110,
   B10100000,
   B10100000,
   B01001001,
   B00001111,
   B00000110
};
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,smiley1c[i]);
  }
}
```
