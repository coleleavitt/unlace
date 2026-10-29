__int64 __fastcall sub_61230(__int64 *a1, __int64 a2, signed int a3)
{
  int v4; // eax
  int v5; // r10d
  int v6; // r10d
  __int64 result; // rax
  int v8; // eax
  int v9; // r10d
  unsigned __int64 v10; // r11
  int v11; // r12d
  int v12; // ecx
  signed int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edx
  int v17; // eax
  int v18; // r10d

  v4 = sub_610E0((__int64)a1);
  v6 = v5 - v4;
  result = 0;
  if ( v6 > 0 )
  {
    v8 = sub_60F20(a1, 0);
    v10 = a1[1];
    v11 = v8;
LABEL_3:
    if ( v11 == (_DWORD)v10 )
      return 1;
    while ( 1 )
    {
      v12 = v11;
      v13 = 0;
      if ( v11 >= 0 )
      {
        do
        {
          if ( v12 >= v10 || (*(_QWORD *)(*a1 + 8LL * (v12 >> 6)) & (1LL << v12)) == 0 )
          {
            v13 = v12 - v11;
            goto LABEL_10;
          }
          ++v12;
        }
        while ( v12 >= 0 );
        v12 = 0x80000000;
        v14 = a3 + v11;
        if ( a3 > (int)(0x80000000 - v11) )
        {
LABEL_15:
          v15 = v14 - v12;
          v16 = v9;
          if ( v15 <= v9 )
            v16 = v15;
          sub_60440(a1, v12, v16);
          v17 = sub_610E0((__int64)a1);
          v9 = v18 - v17;
          if ( v9 <= 0 )
            return 1;
          v10 = a1[1];
          goto LABEL_3;
        }
      }
      else
      {
LABEL_10:
        v14 = a3 + v11;
        if ( a3 > v13 )
          goto LABEL_15;
      }
      v11 = sub_60F20(a1, v14);
      if ( v11 == (_DWORD)v10 )
        return 1;
    }
  }
  return result;
}

