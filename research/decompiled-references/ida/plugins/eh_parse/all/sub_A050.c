__int64 __fastcall sub_A050(_QWORD *a1, char a2, unsigned int a3)
{
  char v3; // r14
  char v6; // al
  unsigned __int8 v7; // al
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 byte; // r15
  int v13; // eax
  unsigned __int64 v14; // rdi
  int v15; // r13d
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // al
  unsigned __int64 v19; // r13
  bool v20; // di
  __int64 v21; // r15
  bool v22; // cf
  unsigned __int64 v23; // r13
  _DWORD *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-48h]
  unsigned int v26; // [rsp+8h] [rbp-40h]

  v3 = a2 & 0x70;
  v25 = a1[3];
  if ( (a2 & 0x70) == 0x50 )
  {
    v13 = *(_DWORD *)(*a1 + 128LL);
    v14 = a1[3];
    v15 = v25;
    if ( v13 >= 0 )
    {
      v24 = (_DWORD *)getnseg((unsigned int)v13);
      v14 = a1[3];
      if ( v24 )
        v15 = v25 - *v24;
    }
    if ( (v15 & (a3 - 1)) != 0 )
    {
      v16 = a1[2];
      v14 += a3 - (v15 & (a3 - 1));
      a1[3] = v14;
      if ( v16 >= v14 )
      {
LABEL_13:
        v6 = a2 & 7;
        if ( (a2 & 7) != 1 )
          goto LABEL_4;
        goto LABEL_14;
      }
    }
    else
    {
      v16 = a1[2];
      if ( v16 >= v14 )
        goto LABEL_13;
    }
    a1[3] = v16;
    return 0;
  }
  v6 = a2 & 7;
  if ( (a2 & 7) != 1 )
  {
    if ( a2 == -1 )
      return 0;
LABEL_4:
    v7 = v6 - 2;
    v8 = a3;
    if ( v7 <= 2u )
      v8 = dword_275A8[v7];
    if ( (unsigned int)(v8 - 1) > 7 )
      return 0;
    v9 = a1[2];
    v10 = a1[3];
    if ( (int)v9 - (int)v10 < (unsigned int)v8 )
      return 0;
    if ( (_DWORD)v8 == 4 )
    {
      byte = (unsigned int)((__int64 (*)(void))get_dword)();
    }
    else if ( (unsigned int)v8 > 4 )
    {
      if ( (_DWORD)v8 != 8 )
        goto LABEL_51;
      byte = ((__int64 (*)(void))get_qword)();
    }
    else
    {
      if ( (_DWORD)v8 != 1 )
      {
        if ( (_DWORD)v8 == 2 )
        {
          byte = (unsigned __int16)((__int64 (*)(void))get_word)();
          goto LABEL_34;
        }
LABEL_51:
        byte = 0;
LABEL_36:
        v22 = __CFADD__(v10, v8);
        v23 = v10 + v8;
        if ( v9 >= v23 && !v22 )
          v9 = v23;
        a1[3] = v9;
        goto LABEL_21;
      }
      byte = (unsigned __int8)get_byte();
    }
LABEL_34:
    v10 = a1[3];
    v9 = a1[2];
    if ( (a2 & 8) != 0 )
      byte = ((1LL << (8 * (unsigned __int8)v8 - 1)) ^ byte) - (1LL << (8 * (unsigned __int8)v8 - 1));
    goto LABEL_36;
  }
  v16 = a1[2];
  v14 = a1[3];
LABEL_14:
  v17 = 0;
  byte = 0;
  v18 = 0;
  while ( v14 < v16 )
  {
    v26 = v17;
    v19 = v14 + 1;
    v18 = get_byte();
    v17 = v26 + 7;
    byte |= (unsigned __int64)(v18 & 0x7F) << v26;
    if ( v18 >= 0 || v17 > 0x3F )
      goto LABEL_19;
    v16 = a1[2];
    ++v14;
  }
  v19 = v14;
LABEL_19:
  a1[3] = v19;
  v20 = (a2 & 8) != 0 && v17 <= 0x3F;
  if ( v20 && (v18 & 0x40) != 0 )
  {
    byte |= -1LL << v17;
    if ( v3 != 16 )
      goto LABEL_23;
    goto LABEL_46;
  }
LABEL_21:
  if ( v3 == 16 )
  {
    if ( !byte )
      return 0;
LABEL_46:
    byte = *(_QWORD *)(*a1 + 136LL) & (byte + v25);
    v20 = byte != 0;
    goto LABEL_23;
  }
  v20 = byte != 0;
LABEL_23:
  if ( a2 >= 0 || !v20 )
    return byte;
  v21 = *(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 16LL) & byte;
  if ( a3 != 8 )
  {
    if ( a3 == 4 )
      return (unsigned int)get_dword(v21);
    if ( a3 == 2 )
      return (unsigned __int16)get_word(v21);
    return 0;
  }
  return get_qword(v21);
}

