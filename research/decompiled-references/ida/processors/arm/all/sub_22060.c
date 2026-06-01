__int64 __fastcall sub_22060(__int64 a1)
{
  unsigned int stkvar; // r12d

  get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  if ( (unsigned __int8)is_stkvar() )
    return insn_create_stkvar();
  stkvar = insn_create_stkvar();
  if ( (_BYTE)stkvar )
    op_stkvar();
  return stkvar;
}
