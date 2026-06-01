__int64 __fastcall sub_32F50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  unsigned __int64 v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v16[0] = a4;
  if ( a4 )
  {
    if ( a3 != -1 )
      qlseek();
    sub_30010(a2, v16, 0x10u, a6, a3, a5);
    v10 = v16[0];
    sub_26A50(a1, v16[0]);
    v11 = *a1;
    if ( a7 )
    {
      v12 = a6;
      sub_19350((__int64)"Loading %s");
      if ( v10 )
      {
        v13 = 0;
        do
        {
          LODWORD(a6) = ((__int64 (__fastcall *)(__int64, __int64))callui)(27, v12);
          if ( (_BYTE)a6 )
            break;
          v12 = v11;
          v14 = v10 - v13;
          if ( v10 - v13 > 0x800 )
            v14 = 2048;
          if ( qlread() != 16 * v14 )
            goto LABEL_13;
          v13 += v14;
          v11 += 16 * v14;
        }
        while ( v13 < v10 );
      }
      LODWORD(a6) = a7;
LABEL_13:
      callui(24, 10, 0);
    }
    else
    {
      LOBYTE(a6) = qlread() == 16 * v10;
    }
  }
  else
  {
    LODWORD(a6) = 1;
  }
  return (unsigned int)a6;
}

