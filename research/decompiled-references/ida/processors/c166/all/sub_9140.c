unsigned __int64 __fastcall sub_9140(__int64 a1)
{
  unsigned __int8 v2; // al
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    sub_7D40(a1, 0, (__int64)byte_E2AB, s1);
    v2 = getinf();
    sub_7D40(a1, 0, (__int64)byte_E2BB, (unsigned int)v2 - 1, s1);
  }
  return v3 - __readfsqword(0x28u);
}

