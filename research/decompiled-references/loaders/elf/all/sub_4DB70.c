unsigned __int64 __fastcall sub_4DB70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        char a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  bool v12; // zf
  __int64 v13; // rdi
  __m128i v15[2]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v16; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int128 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  unsigned __int64 v23; // [rsp+68h] [rbp-18h]

  v12 = *(_DWORD *)(a3 + 4) == 4;
  v23 = __readfsqword(0x28u);
  v15[0].m128i_i64[1] = a2;
  v15[1] = (__m128i)_mm_loadh_ps((const double *)&a11);
  if ( !v12 && !a9 )
  {
    v17 = 0;
    v19 = 0;
    v16 = a12;
    v15[0].m128i_i64[0] = (__int64)&off_870C8;
    v20 = 0;
    v22 = 0;
    v18 = 0;
    v21 = 0;
    sub_4D840(a1, a2, v15, 0, a4, a5, 0.0, a8, a6, a10);
    v13 = v17;
    v15[0].m128i_i64[0] = (__int64)&off_870A0;
    if ( !v17 )
      return v23 - __readfsqword(0x28u);
    goto LABEL_4;
  }
  LOBYTE(v21) = a9;
  v17 = 0;
  v16 = a12;
  v15[0].m128i_i64[0] = (__int64)&off_871A8;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  sub_4D500(a1, a2, (__int64)v15, 1u, a4, a5, 0.0, a8, a6, a10);
  v13 = v17;
  v15[0].m128i_i64[0] = (__int64)&off_870F0;
  if ( v17 )
  {
LABEL_4:
    *(_QWORD *)&v18 = 0;
    qfree(v13);
  }
  return v23 - __readfsqword(0x28u);
}
