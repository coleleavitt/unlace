unsigned __int64 __fastcall sub_27F10(__int64 a1, double a2, double a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_1C950(*(_QWORD *)(a1 + 16), (__int64)"shared cache mapping: %a..%a\n", a2, a3);
  rangeset_t_add();
  return v4 - __readfsqword(0x28u);
}

