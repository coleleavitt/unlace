__int64 __fastcall sub_18FC60(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(482);
    BUG();
  }
  return *(_QWORD *)(__readfsqword(0) + 8LL * (int)a1 - 256);
}
