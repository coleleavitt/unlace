unsigned __int64 __fastcall sub_4EF0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    sub_4CF0(a1, (__int64)"section %s", &byte_8B07);
  }
  return v2 - __readfsqword(0x28u);
}

