__int64 __fastcall sub_66C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  bool v5; // al
  int v6; // r9d
  unsigned int v7; // r12d
  int v8; // r15d
  unsigned __int8 *v9; // r13
  int j; // ebp
  unsigned __int8 v11; // al
  __int64 v12; // r9
  __int16 v13; // ax
  __int16 v14; // ax
  int v16; // r15d
  char v17; // al
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  bool v20; // al
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  bool v23; // dl
  __int64 sreg; // rdx
  int v25; // ebp
  __int64 insn; // rcx
  unsigned __int16 v27; // ax
  char v28; // al
  unsigned __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // al
  bool v35; // al
  unsigned __int64 *v36; // rax
  __int64 flags; // rax
  bool v38; // al
  int v39; // [rsp+8h] [rbp-1C0h]
  int i; // [rsp+10h] [rbp-1B8h]
  __int64 v41; // [rsp+10h] [rbp-1B8h]
  _BYTE v42[360]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v43; // [rsp+188h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v43 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    v5 = (v6 & 1) == 0;
  }
  else
  {
    v5 = 1;
    v6 = 0;
  }
  *(_BYTE *)(a1 + 257) = v5;
  v7 = 1;
  v8 = 256;
  for ( i = 2; ; i = 1 )
  {
    v9 = (unsigned __int8 *)(a2 + 40);
    for ( j = 0; j != 3; ++j )
    {
      if ( (v6 & v8) != 0 )
      {
        v39 = v6;
        v11 = is_forced_operand();
        sub_6070(a1, a2, v9, v11, v7, v12);
        v6 = v39;
      }
      v8 *= 2;
      v9 += 40;
    }
    v7 = 0;
    v8 = 4;
    if ( i == 1 )
      break;
  }
  v13 = *(_WORD *)(a2 + 24);
  if ( v13 == 128 )
  {
    get_item_end();
    split_sreg_range();
    v14 = *(_WORD *)(a2 + 24);
    if ( v14 != 37 )
      goto LABEL_14;
    goto LABEL_87;
  }
  if ( v13 != 129 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 == 1 )
        goto LABEL_30;
      while ( 1 )
      {
        if ( v16 == 2 )
          goto LABEL_34;
        if ( *(_BYTE *)(a2 + 41) != 2 )
          goto LABEL_29;
        v21 = *(_BYTE *)(a1 + 246);
        if ( v21 <= 1u )
        {
          if ( v21 )
            v22 = *(_QWORD *)(a2 + 56) & 0x7FLL;
          else
            v22 = *(_QWORD *)(a2 + 56) & 0x1FLL;
          v23 = v22 == 3;
LABEL_73:
          v25 = 8;
          if ( v23 )
            goto LABEL_74;
          goto LABEL_29;
        }
        v23 = *(_QWORD *)(a2 + 56) == 4064;
        if ( v21 == 2 )
          goto LABEL_73;
        v16 = 1;
LABEL_30:
        if ( *(_BYTE *)(a2 + 41) != 2 )
          goto LABEL_29;
        v17 = *(_BYTE *)(a1 + 246);
        if ( v17 == 1 )
        {
          v38 = (*(_QWORD *)(a2 + 56) & 0x7FLL) == 10;
        }
        else
        {
          if ( v17 != 2 )
          {
            v16 = 2;
LABEL_34:
            if ( *(_BYTE *)(a2 + 41) != 2 )
              goto LABEL_13;
            v18 = *(_BYTE *)(a1 + 246);
            if ( v18 > 1u )
            {
              if ( v18 != 2 )
                goto LABEL_13;
              v20 = *(_QWORD *)(a2 + 56) == 4089;
            }
            else
            {
              if ( v18 )
                v19 = *(_QWORD *)(a2 + 56) & 0x7FLL;
              else
                v19 = *(_QWORD *)(a2 + 56) & 0x1FLL;
              v20 = v19 == 2;
            }
            if ( !v20 || (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1000000000100LL )
              goto LABEL_13;
            sreg = *(_QWORD *)(a2 + 8);
            v25 = -1;
            break;
          }
          v38 = *(_QWORD *)(a2 + 56) == 4090;
        }
        v25 = 11;
        if ( !v38 )
          goto LABEL_29;
LABEL_74:
        sreg = get_sreg();
        if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1000000000100LL )
          break;
LABEL_29:
        if ( ++v16 == 1 )
          goto LABEL_30;
      }
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 3:
        case 0x42:
          sub_64A0(a1, a2, v25, 0);
          if ( ++v16 != 3 )
            continue;
          goto LABEL_13;
        case 0xC:
        case 0x17:
        case 0x18:
        case 0x1C:
        case 0x22:
        case 0x23:
        case 0x50:
          v41 = sreg;
          qmemcpy(v42, (const void *)a2, sizeof(v42));
          insn = decode_prev_insn();
          if ( insn != -1 )
          {
            insn = -1;
            if ( *(_WORD *)&v42[24] == 29 )
            {
              v27 = *(_WORD *)(a2 + 24);
              if ( v27 > 0x23u )
              {
                insn = v41;
                if ( v27 == 80 )
LABEL_122:
                  insn = *(_QWORD *)&v42[48];
              }
              else if ( v27 <= 0xBu )
              {
LABEL_113:
                insn = v41;
              }
              else
              {
                switch ( *(_WORD *)(a2 + 24) )
                {
                  case 0xC:
                    goto LABEL_122;
                  case 0x17:
                    insn = *(_QWORD *)&v42[48] + v41;
                    break;
                  case 0x18:
                    insn = *(_QWORD *)&v42[48] & v41;
                    break;
                  case 0x1C:
                    insn = *(_QWORD *)&v42[48] | v41;
                    break;
                  case 0x22:
                    insn = v41 - *(_QWORD *)&v42[48];
                    break;
                  case 0x23:
                    insn = *(_QWORD *)&v42[48] ^ v41;
                    break;
                  default:
                    goto LABEL_113;
                }
              }
            }
          }
          goto LABEL_51;
        case 0x11:
        case 0x5B:
          ++v16;
          sub_64A0(a1, a2, v25, (unsigned __int8)(16 * sreg) | (unsigned __int64)((unsigned __int8)sreg >> 4));
          if ( v16 != 3 )
            continue;
          goto LABEL_13;
        case 0x13:
        case 0x14:
        case 0x5E:
        case 0x5F:
          v28 = *(_BYTE *)(a1 + 246);
          if ( v28 )
          {
            if ( v28 != 1 )
            {
              if ( v28 != 2 )
                goto LABEL_52;
              v29 = *(_QWORD *)(a2 + 88);
              if ( v29 > 3 )
                goto LABEL_52;
LABEL_110:
              v30 = 0;
              if ( sreg == -1 )
                sreg = 0;
              goto LABEL_64;
            }
            if ( v25 != 8 )
            {
              if ( v25 != 11 || (v29 = *(_QWORD *)(a2 + 88), v29 - 3 > 1) )
              {
LABEL_52:
                if ( ++v16 == 3 )
                  goto LABEL_13;
                continue;
              }
              goto LABEL_110;
            }
            v29 = *(_QWORD *)(a2 + 88);
            if ( v29 - 5 > 1 )
              goto LABEL_52;
            v30 = 5;
            if ( sreg == -1 )
              sreg = 0;
          }
          else
          {
            v29 = *(_QWORD *)(a2 + 88);
            if ( v29 != 5 )
              goto LABEL_52;
            if ( sreg == -1 )
              sreg = 0;
            v30 = 5 * (v25 == 8);
          }
LABEL_64:
          v31 = 1LL << ((unsigned __int8)v29 - v30);
          v32 = sreg | v31;
          v33 = sreg & ~v31;
          if ( *(_WORD *)(a2 + 24) != 19 )
            v33 = v32;
          ++v16;
          sub_64A0(a1, a2, v25, v33);
          if ( v16 == 3 )
            goto LABEL_13;
          break;
        case 0x1D:
          insn = *(_QWORD *)(a2 + 88);
LABEL_51:
          sub_64A0(a1, a2, v25, insn);
          goto LABEL_52;
        default:
          goto LABEL_52;
      }
    }
  }
  get_item_end();
  split_sreg_range();
LABEL_13:
  v14 = *(_WORD *)(a2 + 24);
  if ( v14 == 37 )
  {
LABEL_87:
    if ( (get_flags_ex() & 0xF00000) == 0 && (*(_QWORD *)(a1 + 232) != -1 || calc_offset_base() != -1) )
    {
      get_default_reftype();
      op_offset();
    }
    v14 = *(_WORD *)(a2 + 24);
  }
LABEL_14:
  if ( v14 == 12 && *(_BYTE *)(a2 + 41) == 2 )
  {
    v34 = *(_BYTE *)(a1 + 246);
    if ( v34 )
    {
      if ( v34 != 1 )
        goto LABEL_15;
      v35 = (*(_QWORD *)(a2 + 56) & 0x7FLL) == 4;
    }
    else
    {
      v35 = (*(_QWORD *)(a2 + 56) & 0x1FLL) == 4;
    }
    if ( v35 )
    {
      qmemcpy(v42, (const void *)a2, sizeof(v42));
      if ( decode_prev_insn() != -1
        && *(_WORD *)&v42[24] == 29
        && (*(_QWORD *)(a1 + 232) != -1 || calc_offset_base() != -1) )
      {
        get_default_reftype();
        op_offset();
      }
    }
  }
LABEL_15:
  if ( (unsigned __int8)sub_65B0(a1, a2) )
  {
    v36 = (unsigned __int64 *)&v42[40];
    *(_QWORD *)&v42[24] = 0;
    *(_QWORD *)&v42[32] = 0;
    memset(v42, 255, 24);
    do
    {
      *(_WORD *)v36 = 0;
      v36 += 5;
      *((_WORD *)v36 - 19) = 0;
      *((_WORD *)v36 - 18) = 0;
      *((_DWORD *)v36 - 2) = 0;
      *((_WORD *)v36 - 17) = 0;
      *((_OWORD *)v36 - 2) = 0;
      *(v36 - 2) = 0;
    }
    while ( v36 != &v43 );
    if ( decode_prev_insn() != -1 && *(_WORD *)&v42[24] == 29 )
      set_op_type();
  }
  if ( *(_WORD *)(a2 + 24) == 117 )
  {
    get_item_end();
    split_sreg_range();
  }
  if ( !*(_BYTE *)(a1 + 257) )
  {
    flags = get_flags_ex();
    *(_BYTE *)(a1 + 257) = sub_7B00(a1, a2, flags);
  }
  if ( (unsigned __int8)segtype() == 1 )
  {
    *(_BYTE *)(a1 + 257) = 0;
  }
  else if ( *(_BYTE *)(a1 + 257) )
  {
    add_cref();
  }
  return 1;
}

