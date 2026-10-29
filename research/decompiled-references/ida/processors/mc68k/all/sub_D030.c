__int64 __fastcall sub_D030(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v12; // r12d
  __int64 flags; // rax
  unsigned int v14; // eax

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)(result - 116) > 1u )
  {
    if ( (_WORD)result == 145 || (_WORD)result == 118 )
    {
      v12 = *a3;
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0, (unsigned int)(result - 116), a7);
      result = op_adds_xrefs(flags, v12);
      if ( (_BYTE)result )
      {
        v14 = sub_11640(a1, a2, a3, (unsigned __int8)a7);
        return insn_add_off_drefs(a2, a3, 1, v14);
      }
    }
    else
    {
      insn_create_op_data(a2, a4, a6, a3[5]);
      return insn_add_dref(a2, a4, a6, (unsigned int)a5 + 2);
    }
  }
  return result;
}

