__int64 __fastcall sub_143A40(__int64 **a1, double a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax

  v2 = *a1;
  if ( *((_BYTE *)*a1 + 197) )
    return 0;
  result = sub_143990((__m128i *)*a1, a1 + 1, a2);
  if ( (_DWORD)result )
  {
    *((_DWORD *)a1 + 6) = result;
    ++*((_DWORD *)a1 + 12);
  }
  else
  {
    if ( !*((_BYTE *)v2 + 111) )
      return 0;
    *((_DWORD *)v2 + 11) |= 0x10u;
  }
  return result;
}
