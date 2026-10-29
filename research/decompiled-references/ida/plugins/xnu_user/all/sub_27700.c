__int64 __fastcall sub_27700(__m128i *a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int32 v6; // eax
  size_t v7; // rbp
  void *v8; // rcx
  __m128i si128; // xmm0
  __int64 v10; // rax
  bool v11; // cc
  __int64 v12; // rsi
  const char *v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  void *v22; // rax
  void *v23; // [rsp+8h] [rbp-140h]
  __m128i v24[3]; // [rsp+10h] [rbp-138h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v26; // [rsp+50h] [rbp-F8h]
  __int64 v27; // [rsp+58h] [rbp-F0h]
  unsigned int v28; // [rsp+60h] [rbp-E8h]
  __int64 v29; // [rsp+68h] [rbp-E0h]
  void *src; // [rsp+70h] [rbp-D8h]
  size_t n[2]; // [rsp+78h] [rbp-D0h]
  __m128i v32; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-98h]
  __int64 v35; // [rsp+B8h] [rbp-90h]
  __int64 v36; // [rsp+C0h] [rbp-88h]
  __int64 v37; // [rsp+C8h] [rbp-80h]
  __int64 v38; // [rsp+D0h] [rbp-78h]
  __int128 v39; // [rsp+D8h] [rbp-70h]
  __int128 v40; // [rsp+E8h] [rbp-60h]
  __m128i *v41; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+108h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  sub_1E1A0((__int64)a1, a2);
  v2 = sub_1E370((__int64)a1);
  if ( v2 == -1 )
    return 0;
  v3 = v2;
  sub_1DEC0((__int64)a1);
  *(_OWORD *)n = 0;
  v25[0] = off_97188;
  v25[1] = 33;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  src = nullptr;
  v32 = 0;
  v4 = sub_42860(&a1[106].m128i_u64[1], v3, v25, 0);
  if ( (_BYTE)v4 )
  {
    v6 = HIDWORD(v26);
    v7 = n[0];
    v8 = nullptr;
    a1[93].m128i_i64[1] = v3;
    a1[97].m128i_i32[2] = 25;
    a1[99].m128i_i32[2] = 25;
    a1[97].m128i_i32[3] = v6;
    if ( v7 )
    {
      v22 = (void *)qalloc_or_throw();
      v8 = memcpy(v22, src, v7);
    }
    si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    if ( a1[96].m128i_i64[0] )
    {
      a1[96].m128i_i64[1] = 0;
      v23 = v8;
      v24[0] = si128;
      qfree();
      si128 = _mm_load_si128(v24);
      v8 = v23;
    }
    v10 = v27;
    v11 = a1[95].m128i_i64[1] <= 6uLL;
    a1[96].m128i_i64[0] = (__int64)v8;
    v12 = a1[94].m128i_i64[1];
    *(__m128i *)((char *)a1 + 1544) = si128;
    a1[94].m128i_i64[0] = v10;
    if ( v11 )
    {
      v21 = qvector_reserve();
      a1[94].m128i_i64[1] = v21;
      v12 = v21;
    }
    a1[95].m128i_i64[0] = 7;
    *(_DWORD *)v12 = 1852990827;
    *(_WORD *)(v12 + 4) = 27749;
    v13 = "macOS";
    *(_BYTE *)(a1[94].m128i_i64[1] + 6) = 0;
    if ( v32.m128i_i32[0] == 2 )
      v13 = "iOS";
    sub_140F0((__int64)"XNU platform version: %s %d.%d.%d\n", v13, v32.m128i_i32[1], v32.m128i_i32[2], v32.m128i_i32[3]);
    v14 = _mm_loadu_si128(&v32);
    a1[133] = v14;
    if ( _mm_cvtsi128_si32(v14) == 1 && (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v14, 85)) > 0xA )
    {
      sub_19AC0((__int64)&a1[94].m128i_i64[1], "com.apple.kernel");
      v15 = v3 - v28;
      if ( (unsigned __int8)sub_2FD90(&a1[106].m128i_u64[1], v15) )
        sub_26D10(a1, v15, 0);
    }
    setinf();
    v33 = 0;
    LOBYTE(v33) = 6;
    set_compiler();
    getinf();
    setinf();
    sub_1DFA0(a1);
    if ( *(_DWORD *)(qword_9AD30 + 144LL * a1[73].m128i_i32[2] + 120) == 13 )
      v24[1] = 0;
    else
      v24[2] = 0;
    set_compiler();
    v16 = a1->m128i_i64[0];
    v39 = 0;
    *((_QWORD *)&v33 + 1) = 4;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    *(_QWORD *)&v33 = &off_97320;
    v41 = a1;
    v40 = 0;
    v4 = (*(__int64 (__fastcall **)(__m128i *, __int128 *, __int64 *))(v16 + 840))(a1, &v33, &a1[93].m128i_i64[1]);
    if ( (_BYTE)v4 )
    {
      if ( a1[133].m128i_i32[0] == 1 && a1[133].m128i_i32[1] > 0xAu && a1[122].m128i_i64[0] != -1 )
        sub_271A0(a1->m128i_i64, (__int64)&v33, v17, v18, v19, v20);
      sub_1EFD0((__int64)a1, 0.0);
    }
    *(_QWORD *)&v33 = off_97188;
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
      v25[0] = off_97188;
      if ( !src )
        return v4;
      goto LABEL_4;
    }
  }
  v25[0] = off_97188;
  if ( src )
  {
LABEL_4:
    n[0] = 0;
    qfree();
  }
  return v4;
}

