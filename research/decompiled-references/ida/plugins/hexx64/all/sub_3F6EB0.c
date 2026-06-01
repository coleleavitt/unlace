unsigned __int64 __fastcall sub_3F6EB0(__int64 a1, __int64 a2, int a3, int a4)
{
  int tinfo_size; // eax
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a4 < 0 )
    copy_tinfo_t();
  tinfo_size = get_tinfo_size();
  sub_32F0D0(a2, a3, tinfo_size);
  clear_tinfo_t();
  return v7 - __readfsqword(0x28u);
}

