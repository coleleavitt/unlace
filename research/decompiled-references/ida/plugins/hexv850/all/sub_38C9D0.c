unsigned __int64 __fastcall sub_38C9D0(_QWORD *a1, __int64 *a2)
{
  int v2; // ecx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdx
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  get_ea_name();
  sub_66DF0(a2);
  v3 = *(__int64 (__fastcall **)(__int64))(*a1 + 128LL);
  if ( v3 == sub_37DFE0 )
    v4 = a1[3];
  else
    v4 = ((__int64 (*)(_QWORD *, const char *, ...))v3)(a1, "%s:%u", (const char *)sub_37DFE0, v2);
  if ( v4 != -1 )
    sub_F5F10(a2);
  return v6 - __readfsqword(0x28u);
}

