unsigned __int64 __fastcall sub_3E0FB0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-D0h]

  v2 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_67D60((__int64 *)a1);
  return v2 - __readfsqword(0x28u);
}

