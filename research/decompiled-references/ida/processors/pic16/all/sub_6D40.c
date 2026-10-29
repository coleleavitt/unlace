__int64 __fastcall sub_6D40(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  __int16 v10; // ax
  __int64 flags; // rax
  int v13; // ebp
  int v14; // r12d
  int v15; // r14d
  __int64 func; // rbp
  char v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // [rsp+4h] [rbp-54h]
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+Ch] [rbp-4Ch]

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(_DWORD *)(v7 + 104);
  if ( v8 >= v9 )
  {
    if ( v8 < *(_DWORD *)(v7 + 108) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v9) + 8);
      *(_BYTE *)(a1 + 281) = 0;
      *(_BYTE *)(a1 + 282) = ~(_BYTE)v15;
      *(_BYTE *)(a1 + 282) &= 1u;
      if ( (v15 & 0x100) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a6, a7, a3);
      if ( (v15 & 0x200) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a6, a7, a3);
      v14 = v15 & 0x80;
      v13 = v15 & 0x20000;
      v20 = v15 & 0x10;
      v21 = v15 & 0x20;
      v22 = v15 & 0x40;
      if ( (v15 & 0x400) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a6, a7, a3);
      if ( (v15 & 0x800) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 160), 1, a6, a7, a3);
      a7 = v15 & 0x1000;
      if ( (v15 & 0x1000) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 200), 1, a6, v15 & 0x1000, a3);
      a6 = v15 & 0x2000;
      if ( (v15 & 0x2000) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 240), 1, v15 & 0x2000, a7, a3);
      if ( (v15 & 0x80000) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 280), 1, a6, a7, a3);
      if ( (v15 & 4) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a6, a7, a3);
      if ( (v15 & 8) != 0 )
        sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a6, a7, a3);
    }
    else
    {
      v13 = 0;
      v14 = 0;
      v20 = 0;
      *(_WORD *)(a1 + 281) = 256;
      v21 = 0;
      v22 = 0;
    }
    if ( v20 )
      sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a6, a7, a3);
    if ( v21 )
      sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 160), 0, a6, a7, a3);
    if ( v22 )
      sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 200), 0, a6, a7, a3);
    if ( v14 )
      sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 240), 0, a6, a7, a3);
    if ( v13 )
      sub_6AB0(a1, a2, (unsigned __int8 *)(a2 + 280), 0, a6, a7, a3);
  }
  else
  {
    *(_WORD *)(a1 + 281) = 256;
  }
  v10 = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)(v10 - 71) > 3u )
  {
    if ( !*(_BYTE *)(a1 + 281) )
      goto LABEL_13;
  }
  else
  {
    *(_BYTE *)(a1 + 281) = 1;
  }
  if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 )
    goto LABEL_6;
  func = get_func();
  v10 = *(_WORD *)(a2 + 24);
  if ( !func )
  {
LABEL_13:
    if ( v10 != 62 )
      goto LABEL_14;
    goto LABEL_7;
  }
  v17 = *(_BYTE *)(a2 + 41);
  v18 = a2 + 40;
  if ( v17 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( (*(_QWORD *)v18 & 0xFFFF00000000FF00LL) == 0xF000000000300LL )
        v19 += (-(__int64)((*(_BYTE *)(v18 + 32) & 1) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 2;
      v18 += 40;
      if ( !*(_BYTE *)(v18 + 1) )
      {
        switch ( *(_WORD *)(a2 + 24) )
        {
          case 9:
            if ( v17 == 5 )
            {
              if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 15 )
                v19 = *(_QWORD *)(a2 + 48);
            }
            else if ( *(_BYTE *)(a2 + 81) == 5
                   && v17 == 1
                   && *(_WORD *)(a2 + 46) == 15
                   && *(_BYTE *)(a2 + 121) == 1
                   && *(_WORD *)(a2 + 126) == 15 )
            {
              v19 = *(_QWORD *)(a2 + 88);
            }
            goto LABEL_60;
          case 0xC:
          case 0xD:
            if ( v17 == 1 && *(_WORD *)(a2 + 46) == 15 && *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 15 )
              goto LABEL_58;
            goto LABEL_60;
          case 0x10:
            if ( v17 == 1 && *(_WORD *)(a2 + 46) == 15 && *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 15 )
              goto LABEL_58;
            goto LABEL_60;
          case 0x13:
            if ( v17 == 5 )
            {
              if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 15 )
                v19 = -*(_QWORD *)(a2 + 48);
            }
            else if ( *(_BYTE *)(a2 + 81) == 5
                   && v17 == 1
                   && *(_WORD *)(a2 + 46) == 15
                   && *(_BYTE *)(a2 + 121) == 1
                   && *(_WORD *)(a2 + 126) == 15 )
            {
              v19 = -*(_QWORD *)(a2 + 88);
            }
            goto LABEL_60;
          case 0x47:
            goto LABEL_62;
          case 0x48:
          case 0x49:
            goto LABEL_58;
          case 0x4A:
            goto LABEL_56;
          default:
            goto LABEL_57;
        }
      }
    }
  }
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 9:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x13:
      goto LABEL_14;
    case 0x47:
LABEL_62:
      v19 = *(_QWORD *)(a2 + 48) + 2LL;
LABEL_60:
      if ( !v19 )
        goto LABEL_14;
      break;
    case 0x48:
    case 0x49:
      break;
    case 0x4A:
LABEL_56:
      get_func();
      v19 = -get_spd();
LABEL_57:
      if ( !v19 )
        goto LABEL_6;
      break;
    default:
      goto LABEL_13;
  }
LABEL_58:
  add_auto_stkpnt();
LABEL_6:
  if ( *(_WORD *)(a2 + 24) != 62 )
    goto LABEL_14;
LABEL_7:
  if ( !*(_BYTE *)(a2 + 81) )
  {
    *(_BYTE *)(a1 + 282) = 0;
    goto LABEL_9;
  }
LABEL_14:
  if ( *(_BYTE *)(a1 + 282) )
  {
    if ( (unsigned __int8)segtype() == 1 )
      goto LABEL_10;
    goto LABEL_16;
  }
LABEL_9:
  flags = get_flags_ex();
  *(_BYTE *)(a1 + 282) = sub_80B0(a1, a2, flags);
  if ( (unsigned __int8)segtype() == 1 )
  {
LABEL_10:
    *(_BYTE *)(a1 + 282) = 0;
    return 1;
  }
LABEL_16:
  if ( *(_BYTE *)(a1 + 282) )
    add_cref();
  return 1;
}

