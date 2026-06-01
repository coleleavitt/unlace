unsigned __int64 __fastcall sub_90E00(unsigned __int8 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  sub_908D0(a1, (__int64)a2, a3);
  v3 = pack_dd();
  sub_7F760(a2, (__int64)&v6, v3 - (_QWORD)&v6);
  v4 = pack_dd();
  sub_7F760(a2, (__int64)&v6, v4 - (_QWORD)&v6);
  return v7 - __readfsqword(0x28u);
}

