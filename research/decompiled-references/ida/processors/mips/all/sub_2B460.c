__int64 __fastcall sub_2B460(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, unsigned __int8 a5)
{
  __int64 v9; // rdi
  __int64 flags; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // r14
  __int64 v22; // r13
  __int16 v23; // ax
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rax
  int v29; // eax
  char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // al
  unsigned int v36; // eax
  __int64 v37; // rax
  __int16 v38; // ax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  char v43; // al
  __int64 v44; // rdi
  char v45; // al
  __int64 v46; // r9
  __int64 func; // r13
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int8 v50; // al
  __int16 v51; // ax
  __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int16 v55; // r13
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rax
  char v59; // al
  int auto_state; // [rsp+8h] [rbp-80h]
  unsigned int v61; // [rsp+Ch] [rbp-7Ch]
  __int64 v62; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v63[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]

  v9 = *(_QWORD *)(a2 + 16);
  v64 = __readfsqword(0x28u);
  flags = get_flags_ex(v9, 0);
  auto_state = get_auto_state();
  switch ( a3[1] )
  {
    case 2u:
      v32 = sub_2A800(a1, *((_QWORD *)a3 + 2));
      if ( sub_3B330(a1, v32, 0) )
        goto LABEL_5;
      v33 = *(unsigned __int16 *)(a2 + 24);
      v34 = (unsigned int)(char)a3[2];
      if ( (unsigned __int16)v33 > 0x6CEu )
        goto LABEL_79;
      if ( (unsigned __int16)v33 > 0x693u )
      {
        v49 = 0x501000000000003LL;
        LOWORD(v33) = v33 - 1684;
        if ( _bittest64(&v49, v33) )
          goto LABEL_44;
      }
      else
      {
        if ( (_WORD)v33 == 495 )
          goto LABEL_44;
        if ( (unsigned __int16)v33 <= 0x1EFu )
        {
          if ( (_WORD)v33 == 119 || (unsigned __int16)(v33 - 205) <= 1u )
            goto LABEL_44;
          goto LABEL_79;
        }
        if ( (_WORD)v33 == 539 )
        {
LABEL_44:
          insn_add_dref(a2, v32, v34, 1);
          goto LABEL_5;
        }
      }
LABEL_79:
      if ( a5 )
        insn_add_dref(a2, v32, v34, 3);
      else
        insn_add_dref(a2, v32, v34, 2);
      insn_create_op_data(a2, v32, (unsigned int)(char)a3[2], a3[5]);
      goto LABEL_5;
    case 3u:
    case 0xBu:
      v15 = *a3;
      v16 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v16, v15) )
        return v64 - __readfsqword(0x28u);
      return clr_op_type(*(_QWORD *)(a2 + 16), v15);
    case 4u:
      v61 = *a3;
      set_immd(*(_QWORD *)(a2 + 16));
      v12 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v12, v61) )
        sub_28F70(a2, v61, v13);
      if ( a4 )
        goto LABEL_5;
      v35 = is_stroff(flags, *a3);
      if ( auto_state == 40
        && v35
        && *((_WORD *)a3 + 3) != 29
        && (unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 104), *(_QWORD *)(a2 + 16), 256) != 3
        && (unsigned __int8)sub_48730(a1, &v62, *(_QWORD *)(a2 + 16), *((unsigned __int16 *)a3 + 3)) )
      {
        v44 = v62;
        if ( v62 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
          v44 = -1;
        v62 = v44;
LABEL_112:
        v56 = sub_2A800(a1, v44 + *((_QWORD *)a3 + 2));
        insn_add_dref(a2, v56, (unsigned int)(char)a3[2], (unsigned int)a5 + 2);
        goto LABEL_5;
      }
      if ( (unsigned __int8)op_adds_xrefs(flags, *a3) )
        goto LABEL_50;
      if ( (unsigned __int8)is_defarg(flags, *a3) )
        goto LABEL_5;
      if ( auto_state != 40
        || *((_WORD *)a3 + 3) == 29
        || (unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 104), *(_QWORD *)(a2 + 16), 256) == 3 )
      {
        goto LABEL_70;
      }
      if ( (unsigned __int8)sub_48730(a1, &v62, *(_QWORD *)(a2 + 16), *((unsigned __int16 *)a3 + 3)) )
      {
        v40 = v62;
        if ( v62 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
          v40 = -1;
        v41 = *((_QWORD *)a3 + 2);
        v42 = *a3;
        v62 = v40;
        v43 = op_based_stroff(a2, v42, v41, v40);
        v44 = v62;
        if ( v43 )
          goto LABEL_112;
        v45 = is_spec_ea(v62);
        v46 = 0;
        if ( v45 )
          v46 = *((_QWORD *)a3 + 2);
        if ( (unsigned __int8)op_offset(*(_QWORD *)(a2 + 16), *a3, 130, -1, v62, v46) )
          goto LABEL_50;
      }
      if ( (*(_BYTE *)(a2 + 28) & 8) != 0
        && (unsigned __int8)is_mapped(*((_QWORD *)a3 + 2) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL))
        && (unsigned __int8)op_offset(*(_QWORD *)(a2 + 16), *a3, 2, -1, 0, 0) )
      {
LABEL_50:
        v36 = sub_38D80(a2, a3);
        v37 = insn_add_off_drefs(a2, a3, (unsigned int)a5 + 2, v36);
        if ( v37 != -1 )
          insn_create_op_data(a2, v37, (unsigned int)(char)a3[2], a3[5]);
      }
      else
      {
LABEL_70:
        func = get_func(*(_QWORD *)(a2 + 16));
        if ( (unsigned __int8)getinf_flag(10, 512) )
        {
          if ( (unsigned int)get_auto_state() == 40 )
          {
            v48 = *((unsigned __int16 *)a3 + 3);
            if ( v48 == 29
              || func && (*(_BYTE *)(func + 16) & 0x10) != 0 && v48 == ((*(_BYTE *)(a2 + 33) & 4) == 0 ? 30 : 17) )
            {
              if ( (unsigned __int8)insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 2), 1) )
                op_stkvar(*(_QWORD *)(a2 + 16), *a3);
            }
          }
        }
      }
      goto LABEL_5;
    case 5u:
      if ( !a5 )
      {
        if ( under_debugger )
          BUG();
        interr(10171);
        goto LABEL_140;
      }
      v17 = *a3;
      set_immd(*(_QWORD *)(a2 + 16));
      v18 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v18, v17) )
        sub_28F70(a2, v17, v19);
      if ( a4 )
        goto LABEL_5;
      if ( (unsigned __int8)is_stroff(flags, *a3) && (unsigned __int8)sub_28AA0(a1, &v62, a2, a3) )
        goto LABEL_15;
      if ( !(unsigned __int8)getinf_flag(10, 0x200000) || !(unsigned __int8)is_off(flags, *a3) )
        goto LABEL_56;
      v38 = *(_WORD *)(a2 + 24);
      if ( v38 != 204 )
        goto LABEL_55;
      if ( a3[5] == 2 )
      {
        if ( netnode_altval(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 364) )
          goto LABEL_146;
        v38 = *(_WORD *)(a2 + 24);
LABEL_55:
        if ( v38 == 31 && a3[5] == 1 )
        {
LABEL_146:
          if ( (unsigned __int8)get_refinfo(v63, *(_QWORD *)(a2 + 16), *a3)
            && sub_2B420(*(_QWORD *)(a2 + 16), (__int64)v63) )
          {
            clr_op_type(*(_QWORD *)(a2 + 16), *a3);
            goto LABEL_5;
          }
        }
      }
LABEL_56:
      if ( (unsigned __int8)op_adds_xrefs(flags, *a3) )
        goto LABEL_57;
      if ( !(unsigned __int8)is_defarg(flags, *a3) && (unsigned __int8)sub_28AA0(a1, &v62, a2, a3) )
      {
        v57 = sub_2A800(a1, v62);
        if ( (unsigned __int8)op_based_stroff(a2, *a3, *((_QWORD *)a3 + 1), v57) )
        {
LABEL_15:
          v20 = sub_2A800(a1, *((_QWORD *)a3 + 1) + v62);
          insn_add_dref(a2, v20, (unsigned int)(char)a3[2], 1);
          goto LABEL_5;
        }
        if ( !(unsigned __int8)is_spec_ea(v57) )
        {
          v58 = sub_2A800(a1, *((_QWORD *)a3 + 1) + v62);
          if ( (unsigned __int8)is_mapped(v58) )
          {
            v59 = 2;
            if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 32) <= 1u )
              v59 = 9;
            if ( (unsigned __int8)op_offset(*(_QWORD *)(a2 + 16), *a3, (unsigned __int8)v59 | 0x80u, -1, v62, 0) )
            {
LABEL_57:
              v39 = sub_38D80(a2, a3);
              insn_add_off_drefs(a2, a3, 1, v39);
              goto LABEL_5;
            }
          }
        }
      }
      if ( (unsigned __int8)getinf_flag(10, 0x200000) )
      {
        v50 = a3[5];
        if ( (v50 == 2 || v50 == 7) && !(unsigned __int8)is_defarg(flags, *a3) )
        {
          v51 = *(_WORD *)(a2 + 24);
          if ( v51 == 204 )
          {
            if ( *(_WORD *)(a2 + 26) <= 2u )
              goto LABEL_5;
          }
          else if ( v51 != 838 && v51 != 495 && v51 != 205 )
          {
            goto LABEL_5;
          }
          if ( netnode_altval(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 364) || *(_WORD *)(a2 + 46) <= 1u )
            goto LABEL_5;
          v52 = *(_WORD *)(a2 + 24);
          if ( v52 != 204 && v52 != 838 )
          {
            v53 = *((_QWORD *)a3 + 2);
            goto LABEL_97;
          }
LABEL_140:
          v53 = *((_QWORD *)a3 + 1);
LABEL_97:
          v54 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          if ( v53 != -1 && v53 != v54 && auto_state == 40 )
          {
            v55 = v54 & v53;
            if ( (unsigned __int8)is_mapped(v54 & v53) )
            {
              if ( *(_DWORD *)(a1 + 260) != 2
                && v55 != (unsigned __int16)getinf(93)
                && (*(_WORD *)(a2 + 24) != 204
                 || !(unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 367)) )
              {
                if ( (unsigned __int8)op_offset(*(_QWORD *)(a2 + 16), *a3, 2, -1, 0, 0) )
                  goto LABEL_57;
              }
            }
          }
        }
      }
LABEL_5:
      sub_2A970(a1, a2, *a3);
      return v64 - __readfsqword(0x28u);
    case 7u:
      v21 = sub_2B0F0(a1, a2);
      v22 = sub_2A800(a1, *((_QWORD *)a3 + 2));
      v23 = *(_WORD *)(a2 + 24);
      if ( v23 == 118 )
      {
        v24 = get_sreg(*(_QWORD *)(a2 + 16), 67) == 0;
      }
      else if ( v23 == 821 || (LODWORD(v24) = -1, v23 == 117) )
      {
        v24 = get_sreg(*(_QWORD *)(a2 + 16), 67) != 0;
      }
      if ( !sub_3B330(a1, v22, 0) )
      {
        if ( (unsigned __int8)has_insn_feature(*(unsigned __int16 *)(a2 + 24), 2) == 1 && !v21 )
        {
          auto_apply_type(*(_QWORD *)(a2 + 16), v22);
          v25 = 17;
        }
        else
        {
          v25 = 19;
        }
        insn_add_cref(a2, v22, (unsigned int)(char)a3[2], v25);
        if ( (_DWORD)v24 != -1 )
          split_sreg_range(v22, 67, (int)v24, 3, 1);
      }
      goto LABEL_5;
    case 9u:
      v26 = *a3;
      if ( (*(_BYTE *)(a2 + 28) & 3) != 0 )
        goto LABEL_35;
      v27 = flags & 0x800;
      if ( (_DWORD)v27 )
        goto LABEL_35;
      if ( a3[33] != 2 )
        goto LABEL_35;
      v28 = a2 + 40LL * (int)(v26 + 1);
      if ( *(_BYTE *)(v28 + 41) == 5 )
      {
        if ( *(_DWORD *)(v28 + 48) )
          goto LABEL_35;
      }
      if ( !unk_59A80 )
        goto LABEL_35;
      v29 = 0;
      while ( 1 )
      {
        v30 = (char *)&unk_73080 + 24 * v27;
        if ( *((unsigned __int16 *)a3 + 3) == *(_DWORD *)v30 )
          break;
        v27 = ++v29;
        if ( (unsigned __int64)v29 >= unk_59A80 )
          goto LABEL_35;
      }
      if ( v30 )
      {
        set_cmt(*(_QWORD *)(a2 + 16), *((_QWORD *)v30 + 2), 0);
        v26 = *a3;
      }
LABEL_35:
      v31 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(v31, v26) )
        return v64 - __readfsqword(0x28u);
      return clr_op_type(*(_QWORD *)(a2 + 16), v26);
    default:
      return v64 - __readfsqword(0x28u);
  }
}

