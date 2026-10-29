unsigned __int64 __fastcall sub_D830(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned int dword; // eax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v6; // [rsp+58h] [rbp-20h]

  v1 = a1[77];
  v6 = __readfsqword(0x28u);
  dword = get_dword();
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, __int64 *, __int64))loc_BA60)(v1, a1 + 28, dword, &v5, 80);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 280LL))(a1, 16, v3);
  return v6 - __readfsqword(0x28u);
}

