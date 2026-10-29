__int64 __fastcall sub_F850(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, char a5)
{
  __int64 flags; // r15
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 dtype_size; // r12
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r15
  unsigned int dword; // eax
  __int64 word; // rsi
  __int64 func; // rax
  int v20; // r12d
  unsigned __int16 v21; // ax
  _BYTE *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  flags = get_flags_ex();
  switch ( a3[1] )
  {
    case 1u:
    case 8u:
      return v24 - __readfsqword(0x28u);
    case 2u:
      v11 = *((_QWORD *)a3 + 2);
      if ( a3[32] == 1 )
        v12 = sub_11900(a2, v11);
      else
        v12 = sub_118F0(a2, v11);
      if ( !(unsigned __int8)is_mapped() )
      {
        v22 = (_BYTE *)sub_13920(a1, v12);
        if ( v22 )
        {
          if ( *v22 )
            return v24 - __readfsqword(0x28u);
        }
      }
      insn_add_dref();
      insn_create_op_data();
      if ( (unsigned __int8)(a3[32] - 2) > 1u )
        return v24 - __readfsqword(0x28u);
      dtype_size = get_dtype_size();
      v14 = get_flags_ex();
      if ( (v14 & 0x600) != 0x400 )
        return v24 - __readfsqword(0x28u);
      if ( (((v14 & 0xF0000000) - 0x10000000LL) & 0xFFFFFFFFE0000000LL) != 0 )
        return v24 - __readfsqword(0x28u);
      v15 = v14 & 0xF00000;
      v16 = v15;
      if ( v15 )
      {
        if ( v15 != 5242880 )
          return v24 - __readfsqword(0x28u);
      }
      if ( dtype_size == 2 )
      {
        word = (unsigned __int16)get_word();
      }
      else
      {
        dword = get_dword();
        word = sub_118B0(a1, dword);
      }
      sub_118F0(a2, word);
      if ( (unsigned __int8)is_mapped() )
      {
        if ( (unsigned __int8)has_insn_feature() )
        {
          if ( !(unsigned __int8)func_does_return() )
            *(_BYTE *)(a1 + 229) = 0;
        }
        insn_add_cref();
      }
      if ( v16 == 5242880 )
        return v24 - __readfsqword(0x28u);
      sub_118F0(a2, 0);
      get_default_reftype();
      return op_offset();
    case 3u:
      if ( a4 )
        return v24 - __readfsqword(0x28u);
      if ( !(unsigned __int8)is_defarg() && (unsigned __int8)sub_F340(a1, &v23, a2, (__int64)a3) )
        op_offset();
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v24 - __readfsqword(0x28u);
      sub_117D0(a1, a3, flags);
      if ( insn_add_off_drefs() == -1 )
        return v24 - __readfsqword(0x28u);
      return insn_create_op_data();
    case 4u:
      if ( a4 )
        return v24 - __readfsqword(0x28u);
      if ( (unsigned __int8)op_adds_xrefs() )
      {
        sub_117D0(a1, a3, flags);
        if ( insn_add_off_drefs() != -1 )
          insn_create_op_data();
        if ( (a3[4] & 0x40) != 0 && insn_add_off_drefs() != -1 )
          insn_create_op_data();
      }
      if ( !(unsigned __int8)getinf_flag() )
        return v24 - __readfsqword(0x28u);
      if ( (unsigned int)get_auto_state() != 40 )
        return v24 - __readfsqword(0x28u);
      if ( (unsigned __int8)is_defarg() )
        return v24 - __readfsqword(0x28u);
      func = get_func();
      if ( !func
        || (*((_WORD *)a3 + 3) & 0xFFDF) != 7
        && ((*((_WORD *)a3 + 3) & 0xFFDF) != 6 || (*(_BYTE *)(func + 16) & 0x10) == 0) )
      {
        return v24 - __readfsqword(0x28u);
      }
      if ( !(unsigned __int8)insn_create_stkvar() )
        return v24 - __readfsqword(0x28u);
      return op_stkvar();
    case 5u:
      if ( a5 )
      {
        v20 = *a3;
        set_immd();
        if ( (unsigned __int8)is_defarg() )
          goto LABEL_40;
        v21 = *(_WORD *)(a2 + 24);
        if ( v21 > 0x45u )
        {
          if ( v21 > 0x4Bu )
          {
            if ( v21 == 85 )
            {
LABEL_39:
              num_flag();
              set_op_type();
            }
LABEL_40:
            if ( (unsigned __int8)op_adds_xrefs() )
              return insn_add_off_drefs();
            else
              return v24 - __readfsqword(0x28u);
          }
          if ( v21 <= 0x47u )
            goto LABEL_40;
        }
        else if ( v21 <= 0x41u )
        {
          if ( v21 == 4 || v21 == 62 )
            goto LABEL_39;
          goto LABEL_40;
        }
        if ( !v20 )
          set_op_type();
        goto LABEL_40;
      }
      if ( under_debugger )
LABEL_76:
        BUG();
      interr();
      return sub_FF10(10094, 0);
    case 7u:
      sub_118F0(a2, *((_QWORD *)a3 + 2));
      goto LABEL_43;
    case 9u:
      if ( !(unsigned __int8)sub_F340(a1, &v23, a2, (__int64)a3) )
        return v24 - __readfsqword(0x28u);
      goto LABEL_43;
    default:
      if ( under_debugger )
        goto LABEL_76;
      interr();
LABEL_43:
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 229) = 0;
      return insn_add_cref();
  }
}

