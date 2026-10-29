__int64 __fastcall sub_30890(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        const char *a6,
        unsigned __int8 a7)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v15[0] = a4;
  if ( a4 )
  {
    if ( a3 != -1 )
      qlseek();
    sub_2E3A0(a2, v15, 0x10u, a6, a3, a5);
    v10 = v15[0];
    sub_2A910(a1, v15[0]);
    v11 = *a1;
    if ( a7 )
    {
      sub_12F00((__int64)"Loading %s", a6);
      if ( v10 )
      {
        v12 = 0;
        do
        {
          LODWORD(a6) = ((__int64 (__fastcall *)(__int64))callui)(27);
          if ( (_BYTE)a6 )
            break;
          v13 = v10 - v12;
          if ( v10 - v12 > 0x800 )
            v13 = 2048;
          if ( qlread() != 16 * v13 )
            goto LABEL_13;
          v12 += v13;
          v11 += 16 * v13;
        }
        while ( v12 < v10 );
      }
      LODWORD(a6) = a7;
LABEL_13:
      ((void (__fastcall *)(__int64, __int64, _QWORD))callui)(24, 10, 0);
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

