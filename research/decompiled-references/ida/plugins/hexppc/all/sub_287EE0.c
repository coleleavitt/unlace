unsigned __int64 __fastcall sub_287EE0(__int64 a1, __int64 a2)
{
  int tinfo_size; // r12d
  int tinfo_property; // r15d
  bool v5; // r12
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size < (int)get_tinfo_size()
    || (tinfo_property = get_tinfo_property(), (unsigned int)get_tinfo_property() != tinfo_property) )
  {
    sub_3695A0(&v6, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
    if ( tinfo_size < (int)get_tinfo_size()
      || (v5 = (get_tinfo_property() & 0xF) == 9, v5 != ((get_tinfo_property() & 0xF) == 9)) )
    {
      sub_241100(*(__int64 **)(a2 + 32));
    }
    clear_tinfo_t();
  }
  return v7 - __readfsqword(0x28u);
}

