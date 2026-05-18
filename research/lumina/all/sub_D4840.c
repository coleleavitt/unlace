__int64 __fastcall sub_D4840(unsigned __int8 *a1, int a2, unsigned int a3)
{
  int v4; // r15d
  __int64 v5; // r11
  int i; // ecx
  int v8; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( (byte_1BEF00[*a1] & 4) != 0 )
  {
    v8 = 0;
    sub_C6480(a1, &v8);
    return (unsigned __int8)v8;
  }
  else
  {
    v4 = 0;
    if ( a1 )
      v4 = strlen((const char *)a1) & 0x3FFFFFFF;
    v5 = 0;
    for ( i = 2;
          i != v4
       || !a1
       || (unsigned int)sub_CA590((unsigned __int8 *)&aOnoffalseyestr[byte_1BAB50[v5]], a1, v4)
       || a2 && byte_1BAB20[v5] > 1u;
          i = byte_1BAB58[v5] )
    {
      if ( ++v5 == 8 )
        return a3;
    }
    return byte_1BAB20[v5];
  }
}
