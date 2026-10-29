__int64 __fastcall sub_BA50(__int64 a1, double a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0xC000) == 0 )
    return sub_B2C0(a1, (__int64)"%0*a", 6, a2);
  get_ea_name();
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, byte_11DF8, 0);
  return v3 - __readfsqword(0x28u);
}

