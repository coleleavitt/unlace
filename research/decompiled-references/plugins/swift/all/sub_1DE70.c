__int64 __fastcall sub_1DE70(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  v4 = &off_27B80;
  return sub_1D9D0((__int64 (__fastcall ***)(_QWORD, __m128 *))&v4, a2, a3);
}
