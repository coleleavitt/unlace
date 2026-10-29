__int64 *__fastcall sub_DF230(__int64 *a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  int v12; // esi
  __int16 v13; // ax
  const char *v14; // rdx
  _BYTE *i; // rdx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v7 = a4;
  v8 = *a1;
  v17 = 0;
  v18 = 0;
  v19 = __readfsqword(0x28u);
  v9 = sub_DEC00(v8, 176, (__int64)&v17, 0);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( a4 < 0 || *(_WORD *)(a2 + 52) == a4 )
    {
      *((_DWORD *)v9 + 11) = a3;
      *((_BYTE *)v9 + 1) = 68;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 8) + 16 * v7;
      v12 = a4;
      if ( (*(_BYTE *)(a2 + 48) & 0x20) != 0 )
        v12 = sub_CF5E0(a2, a4);
      *(_DWORD *)(v10 + 44) = v12 + a3 + 1;
      *(_BYTE *)(v10 + 1) = *(_BYTE *)(v11 + 9);
      v13 = *(_WORD *)(v11 + 14);
      if ( (v13 & 0x200) == 0 )
        goto LABEL_7;
      for ( i = *(_BYTE **)v11; *i; ++i )
        ;
      if ( (v13 & 4) != 0 )
      {
        do
        {
          if ( !*++i )
            break;
          ++i;
        }
        while ( *i );
      }
      v14 = i + 1;
      if ( !v14 )
LABEL_7:
        v14 = **(const char ***)(v8 + 16);
      return sub_DF020(a1, v10, v14);
    }
  }
  return (__int64 *)v10;
}
