__int64 __fastcall sub_116AC0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rsi
  char *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)(a4 + 20) = 1;
  if ( a2 + a3 > (__int64)(*(unsigned int *)(*(_QWORD *)(a1 + 32) + 64LL)
                         * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 32) + 52LL)) )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      79819,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v7 = a3 + 1;
  if ( (int)v7 > *(_DWORD *)(a4 + 32) )
  {
    result = sub_E0020(a4, v7, 0);
    if ( (_DWORD)result )
      return result;
    v8 = *(char **)(a4 + 8);
  }
  else
  {
    v8 = *(char **)(a4 + 40);
    *(_QWORD *)(a4 + 8) = v8;
  }
  result = sub_1159D0(a1, a2, a3, v8, 0);
  if ( (_DWORD)result )
  {
    if ( (*(_WORD *)(a4 + 20) & 0x9000) != 0 || (v10 = *(unsigned int *)(a4 + 32), (_DWORD)v10) )
    {
      v14 = result;
      sub_C9690(a4, a2, v10, v11, v12, v13);
      return v14;
    }
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 8) + a3) = 0;
    *(_DWORD *)(a4 + 16) = a3;
    *(_WORD *)(a4 + 20) = 16;
  }
  return result;
}
