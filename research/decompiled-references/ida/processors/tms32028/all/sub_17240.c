unsigned __int64 __fastcall sub_17240(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  sub_14390(a1, 0xFFFF, (__int64)byte_1AB63);
  get_ea_name();
  sub_17180(a1, (__int64)"End of function %s", nullptr);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  return v2 - __readfsqword(0x28u);
}

