unsigned __int64 __fastcall sub_12240(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+408h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  qsnprintf();
  set_name();
  sub_12040(a1, a2, 1);
  return v3 - __readfsqword(0x28u);
}

