unsigned __int64 __fastcall sub_117C0(__int64 a1, __int64 a2, __m128i *a3, const char *a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rbx
  __m128i *v7; // r14
  __m128i *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r13
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-98h] BYREF
  _DWORD *v19; // [rsp+8h] [rbp-90h]
  _DWORD v20[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128 v21; // [rsp+18h] [rbp-80h]
  __m128 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+44h] [rbp-54h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v18 = a1;
  v27 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 200);
  if ( !v6 )
  {
    v15 = (__m128i *)operator new(0xE0u);
    v16 = _mm_loadl_epi64((const __m128i *)&off_19A38);
    a4 = "dalvik:FollowExc";
    v6 = v15;
    v15->m128i_i32[2] = 1;
    v15->m128i_i64[0] = (__int64)off_19890;
    v15[1].m128i_i64[0] = (__int64)off_197A0;
    v15[2].m128i_i64[0] = (__int64)off_19980;
    v15[3].m128i_i64[0] = (__int64)off_199B0;
    v15[7].m128i_i64[0] = (__int64)"Follow Exception";
    a3 = v15 + 1;
    v15[6].m128i_i64[0] = (__int64)"Jump/Clear mark...";
    v15[8].m128i_i64[1] = (__int64)"Jump/Clear mark...";
    v15[9].m128i_i64[0] = (__int64)"dalvik:TypeNames";
    v15[9].m128i_i64[1] = (__int64)"Type Names";
    v15[10].m128i_i64[0] = (__int64)v15[2].m128i_i64;
    v15[11].m128i_i64[0] = (__int64)"View/Open subviews/Problems";
    v15[11].m128i_i64[1] = (__int64)"dalvik:RenDexMethod";
    v15[12].m128i_i64[0] = (__int64)"Rename DEX Method";
    v15[12].m128i_i64[1] = (__int64)v15[3].m128i_i64;
    v15[13].m128i_i64[0] = (__int64)"Shift+N";
    v15[13].m128i_i64[1] = (__int64)"Edit/Rename";
    v17 = v18;
    v6[1].m128i_i32[2] = 1;
    v6[2].m128i_i32[2] = 1;
    v6[3].m128i_i32[2] = 1;
    v6[5].m128i_i64[0] = (__int64)v6;
    v6[5].m128i_i64[1] = 0;
    v6[6].m128i_i64[1] = (__int64)"dalvik:FollowExc";
    v6[7].m128i_i64[1] = (__int64)v6[1].m128i_i64;
    v6[8].m128i_i64[0] = 0;
    v6[10].m128i_i64[1] = 0;
    *(_QWORD *)(v17 + 200) = v6;
    v6[4] = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)"Reverse Follow Exception");
  }
  v7 = v6 + 4;
  v19 = v20;
  v8 = v6 + 14;
  do
  {
    v9 = v7->m128i_i64[0];
    v10 = v7[1].m128i_i64[1];
    v11 = v7[2].m128i_i64[0];
    v12 = _mm_loadh_ps((const double *)&v7->m128i_i64[1]);
    v13 = _mm_loadh_ps((const double *)&v18);
    v24 = 0;
    v20[1] = 0;
    v23 = v10;
    v25 = 0;
    v20[0] = 64;
    v26 = 0x8FFFFFFFFLL;
    v21 = v12;
    v22 = v13;
    if ( (unsigned __int8)callui(127, v19, a3, a4, a5, a6, v18)
      && !(unsigned __int8)callui(129, v11, v9, 1, a5, a6, v18) )
    {
      callui(128, v9, a3, a4, a5, a6, v18);
    }
    v7 = (__m128i *)((char *)v7 + 40);
  }
  while ( v8 != v7 );
  return v27 - __readfsqword(0x28u);
}

