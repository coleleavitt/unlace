char __fastcall sub_2C820(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char result; // al
  __int64 v5; // r12
  __int64 v8; // r14
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  result = a1[1208];
  if ( result )
  {
    v5 = a2;
    v8 = (__int64)(a1 + 1208);
    if ( !a1[1184] )
      return (unsigned int)sub_26D50(v8, v5, a3, a4) == 0;
    if ( a1[2768] )
    {
      if ( (unsigned int)sub_27110((__int64)(a1 + 1208)) )
        return (unsigned int)sub_26D50(v8, v5, a3, a4) == 0;
      a1[2768] = 0;
    }
    if ( !(unsigned int)sub_271C0(v8, 1, a2, v9) && v9[0] != -1 )
      v5 = v9[0];
    return (unsigned int)sub_26D50(v8, v5, a3, a4) == 0;
  }
  return result;
}

