int __fastcall sub_EEE80(signed int a1, char *a2, __int64 a3, double a4)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // r14d
  size_t v9; // rdx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = a2[1];
  v13 = v5;
  if ( v5 <= 11 )
  {
    if ( v5 >= 0 )
      return *(char *)(a3 + 32);
    sub_CB760(a2 + 1, &v13);
    v5 = v13;
    if ( v13 <= 11 )
      return *(char *)(a3 + 32);
  }
  if ( (v5 & 1) == 0 )
    return *(char *)(a3 + 33);
  v6 = (unsigned __int8)*a2;
  v7 = (v5 - 12) >> 1;
  if ( v7 + (unsigned __int8)v6 > a1 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      85306,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    *(_BYTE *)(a3 + 31) = 11;
    return 0;
  }
  v8 = *(_DWORD *)(a3 + 24);
  v9 = v7;
  if ( v8 <= v7 )
    v9 = *(int *)(a3 + 24);
  v10 = memcmp(&a2[v6], *(const void **)(a3 + 16), v9);
  if ( v10 > 0 )
    return *(char *)(a3 + 33);
  if ( v10 )
    return *(char *)(a3 + 32);
  v11 = v7 - v8;
  if ( v11 )
  {
    if ( v11 <= 0 )
      return *(char *)(a3 + 32);
    return *(char *)(a3 + 33);
  }
  if ( *(_WORD *)(a3 + 28) > 1u )
    return sub_EE540(a1, a2, (__int64 *)a3, 1, a4);
  result = *(char *)(a3 + 30);
  *(_BYTE *)(a3 + 34) = 1;
  return result;
}
