__int64 __fastcall sub_39A20(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  volatile signed __int32 *v4; // r12
  __int64 *v5; // rsi
  __int64 *v6; // rdx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  __int64 *v16; // rdx
  int v17; // ecx
  int v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  volatile signed __int32 *v21; // r14
  __int64 v22; // r13
  __m128 v23; // xmm0
  volatile signed __int32 *v24; // r15
  __m128 v25; // xmm2
  volatile signed __int32 *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  struct _Unwind_Exception *v31; // rbx
  __m128i v32; // [rsp+10h] [rbp-B8h] BYREF
  __m128 v33; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v34; // [rsp+30h] [rbp-98h] BYREF
  __m128i v35; // [rsp+40h] [rbp-88h] BYREF
  __m128i v36; // [rsp+50h] [rbp-78h] BYREF
  __m128 v37; // [rsp+60h] [rbp-68h] BYREF
  __m128i v38; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) != 2 )
    return 0;
  v5 = *(__int64 **)(a1 + 56);
  v6 = *(__int64 **)(a1 + 96);
  v8 = *((_DWORD *)v5 + 2);
  v9 = *((_DWORD *)v6 + 2);
  if ( v9 != v8 )
  {
    if ( ((v9 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v9 - 1) > 1 )
    {
LABEL_5:
      sub_31CC0();
      return 0;
    }
    goto LABEL_57;
  }
  v12 = *v5;
  v13 = *v6;
  if ( *v6 == *v5 )
  {
    v18 = *((_DWORD *)v6 + 6);
    v13 = v6[2];
    if ( ((v18 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v18 - 1) > 1 )
      goto LABEL_5;
    if ( v18 != v8 )
    {
LABEL_57:
      sub_31CA0();
      goto LABEL_58;
    }
    v9 = *((_DWORD *)v5 + 2);
  }
  else if ( ((v9 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v9 - 1) > 1 )
  {
    goto LABEL_5;
  }
  v14 = 2 * v12;
  if ( (unsigned int)(v8 - 1) <= 1 || v8 == 4 )
    v14 &= ~(-1LL << (8 * (unsigned __int8)v8));
  v10 = 0;
  if ( v13 == v14 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 > 0x40 )
    {
LABEL_58:
      v31 = (struct _Unwind_Exception *)sub_31CE0();
      if ( v4 )
        sub_1C430(v4);
      _Unwind_Resume(v31);
    }
    if ( v15 )
    {
      v16 = v5;
      v17 = 0;
      v15 = 0;
      do
      {
        if ( *((_DWORD *)v16 + 2) == v9 && *v16 == v13 )
          v15 |= 1LL << v17;
        ++v17;
        v16 += 2;
      }
      while ( (unsigned int)*(_QWORD *)(a1 + 64) != v17 );
    }
    sub_35840(&v32, byte_4E9E0, *(_DWORD *)(a1 + 16), v15);
    v19 = (__m128)_mm_load_si128(&v32);
    v20 = _mm_movehl_ps(a3, v19);
    v33 = v19;
    if ( v20.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v20.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(v20.m128_u64[0] + 8);
    }
    sub_1C9F0(&v34, (const __m128i *)&v33, *(double *)v19.m128_u64, v20);
    v21 = (volatile signed __int32 *)v34.m128i_i64[1];
    v22 = operator new(0x20u);
    *(_QWORD *)(v22 + 24) = -v12;
    *(_QWORD *)(v22 + 8) = 0x100000001LL;
    *(_QWORD *)v22 = off_4DA48;
    *(_QWORD *)(v22 + 16) = off_4D960;
    v35.m128i_i64[0] = v22 + 16;
    v35.m128i_i64[1] = v22;
    sub_38200(&v36, &v35, &v34, *(double *)v19.m128_u64, v20, a4);
    v23 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
    v24 = (volatile signed __int32 *)v36.m128i_i64[1];
    v25 = _mm_movehl_ps(a4, v23);
    v37 = v23;
    if ( v25.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v25.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(v25.m128_u64[0] + 8);
    }
    v36.m128i_i64[1] = (__int64)v24;
    sub_38330(&v38, (const __m128i *)&v37, &v36, *(double *)v23.m128_u64, v20, v25);
    v26 = *(volatile signed __int32 **)(a1 + 88);
    *(__m128i *)(a1 + 80) = _mm_load_si128(&v38);
    if ( v26 )
      sub_1C430(v26);
    if ( v25.m128_u64[0] )
      sub_1C430((volatile signed __int32 *)v25.m128_u64[0]);
    if ( v24 )
      sub_1C430(v24);
    if ( v22 )
      sub_1C430((volatile signed __int32 *)v22);
    if ( v21 )
      sub_1C430(v21);
    if ( v20.m128_u64[0] )
      sub_1C430((volatile signed __int32 *)v20.m128_u64[0]);
    v27 = *(_QWORD **)(a1 + 56);
    v28 = &v27[2 * *(_QWORD *)(a1 + 64)];
    if ( v27 != v28 )
    {
      if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v27 = 0, v27 += 2, v28 != v27) )
      {
        do
        {
          *v27 = 0;
          v27 += 4;
          *(v27 - 2) = 0;
        }
        while ( v28 != v27 );
      }
    }
    sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
    sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v29, v30);
    if ( v20.m128_u64[0] )
      sub_1C430((volatile signed __int32 *)v20.m128_u64[0]);
    return 1;
  }
  return v10;
}
