unsigned __int64 __fastcall sub_11460(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  get_segm_name();
  sub_10390(a2, (__int64)"end of '%s'", byte_14F84);
  return v3 - __readfsqword(0x28u);
}

