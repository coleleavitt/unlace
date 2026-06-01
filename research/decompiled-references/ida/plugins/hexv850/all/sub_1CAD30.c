__int64 __fastcall sub_1CAD30(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r10

  v2 = sub_1CACC0(a1, a2);
  if ( v2 )
    v3 += v2[1];
  if ( v3 < 0 )
    sub_1C8130();
  return v3;
}

