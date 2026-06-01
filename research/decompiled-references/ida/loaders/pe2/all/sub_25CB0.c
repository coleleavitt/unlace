char __fastcall sub_25CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r12d
  int v10; // r13d
  char result; // al
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v8 = *(unsigned int *)(a1 + 16);
  v16 = __readfsqword(0x28u);
  v9 = a3;
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 1 )
      sub_DB80((__int64)"Bad condition: %d", v8, a3, a4, a5, a6, v14);
    if ( *(_DWORD *)(a1 + 28) != 45 )
    {
      v10 = *(_DWORD *)(a2 + 4);
      result = sub_239A0(*(_QWORD *)a1, &v14, a2, a3, *(_BYTE *)(a1 + 20));
      if ( !result )
        return result;
      v12 = *(_QWORD *)a1;
      if ( v9 < v10 - 1 )
      {
        if ( !(unsigned __int8)sub_239A0(v12, &v15, a2, v9 + 1, *(_BYTE *)(a1 + 20)) )
          return 0;
      }
      else
      {
        v15 = *(_DWORD *)(v12 + 40LL * *(int *)(a1 + 28) + 76) + 1;
      }
      v13 = *(_DWORD *)(a1 + 24);
      if ( v13 >= v14 )
        return v13 < v15;
      return 0;
    }
    if ( under_debugger )
      BUG();
    interr();
    return sub_25E00(20021);
  }
  else
  {
    result = sub_239A0(*(_QWORD *)a1, &v15, a2, a3, *(_BYTE *)(a1 + 20));
    if ( result )
      return *(_DWORD *)(a1 + 24) == v15;
  }
  return result;
}

