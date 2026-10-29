__int64 __fastcall sub_38C40(__int64 a1, double a2, __m128 a3, __m128 a4, __m128 a5)
{
  volatile signed __int32 *v5; // r13
  volatile signed __int32 *v6; // r14
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  volatile signed __int32 *v13; // r15
  int v14; // esi
  volatile signed __int32 *v15; // r12
  int v16; // r8d
  int v17; // edi
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r10
  int v21; // ecx
  __int64 v22; // rdx
  volatile signed __int32 *v23; // r13
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __int64 v26; // rbp
  __m128i v27; // xmm0
  __int64 v28; // r12
  __m128 v29; // xmm0
  volatile signed __int32 *v30; // r15
  volatile signed __int32 *v31; // xmm3_8
  volatile signed __int32 *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  struct _Unwind_Exception *v37; // rbx
  volatile signed __int32 *v38; // [rsp+8h] [rbp-120h]
  volatile signed __int32 *v39; // [rsp+8h] [rbp-120h]
  volatile signed __int32 *v40; // [rsp+10h] [rbp-118h]
  volatile signed __int32 *v41; // [rsp+18h] [rbp-110h]
  __m128i v42; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v43; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v45; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v46; // [rsp+70h] [rbp-B8h] BYREF
  __m128 v47; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+90h] [rbp-98h] BYREF
  __m128i v49; // [rsp+A0h] [rbp-88h] BYREF
  __m128 v50; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v51; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v52; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+E8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  result = 0;
  if ( *(_QWORD *)(a1 + 104) != 3 )
    return 0;
  v8 = *(_QWORD *)(a1 + 56);
  v10 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a1 + 64);
    v13 = *(volatile signed __int32 **)(v11 + 16);
    v14 = *(_DWORD *)(v11 + 24);
    v15 = *(volatile signed __int32 **)(v11 + 32);
    v16 = *(_DWORD *)(v11 + 40);
    if ( v12 > 0x40 )
    {
      v37 = (struct _Unwind_Exception *)sub_31CE0();
      if ( v40 )
        sub_1C430(v40);
      if ( v13 )
        sub_1C430(v13);
      if ( v15 )
        sub_1C430(v15);
      if ( v5 )
        sub_1C430(v5);
      if ( v38 )
        sub_1C430(v38);
      if ( v6 )
      {
        sub_1C430(v6);
        sub_1C430(v6);
      }
      if ( v5 )
        sub_1C430(v5);
      _Unwind_Resume(v37);
    }
    if ( v12 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      v18 = v8;
      v12 = 0;
      v19 = 0;
      do
      {
        while ( v14 != *(_DWORD *)(v8 + 8) || v13 != *(volatile signed __int32 **)v8 )
        {
          ++v19;
          v8 += 16;
          if ( v19 == v17 )
            goto LABEL_12;
        }
        v8 += 16;
        v20 = 1LL << v19++;
        v12 |= v20;
      }
      while ( v19 != v17 );
LABEL_12:
      v21 = 0;
      do
      {
        while ( *(_DWORD *)(v18 + 8) != v16 || *(volatile signed __int32 **)v18 != v15 )
        {
          ++v21;
          v18 += 16;
          if ( v21 == v17 )
            goto LABEL_17;
        }
        v18 += 16;
        v22 = 1LL << v21++;
        v10 |= v22;
      }
      while ( v21 != v17 );
    }
LABEL_17:
    sub_35840(&v42, byte_4E9E0, *(_DWORD *)(a1 + 16), v12);
    v23 = (volatile signed __int32 *)v42.m128i_i64[1];
    sub_35840(&v43, byte_4E9E0, *(_DWORD *)(a1 + 16), v10);
    v24 = (__m128)_mm_load_si128(&v43);
    v25 = _mm_movehl_ps(a3, v24);
    v50 = v24;
    if ( v25.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v25.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(v25.m128_u64[0] + 8);
    }
    v26 = operator new(0x20u);
    *(_QWORD *)(v26 + 24) = v15;
    *(_QWORD *)(v26 + 8) = 0x100000001LL;
    *(_QWORD *)v26 = off_4DA48;
    *(_QWORD *)(v26 + 16) = off_4D960;
    v49.m128i_i64[0] = v26 + 16;
    v49.m128i_i64[1] = v26;
    sub_38200(&v51, &v49, (const __m128i *)&v50, *(double *)v24.m128_u64, v25, a4);
    v27 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v42), (__m128i)(unsigned __int64)v23);
    v39 = (volatile signed __int32 *)v51.m128i_i64[1];
    v45 = v27;
    if ( v23 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v23 + 2, 1u);
      else
        ++*((_DWORD *)v23 + 2);
    }
    v28 = operator new(0x20u);
    *(_QWORD *)(v28 + 24) = v13;
    *(_QWORD *)(v28 + 8) = 0x100000001LL;
    *(_QWORD *)v28 = off_4DA48;
    *(_QWORD *)(v28 + 16) = off_4D960;
    v44.m128i_i64[0] = v28 + 16;
    v44.m128i_i64[1] = v28;
    sub_38200(&v46, &v44, &v45, *(double *)v27.m128i_i64, v25, (__m128)(unsigned __int64)v23);
    v29 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
    v30 = (volatile signed __int32 *)v46.m128i_i64[1];
    v31 = (volatile signed __int32 *)_mm_movehl_ps(a5, v29).m128_u64[0];
    v47 = v29;
    if ( v31 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v31 + 2, 1u);
      else
        ++*((_DWORD *)v31 + 2);
    }
    v46.m128i_i64[1] = (__int64)v30;
    sub_38330(&v48, (const __m128i *)&v47, &v46, *(double *)v29.m128_u64, v25, (__m128)(unsigned __int64)v23);
    v41 = (volatile signed __int32 *)v48.m128i_i64[1];
    v51.m128i_i64[1] = (__int64)v39;
    sub_38330(&v52, &v48, &v51, *(double *)v29.m128_u64, v25, (__m128)(unsigned __int64)v23);
    v32 = *(volatile signed __int32 **)(a1 + 88);
    *(__m128i *)(a1 + 80) = _mm_load_si128(&v52);
    if ( v32 )
      sub_1C430(v32);
    if ( v41 )
      sub_1C430(v41);
    if ( v31 )
      sub_1C430(v31);
    if ( v30 )
      sub_1C430(v30);
    if ( v28 )
      sub_1C430((volatile signed __int32 *)v28);
    if ( v23 )
      sub_1C430(v23);
    if ( v39 )
      sub_1C430(v39);
    if ( v26 )
      sub_1C430((volatile signed __int32 *)v26);
    if ( v25.m128_u64[0] )
      sub_1C430((volatile signed __int32 *)v25.m128_u64[0]);
    v33 = *(_QWORD **)(a1 + 56);
    v34 = &v33[2 * *(_QWORD *)(a1 + 64)];
    if ( v33 != v34 )
    {
      if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v33 = 0, v33 += 2, v34 != v33) )
      {
        do
        {
          *v33 = 0;
          v33 += 4;
          *(v33 - 2) = 0;
        }
        while ( v34 != v33 );
      }
    }
    sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
    sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v35, v36);
    if ( v25.m128_u64[0] )
      sub_1C430((volatile signed __int32 *)v25.m128_u64[0]);
    if ( v23 )
      sub_1C430(v23);
    return 1;
  }
  return result;
}

