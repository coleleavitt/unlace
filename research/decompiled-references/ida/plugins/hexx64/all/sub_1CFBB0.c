__int64 __fastcall sub_1CFBB0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r10

  v3 = sub_1CFB40(a1, a2);
  if ( v3 )
    v4 += v3[1];
  if ( v4 < 0 )
    sub_1CCFB0(a3);
  return v4;
}

