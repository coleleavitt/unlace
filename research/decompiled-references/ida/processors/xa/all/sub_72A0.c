unsigned __int64 __fastcall sub_72A0(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = *a1;
  if ( ((unsigned int)v2 & 0xFF0000) > 0x7FFFFuLL )
  {
    *a1 = v2 & 0x7FFFF;
  }
  else if ( v2 && !getseg() )
  {
    qsnprintf();
    add_segm();
  }
  return v4 - __readfsqword(0x28u);
}

