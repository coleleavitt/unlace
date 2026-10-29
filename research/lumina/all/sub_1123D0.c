__int64 __fastcall sub_1123D0(__int64 a1, unsigned __int32 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r13d
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v9; // r12d
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int i; // eax
  unsigned int v13; // [rsp+8h] [rbp-80h]
  unsigned int v14; // [rsp+Ch] [rbp-7Ch]
  char v15; // [rsp+2Fh] [rbp-59h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int32 v17; // [rsp+34h] [rbp-54h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a3;
  v19[1] = __readfsqword(0x28u);
  v6 = 0;
  if ( a3 > 1 )
    v6 = sub_CCA10((_DWORD *)(a1 + 52), (_DWORD *)(a1 + 56), a3);
  if ( v4 == v6 || (unsigned int)dword_241470 / *(_DWORD *)(a1 + 52) + 1 == v4 )
    goto LABEL_10;
  v7 = 101;
  if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL) + 36LL) )
    return v7;
  v7 = sub_EBFF0(a1, v4, &v15, &v16);
  if ( v7 )
    return v7;
  if ( v15 == 1 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      70591,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  if ( v15 == 2 )
  {
    if ( !a4 )
    {
      v7 = sub_110FD0(a1, (__int64)v19, (unsigned __int32 *)&v18, v4, 1);
      if ( v7 )
        return v7;
      if ( v19[0] )
        sub_C36A0(*(_QWORD *)(v19[0] + 112LL));
      goto LABEL_11;
    }
    return 0;
  }
  v7 = sub_C3B70((_QWORD *)a1, v4, &v18);
  if ( !v7 )
  {
    v11 = a2;
    if ( a4 )
      v11 = 0;
    v14 = v11;
    if ( !a4 )
      LOBYTE(v7) = 2;
    for ( i = sub_110FD0(a1, (__int64)v19, &v17, v11, v7); ; i = sub_110FD0(a1, (__int64)v19, &v17, v14, v7) )
    {
      if ( i )
      {
        if ( v18 )
        {
          v13 = i;
          sub_C36A0(*(_QWORD *)(v18 + 112));
          return v13;
        }
        return i;
      }
      if ( v19[0] )
        sub_C36A0(*(_QWORD *)(v19[0] + 112LL));
      if ( !a4 || a2 >= v17 )
        break;
    }
    v7 = sub_111DF0((_QWORD *)a1, v18, v15, v16, v17, a4);
    if ( v18 )
      sub_C36A0(*(_QWORD *)(v18 + 112));
    if ( !v7 )
    {
LABEL_10:
      if ( !a4 )
      {
LABEL_11:
        v9 = (unsigned int)dword_241470 / *(_DWORD *)(a1 + 52) + 1;
        do
        {
          while ( 1 )
          {
            v10 = v4 - 1;
            if ( v9 != v4 - 1 )
              break;
            v4 = v9;
          }
          v4 = 0;
          if ( v10 > 1 )
            v4 = sub_CCA10((_DWORD *)(a1 + 52), (_DWORD *)(a1 + 56), v10);
        }
        while ( v10 == v4 );
        *(_BYTE *)(a1 + 35) = 1;
        *(_DWORD *)(a1 + 64) = v10;
        return 0;
      }
      return 0;
    }
  }
  return v7;
}
