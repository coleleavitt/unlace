__int64 __fastcall sub_36460(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  unsigned __int8 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // al
  int flags; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 func; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-1F0h]
  __int64 v23; // [rsp+10h] [rbp-1E8h]
  __int64 v24[53]; // [rsp+50h] [rbp-1A8h] BYREF

  v24[45] = __readfsqword(0x28u);
  if ( (int)get_auto_state() <= 29 )
    goto LABEL_2;
  v5 = has_jump_or_flow_xref();
  if ( v5 )
    goto LABEL_2;
  v6 = getseg();
  if ( v6 )
    v5 = *(_BYTE *)(v6 + 43) == 0;
  v7 = 0;
  v8 = 16;
  qmemcpy(v24, a2, 0x168u);
  while ( 1 )
  {
    v9 = LOWORD(v24[3]);
    if ( LOWORD(v24[3]) == 159 || (v5 & (LOWORD(v24[3]) == 160)) != 0 )
    {
      if ( !v7 )
      {
        if ( BYTE1(v24[5]) == 5 )
        {
          LOBYTE(v3) = v24[6] <= 0x20uLL;
          return (unsigned int)v3;
        }
LABEL_60:
        LODWORD(v3) = 1;
        return (unsigned int)v3;
      }
LABEL_2:
      LODWORD(v3) = 0;
      return (unsigned int)v3;
    }
    if ( v24[2] != a2[2] && (unsigned __int16)(LOWORD(v24[3]) - 86) <= 2u )
    {
      v20 = sub_7F350(a1, v24, &v24[5]);
      v21 = sub_34DD0(v20, v24[2], 0);
      LOBYTE(v3) = v21 == 100;
      LOBYTE(v21) = v7 == 0;
      LODWORD(v3) = v21 & v3;
      return (unsigned int)v3;
    }
    if ( LOWORD(v24[3]) > 0x8Fu )
    {
      if ( (unsigned __int16)(LOWORD(v24[3]) - 163) > 0x35u )
        goto LABEL_2;
      v15 = 0x28020000000007LL;
      LOWORD(v9) = LOWORD(v24[3]) - 163;
      if ( _bittest64(&v15, v9) )
        goto LABEL_18;
      if ( LOWORD(v24[3]) != 209 )
        goto LABEL_2;
      if ( BYTE1(v24[5]) != 1 )
        goto LABEL_18;
      v11 = BYTE1(v24[10]);
      if ( HIWORD(v24[5]) != 4 || BYTE1(v24[10]) != 5 )
        goto LABEL_20;
      v7 += LODWORD(v24[11]);
      goto LABEL_41;
    }
    if ( LOWORD(v24[3]) > 0x5Bu )
    {
      v14 = 0x9040000001LL;
      if ( !_bittest64(&v14, (unsigned int)LOWORD(v24[3]) - 92) )
      {
        if ( LOWORD(v24[3]) == 134 )
        {
          v7 -= sub_22C00((__int64)v24);
        }
        else
        {
          if ( LOWORD(v24[3]) != 143 )
            goto LABEL_2;
          v7 += sub_22C00((__int64)v24);
        }
        if ( v7 > 0xF )
          goto LABEL_2;
      }
LABEL_18:
      if ( BYTE1(v24[5]) == 4 )
      {
        v16 = v24[7];
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          v16 = SLODWORD(v24[7]);
        if ( (unsigned __int64)(v16 + 0xFFFFFFF) > 0x1FFFFFFD )
          goto LABEL_2;
      }
      v11 = BYTE1(v24[10]);
LABEL_20:
      if ( v11 == 4 )
      {
        v17 = v24[12];
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          v17 = SLODWORD(v24[12]);
        if ( (unsigned __int64)(v17 + 0xFFFFFFF) > 0x1FFFFFFD )
          goto LABEL_2;
      }
      goto LABEL_21;
    }
    if ( (unsigned __int16)(LOWORD(v24[3]) - 6) > 0x26u )
      goto LABEL_2;
    v10 = 0x100400400080LL;
    if ( _bittest64(&v10, LOWORD(v24[3])) )
      goto LABEL_18;
    if ( LOWORD(v24[3]) != 6 )
      break;
    if ( BYTE1(v24[5]) != 1 )
      goto LABEL_18;
    v11 = BYTE1(v24[10]);
    if ( HIWORD(v24[5]) != 4 || BYTE1(v24[10]) != 5 )
      goto LABEL_20;
    v7 -= LODWORD(v24[11]);
LABEL_41:
    if ( v7 > 0xF )
      goto LABEL_2;
LABEL_21:
    flags = get_flags_ex();
    if ( (flags & 0x1000) != 0 )
      goto LABEL_2;
    v13 = flags & 0x600;
    if ( v13 == 1536 )
    {
      if ( (flags & 0x10000000) != 0 )
        goto LABEL_2;
    }
    else if ( ((v13 - 512) & 0xFFFFFFFFFFFFFC00LL) == 0 )
    {
      goto LABEL_2;
    }
    if ( (flags & 0x4000) == 0 )
    {
      if ( (unsigned int)decode_insn() )
      {
        if ( --v8 )
          continue;
      }
    }
    goto LABEL_2;
  }
  if ( LOWORD(v24[3]) != 16 )
    goto LABEL_2;
  v23 = a2[2];
  v22 = v24[2];
  if ( (unsigned int)sub_6E480(a1, v24, 0) != -1 )
    goto LABEL_60;
  if ( v22 == v23 )
    goto LABEL_2;
  sub_7F350(a1, v24, &v24[5]);
  func = get_func();
  LODWORD(v3) = 0;
  v19 = func;
  if ( func )
  {
    get_ea_name();
    get_frame_part();
    LODWORD(v3) = 0;
    if ( (unsigned __int64)(int)v7 <= 0 )
      return *(_QWORD *)(v19 + 16) & 1LL;
  }
  return (unsigned int)v3;
}
