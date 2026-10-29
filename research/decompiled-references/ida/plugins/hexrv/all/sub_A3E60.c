__int64 __fastcall sub_A3E60(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // eax
  unsigned int v4; // ebp
  _DWORD *v5; // rsi
  int v6; // eax
  int v8; // eax
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 == 53 )
  {
    if ( !*(_DWORD *)(a1 + 76) )
      goto LABEL_6;
    v8 = sub_9CEC0(a1);
    v1 = *(_QWORD *)(a1 + 56);
    if ( !v8 )
    {
      if ( !v1 )
        return 0;
      goto LABEL_6;
    }
    if ( !v1 )
      goto LABEL_22;
    if ( !*(_DWORD *)v1 )
    {
      sub_9EFC0(a1, v1);
      v1 = *(_QWORD *)(a1 + 56);
      if ( !v1 )
        goto LABEL_22;
    }
    goto LABEL_25;
  }
  if ( v2 <= 0x35 )
  {
    if ( v2 - 42 > 0xA || *(_BYTE *)(v1 + 64) != 7 )
      goto LABEL_6;
    v10 = *(_QWORD *)(a1 + 64);
    v11 = *(unsigned int *)(v1 + 72);
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
      sub_9C7F0();
    v12 = sub_10DC00(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11), 0);
    v13 = sub_10DC00(*(_QWORD *)(a1 + 8), 0);
    v14 = *(_QWORD *)(a1 + 56);
    if ( v12 != v13 )
    {
      if ( v14 && (unsigned __int8)sub_155B00(a1, *(_QWORD *)(a1 + 56), 0) )
        goto LABEL_7;
      return 0;
    }
    sub_155680(v14, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, *(_QWORD *)(a1 + 56), 0);
    v15 = *(_DWORD **)(a1 + 56);
    if ( *v15 == 43 )
    {
      sub_136E00(*(_QWORD *)(a1 + 8));
      v15 = *(_DWORD **)(a1 + 56);
    }
    sub_9EFC0(a1, (__int64)v15);
    sub_66F40(a1, (unsigned int)(*(_DWORD *)(a1 + 72) + 1), v16, v17);
    v18 = *(_DWORD *)(a1 + 24);
    v1 = *(_QWORD *)(a1 + 56);
    BYTE1(v18) &= ~2u;
    LOBYTE(v18) = v18 | 0x80;
    *(_DWORD *)(a1 + 24) = v18;
    if ( !v1 )
    {
LABEL_22:
      v4 = 1;
LABEL_11:
      sub_A3060(a1);
      return v4;
    }
    goto LABEL_25;
  }
  if ( v2 == 55 && *(_BYTE *)(v1 + 32) == 7 && *(_DWORD *)(a1 + 72) + 1 == *(_DWORD *)(v1 + 40) )
  {
    **(_DWORD **)(a1 + 64) |= 0x400u;
    sub_9EFC0(a1, *(_QWORD *)(a1 + 56));
    v9 = *(_DWORD **)(a1 + 56);
    if ( !v9 )
      goto LABEL_22;
    if ( (unsigned int)(*v9 - 56) > 1 )
    {
      if ( !(unsigned __int8)sub_155B00(a1, *(_QWORD *)(a1 + 56), 0) )
        goto LABEL_22;
LABEL_26:
      v4 = 2;
      goto LABEL_8;
    }
    if ( (unsigned __int8)sub_118290(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
      sub_66EE0(a1, 0);
    v1 = *(_QWORD *)(a1 + 56);
    if ( !v1 )
      goto LABEL_22;
LABEL_25:
    if ( !(unsigned __int8)sub_155B00(a1, v1, 0) )
      goto LABEL_22;
    goto LABEL_26;
  }
LABEL_6:
  if ( (unsigned __int8)sub_155B00(a1, v1, 0) )
  {
LABEL_7:
    v4 = 1;
LABEL_8:
    v5 = *(_DWORD **)(a1 + 56);
    if ( !*v5 )
      sub_9EFC0(a1, (__int64)v5);
    v6 = *(_DWORD *)(a1 + 24);
    BYTE1(v6) &= ~2u;
    LOBYTE(v6) = v6 | 0x80;
    *(_DWORD *)(a1 + 24) = v6;
    goto LABEL_11;
  }
  return 0;
}

