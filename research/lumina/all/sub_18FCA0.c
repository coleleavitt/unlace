__int64 __fastcall sub_18FCA0(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(483);
    BUG();
  }
  return *(_QWORD *)(24LL * (int)a1 + __readfsqword(0) - 224);
}
