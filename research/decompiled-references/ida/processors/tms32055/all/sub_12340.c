__int64 __fastcall sub_12340(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  char v7; // dh
  __int64 flags; // rbp
  int v9; // r12d
  int v10; // r14d
  int v11; // r15d
  __int16 v12; // bp
  __int64 v14; // rax
  __int16 v15; // ax
  int v16; // [rsp+0h] [rbp-58h]
  int v17; // [rsp+0h] [rbp-58h]
  int v18; // [rsp+4h] [rbp-54h]
  int v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+Ch] [rbp-4Ch]
  int v21; // [rsp+10h] [rbp-48h]
  int v22; // [rsp+14h] [rbp-44h]
  int v23; // [rsp+18h] [rbp-40h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 259) = 1;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v18 = 0;
    v17 = 0;
    flags = get_flags_ex();
  }
  else
  {
    v16 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 259) = ~(_BYTE)v16;
    *(_BYTE *)(a1 + 259) &= 1u;
    v6 = get_flags_ex();
    v7 = BYTE1(v16);
    flags = v6;
    v9 = v16 & 0x10;
    v10 = v16 & 0x20;
    v11 = v16 & 0x40;
    v22 = v16 & 0x200;
    v23 = v16 & 0x400;
    v24 = v16 & 0x800;
    v20 = v16 & 0x1000;
    v19 = v16 & 0x2000;
    v21 = v16 & 4;
    v18 = v16 & 8;
    v17 = v16 & 0x80;
    if ( (v7 & 1) != 0 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 40), a3, v6, 1);
    if ( v22 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 1);
    if ( v23 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 1);
    if ( v24 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 160), a3, flags, 1);
    if ( v20 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 200), a3, flags, 1);
    if ( v19 )
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 240), a3, flags, 1);
    if ( v21 )
    {
      sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 40), a3, flags, 0);
      if ( v18 )
        goto LABEL_17;
      goto LABEL_24;
    }
  }
  if ( v18 )
  {
LABEL_17:
    sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 80), a3, flags, 0);
    if ( v9 )
      goto LABEL_18;
    goto LABEL_25;
  }
LABEL_24:
  if ( v9 )
  {
LABEL_18:
    sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 120), a3, flags, 0);
    if ( v10 )
      goto LABEL_19;
    goto LABEL_26;
  }
LABEL_25:
  if ( v10 )
  {
LABEL_19:
    sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 160), a3, flags, 0);
    if ( v11 )
      goto LABEL_20;
    goto LABEL_27;
  }
LABEL_26:
  if ( v11 )
  {
LABEL_20:
    sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 200), a3, flags, 0);
    if ( !v17 )
      goto LABEL_28;
    goto LABEL_21;
  }
LABEL_27:
  if ( v17 )
LABEL_21:
    sub_11F70(a1, a2, (unsigned __int8 *)(a2 + 240), a3, flags, 0);
LABEL_28:
  v12 = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)(v12 - 207) <= 1u )
  {
    if ( *(_BYTE *)(a2 + 41) != 1 || (unsigned __int16)(*(_WORD *)(a2 + 46) - 134) > 1u )
      goto LABEL_31;
    get_item_end();
    split_sreg_range();
    v12 = *(_WORD *)(a2 + 24);
  }
  if ( v12 == 231 && *(_BYTE *)(a2 + 81) == 1 && *(_BYTE *)(a2 + 41) == 5 )
  {
    v15 = *(_WORD *)(a2 + 86);
    if ( v15 == 136 || v15 == 137 || v15 == 138 )
      split_sreg_range();
  }
LABEL_31:
  if ( *(_BYTE *)(a1 + 259) )
  {
    if ( (unsigned __int8)segtype() == 1 )
    {
      *(_BYTE *)(a1 + 259) = 0;
    }
    else if ( *(_BYTE *)(a1 + 259) )
    {
      add_cref();
    }
  }
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 259) )
    {
      v14 = *(unsigned __int16 *)(a2 + 24);
      if ( (_WORD)v14 == 89 )
      {
        if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x43000000000100LL
          && *(_BYTE *)(a2 + 41) == 5
          && get_func() )
        {
LABEL_66:
          add_auto_stkpnt();
        }
      }
      else
      {
        LOWORD(v14) = v14 - 210;
        switch ( v14 )
        {
          case 0LL:
          case 46LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          case 1LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          case 25LL:
          case 27LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          case 26LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          case 28LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          case 47LL:
            if ( get_func() )
              goto LABEL_66;
            break;
          default:
            return 1;
        }
      }
    }
    else
    {
      recalc_spd();
    }
  }
  return 1;
}

