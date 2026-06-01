unsigned __int64 __fastcall sub_7580(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  get_segm_name();
  sub_6950(a1, 0, (__int64)&word_C176);
  return v2 - __readfsqword(0x28u);
}

