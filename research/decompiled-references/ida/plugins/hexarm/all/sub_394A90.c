unsigned __int64 __fastcall sub_394A90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const __m128i *v5; // rdi
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int32 v9; // eax
  __int128 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  void (__fastcall ***v16)(_QWORD); // rdi
  bool v17; // zf
  void (__fastcall ***v18)(_QWORD); // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int32 v23; // eax
  __int64 v24; // r8
  __int64 v25; // [rsp-8h] [rbp-118h]
  __int128 *v26; // [rsp+0h] [rbp-110h]
  __int64 v27; // [rsp+0h] [rbp-110h]
  __m128i v28; // [rsp+8h] [rbp-108h] BYREF
  __int64 v29; // [rsp+18h] [rbp-F8h]
  __int64 v30; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v32[4]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+50h] [rbp-C0h] BYREF
  int v34; // [rsp+58h] [rbp-B8h]
  int v35; // [rsp+5Ch] [rbp-B4h]
  __int64 v36; // [rsp+60h] [rbp-B0h]
  __int64 v37; // [rsp+68h] [rbp-A8h]
  __int128 v38; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v39; // [rsp+80h] [rbp-90h]
  __int64 v40; // [rsp+90h] [rbp-80h]
  __int64 v41; // [rsp+98h] [rbp-78h]
  __m128i v42; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-60h]
  __int64 v44; // [rsp+B8h] [rbp-58h]
  __int64 v45; // [rsp+C0h] [rbp-50h]
  __int64 v46; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v47; // [rsp+D8h] [rbp-38h]

  HIDWORD(v29) = a3;
  v5 = (const __m128i *)a1[4];
  v47 = __readfsqword(0x28u);
  if ( v5 )
  {
    v6 = _mm_loadl_epi64(v5);
    v7 = v5[8].m128i_i64[1];
    v32[1] = 0;
    v32[0] = off_4E0BF8;
    v35 = v7;
    v34 = 0;
    v33 = off_4E0BF8;
    v32[2] = v6.m128i_i64[0];
    v32[3] = v6.m128i_i64[0];
    v36 = v6.m128i_i64[0];
    v37 = v6.m128i_i64[0];
    if ( a4 == -1 )
    {
      v9 = 0;
      v10 = &v38;
    }
    else
    {
      v28.m128i_i64[1] = v6.m128i_i64[0];
      sub_2585A0((__int64)v5, a2, a3);
      v20 = sub_384FF0(a4);
      v6 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
      if ( v20 )
      {
        v21 = a1[1];
        v39.m128i_i64[0] = 0;
        v40 = 0;
        v39.m128i_i64[1] = -1;
        v41 = v20;
        v43 = 0;
        v44 = -1;
        v45 = 0;
        v46 = 0;
        v28.m128i_i64[1] = (__int64)&v38;
        v28.m128i_i64[0] = v6.m128i_i64[0];
        v38 = 0;
        v42 = 0;
        v22 = sub_394900(&v42, (__int64)&v38, v21, 0);
        v23 = 0;
        v24 = v28.m128i_i64[1];
        if ( v22 )
          v23 = *(_DWORD *)(v46 + 12);
        if ( v46 )
        {
          v27 = v28.m128i_i64[1];
          v28.m128i_i32[2] = v23;
          v28.m128i_i64[0] = v6.m128i_i64[0];
          qfree();
          v24 = v27;
          v23 = v28.m128i_i32[2];
        }
        v26 = (__int128 *)v24;
        v28.m128i_i32[2] = v23;
        v28.m128i_i64[0] = v6.m128i_i64[0];
        qfree();
        v5 = (const __m128i *)a1[4];
        v9 = v28.m128i_i32[2];
        v6 = _mm_loadl_epi64(&v28);
        v10 = v26;
      }
      else
      {
        v5 = (const __m128i *)a1[4];
        v9 = 0;
        v10 = &v38;
      }
    }
    HIDWORD(v38) = v9;
    v39 = _mm_unpacklo_epi64(v6, v6);
    v44 = 0xFFFFFFFFLL;
    v42 = 0;
    DWORD2(v38) = 0;
    *(_QWORD *)&v38 = off_4E0BF8;
    v43 = 0;
    LODWORD(v45) = 1;
    v11 = callui(148, a2, v32, &v33, v10, &v42, &v5[8], &unk_4E1300, a1, 0);
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    callui(77, v11, 7, v12, v13, v14, v26, v28.m128i_i64[0], v28.m128i_i64[1], v29);
    if ( (v29 & 0x2000000000LL) == 0 )
    {
      sub_3A6060(&v30, *(_QWORD *)(a1[16] + 112LL), *(_QWORD *)(a1[4] + 8LL) + 8LL);
      v15 = a1[4] + 128LL;
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      callui(111, a1 + 2, 0, a1[1], &v31, v15, 0, 0, 1, v25);
      v16 = (void (__fastcall ***)(_QWORD))v31;
      if ( v31 )
      {
        v17 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v17 )
          (**v16)(v16);
      }
      v18 = (void (__fastcall ***)(_QWORD))v30;
      if ( v30 )
      {
        v17 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v17 )
          (**v18)(v18);
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}

