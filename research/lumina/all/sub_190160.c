__int64 __fastcall sub_190160(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp

  if ( !a1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(552);
    BUG();
  }
  v1 = sub_197FF0(a1);
  sub_198050(a1, 0, 2);
  v2 = sub_197FF0(a1);
  sub_198050(a1, v1, 0);
  return v2;
}
