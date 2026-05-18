void __fastcall __noreturn sub_198E30(int status)
{
  sub_198CE0(1, status);
  if ( !byte_2439A1 )
  {
    byte_2439A1 = 1;
    if ( !unk_2439A0 )
      sub_198E10(546);
    BUG();
  }
  exit(status);
}
