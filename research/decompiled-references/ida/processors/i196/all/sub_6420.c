__int64 __fastcall sub_6420(__int64 a1, const void *a2, unsigned __int8 *a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v9[45]; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 v10; // [rsp+178h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  switch ( a3[1] )
  {
    case 2u:
    case 8u:
    case 9u:
      insn_create_op_data();
      if ( a4 )
      {
        result = insn_add_dref();
      }
      else
      {
        insn_add_dref();
        if ( (unsigned __int64)(*((_QWORD *)a3 + 2) - 20LL) > 1 )
          goto LABEL_3;
        result = split_sreg_range();
      }
      break;
    case 5u:
      set_immd();
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        goto LABEL_3;
      result = insn_add_off_drefs();
      break;
    case 7u:
      if ( (unsigned __int8)has_insn_feature() )
      {
        insn_add_cref();
        if ( *(_DWORD *)(a1 + 120) )
          *(_DWORD *)(a1 + 120) = (unsigned __int8)func_does_return();
        goto LABEL_3;
      }
      result = insn_add_cref();
      break;
    case 0xAu:
      set_immd();
      if ( !*((_QWORD *)a3 + 1) )
      {
        get_flags_ex();
        if ( !(unsigned __int8)is_defarg() )
        {
          get_default_reftype();
          op_offset();
        }
      }
      get_flags_ex();
      if ( (unsigned __int8)op_adds_xrefs() )
      {
        v7 = *a3;
        qmemcpy(v9, a2, sizeof(v9));
        v9[5 * v7 + 6] = *((_QWORD *)a3 + 2);
        insn_add_off_drefs();
      }
      if ( !*((_QWORD *)a3 + 1) )
        goto LABEL_3;
      insn_add_dref();
      result = insn_create_op_data();
      break;
    default:
LABEL_3:
      result = v10 - __readfsqword(0x28u);
      break;
  }
  return result;
}

