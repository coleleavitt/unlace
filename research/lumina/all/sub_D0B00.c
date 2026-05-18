__int64 __fastcall sub_D0B00(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  int *v4; // rsi
  int *v5; // r13
  int *v6; // rsi
  int *v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  int v11; // r15d
  __int64 v12; // rsi
  int *v13; // rax
  int *v14; // rsi

  v2 = 0;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      v4 = (int *)v3[4];
      v5 = (int *)v3[5];
      if ( v4 )
        v2 |= sub_D0930((__int64)a1, v4);
      v6 = (int *)v3[7];
      if ( v6 )
        v2 |= sub_D0930((__int64)a1, v6);
      v7 = (int *)v3[9];
      if ( v7 )
        v2 |= sub_D0930((__int64)a1, v7);
      v8 = v3[6];
      if ( v8 )
        v2 |= sub_D0AB0(a1, v8);
      v9 = v3[8];
      if ( v9 )
        v2 |= sub_D0AB0(a1, v9);
      if ( v5 && *v5 > 0 )
      {
        v11 = 0;
        do
        {
          v2 |= sub_D0B00(a1, *(_QWORD *)&v5[26 * v11 + 12]);
          if ( (v5[26 * v11 + 17] & 0x20000) == 0 )
          {
            v12 = *(_QWORD *)&v5[26 * v11 + 20];
            if ( v12 )
              v2 |= sub_D0AB0(a1, v12);
          }
          v13 = &v5[26 * v11];
          if ( (*((_BYTE *)v13 + 69) & 4) != 0 )
          {
            v14 = *((int **)v13 + 12);
            if ( v14 )
              v2 |= sub_D0930((__int64)a1, v14);
          }
          ++v11;
        }
        while ( *v5 > v11 );
      }
      v3 = (_QWORD *)v3[10];
    }
    while ( v3 );
  }
  return v2;
}
