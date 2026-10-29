unsigned __int64 __fastcall sub_394550(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        double a5,
        double a6,
        __m128i a7,
        double a8)
{
  __m128i *v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int32 v13; // eax
  __int128 *v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  double v20; // xmm0_8
  void (__fastcall ***v21)(_QWORD, double); // rdi
  bool v22; // zf
  void (__fastcall ***v23)(_QWORD, double); // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  int v28; // edx
  __int32 v29; // eax
  __int64 v30; // r8
  __int64 v31; // [rsp-8h] [rbp-118h]
  __int128 *v32; // [rsp+0h] [rbp-110h]
  __int64 v33; // [rsp+0h] [rbp-110h]
  __m128i v34; // [rsp+8h] [rbp-108h] BYREF
  __int64 v35; // [rsp+18h] [rbp-F8h]
  __int64 v36; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v38[4]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+50h] [rbp-C0h] BYREF
  int v40; // [rsp+58h] [rbp-B8h]
  int v41; // [rsp+5Ch] [rbp-B4h]
  __int64 v42; // [rsp+60h] [rbp-B0h]
  __int64 v43; // [rsp+68h] [rbp-A8h]
  __int128 v44; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v45; // [rsp+80h] [rbp-90h]
  __int64 v46; // [rsp+90h] [rbp-80h]
  __int64 v47; // [rsp+98h] [rbp-78h]
  __m128i v48; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-60h]
  __int64 v50; // [rsp+B8h] [rbp-58h]
  __int64 v51; // [rsp+C0h] [rbp-50h]
  __int64 v52; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v53; // [rsp+D8h] [rbp-38h]

  HIDWORD(v35) = a3;
  v9 = (__m128i *)a1[4];
  v53 = __readfsqword(0x28u);
  if ( v9 )
  {
    v10 = _mm_loadl_epi64(v9);
    v11 = v9[8].m128i_i64[1];
    v38[1] = 0;
    v38[0] = off_4E6538;
    v41 = v11;
    v40 = 0;
    v39 = off_4E6538;
    v38[2] = v10.m128i_i64[0];
    v38[3] = v10.m128i_i64[0];
    v42 = v10.m128i_i64[0];
    v43 = v10.m128i_i64[0];
    if ( a4 == -1 )
    {
      v13 = 0;
      v14 = &v44;
    }
    else
    {
      v34.m128i_i64[1] = v10.m128i_i64[0];
      sub_2581E0(v9);
      v25 = sub_384AB0(a4);
      v10 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
      v26 = v25;
      if ( v25 )
      {
        v27 = a1[1];
        v45.m128i_i64[0] = 0;
        v46 = 0;
        v45.m128i_i64[1] = -1;
        v47 = v25;
        v49 = 0;
        v50 = -1;
        v51 = 0;
        v52 = 0;
        v34.m128i_i64[1] = (__int64)&v44;
        v34.m128i_i64[0] = v10.m128i_i64[0];
        v44 = 0;
        v48 = 0;
        v28 = sub_3943C0(&v48, (__int64)&v44, v27, 0, *(double *)v10.m128i_i64, 0.0, a7, a8);
        v29 = 0;
        v30 = v34.m128i_i64[1];
        if ( v28 )
          v29 = *(_DWORD *)(v52 + 12);
        if ( v52 )
        {
          v33 = v34.m128i_i64[1];
          v34.m128i_i32[2] = v29;
          v34.m128i_i64[0] = v10.m128i_i64[0];
          qfree(v52);
          v30 = v33;
          v29 = v34.m128i_i32[2];
        }
        v32 = (__int128 *)v30;
        v34.m128i_i32[2] = v29;
        v34.m128i_i64[0] = v10.m128i_i64[0];
        qfree(v26);
        v9 = (__m128i *)a1[4];
        v13 = v34.m128i_i32[2];
        v10 = _mm_loadl_epi64(&v34);
        v14 = v32;
      }
      else
      {
        v9 = (__m128i *)a1[4];
        v13 = 0;
        v14 = &v44;
      }
    }
    HIDWORD(v44) = v13;
    v45 = _mm_unpacklo_epi64(v10, v10);
    v50 = 0xFFFFFFFFLL;
    v48 = 0;
    DWORD2(v44) = 0;
    *(_QWORD *)&v44 = off_4E6538;
    v49 = 0;
    LODWORD(v51) = 1;
    callui(148, a2, v38, &v39, v14, &v48, &v9[8], &unk_4E6C40, a1, 0);
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    callui(77, v15, 7, v16, v17, v18, v32, v34.m128i_i64[0], v34.m128i_i64[1], v35);
    if ( (v35 & 0x2000000000LL) == 0 )
    {
      sub_3A5B20(&v36, *(_QWORD *)(a1[16] + 112LL), *(_QWORD *)(a1[4] + 8LL) + 8LL);
      v19 = a1[4] + 128LL;
      v37 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v20 = callui(111, a1 + 2, 0, a1[1], &v37, v19, 0, 0, 1, v31);
      v21 = (void (__fastcall ***)(_QWORD, double))v37;
      if ( v37 )
      {
        v22 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v22 )
          (**v21)(v21, v20);
      }
      v23 = (void (__fastcall ***)(_QWORD, double))v36;
      if ( v36 )
      {
        v22 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v22 )
          (**v23)(v23, v20);
      }
    }
  }
  return v53 - __readfsqword(0x28u);
}

