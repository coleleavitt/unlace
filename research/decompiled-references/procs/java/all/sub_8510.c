__int64 __fastcall sub_8510(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  char v5; // al
  __int64 v7; // rsi
  const char *v8; // r12
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  _BYTE v14[4]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int16 v15; // [rsp+12h] [rbp-36h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 33193);
  if ( !v4 )
    return 0;
  v5 = *(_BYTE *)(a3 + 41);
  v7 = *(_QWORD *)(a3 + 56);
  if ( v5 == 2 )
  {
    if ( *(_BYTE *)(a3 + 72) )
      return 0;
    v10 = *(unsigned __int16 *)(a3 + 24);
    v8 = "Add 8-bit signed const to";
    if ( (_WORD)v10 != 132 )
    {
      v8 = "Return";
      if ( (_WORD)v10 != 169 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v8 = "Push";
        v12 = *(_DWORD *)(v11 + 104);
        if ( v10 >= v12
          && v10 < *(_DWORD *)(v11 + 108)
          && (*(_BYTE *)(*(_QWORD *)(v11 + 112) + 16LL * (v10 - v12) + 8) & 4) != 0 )
        {
          v8 = "Pop";
        }
      }
    }
  }
  else
  {
    if ( v5 )
      return 0;
    if ( *(char *)(a3 + 72) < 0 )
      return 0;
    v7 -= *(_QWORD *)(a1 + 33165);
    if ( (int)v7 < 0 )
      return 0;
    v8 = "Push";
    if ( *(_WORD *)(a3 + 24) > 0x3Au )
      v8 = "Pop";
  }
  if ( netnode_supval(v4, v7, v14, 10, 83) != 10 )
    return 0;
  if ( !(unsigned __int8)sub_1B440(a1, v15, a1 + 196, 0x8000, 13) )
    return 0;
  v13 = sub_8450(a2, (__int64)"%s %s", v8, (const char *)(a1 + 196))[1];
  if ( !v13 )
    return 0;
  return v13 - 1;
}
