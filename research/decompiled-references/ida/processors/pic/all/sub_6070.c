__int64 __fastcall sub_6070(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  unsigned __int64 v7; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v12; // r12d
  __int64 func; // rax
  __int64 v14; // rax
  _QWORD v15[45]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v16; // [rsp+168h] [rbp-30h]

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
  v16 = __readfsqword(0x28u);
  if ( v7 != 0x1000000000100LL )
    v6 = a5 & (*(_WORD *)(a2 + 24) != 17);
  switch ( a3[1] )
  {
    case 1u:
      return v16 - __readfsqword(0x28u);
    case 2u:
      v9 = sub_7740(a1, *((_QWORD *)a3 + 2));
      sub_5F90(a1, v9);
      insn_add_dref();
      insn_create_op_data();
      if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 )
        return v16 - __readfsqword(0x28u);
      v10 = *((_QWORD *)a3 + 2);
      if ( v10 != 4063 )
      {
        if ( v10 == 4059 )
        {
LABEL_24:
          qmemcpy(v15, (const void *)a2, sizeof(v15));
          if ( decode_prev_insn() != -1 && LOWORD(v15[3]) == 29 )
          {
            func = get_func();
            if ( func )
            {
              if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
              {
                if ( (unsigned __int8)insn_create_stkvar() )
                  op_stkvar();
              }
            }
          }
        }
        return v16 - __readfsqword(0x28u);
      }
      v14 = get_func();
      if ( !v14 || (*(_BYTE *)(v14 + 16) & 0x10) == 0 )
        return v16 - __readfsqword(0x28u);
      return insn_create_stkvar();
    case 4u:
      sub_5EE0(a1, a2);
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
        return insn_add_off_drefs();
      return v16 - __readfsqword(0x28u);
    case 5u:
      if ( !v6 )
        sub_4AF0((__int64)"interr: emu", a2, 0x1000000000100LL, a4, a5, a6, v15[0]);
      sub_5EE0(a1, a2);
      v12 = *a3;
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v16 - __readfsqword(0x28u);
      sub_7760(a3, v12);
      return insn_add_off_drefs();
    case 7u:
      sub_7730(a2, *((_QWORD *)a3 + 2));
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 257) = 0;
      insn_add_cref();
      if ( (unsigned __int8)is_loaded() )
      {
        get_sreg();
        split_sreg_range();
      }
      if ( !(unsigned __int8)is_loaded() )
        return v16 - __readfsqword(0x28u);
      get_sreg();
      return split_sreg_range();
    default:
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_24;
  }
}

