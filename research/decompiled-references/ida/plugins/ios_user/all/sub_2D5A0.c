bool __fastcall sub_2D5A0(__int64 a1, __int64 a2, __int64 (*a3)())
{
  bool result; // al
  __m128i v4; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+10h] [rbp-38h]
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  result = *(_QWORD *)(a2 + 8) == 16
        && (v5 = 0,
            v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_8BBB8, (__m128i)(unsigned __int64)&v6),
            sub_2BFD0(a1, &v4, a3, (__int64 (*)())off_8BBB8),
            v5)
        && *(_OWORD *)*(_QWORD *)a2 - v6 == 0;
  return result;
}

