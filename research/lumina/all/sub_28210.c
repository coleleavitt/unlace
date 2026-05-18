int sub_28210()
{
  qword_241B70 = (void *)sub_19A2A0();
  if ( !qword_241B70 )
  {
    if ( !unk_2439A0 )
      sub_198E10(791);
    BUG();
  }
  return __cxa_atexit(sub_5B730, &unk_241B68, &lpdso_handle);
}
