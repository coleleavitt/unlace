__int64 __fastcall sub_104B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // cx

  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result == 5 )
  {
    set_immd();
    if ( (unsigned __int8)is_defarg() )
      goto LABEL_19;
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 > 0x33u )
    {
      v8 = v7 - 58;
      if ( v8 > 0x3Au )
        goto LABEL_19;
      if ( ((1LL << v8) & 0x4010181B006C001LL) == 0 )
      {
        if ( ((1LL << v8) & 0x164) != 0 )
LABEL_18:
          set_op_type();
LABEL_19:
        result = op_adds_xrefs();
        if ( (_BYTE)result )
          return insn_add_off_drefs();
        return result;
      }
    }
    else
    {
      if ( v7 <= 2u )
        goto LABEL_19;
      if ( ((1LL << v7) & 0xE5008000000C8LL) == 0 )
      {
        if ( ((1LL << v7) & 0x6D580000) == 0 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    num_flag();
    set_op_type();
    goto LABEL_19;
  }
  if ( (unsigned __int8)result > 5u )
  {
    if ( (_BYTE)result == 7 )
    {
      sub_10430((_QWORD *)a1, (_QWORD *)a2, a3);
      if ( (unsigned __int8)has_insn_feature() && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 604) = 0;
      return insn_add_cref();
    }
  }
  else if ( (_BYTE)result == 2 )
  {
    sub_10430((_QWORD *)a1, (_QWORD *)a2, a3);
    insn_add_dref();
    result = insn_create_op_data();
    if ( *(char *)(a3 + 33) < 0 )
    {
      insn_add_dref();
      return insn_create_op_data();
    }
  }
  else if ( (_BYTE)result == 3 && !a5 )
  {
    result = op_adds_xrefs();
    if ( (_BYTE)result )
    {
      result = insn_add_off_drefs();
      if ( result != -1 )
        return insn_create_op_data();
    }
  }
  return result;
}

