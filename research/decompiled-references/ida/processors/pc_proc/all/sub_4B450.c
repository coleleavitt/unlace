char __fastcall sub_4B450(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v6 = *(_BYTE *)(a1 + 793) == 0;
  v9 = __readfsqword(0x28u);
  if ( v6
    || !*(_BYTE *)(a1 + 968)
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, unsigned __int64))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *a2,
          a4,
          a5,
          a6,
          0,
          0,
          0,
          0,
          0,
          v9)
    || !sub_4AC90(a1, (__int64 *)(a1 + 944), &v8) )
  {
    return sub_4AF30(a1, a2);
  }
  *(_BYTE *)(a1 + 968) = 0;
  return set_moved_jpt();
}

