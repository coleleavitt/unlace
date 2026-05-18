__int64 __fastcall sub_112DB0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // ecx
  unsigned int v15; // [rsp+Ch] [rbp-4Ch]
  unsigned int v16; // [rsp+1Ch] [rbp-3Ch] BYREF
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( a2 < a3 + (unsigned __int64)a6 )
  {
    v14 = 73421;
LABEL_22:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v14,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v7 = _byteswap_ulong(*(_DWORD *)(a3 + a6 - 4));
  v8 = (*(_DWORD *)(a1 + 56) - 4 + a4 - 1 - (unsigned int)a5) / (*(_DWORD *)(a1 + 56) - 4);
  v9 = v8 - 1;
  if ( !v8 )
    return 0;
  v16 = 0;
  v17[0] = 0;
  if ( v7 <= 1 || v7 > *(_DWORD *)(a1 + 64) )
  {
LABEL_21:
    v14 = 73438;
    goto LABEL_22;
  }
  while ( 1 )
  {
    if ( v9 )
    {
      result = sub_EC110(a1, v7, v17, &v16);
      if ( (_DWORD)result )
        return result;
    }
    v11 = v17[0];
    if ( v17[0] || (v11 = sub_CC2C0(a1, v7), (v17[0] = v11) != 0) )
    {
      if ( *(_WORD *)(*(_QWORD *)(v11 + 112) + 54LL) != 1 )
      {
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          73458,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        if ( !v17[0] )
          return 11;
        v12 = *(_QWORD *)(v17[0] + 112LL);
        result = 11;
        if ( v12 )
        {
          sub_C36A0(v12);
          return 11;
        }
        return result;
      }
    }
    result = sub_1129C0(a1, v11, v7);
    if ( v17[0] )
    {
      v13 = *(_QWORD *)(v17[0] + 112LL);
      if ( v13 )
      {
        v15 = result;
        sub_C36A0(v13);
        result = v15;
      }
    }
    if ( (_DWORD)result )
      return result;
    v7 = v16;
    if ( !v9 )
      return 0;
    v16 = 0;
    v17[0] = 0;
    if ( v7 > 1 )
    {
      --v9;
      if ( *(_DWORD *)(a1 + 64) >= v7 )
        continue;
    }
    goto LABEL_21;
  }
}
