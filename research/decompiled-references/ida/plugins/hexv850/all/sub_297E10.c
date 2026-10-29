unsigned __int64 __fastcall sub_297E10(const __m128i *a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rsi
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-78h] BYREF
  int v5; // [rsp+8h] [rbp-70h]
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int128 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int128 v9; // [rsp+30h] [rbp-48h]
  __m128i v10; // [rsp+40h] [rbp-38h]
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v1 = _mm_loadl_epi64(a1);
  v2 = a1->m128i_i64[1];
  v11 = __readfsqword(0x28u);
  v5 = 2;
  v6 = 0;
  v8 = 0;
  v4 = (__int64 (__fastcall **)())&off_4B4798;
  v7 = 0;
  v9 = 0;
  v10 = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)a1);
  sub_2506C0((__int64 *)&v4, v2 + 16, 0);
  v4 = off_4AF6D8;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

