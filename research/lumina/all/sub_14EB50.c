__int64 *__fastcall sub_14EB50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        __int16 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        char a11,
        signed int a12)
{
  unsigned __int8 **v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // r13d
  int v16; // r14d
  int v17; // r12d
  __int16 v18; // ax
  int v19; // r13d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // al
  __int64 v25; // rdx
  __int16 v26; // dx
  __int64 v27; // rax
  unsigned int v30; // [rsp+18h] [rbp-60h]
  int v31; // [rsp+20h] [rbp-58h]
  char v34; // [rsp+33h] [rbp-45h]

  v12 = (unsigned __int8 **)a2;
  v13 = a1;
  v14 = *(_QWORD *)(a1 + 16);
  v31 = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v31;
  v34 = (*(_DWORD *)(a2 + 48) & 0x80) == 0 ? 30 : 27;
  if ( !a11 )
    sub_E1770((_QWORD *)v14, (*(_DWORD *)(a2 + 48) & 0x80) == 0 ? 30 : 27, a4, v31, a6, a8);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 49LL) & 0x40) != 0 && !*(_BYTE *)(a2 + 63) && (unsigned int)sub_CF7D0(a2, 0, 0) || a3 )
  {
    v15 = sub_14DF00((_QWORD *)a1, a3, nullptr, 0, 3u, a2, a10);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 49LL) & 0x40) != 0 && !*(_BYTE *)(a2 + 63) )
      v15 |= sub_E65E0(a1, a2);
    v16 = *(_DWORD *)(a1 + 56);
    v30 = v16 + 1;
    *(_DWORD *)(a1 + 56) = v16 + *(__int16 *)(a2 + 54) + 1;
    sub_E1710(v14, 80, a6, v16 + 1, 0);
    if ( *(__int16 *)(a2 + 54) > 0 )
    {
      v17 = 0;
      do
      {
        if ( v15 == -1 || v17 <= 31 && _bittest(&v15, v17) )
        {
          v18 = v17;
          if ( (*(_BYTE *)(a2 + 48) & 0x20) != 0 )
            v18 = sub_CF5E0(a2, v17);
          sub_127530((__int64 *)v14, a2, a4, v17, v16 + 2 + v18, a7);
        }
        ++v17;
      }
      while ( *(__int16 *)(a2 + 54) > v17 );
      v13 = a1;
      v12 = (unsigned __int8 **)a2;
    }
    v19 = *(_DWORD *)(v14 + 144);
    sub_14EA60(v13, a3, 128, nullptr, 1, (__int64)v12, v30, a10, v31);
    if ( v19 < *(_DWORD *)(v14 + 144) )
    {
      sub_E1770((_QWORD *)v14, v34, a4, v31, a6, a8);
      a12 = -1;
    }
    sub_145FF0(v13, v12, v30, 0, 0, 0, a7);
  }
  else
  {
    v30 = 0;
  }
  if ( *((_BYTE *)v12 + 63) != 2 )
  {
    sub_12CFE0(v13, (__int64)v12, a4, a5, 0, a12, a7);
    sub_E1710(v14, 130, a4, a9, 0);
    if ( !*(_BYTE *)(v13 + 30) || *v12 && !(unsigned int)sub_CA2B0(*v12, "sqlite_stat1") )
      sub_D04B0(v14, (__int64)v12, 0xFFFFFFFB, v21, v22, v23);
    v24 = a12 != a4 && a12 >= 0;
    if ( a11 )
    {
      v25 = *(int *)(v14 + 144);
      if ( (int)v25 > 0 )
        *(_WORD *)(*(_QWORD *)(v14 + 136) + 24 * v25 - 22) = 4;
      if ( !v24 )
      {
        v26 = 2;
        if ( a11 == 2 )
          goto LABEL_34;
        goto LABEL_37;
      }
    }
    else if ( !v24 )
    {
      goto LABEL_37;
    }
    sub_E1710(v14, 130, a12, 0, 0);
    v26 = 2;
    if ( a11 == 2 )
    {
LABEL_34:
      v27 = *(int *)(v14 + 144);
      if ( (int)v27 > 0 )
        *(_WORD *)(*(_QWORD *)(v14 + 136) + 24 * v27 - 22) = v26;
      goto LABEL_21;
    }
LABEL_37:
    v26 = 0;
    goto LABEL_34;
  }
LABEL_21:
  if ( (*(_BYTE *)(*(_QWORD *)v13 + 49LL) & 0x40) != 0 )
    sub_14E0D0((__int64 *)v13, (__int64)v12, 0, v30, 0, 0);
  sub_14EA60(v13, a3, 128, nullptr, 2, (__int64)v12, v30, a10, v31);
  return sub_E0BB0(v14, v31);
}
