__int64 sub_22060()
{
  unsigned int stkvar; // r12d

  get_flags_ex();
  if ( (unsigned __int8)is_stkvar() )
    return insn_create_stkvar();
  stkvar = insn_create_stkvar();
  if ( (_BYTE)stkvar )
    op_stkvar();
  return stkvar;
}

