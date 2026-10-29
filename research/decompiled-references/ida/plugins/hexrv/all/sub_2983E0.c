__int64 __fastcall sub_2983E0(__int64 *a1)
{
  __int64 v2; // rdi
  char tinfo_property; // bp

  v2 = *a1;
  if ( (_BYTE)v2
    && ((v2 & 0xE) != 0 || (v2 & 0x30) == 0)
    && (get_tinfo_property(), tinfo_property = get_tinfo_property(), clear_tinfo_t(), (tinfo_property & 0x3F) != 0x30) )
  {
    return (unsigned int)sub_298080(a1) ^ 1;
  }
  else
  {
    return 0;
  }
}

