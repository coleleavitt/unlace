unsigned __int64 __fastcall sub_2C07C0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, __m128i a5)
{
  __m128i v6[2]; // [rsp+0h] [rbp-28h] BYREF

  v6[0].m128i_i64[1] = __readfsqword(0x28u);
  v6[0].m128i_i64[0] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 104);
  sub_38BEC0(v6, a2, a3, a4, 0, a5);
  sub_140140((__int64 **)v6);
  return v6[0].m128i_i64[1] - __readfsqword(0x28u);
}

