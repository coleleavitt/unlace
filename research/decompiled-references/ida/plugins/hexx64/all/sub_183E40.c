unsigned __int64 __fastcall sub_183E40(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r14
  int v6; // r13d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // edx
  unsigned __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 56 )
  {
    if ( !under_debugger )
      sub_383060(0xC967u, a4);
    BUG();
  }
  if ( *(_BYTE *)(a2 + 64) != 8 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a2 + 72);
  v6 = *(_DWORD *)(v5 + 284);
  if ( v6 == 6 || v6 == 36 )
    return 0;
  if ( v6 != 5 && (v6 & 0xFFFFFFDF) != 2 )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v5 + 24) + 160LL), (__int64 *)&v14, 0) )
    return 0xFFFFFFFFLL;
  result = (unsigned int)v14;
  if ( !(_DWORD)v14 )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a2 + 64) != 8 || (v8 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL), v8 != 5) && v8 != 34 )
  {
    if ( a3 )
      return result;
    if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v5 + 24) + 80LL), v15, 0)
      && ((unsigned __int8)(LOBYTE(v15[0]) - 32) <= 0x5Fu || (unsigned __int8)(LOBYTE(v15[0]) - 9) <= 1u) )
    {
      return (unsigned int)v14;
    }
    return 0xFFFFFFFFLL;
  }
  v9 = sub_32FB00(a1, v6);
  v10 = *(_QWORD *)(v5 + 24);
  v11 = v9;
  result = v9 * v14;
  v12 = *(_BYTE *)(v10 + 80) == 3;
  v14 = result;
  if ( v12 )
  {
    v13 = sub_32F220((char *)(v10 + 80), v11);
    result = v14;
    if ( v13 != -1 && v13 < v14 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

