__int64 __fastcall sub_7CD00(unsigned __int8 **a1, double a2)
{
  unsigned __int8 *v2; // rax
  unsigned int v3; // edx

  v2 = *a1;
  if ( *a1 >= a1[1] )
    sub_7A4F0(a2);
  v3 = *v2;
  *a1 = v2 + 1;
  return v3;
}

