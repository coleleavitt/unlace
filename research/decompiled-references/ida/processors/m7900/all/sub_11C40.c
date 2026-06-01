__int64 __fastcall sub_11C40(__int64 a1, _WORD *a2, unsigned __int8 *a3, char a4)
{
  __int64 result; // rax
  __int64 sreg; // rax
  __int64 v8; // rdx
  __int16 v9; // ax
  _QWORD v10[45]; // [rsp+0h] [rbp-1A8h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  get_flags_ex();
  switch ( a3[1] )
  {
    case 2u:
      if ( (unsigned int)(char)a3[33] > 7 )
        goto LABEL_13;
      sreg = get_sreg();
      v8 = *a3;
      if ( sreg != 1 )
        goto LABEL_13;
      qmemcpy(v10, a2, sizeof(v10));
      v10[5 * v8 + 7] &= 0xFF3FuLL;
      map_code_ea();
      insn_create_op_data();
      insn_add_dref();
      goto LABEL_4;
    case 4u:
    case 8u:
      set_immd();
      if ( a4 )
        goto LABEL_4;
      if ( a3[1] == 4 )
      {
        map_code_ea();
        insn_create_op_data();
        goto LABEL_14;
      }
      if ( (unsigned __int8)op_adds_xrefs() )
LABEL_6:
        result = insn_add_off_drefs();
      else
LABEL_4:
        result = v11 - __readfsqword(0x28u);
      break;
    case 5u:
    case 0xAu:
      set_immd();
      if ( (unsigned __int8)op_adds_xrefs() )
        goto LABEL_6;
      goto LABEL_4;
    case 7u:
      v9 = a2[12];
      if ( v9 != 95 && v9 != 96 )
        goto LABEL_20;
      insn_add_cref();
      if ( !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 248) = 0;
      goto LABEL_4;
    case 9u:
      if ( a3[33] == 7 )
      {
        insn_create_op_data();
        insn_add_dref();
        get_word();
        get_sreg();
LABEL_20:
        result = insn_add_cref();
      }
      else
      {
LABEL_13:
        map_code_ea();
        insn_create_op_data();
LABEL_14:
        result = insn_add_dref();
      }
      break;
    default:
      goto LABEL_4;
  }
  return result;
}

