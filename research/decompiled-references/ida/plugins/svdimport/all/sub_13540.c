unsigned __int64 __fastcall sub_13540(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  set_file_ext();
  if ( (unsigned int)qmove() )
    qstrerror();
  sub_7490(a3);
  return v5 - __readfsqword(0x28u);
}

