__int64 __fastcall sub_6AF0(__int64 a1, __int64 *a2)
{
  __int64 first_fcref_from; // rax

  netnode_supset();
  create_insn();
  first_fcref_from = get_first_fcref_from();
  if ( first_fcref_from != -1 )
    *a2 = first_fcref_from;
  return 0;
}

