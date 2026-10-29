__int64 __fastcall sub_F6590(
        __int64 a1,
        char *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 v13; // r12
  int v14; // r9d
  char *v15; // rax
  __int64 result; // rax
  __int64 v17; // rbp
  __int64 i; // rdx
  int v20; // [rsp+8h] [rbp-40h]
  int v21; // [rsp+Ch] [rbp-3Ch]

  if ( !a2
    || (v13 = a6) != 0 && a8
    || (a8 == 0) != (a7 == 0)
    || (a9 == 0) != (a10 == 0)
    || (unsigned int)(a3 + 1) > 0x80
    || (strlen(a2) & 0x3FFFFFFF) > 0xFF )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      171809,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  v14 = a4 & 7;
  v21 = a4 & 0x380800;
  if ( v14 == 4 )
  {
    v14 = 2;
    goto LABEL_11;
  }
  if ( (a4 & 7u) <= 4 )
  {
    if ( (a4 & 7) != 0 )
      goto LABEL_11;
    goto LABEL_28;
  }
  if ( (a4 & 7) != 5 )
  {
LABEL_28:
    v14 = 1;
    goto LABEL_11;
  }
  result = sub_F6590(a1, (_DWORD)a2, a3, v21 ^ 1u, a5, v13, a7, a8, a9, a10, (__int64)a11);
  if ( (_DWORD)result )
    return result;
  result = sub_F6590(a1, (_DWORD)a2, a3, v21 ^ 2u, a5, v13, a7, a8, a9, a10, (__int64)a11);
  if ( (_DWORD)result )
    return result;
  v14 = 3;
LABEL_11:
  v20 = v14;
  v15 = (char *)sub_E32F0((_BYTE *)a1, a2, a3, v14, 0);
  if ( v15 && (*((_DWORD *)v15 + 1) & 3) == v20 && *v15 == a3 )
  {
    if ( *(_DWORD *)(a1 + 208) )
    {
      sub_F63C0(a1, 5, "unable to delete/modify user-function due to active statements");
      return 5;
    }
    for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 16) )
      *(_BYTE *)(i + 198) = *(_BYTE *)(i + 198) & 0xFC | 1;
  }
  else if ( !v13 )
  {
    result = 0;
    if ( !a8 )
      return result;
  }
  v17 = sub_E32F0((_BYTE *)a1, a2, a3, v20, 1);
  result = 7;
  if ( v17 )
  {
    sub_D1B10(a1, *(_QWORD *)(v17 + 64));
    if ( a11 )
      ++*a11;
    *(_QWORD *)(v17 + 8) = a5;
    *(_BYTE *)v17 = a3;
    *(_QWORD *)(v17 + 64) = a11;
    if ( !v13 )
      v13 = a7;
    *(_DWORD *)(v17 + 4) = v21 ^ 0x200000 | *(_DWORD *)(v17 + 4) & 3;
    *(_QWORD *)(v17 + 32) = a8;
    *(_QWORD *)(v17 + 24) = v13;
    *(_QWORD *)(v17 + 40) = a9;
    *(_QWORD *)(v17 + 48) = a10;
    return 0;
  }
  return result;
}
