__int64 __fastcall sub_40A0(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  unsigned __int16 v11; // ax

  v5 = a2;
  switch ( a3[1] )
  {
    case 1u:
    case 3u:
      return 1;
    case 2u:
      insn_create_op_data();
      insn_add_dref();
      return 1;
    case 4u:
      goto LABEL_8;
    case 5u:
      if ( !a4 )
        goto LABEL_2;
LABEL_8:
      set_immd();
      if ( (get_flags_ex() & 0xF000000) != 0 )
        goto LABEL_9;
      v11 = *(_WORD *)(a2 + 24);
      if ( v11 > 6u )
      {
        if ( (unsigned __int16)(v11 - 78) > 1u )
          goto LABEL_9;
        goto LABEL_17;
      }
      if ( v11 > 2u )
      {
LABEL_17:
        num_flag();
        set_op_type();
      }
LABEL_9:
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
        insn_add_off_drefs();
      return 1;
    case 7u:
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        return func_does_return();
      }
      insn_add_cref();
      return 1;
    default:
LABEL_2:
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v9 = *(_DWORD *)(v7 + 104);
      if ( v8 >= v9 && v8 < *(_DWORD *)(v7 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v9));
      sub_3FD0((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, *a3);
      return 1;
  }
}

