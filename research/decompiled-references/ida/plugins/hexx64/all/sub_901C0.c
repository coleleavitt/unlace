unsigned __int64 __fastcall sub_901C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_8F680((__int64)a2, 2, "va_adaptor.va_ids");
  sub_7FEE0(a2, (__int64 *)(a1 + 24));
  sub_8F680((__int64)a2, 2, "va_adaptor.last_fixed");
  v2 = pack_dd();
  sub_7F760(a2, (__int64)&v5, v2 - (_QWORD)&v5);
  sub_8F680((__int64)a2, 2, "va_adaptor.flags");
  v3 = pack_dd();
  sub_7F760(a2, (__int64)&v5, v3 - (_QWORD)&v5);
  return v6 - __readfsqword(0x28u);
}

