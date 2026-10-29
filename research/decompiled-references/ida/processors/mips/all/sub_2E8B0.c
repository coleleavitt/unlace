__int64 __fastcall sub_2E8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v6; // ecx
  int v7; // ebp
  unsigned int *v8; // r15
  unsigned int dword; // eax
  unsigned int v10; // edx
  int v11; // esi
  unsigned int *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // esi
  __int16 v16; // ax
  unsigned __int64 v17; // rdx
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int8 *v23; // r14
  __int64 v24; // r13
  _DWORD *v25; // r9
  unsigned __int8 *v26; // r15
  char v27; // al
  __int64 i; // r13
  char v29; // al
  __int64 flags; // rbp
  unsigned __int16 v31; // ax
  int auto_state; // eax
  unsigned int v34; // r13d
  unsigned __int64 v35; // rax
  const char *v36; // rcx
  int v37; // eax
  char v38; // dl
  int v39; // ecx
  __int64 not_tail; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // r8
  char v43; // dl
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  char v57; // r14
  __int64 v58; // r13
  unsigned __int64 v59; // r15
  char *v60; // rcx
  __int64 v61; // r13
  unsigned int v62; // eax
  int v63; // esi
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // edx
  int v67; // ecx
  __int64 v68; // [rsp+8h] [rbp-4E0h]
  __int64 func; // [rsp+8h] [rbp-4E0h]
  _DWORD *v70; // [rsp+8h] [rbp-4E0h]
  bool v71; // [rsp+17h] [rbp-4D1h]
  unsigned int *v72; // [rsp+18h] [rbp-4D0h]
  __int64 v73; // [rsp+20h] [rbp-4C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-4C0h]
  __int128 v75; // [rsp+38h] [rbp-4B0h]
  __int64 v76; // [rsp+48h] [rbp-4A0h]
  __int64 v77; // [rsp+50h] [rbp-498h]
  __int64 v78; // [rsp+58h] [rbp-490h]
  __int64 v79; // [rsp+60h] [rbp-488h]
  __int64 v80; // [rsp+68h] [rbp-480h]
  __int64 v81; // [rsp+70h] [rbp-478h]
  __int64 v82; // [rsp+78h] [rbp-470h]
  __int64 v83; // [rsp+80h] [rbp-468h]
  __int128 v84; // [rsp+88h] [rbp-460h]
  _BYTE v85[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v86; // [rsp+4A8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v86 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(v3 + 104);
  if ( v6 <= v4 && *(_DWORD *)(v3 + 108) > v4 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v6) + 8);
    v71 = (v7 & 1) == 0;
  }
  else
  {
    v71 = 1;
    v7 = 0;
  }
  v8 = (unsigned int *)&unk_59840;
  v68 = *(_QWORD *)(a2 + 16);
  while ( 1 )
  {
    dword = get_dword((char *)v8 + v68 - (_QWORD)&unk_59840);
    v10 = *v8;
    v11 = 0;
    while ( (_BYTE)dword == (_BYTE)v10 || (_BYTE)v10 == 0xFF )
    {
      dword >>= 8;
      ++v11;
      v10 >>= 8;
      if ( v11 == 4 )
        goto LABEL_37;
    }
    if ( v11 != 3 || (_BYTE)v10 != 36 || (_BYTE)dword != 52 )
      break;
LABEL_37:
    if ( ++v8 == (unsigned int *)&unk_59850 )
      goto LABEL_25;
  }
  v72 = (unsigned int *)&unk_59830;
  v12 = (unsigned int *)&unk_59830;
  while ( 2 )
  {
    v13 = get_dword((char *)v12 + v68 - (_QWORD)&unk_59830);
    v14 = *v12;
    v15 = 0;
    while ( (_BYTE)v14 == 0xFF || (_BYTE)v13 == (_BYTE)v14 )
    {
      v13 >>= 8;
      ++v15;
      v14 >>= 8;
      if ( v15 == 4 )
        goto LABEL_67;
    }
    if ( v15 == 3 && (_BYTE)v14 == 36 && (_BYTE)v13 == 52 )
    {
LABEL_67:
      if ( &unk_59840 != (_UNKNOWN *)++v12 )
        continue;
LABEL_25:
      add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
    }
    else
    {
      if ( (unsigned __int8)segtype(*(_QWORD *)(a2 + 16)) == 1 || sub_2E540(a1, *(_QWORD *)(a2 + 16)) )
        break;
      v16 = *(_WORD *)(a2 + 24);
      if ( v16 == 202 )
      {
        if ( (*(_BYTE *)(a2 + 33) & 4) != 0 )
          goto LABEL_43;
LABEL_24:
        if ( !v71 )
          goto LABEL_43;
        goto LABEL_25;
      }
      v17 = *(_QWORD *)(a2 + 16);
      if ( v17 > 0xB && v16 == 116 )
      {
        if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 25 )
        {
          v59 = v17 - 12;
          v60 = (char *)&unk_59840;
          v61 = v17 - (_QWORD)&unk_59840 - 12;
          while ( 2 )
          {
            v70 = v60;
            v62 = get_dword(&v60[v61]);
            v63 = 0;
            v64 = *v70;
            while ( (_BYTE)v62 == (_BYTE)v64 || (_BYTE)v64 == 0xFF )
            {
              v62 >>= 8;
              ++v63;
              v64 >>= 8;
              if ( v63 == 4 )
                goto LABEL_160;
            }
            if ( v63 != 3 || (_BYTE)v64 != 36 || (_BYTE)v62 != 52 )
            {
              while ( 2 )
              {
                v65 = get_dword(v59);
                v66 = *v72;
                v67 = 0;
                while ( (_BYTE)v66 == 0xFF || (_BYTE)v65 == (_BYTE)v66 )
                {
                  v65 >>= 8;
                  ++v67;
                  v66 >>= 8;
                  if ( v67 == 4 )
                    goto LABEL_168;
                }
                if ( v67 != 3 || (_BYTE)v66 != 36 || (_BYTE)v65 != 52 )
                  goto LABEL_79;
LABEL_168:
                ++v72;
                v59 += 4LL;
                if ( &unk_59840 != (_UNKNOWN *)v72 )
                  continue;
                goto LABEL_26;
              }
            }
LABEL_160:
            v60 = (char *)(v70 + 1);
            if ( v70 + 1 != (_DWORD *)&unk_59850 )
              continue;
            goto LABEL_26;
          }
        }
        goto LABEL_24;
      }
LABEL_79:
      if ( v71 )
        goto LABEL_25;
    }
    break;
  }
LABEL_26:
  v18 = *(_WORD *)(a2 + 24);
  if ( v18 == 204 || v18 == 838 )
  {
    if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 28 )
    {
LABEL_76:
      sub_2D480(a1, a2);
      goto LABEL_43;
    }
    if ( v18 == 204 && (*(_BYTE *)(a2 + 33) & 4) != 0 )
      sub_2C0C0(a1, a2);
  }
  else if ( (v18 == 205 || v18 == 495 || v18 == 135 || v18 == 31 || v18 == 33)
         && *(_BYTE *)(a2 + 41) == 1
         && *(_WORD *)(a2 + 46) == 28 )
  {
    goto LABEL_76;
  }
LABEL_43:
  if ( (unsigned __int8)getinf_flag(10, 4096) && (unsigned int)get_auto_state() == 40
    || (unsigned __int8)getinf_flag(10, 512) && (unsigned int)get_auto_state() == 40 )
  {
    func = get_func(*(_QWORD *)(a2 + 16));
  }
  else
  {
    func = 0;
  }
  if ( (unsigned __int8)getinf_flag(10, 4096) )
  {
    auto_state = get_auto_state();
    v22 = *(_QWORD *)(a2 + 16);
    if ( auto_state != 40 || !func )
      goto LABEL_48;
    if ( !(unsigned __int8)recalc_spd_for_basic_block(func, *(_QWORD *)(a2 + 16)) )
      sub_2C790(a1, func, a2);
  }
  v22 = *(_QWORD *)(a2 + 16);
LABEL_48:
  v23 = (unsigned __int8 *)(a2 + 40);
  v24 = 0;
  v25 = dword_598A0;
  v26 = (unsigned __int8 *)(a2 + 40);
  do
  {
    if ( (dword_598A0[v24] & v7) != 0 )
    {
      v27 = is_forced_operand(v22, (unsigned int)v24, v19, v20, v21, dword_598A0);
      sub_2B460(a1, a2, v26, v27, 1u);
      v22 = *(_QWORD *)(a2 + 16);
      v25 = dword_598A0;
    }
    ++v24;
    v26 += 40;
  }
  while ( v24 != 5 );
  for ( i = 0; i != 5; ++i )
  {
    if ( (dword_598C0[i] & v7) != 0 )
    {
      v29 = is_forced_operand(v22, (unsigned int)i, v19, v20, v21, v25);
      sub_2B460(a1, a2, v23, v29, 0);
      v22 = *(_QWORD *)(a2 + 16);
    }
    v23 += 40;
  }
  flags = get_flags_ex(v22, 0);
  if ( (flags & 0x400) != 0 )
  {
    if ( (unsigned int)get_auto_state() != 40 )
    {
LABEL_58:
      v31 = *(_WORD *)(a2 + 24);
      goto LABEL_59;
    }
    v43 = getinf_flag(10, 4);
    v31 = *(_WORD *)(a2 + 24);
    if ( v43 )
    {
      if ( v31 != 116 && v31 != 547 )
      {
        if ( v31 != 518 )
        {
          if ( v31 > 0x206u )
            goto LABEL_113;
LABEL_133:
          if ( v31 != 517 && v31 != 114 )
          {
LABEL_59:
            if ( v31 == 119 )
            {
              if ( (flags & 0x800) != 0 )
                goto LABEL_62;
              v35 = *(_QWORD *)(a2 + 48);
              v36 = "Fill";
              if ( v35 != 20 )
                v36 = off_6A0A0[(int)(v35 >> 2)];
              qsnprintf(v85, 1024, "%s (%s cache)", v36, off_6A0E0[*(_QWORD *)(a2 + 48) & 3LL]);
              set_cmt(*(_QWORD *)(a2 + 16), v85, 0);
              v31 = *(_WORD *)(a2 + 24);
            }
LABEL_60:
            if ( ((v31 - 31) & 0xFFFD) != 0 )
            {
              if ( (unsigned __int16)(v31 - 131) > 1u && v31 != 126 )
                goto LABEL_62;
              v34 = 1;
              if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x40000000000400LL )
                goto LABEL_62;
            }
            else
            {
              if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x40000000000100LL || *(_BYTE *)(a2 + 121) != 5 )
                goto LABEL_62;
              v34 = 2;
            }
            if ( *(_DWORD *)(a1 + 260) || !sub_1F290(a1, *(_QWORD *)(a2 + 16)) )
            {
              if ( (unsigned __int8)is_defarg(flags, v34) )
                goto LABEL_62;
              not_tail = *(_QWORD *)(a2 + 16);
              v41 = not_tail;
            }
            else
            {
              if ( get_first_fcref_to(*(_QWORD *)(a2 + 16)) != -1 )
              {
                if ( (unsigned __int8)is_off(flags, v34) )
                  clr_op_type(*(_QWORD *)(a2 + 16), v34);
                goto LABEL_62;
              }
              if ( (unsigned __int8)is_defarg(flags, v34) )
                goto LABEL_62;
              not_tail = prev_not_tail(*(_QWORD *)(a2 + 16));
              v41 = *(_QWORD *)(a2 + 16);
            }
            v42 = not_tail & 0xFFFFFFFFFFFFFFFCLL;
            if ( *(_WORD *)(a2 + 24) == 126 )
              v42 = not_tail & 0xFFFFFFFFFFFFFFF8LL;
            op_offset(v41, v34, 130, -1, v42, 0);
LABEL_62:
            if ( (unsigned __int8)getinf_flag(10, 512)
              && (unsigned int)get_auto_state() == 40
              && (unsigned int)*(unsigned __int16 *)(a2 + 24) - 30 <= 3
              && !(unsigned __int8)is_defarg(flags, 2)
              && *(_BYTE *)(a2 + 81) == 1 )
            {
              v37 = *(unsigned __int16 *)(a2 + 86);
              if ( v37 == 29 )
              {
                v39 = *(unsigned __int16 *)(a2 + 46);
                if ( v39 == 29 )
                  goto LABEL_63;
                if ( !func || (*(_BYTE *)(func + 16) & 0x10) == 0 )
                {
LABEL_97:
                  if ( (unsigned __int8)insn_create_stkvar(a2, a2 + 120, *(_QWORD *)(a2 + 128), 0) )
                    op_stkvar(*(_QWORD *)(a2 + 16), 2);
                  goto LABEL_63;
                }
                v38 = *(_BYTE *)(a2 + 33);
              }
              else
              {
                if ( !func )
                  goto LABEL_63;
                if ( (*(_BYTE *)(func + 16) & 0x10) == 0 )
                  goto LABEL_63;
                v38 = *(_BYTE *)(a2 + 33);
                if ( v37 != ((v38 & 4) == 0 ? 30 : 17) )
                  goto LABEL_63;
                v39 = *(unsigned __int16 *)(a2 + 46);
                if ( v39 == 29 )
                  goto LABEL_63;
              }
              if ( ((v38 & 4) == 0 ? 30 : 17) != v39 )
                goto LABEL_97;
            }
LABEL_63:
            if ( *(_DWORD *)(a1 + 344) == 1 && (unsigned int)get_auto_state() == 200 && (flags & 0xC000) != 0x4000 )
            {
              v44 = sub_2C8C0(a1, *(_QWORD *)(a2 + 16));
              if ( v44 )
              {
                v45 = *(_QWORD *)(a2 + 16);
                v46 = v44;
                set_name(v45, v44, 6144);
                v47 = *(_QWORD *)(a2 + 16);
                v50 = num_flag(v45, v46, v48, v49);
                set_op_type(v47, v50, 1);
                v51 = *(_QWORD *)(a2 + 16);
                v54 = num_flag(v47, v50, v52, v53);
                set_op_type(v51 + 4, v54, 1);
              }
            }
            return 1;
          }
          goto LABEL_135;
        }
        goto LABEL_139;
      }
      v55 = *(_QWORD *)(a2 + 16);
      v79 = 0xFFFFFFFFLL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_595E0);
      v75 = -1;
      v73 = 0x800000;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v80 = 0;
      v81 = 2;
      v82 = -1;
      v83 = 0;
      v84 = 0;
      if ( get_switch_info(&v73, v55) > 0 && ((v73 & 0x800000) == 0 || (int)v81 <= 1 || (v73 & 0x10) == 0) )
      {
        delete_switch_table(*(_QWORD *)(a2 + 16), &v73);
        v56 = sub_29D90(0x28u, &v73, a2);
        if ( v56 == -1 )
        {
          del_switch_info(*(_QWORD *)(a2 + 16));
        }
        else if ( v56 == 1 )
        {
          set_switch_info(*(_QWORD *)(a2 + 16), &v73);
          create_switch_table(*(_QWORD *)(a2 + 16), &v73);
        }
      }
      if ( v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v83);
      }
      v31 = *(_WORD *)(a2 + 24);
    }
    if ( v31 != 518 )
    {
      if ( v31 > 0x206u )
      {
        if ( v31 != 547 )
        {
LABEL_113:
          if ( v31 > 0x223u )
          {
            if ( (unsigned __int16)(v31 - 835) > 1u )
              goto LABEL_60;
          }
          else if ( v31 != 546 )
          {
            goto LABEL_60;
          }
LABEL_135:
          v57 = 1;
          v58 = 1;
          goto LABEL_136;
        }
      }
      else if ( v31 != 116 )
      {
        goto LABEL_133;
      }
    }
LABEL_139:
    v57 = 0;
    v58 = 0;
LABEL_136:
    if ( get_switch_info(0, *(_QWORD *)(a2 + 16)) <= 0 )
      sub_2B160(a1, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 40 * v58 + 46), v57);
    goto LABEL_58;
  }
  return 1;
}

