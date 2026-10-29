unsigned __int64 __fastcall sub_2F9830(const __m128i *a1, const __m128i *a2)
{
  __m128i v3[3]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v4[12]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v6; // [rsp+C8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_2C8F50(v3, a1);
  v3[0].m128i_i64[0] = (__int64)off_4B66C8;
  v5 = a1[12].m128i_i64[0];
  sub_2ADBA0((__int64)a1, a2);
  a1[12].m128i_i64[0] = a2[12].m128i_i64[0];
  sub_2ADBA0((__int64)a2, v3);
  a2[12].m128i_i64[0] = v5;
  v3[0].m128i_i64[0] = (__int64)&off_4B4EC8;
  cleanup_argloc();
  sub_2B45C0(v4);
  cleanup_argloc();
  return v6 - __readfsqword(0x28u);
}

