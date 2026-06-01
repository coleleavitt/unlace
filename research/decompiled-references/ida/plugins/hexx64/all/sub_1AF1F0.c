__int64 __fastcall sub_1AF1F0(__int64 *a1, __int64 a2, double a3)
{
  int v3; // esi
  __int64 result; // rax

  if ( a2 != -1 )
  {
    v3 = a2 & 7;
    if ( v3 > 2 )
      sub_1ADFD0(a3);
    return sub_32AAE0(a1, (unsigned __int8)v3 + 41);
  }
  return result;
}

