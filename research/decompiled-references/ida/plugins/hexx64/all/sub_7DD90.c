__int64 __fastcall sub_7DD90(unsigned __int8 **a1, double a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 *v3; // rsi
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[1];
  if ( *((_DWORD *)a1 + 12) <= 0xAu )
  {
    if ( v2 >= v3 )
      sub_7A4F0(a2);
    result = *v2;
    *a1 = v2 + 1;
  }
  else
  {
    if ( v2 >= v3 )
      sub_7A510(a2);
    return unpack_dd();
  }
  return result;
}

