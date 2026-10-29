__int64 __fastcall sub_1AE220(__int64 **a1, double a2)
{
  __int64 result; // rax
  int v3; // eax

  result = (__int64)a1[1];
  if ( result != -1 )
  {
    v3 = result & 7;
    if ( v3 > 2 )
      sub_1ADFD0(a2);
    return sub_32AAE0(*a1, (unsigned __int8)v3 + 41);
  }
  return result;
}

