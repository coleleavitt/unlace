unsigned __int64 __fastcall sub_111970(__int64 a1, unsigned int a2, char a3, unsigned int a4, int *a5)
{
  int v5; // r9d
  unsigned int v8; // r14d
  _QWORD *v9; // r9
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rbx
  _BYTE *v19; // r15
  int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v5 = *a5;
  v23 = __readfsqword(0x28u);
  if ( v5 )
    return __readfsqword(0x28u) ^ v23;
  if ( !a2 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      67708,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    *a5 = 11;
    return __readfsqword(0x28u) ^ v23;
  }
  v8 = 0;
  v9 = (_QWORD *)a1;
  if ( a2 > 1 )
    v8 = sub_CCA10((_DWORD *)(a1 + 52), (_DWORD *)(a1 + 56), a2);
  v12 = v8;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*v9 + 272LL))(*v9, v8, &v22, 0);
  if ( v13 )
  {
    *a5 = v13;
    return __readfsqword(0x28u) ^ v23;
  }
  v14 = v22;
  v15 = 67721;
  if ( !**(_BYTE **)(v22 + 16) )
  {
    v16 = 5 * (a2 - v8) - 5;
    if ( v16 >= 0 )
    {
      v17 = *(_QWORD *)(v22 + 8);
      v18 = v16;
      v19 = (_BYTE *)(v17 + v16);
      if ( *v19 != a3 || a4 != _byteswap_ulong(*(_DWORD *)(v17 + v16 + 1)) )
      {
        v20 = sub_10D290(v22, v12);
        *a5 = v20;
        if ( !v20 )
        {
          *v19 = a3;
          *(_DWORD *)(v17 + v18 + 1) = _byteswap_ulong(a4);
        }
        v14 = v22;
      }
      goto LABEL_13;
    }
    v15 = 67726;
  }
  sub_E8BB0(
    0xBu,
    "%s at line %d of [%.10s]",
    "database corruption",
    v15,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  *a5 = 11;
  v14 = v22;
LABEL_13:
  if ( v14 )
    sub_C36A0(v14);
  return __readfsqword(0x28u) ^ v23;
}
