__int64 *__fastcall sub_C31A0(__int64 a1)
{
  __int64 *result; // rax
  __int16 v2; // dx

  result = (__int64 *)*(unsigned __int16 *)(a1 + 52);
  if ( ((unsigned __int8)result & 0x11) != 0 )
  {
    v2 = (unsigned __int16)result & 0xFFEF;
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      *(_WORD *)(a1 + 52) = v2 ^ 3;
      return sub_C2FA0(a1, 2);
    }
    else
    {
      *(_WORD *)(a1 + 52) = v2;
    }
  }
  return result;
}
