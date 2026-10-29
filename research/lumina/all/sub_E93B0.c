__int64 __fastcall sub_E93B0(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // r10
  int v4; // ebp
  unsigned int v5; // r13d
  __int64 v7; // rbx
  int v8; // r14d
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 *v12; // rsi
  bool v13; // cf
  char v14; // r15
  char v15; // cl
  int v16; // r9d
  unsigned __int16 v17; // ax
  unsigned int v18; // r11d
  unsigned __int8 v19; // di
  int v20; // r9d
  unsigned __int8 *v21; // r8
  __int64 v22; // r14
  _BYTE *v23; // r8
  int v25; // ecx
  _BYTE *v26; // rax
  unsigned __int16 v27; // [rsp+8h] [rbp-40h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch]
  char v29; // [rsp+Ch] [rbp-3Ch]

  v3 = a2;
  v4 = a3;
  v5 = a2 + a3;
  v7 = *(_QWORD *)(a1 + 80);
  v27 = a3;
  LOWORD(v28) = a2 + a3;
  v8 = *(unsigned __int8 *)(a1 + 9);
  v9 = *(unsigned __int8 *)(a1 + 9) + 1;
  if ( *(_BYTE *)(v7 + (__int16)v9 + 1) || *(_BYTE *)(v7 + (__int16)v9) )
  {
    while ( 1 )
    {
      v17 = _byteswap_ushort(*(_WORD *)(v7 + v9));
      v11 = v17;
      if ( a2 <= v17 )
        break;
      v16 = v9;
      if ( v17 < v9 + 4 )
      {
        v19 = 0;
        if ( v17 )
        {
          v25 = 68530;
          goto LABEL_30;
        }
        goto LABEL_18;
      }
      v9 = _byteswap_ushort(*(_WORD *)(v7 + v9));
    }
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
    if ( v17 > v18 - 4 )
    {
      v25 = 68535;
      goto LABEL_30;
    }
    if ( v17 && v17 <= v5 + 3 )
    {
      if ( v17 < v5 )
      {
        v25 = 68547;
        goto LABEL_30;
      }
      v28 = v17 + ((*(unsigned __int8 *)(v7 + v17 + 2) << 8) | *(unsigned __int8 *)(v7 + v17 + 3));
      if ( v18 < v28 )
      {
        v25 = 68550;
        goto LABEL_30;
      }
      v16 = v9;
      v19 = v17 - v5;
      v27 = v17 + _byteswap_ushort(*(_WORD *)(v7 + v17 + 2)) - a2;
      v11 = _byteswap_ushort(*(_WORD *)(v7 + v17));
    }
    else
    {
      v16 = v9;
      v19 = 0;
    }
LABEL_18:
    if ( (unsigned __int8)v8 + 1 < v16 )
    {
      v20 = (*(unsigned __int8 *)(v7 + v9 + 3) | (*(unsigned __int8 *)(v7 + v9 + 2) << 8)) + v16;
      if ( a2 <= v20 + 3 )
      {
        if ( a2 < v20 )
        {
          v25 = 68563;
          goto LABEL_30;
        }
        v3 = v9;
        v19 = a2 + v19 - v20;
        v27 = v28 - v9;
      }
    }
    v10 = (unsigned __int8)v8;
    v21 = (unsigned __int8 *)(v7 + (unsigned __int8)v8 + 7);
    if ( *v21 >= v19 )
    {
      *v21 -= v19;
      goto LABEL_4;
    }
    v25 = 68569;
    goto LABEL_30;
  }
  v10 = (unsigned __int8)v8;
  v11 = 0;
LABEL_4:
  v12 = (unsigned __int16 *)(v7 + v10 + 5);
  v13 = v3 < _byteswap_ushort(*v12);
  if ( !(v13 | (v3 == _byteswap_ushort(*v12))) )
  {
    v14 = v11;
    *(_BYTE *)(v7 + v9 + 1) = v3;
    *(_BYTE *)(v7 + v9) = HIBYTE(v3);
    v15 = HIBYTE(v11);
    goto LABEL_25;
  }
  if ( v13 )
  {
    v25 = 68578;
    goto LABEL_30;
  }
  if ( v9 != v8 + 1 )
  {
    v25 = 68579;
LABEL_30:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v25,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  *(_BYTE *)(v7 + v10 + 2) = v11;
  v14 = v11;
  *(_BYTE *)(v7 + v10 + 1) = HIBYTE(v11);
  v15 = HIBYTE(v11);
  *(_BYTE *)v12 = BYTE1(v28);
  *(_BYTE *)(v7 + v10 + 6) = v28;
LABEL_25:
  v22 = v3;
  v23 = (_BYTE *)(v7 + v3);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 72) + 40LL) & 0xC) != 0 )
  {
    v29 = v15;
    v26 = memset((void *)(v7 + v3), 0, v27);
    v15 = v29;
    v23 = v26;
  }
  *v23 = v15;
  *(_BYTE *)(v7 + v22 + 1) = v14;
  *(_BYTE *)(v7 + v22 + 3) = v27;
  *(_BYTE *)(v7 + v22 + 2) = HIBYTE(v27);
  *(_DWORD *)(a1 + 20) += v4;
  return 0;
}
