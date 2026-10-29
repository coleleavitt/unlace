_BOOL8 __fastcall sub_C7C90(__int64 a1, double a2)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a2 != 0.0 )
  {
    result = 0;
    if ( *(_QWORD *)&a2 == COERCE__INT64((double)(int)a1) )
      return (unsigned __int64)(a1 + 0x8000000000000LL) <= 0xFFFFFFFFFFFFFLL;
  }
  return result;
}
