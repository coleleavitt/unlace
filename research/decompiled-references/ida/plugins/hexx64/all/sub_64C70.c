__int64 __fastcall sub_64C70(__int64 *a1, __int64 a2, signed int a3, double a4)
{
  int v5; // eax
  int v6; // r10d
  int v7; // r10d
  __int64 result; // rax
  int v9; // eax
  int v10; // r10d
  unsigned __int64 v11; // r11
  int v12; // r12d
  int v13; // ecx
  signed int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // r10d

  v5 = sub_64B20((__int64)a1);
  v7 = v6 - v5;
  result = 0;
  if ( v7 > 0 )
  {
    v9 = sub_64960(a1, 0);
    v11 = a1[1];
    v12 = v9;
LABEL_3:
    if ( v12 == (_DWORD)v11 )
      return 1;
    while ( 1 )
    {
      v13 = v12;
      v14 = 0;
      if ( v12 >= 0 )
      {
        do
        {
          if ( v13 >= v11 || (*(_QWORD *)(*a1 + 8LL * (v13 >> 6)) & (1LL << v13)) == 0 )
          {
            v14 = v13 - v12;
            goto LABEL_10;
          }
          ++v13;
        }
        while ( v13 >= 0 );
        v13 = 0x80000000;
        v15 = a3 + v12;
        if ( a3 > (int)(0x80000000 - v12) )
        {
LABEL_15:
          v16 = v15 - v13;
          v17 = v10;
          if ( v16 <= v10 )
            v17 = v16;
          sub_63E80(a1, v13, v17, a4);
          v18 = sub_64B20((__int64)a1);
          v10 = v19 - v18;
          if ( v10 <= 0 )
            return 1;
          v11 = a1[1];
          goto LABEL_3;
        }
      }
      else
      {
LABEL_10:
        v15 = a3 + v12;
        if ( a3 > v14 )
          goto LABEL_15;
      }
      v12 = sub_64960(a1, v15);
      if ( v12 == (_DWORD)v11 )
        return 1;
    }
  }
  return result;
}

