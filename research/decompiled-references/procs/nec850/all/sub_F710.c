__int64 __fastcall sub_F710(_QWORD *a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  __int64 v7; // rdi
  __int64 flags; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int16 v16; // ax
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int16 v26; // ax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int16 v38; // ax
  __int64 v39; // rbp
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  char v45; // bp
  __int64 v46; // rbp
  unsigned int v47; // r12d
  unsigned __int8 default_reftype; // al
  __int64 v49; // r14
  __int16 v50; // ax
  __int64 v51; // rbp
  __int64 v52; // r12
  unsigned int v53; // r13d
  unsigned __int8 v54; // al
  __int64 v55; // [rsp+8h] [rbp-80h]
  __int64 v56; // [rsp+18h] [rbp-70h] BYREF
  __int64 v57; // [rsp+20h] [rbp-68h] BYREF
  __int64 v58; // [rsp+28h] [rbp-60h]
  __int64 v59; // [rsp+30h] [rbp-58h]
  int v60; // [rsp+38h] [rbp-50h]
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 16);
  v61 = __readfsqword(0x28u);
  flags = get_flags_ex(v7, 0);
  v10 = a3[1];
  if ( v10 == 5 )
  {
    set_immd(*(_QWORD *)(a2 + 16));
    if ( *a3 || *(_BYTE *)(a2 + 81) != 1 )
      goto LABEL_22;
    v38 = *(_WORD *)(a2 + 24);
    if ( v38 == 70 )
    {
      if ( *(_WORD *)(a2 + 86) != 3 )
        goto LABEL_33;
    }
    else
    {
      if ( v38 != 37 )
        goto LABEL_33;
      v50 = *(_WORD *)(a2 + 86);
      if ( v50 != 3 )
      {
        if ( v50 == 30 && *(_BYTE *)(a2 + 121) == 1 && *(_WORD *)(a2 + 126) != 30 )
        {
          v51 = *(_QWORD *)(a2 + 16);
          if ( (unsigned int)find_sp_value(&v56, v51, 3) )
          {
            if ( (unsigned int)find_sp_value(&v57, v51, 30) && v56 == v57 )
              goto LABEL_70;
          }
        }
        goto LABEL_33;
      }
    }
    if ( *(_BYTE *)(a2 + 121) == 1 && *(_WORD *)(a2 + 126) != 3 )
    {
LABEL_70:
      if ( (unsigned __int8)getinf_flag(10, 512, v29, v30, v31, v32)
        && (unsigned int)get_auto_state() == 40
        && (flags & 0xF00000) == 0
        && (unsigned __int8)insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 1), 0) )
      {
        op_stkvar(*(_QWORD *)(a2 + 16), 0);
      }
      goto LABEL_22;
    }
LABEL_33:
    v39 = *(_QWORD *)(a2 + 16);
    if ( !(unsigned __int8)is_defarg(flags, 0)
      || (unsigned __int8)is_off(flags, 0)
      && (unsigned __int8)get_refinfo(&v57, v39, 0)
      && v57 == -1
      && !v58
      && (v60 & 0x80u) == 0
      && !v59
      && (v60 & 0x4F) == 2 )
    {
      v43 = *(unsigned __int16 *)(a2 + 24);
      v44 = (unsigned int)(v43 - 70);
      LOBYTE(v44) = (_WORD)v43 == 37 || (unsigned __int16)(v43 - 70) <= 1u;
      v45 = v44;
      if ( (_BYTE)v44 )
      {
        if ( *(_WORD *)(a2 + 86) == 3 )
        {
          v45 = 0;
        }
        else if ( (unsigned __int8)sub_F620(a1, a2, (__int64)a3) )
        {
          goto LABEL_22;
        }
      }
      if ( !(unsigned __int8)getinf_flag(10, 0x200000, v44, v40, v41, v42)
        && (flags & 0xF00000) != 0x500000
        && (*(_WORD *)(a2 + 24) == 50 || *(_WORD *)(a2 + 24) == 38 || v45)
        && (unsigned __int8)sub_EA00(*((_QWORD *)a3 + 1), 0) )
      {
        v46 = *(_QWORD *)(a2 + 16);
        v47 = *a3;
        default_reftype = get_default_reftype(v46);
        op_offset(v46, v47, default_reftype, -1, 0, 0);
      }
    }
LABEL_22:
    v33 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
    if ( (unsigned __int8)op_adds_xrefs(v33, *a3) )
      return insn_add_off_drefs(a2, a3, 1, 0);
    return v61 - __readfsqword(0x28u);
  }
  if ( v10 <= 5u )
  {
    if ( v10 != 2 )
    {
      if ( v10 == 4 )
      {
        set_immd(*(_QWORD *)(a2 + 16));
        v14 = *(unsigned __int16 *)(a2 + 24);
        v15 = (unsigned int)(v14 - 44);
        if ( (unsigned __int16)(v14 - 44) > 1u && (_WORD)v14 != 79 )
        {
          v16 = *((_WORD *)a3 + 3);
          if ( v16 == 3
            || v16 == 30
            && (v49 = *(_QWORD *)(a2 + 16), (unsigned int)find_sp_value(&v56, v49, 3))
            && (unsigned int)find_sp_value(&v57, v49, 30)
            && v56 == v57 )
          {
            if ( (unsigned __int8)getinf_flag(10, 512, v15, v11, v12, v13)
              && (unsigned int)get_auto_state() == 40
              && !(unsigned __int8)is_defarg(flags, *a3)
              && (unsigned __int8)insn_create_stkvar(a2, a3, *((_QWORD *)a3 + 2), 1) )
            {
              op_stkvar(*(_QWORD *)(a2 + 16), *a3);
            }
          }
          else
          {
            v17 = *a3;
            v55 = *(_QWORD *)(a2 + 16);
            if ( (!(unsigned __int8)is_defarg(flags, *a3)
               || (unsigned __int8)is_off(flags, v17)
               && (unsigned __int8)get_refinfo(&v57, v55, v17)
               && v57 == -1
               && !v58
               && (v60 & 0x80u) == 0
               && !v59
               && (v60 & 0x4F) == 2)
              && !(unsigned __int8)sub_F1C0(
                                     (__int64)a1,
                                     *(_QWORD *)(a2 + 16),
                                     *a3,
                                     *((_QWORD *)a3 + 2),
                                     *((unsigned __int16 *)a3 + 3),
                                     0)
              && !(unsigned __int8)getinf_flag(10, 0x200000, v18, v19, v20, v21)
              && !(unsigned __int8)is_off(flags, *a3)
              && (unsigned __int8)sub_EA00(*((_QWORD *)a3 + 2), 0) )
            {
              v52 = *(_QWORD *)(a2 + 16);
              v53 = *a3;
              v54 = get_default_reftype(v52);
              op_offset(v52, v53, v54, -1, 0, 0);
            }
          }
          v22 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
          if ( (unsigned __int8)op_adds_xrefs(v22, *a3) )
          {
            v23 = sub_123C0(a2, a3, v22);
            v24 = insn_add_off_drefs(a2, a3, (unsigned int)a4 + 2, v23);
            if ( v24 != -1 )
              return insn_create_op_data(a2, v24, (unsigned int)(char)a3[2], a3[5]);
          }
        }
      }
      return v61 - __readfsqword(0x28u);
    }
    v34 = *((_QWORD *)a3 + 2);
    v35 = *(_QWORD *)(a1[4] + 16LL);
    if ( v34 != -1 && v34 != v35 )
    {
      v36 = v34 + 16LL * *(_QWORD *)a2;
      if ( v35 != v36 )
      {
        v37 = v36 & v35;
        if ( v36 != -1 )
          v36 = v37;
      }
      insn_create_op_data(a2, v36, (unsigned int)(char)a3[2], a3[5]);
      return insn_add_dref(a2, *((_QWORD *)a3 + 2), (unsigned int)(char)a3[2], (unsigned int)a4 + 2);
    }
    return v61 - __readfsqword(0x28u);
  }
  if ( v10 != 7 )
    return v61 - __readfsqword(0x28u);
  v26 = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)(v26 - 44) <= 1u || v26 == 79 )
    return v61 - __readfsqword(0x28u);
  v27 = *(_QWORD *)(a1[4] + 16LL);
  v28 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
  if ( v28 != v27 )
  {
    v27 &= v28;
    if ( v28 == -1 )
      v27 = -1;
  }
  return insn_add_cref(a2, v27, (unsigned int)(char)a3[2], 19);
}
