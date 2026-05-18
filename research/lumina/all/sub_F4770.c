__int64 *__fastcall sub_F4770(__int64 *a1, _QWORD *a2, double a3)
{
  int *v3; // rbx
  int v4; // r13d
  __int64 *v5; // r15
  _DWORD *v6; // rbx
  __int64 v7; // r14
  const char **v8; // r13
  char v9; // dl
  __int64 v11; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+18h] [rbp-40h]

  v3 = (int *)a2[9];
  if ( !v3 )
    return sub_E3110((_BYTE *)*a1, 1, 1);
  v4 = *v3;
  v13 = *a1;
  v5 = sub_E3110((_BYTE *)*a1, *v3 + 1, 1);
  if ( v5 && v4 > 0 )
  {
    v6 = v3 + 2;
    v7 = 0;
    v11 = (unsigned int)(v4 - 1) + 1LL;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v6 + 5LL) & 1) != 0 )
      {
        v8 = (const char **)sub_F3950((__int64)a1, *(unsigned __int8 **)v6, a3);
      }
      else
      {
        v12 = *(unsigned __int8 **)v6;
        v8 = (const char **)sub_F4460((__int64)a1, a2 + 4, a2[10], (unsigned int)*((unsigned __int16 *)v6 + 10) - 1, a3);
        if ( !v8 )
          v8 = *(const char ***)(v13 + 16);
        *(_QWORD *)v6 = sub_DF020(a1, (__int64)v12, *v8);
      }
      v5[v7 + 4] = (__int64)v8;
      v9 = *((_BYTE *)v6 + 16);
      v6 += 6;
      *(_BYTE *)(v5[3] + v7++) = v9;
    }
    while ( v7 != v11 );
  }
  return v5;
}
