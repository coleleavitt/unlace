void __fastcall sub_8A160(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[1] == 0;
  *a1 = &off_237BD0;
  if ( !v1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2600);
    BUG();
  }
  operator delete(a1, 0x18u);
}
