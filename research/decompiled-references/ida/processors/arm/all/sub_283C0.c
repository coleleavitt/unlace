bool __fastcall sub_283C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  if ( (a4 & 2) != 0 )
    return sub_28300(a1, a2, a3, 1, 0);
  if ( (a4 & 4) != 0 )
    return sub_28300(a1, a2, a3, 0, 0);
  return (int)decode_insn() > 0;
}
