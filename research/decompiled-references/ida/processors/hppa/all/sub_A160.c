__int64 __fastcall sub_A160(__int64 a1)
{
  unsigned int dword; // eax

  dword = get_dword();
  if ( sub_9070(dword) )
  {
    if ( !(unsigned __int8)has_insn_feature() )
    {
LABEL_5:
      insn_add_cref();
      return auto_apply_type();
    }
LABEL_3:
    if ( !(unsigned __int8)func_does_return() )
      *(_BYTE *)(a1 + 176) = 0;
    goto LABEL_5;
  }
  if ( (unsigned __int8)has_insn_feature() )
    goto LABEL_3;
  return insn_add_cref();
}

