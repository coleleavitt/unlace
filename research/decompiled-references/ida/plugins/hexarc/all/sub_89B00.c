unsigned __int64 __fastcall sub_89B00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_88FC0((__int64)a2, 2, "va_adaptor.va_ids");
  sub_798E0(a2, (__int64 *)(a1 + 24));
  sub_88FC0((__int64)a2, 2, "va_adaptor.last_fixed");
  v2 = pack_dd();
  sub_79160(a2, (__int64)&v5, v2 - (_QWORD)&v5);
  sub_88FC0((__int64)a2, 2, "va_adaptor.flags");
  v3 = pack_dd();
  sub_79160(a2, (__int64)&v5, v3 - (_QWORD)&v5);
  return v6 - __readfsqword(0x28u);
}

