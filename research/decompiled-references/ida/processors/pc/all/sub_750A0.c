__int64 __fastcall sub_750A0(__int128 a1, unsigned __int8 *a2, __int64 a3, char a4, char *a5, double a6)
{
  unsigned __int8 *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  char *v10; // r15
  char *v11; // kr00_8
  __int64 v12; // kr08_8
  unsigned __int8 *v13; // kr20_8
  unsigned __int8 *v14; // rbx
  unsigned __int128 v15; // kr30_16
  char v18; // al
  int v19; // edx
  __int64 word; // r14
  __int16 v21; // ax
  __int64 v23; // r14
  __int16 v24; // ax
  unsigned __int16 v25; // cx
  char v26; // dl
  __int16 v27; // ax
  __int16 v28; // ax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 (__fastcall ***v36)(_QWORD); // rbp
  __int64 sreg; // rax
  int v38; // eax
  unsigned __int16 v39; // ax
  int v40; // eax
  int flags; // eax
  __int64 not_tail; // [rsp+8h] [rbp-80h]
  char v43; // [rsp+8h] [rbp-80h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  char v45[17]; // [rsp+30h] [rbp-58h] BYREF
  char v46; // [rsp+41h] [rbp-47h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v11 = v10;
  v12 = v8;
  v13 = v6;
  v14 = a2;
  v15 = a1;
  switch ( a2[1] )
  {
    case 1u:
      switch ( *((_WORD *)a2 + 3) )
      {
        case 4:
        case 0x18:
          goto LABEL_20;
        case 0x1D:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
          sreg = get_sreg();
          break;
        case 0x1E:
          sreg = (unsigned __int16)**((_WORD **)&a1 + 1);
          break;
        default:
          goto LABEL_76;
      }
      if ( (*(_BYTE *)(a3 + 9) & 1) == 0 )
      {
        *(_DWORD *)(a3 + 8) = 65;
        *(_QWORD *)a3 = sreg;
      }
      if ( *((char **)&a1 + 1) != a5 )
        qmemcpy(a5, *((const void **)&a1 + 1), 0x168u);
      *(_QWORD *)&a5[40 * *v14 + 48] = sreg;
      return 2;
    case 2u:
      if ( a2[32] )
        goto LABEL_22;
      v18 = *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL);
      if ( !v18
        || ((v19 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 28LL), (v19 & 0x10) == 0) || v18 != 33)
        && ((v19 & 8) == 0 || v18 != 34) )
      {
        if ( *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) != 92 )
          goto LABEL_9;
      }
      v43 = a4;
      get_flags_ex();
      if ( !(unsigned __int8)is_off() )
      {
        a4 = v43;
LABEL_9:
        if ( !a4 )
        {
          word = sub_6DA00(a1, *((__int64 *)&a1 + 1), (__int64)v14);
          if ( *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) == 92 )
            goto LABEL_65;
          if ( (unsigned __int8)is_loaded() )
          {
            sub_22600();
            if ( (v45[2] & 1) == 0 || !(unsigned __int8)sub_6DB70(a1, word) )
            {
              v21 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL);
              if ( v21 == 88 || v21 == 18 )
              {
                v45[0] = 1;
                if ( sub_6DEB0(a1, *((__int64 *)&a1 + 1), (__int64)v14, *((__int64 *)&a1 + 1), v45) != -1 && !v45[0] )
                {
                  add_cref();
                  if ( (get_flags_ex() & 0xF00000) == 0 )
                  {
                    get_default_reftype();
                    op_offset();
                  }
                  flags = get_flags_ex();
                  if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 && (get_aflags() & 0x800) != 0 )
                    auto_apply_type();
                }
              }
              sub_22600();
              if ( (v45[2] & 1) != 0 || !(unsigned __int8)xrefblk_t_first_to() )
                goto LABEL_120;
              while ( v46 != 2 )
              {
                if ( !(unsigned __int8)xrefblk_t_next_to() )
                  goto LABEL_120;
              }
            }
          }
        }
LABEL_20:
        *(_DWORD *)(a3 + 8) = 512;
        return 0;
      }
LABEL_22:
      *(_DWORD *)(a3 + 8) = 512;
      v23 = sub_74AA0(a1, v14, 3, a6);
      v24 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      if ( v24 != 88 && v24 != 18 )
        return 0;
      a3 = 2 * (unsigned int)(v24 == 88) + 17;
      if ( v23 != -1 )
      {
        *((_QWORD *)&a1 + 1) = 4;
        *(_QWORD *)&a1 = v23;
        if ( (get_flags_ex() & 0x600) == 0x400 )
        {
          a5 = v45;
          sub_22600();
          if ( (v45[2] & 1) == 0
            || (*((_QWORD *)&a1 + 1) = v23, *(_QWORD *)&a1 = v45, !(unsigned __int8)xrefblk_t_first_to()) )
          {
LABEL_94:
            if ( sub_6DBE0((__int64)v14) )
              add_cref();
            return 0;
          }
          while ( v46 != 2 )
          {
            *(_QWORD *)&a1 = v45;
            if ( !(unsigned __int8)xrefblk_t_next_to() )
              goto LABEL_94;
          }
        }
      }
      if ( (unsigned int)get_auto_state() != 40 || v14[1] != 4 )
        return 0;
      if ( v14[32] )
      {
        v25 = *(_WORD *)(*((_QWORD *)&v15 + 1) + 24LL);
        v26 = ((char)v14[33] >> 3) & 7;
        if ( (*(_DWORD *)(*((_QWORD *)&v15 + 1) + 28LL) & 0x10) != 0
          && (*(_BYTE *)(*((_QWORD *)&v15 + 1) + 33LL) & 2) != 0 )
        {
          if ( v25 > 0x5C0u )
          {
            if ( v25 > 0x5F1u )
            {
              if ( (unsigned __int16)(v25 - 1532) > 0xFu )
                return 0;
            }
            else if ( v25 <= 0x5EDu )
            {
              return 0;
            }
          }
          else if ( v25 <= 0x5BCu )
          {
            if ( v25 > 0x378u )
            {
              if ( (unsigned __int16)(v25 - 993) > 3u )
                return 0;
            }
            else if ( v25 <= 0x374u )
            {
              return 0;
            }
          }
          v27 = v26 | 8;
          goto LABEL_36;
        }
        v27 = v26;
        if ( v25 > 0x5C0u )
        {
          if ( v25 > 0x5F1u )
          {
            if ( (unsigned __int16)(v25 - 1532) <= 0xFu )
              goto LABEL_36;
          }
          else if ( v25 > 0x5EDu )
          {
            goto LABEL_36;
          }
        }
        else
        {
          if ( v25 > 0x5BCu )
            goto LABEL_36;
          if ( v25 <= 0x378u )
          {
            if ( v25 <= 0x374u )
              goto LABEL_110;
LABEL_36:
            if ( (*(_BYTE *)(*((_QWORD *)&v15 + 1) + 273LL) & 0x10) != 0 )
              v27 |= 0x10u;
            v28 = sub_22710(*((__int64 *)&v15 + 1), v27);
            if ( v28 != 4 && v28 != -1 )
              return 0;
            goto LABEL_40;
          }
          if ( (unsigned __int16)(v25 - 993) <= 3u )
            goto LABEL_36;
        }
LABEL_110:
        if ( v26 != 4 )
          return 0;
        goto LABEL_40;
      }
      v38 = *(_DWORD *)(*((_QWORD *)&v15 + 1) + 28LL) & 0x1018;
      if ( v38 != 4096 && v38 != 8 )
        goto LABEL_40;
      v39 = *((_WORD *)v14 + 3);
      if ( v39 != 0xFFFF )
      {
        if ( v39 > 7u )
        {
          sub_69250(a1, *((_QWORD *)&a1 + 1), a6);
          goto LABEL_146;
        }
        if ( dword_1598C0[v39] == -1 || v39 <= 3u )
          return 0;
LABEL_40:
        if ( (int)sub_63A20(*((__int64 *)&v15 + 1), (__int64)v14) <= 1 )
          return 0;
        v29 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 16LL);
        v30 = *((_QWORD *)v14 + 2) + 16LL * **((_QWORD **)&v15 + 1);
        if ( v30 != v29 )
        {
          if ( v30 == -1 )
            v29 = -1;
          else
            v29 &= v30;
        }
        v31 = getseg();
        if ( !v31 || (*(_BYTE *)(v31 + 44) & 0x40) != 0 || (get_flags_ex() & 0x600) == 0 )
          return 0;
        not_tail = v29;
        if ( (get_flags_ex() & 0x600) == 0x200 )
          not_tail = prev_not_tail();
        if ( not_tail == -1 )
          return 0;
        v32 = get_flags_ex();
        if ( (v32 & 0x600) != 0x400 || (v32 & 0xF0000000) != 0x60000000 )
          return 0;
        get_strid();
        if ( !(unsigned __int8)get_type_by_tid() )
        {
LABEL_53:
          clear_tinfo_t();
          return 0;
        }
LABEL_146:
        *(_QWORD *)v45 = 0;
        tinfo_get_innermost_udm();
        if ( v45[0] )
        {
          clear_tinfo_t();
          clear_tinfo_t();
          if ( !v44 )
          {
            if ( sub_6DBE0((__int64)v14) )
            {
              if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
              {
                add_cref();
                get_flags_ex();
                if ( !(unsigned __int8)is_defarg() )
                {
                  get_default_reftype();
                  op_offset();
                }
              }
            }
          }
          return 0;
        }
        clear_tinfo_t();
        goto LABEL_53;
      }
      sub_69270();
LABEL_120:
      if ( v14[5] )
        word = (unsigned __int16)get_word();
      else
        word = (unsigned int)(char)get_byte();
LABEL_65:
      if ( (*(_BYTE *)(a3 + 9) & 1) == 0 )
      {
        *(_DWORD *)(a3 + 8) = 1;
        *(_QWORD *)a3 = word;
      }
      if ( *((char **)&v15 + 1) != a5 )
        qmemcpy(a5, *((const void **)&v15 + 1), 0x168u);
      *(_QWORD *)&a5[40 * *v14 + 48] = word;
      return 2;
    case 3u:
    case 4u:
      goto LABEL_22;
    case 5u:
      sub_69C70(*((__int64 *)&a1 + 1), *a2);
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
      {
        sub_7E650(*((_QWORD *)&a1 + 1), v14);
        insn_add_off_drefs();
      }
      if ( (*(_BYTE *)(a3 + 9) & 1) == 0 )
      {
        v33 = *((_QWORD *)v14 + 1);
        *(_DWORD *)(a3 + 8) = 1;
        *(_QWORD *)a3 = (unsigned __int16)v33;
      }
      return 1;
    case 6u:
    case 7u:
      if ( !a4 && !(unsigned __int8)has_insn_feature() )
      {
        sub_7F350(a1, *((_QWORD *)&a1 + 1), v14);
        insn_add_cref();
      }
      v34 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 28LL);
      word = *((_QWORD *)v14 + 2);
      if ( (v34 & 0x1018) != 0x1010 )
      {
        if ( (v34 & 0x1008) == 0 || (v34 & 0x1018) == 0x1008 )
          word = (unsigned int)word;
        else
          word = (unsigned __int16)word;
      }
      goto LABEL_65;
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0x10u:
      goto LABEL_20;
    default:
      v14 = v13;
      a3 = v12;
      a5 = v11;
      v15 = __PAIR128__(v9, v7);
      if ( under_debugger )
        BUG();
      interr();
LABEL_76:
      if ( !a4 && ((*(_WORD *)(*((_QWORD *)&v15 + 1) + 24LL) - 86) & 0xFFFD) == 0 )
      {
        v45[0] = 0;
        if ( sub_72980(v15, *((__int64 *)&v15 + 1), v45) != -1 && !v45[0] )
        {
          add_cref();
          v40 = get_flags_ex();
          if ( (~(_WORD)v40 & 0x600) == 0 && (v40 & 0x10000000) != 0 && (get_aflags() & 0x800) != 0 )
            auto_apply_type();
        }
      }
      v35 = sub_85970(v15);
      v36 = (__int64 (__fastcall ***)(_QWORD))v35;
      if ( !v35 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35) )
        goto LABEL_20;
      word = (**v36)(v36);
      goto LABEL_65;
  }
}
