unsigned __int64 __fastcall sub_4950(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  get_segm_name();
  sub_4710(a2, (__int64)"end of '%s'", (const char *)&dword_8504);
  return v3 - __readfsqword(0x28u);
}

