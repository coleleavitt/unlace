unsigned __int64 __fastcall sub_6E00(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  get_segm_name();
  sub_6C10(a1, (__int64)"end of '%s'", (const char *)&dword_9E2C);
  return v2 - __readfsqword(0x28u);
}

