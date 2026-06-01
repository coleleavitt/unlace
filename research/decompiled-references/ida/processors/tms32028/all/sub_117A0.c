__int64 __fastcall sub_117A0(_QWORD *a1, __int64 a2)
{
  __int64 sreg; // rbx

  sreg = get_sreg();
  if ( sreg != -1 )
  {
    if ( get_sreg() == 1 )
      sreg = (unsigned __int16)sreg & 0xFFFE;
    return 16LL * *a1 + (a2 | (sreg << 6));
  }
  return sreg;
}

