__int64 __fastcall sub_38460(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  volatile signed __int32 *v4; // rbp
  volatile signed __int32 *v5; // r12
  __int64 v6; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  int v14; // esi
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r8
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __int64 v20; // r12
  __m128 v21; // xmm0
  volatile signed __int32 *v22; // r14
  __m128 v23; // xmm2
  volatile signed __int32 *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  struct _Unwind_Exception *v29; // rbx
  __m128i v30; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+10h] [rbp-98h] BYREF
  __m128 v32; // [rsp+20h] [rbp-88h] BYREF
  __m128i v33; // [rsp+30h] [rbp-78h] BYREF
  __m128 v34; // [rsp+40h] [rbp-68h] BYREF
  __m128i v35; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) == 2 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    v8 = 0;
    v9 = *(_QWORD *)v6;
    if ( !*(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(a1 + 96);
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_DWORD *)(v11 + 24);
      if ( v12 > 0x40 )
      {
        v29 = (struct _Unwind_Exception *)sub_31CE0();
        if ( v5 )
          sub_1C430(v5);
        if ( v4 )
        {
          sub_1C430(v4);
          sub_1C430(v4);
        }
        _Unwind_Resume(v29);
      }
      v15 = *(_QWORD *)(a1 + 64);
      v16 = 0;
      if ( v12 )
      {
        do
        {
          while ( v14 != *(_DWORD *)(v6 + 8) || v13 != *(_QWORD *)v6 )
          {
            ++v16;
            v6 += 16;
            if ( v15 == v16 )
              goto LABEL_12;
          }
          v6 += 16;
          v17 = 1LL << v16++;
          v9 |= v17;
        }
        while ( v15 != v16 );
      }
LABEL_12:
      sub_35840(&v30, byte_4E9E0, *(_DWORD *)(a1 + 16), v9);
      v18 = (__m128)_mm_load_si128(&v30);
      v19 = _mm_movehl_ps(a3, v18);
      v32 = v18;
      if ( v19.m128_u64[0] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v19.m128_u64[0] + 8), 1u);
        else
          ++*(_DWORD *)(v19.m128_u64[0] + 8);
      }
      v20 = operator new(0x20u);
      *(_QWORD *)(v20 + 24) = v13;
      *(_QWORD *)(v20 + 8) = 0x100000001LL;
      *(_QWORD *)v20 = off_4DA48;
      *(_QWORD *)(v20 + 16) = off_4D960;
      v31.m128i_i64[0] = v20 + 16;
      v31.m128i_i64[1] = v20;
      sub_38200(&v33, &v31, (const __m128i *)&v32, *(double *)v18.m128_u64, v19, a4);
      v21 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
      v22 = (volatile signed __int32 *)v33.m128i_i64[1];
      v23 = _mm_movehl_ps(a4, v21);
      v34 = v21;
      if ( v23.m128_u64[0] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v23.m128_u64[0] + 8), 1u);
        else
          ++*(_DWORD *)(v23.m128_u64[0] + 8);
      }
      v33.m128i_i64[1] = (__int64)v22;
      sub_38330(&v35, (const __m128i *)&v34, &v33, *(double *)v21.m128_u64, v19, v23);
      v24 = *(volatile signed __int32 **)(a1 + 88);
      *(__m128i *)(a1 + 80) = _mm_load_si128(&v35);
      if ( v24 )
        sub_1C430(v24);
      if ( v23.m128_u64[0] )
        sub_1C430((volatile signed __int32 *)v23.m128_u64[0]);
      if ( v22 )
        sub_1C430(v22);
      if ( v20 )
        sub_1C430((volatile signed __int32 *)v20);
      if ( v19.m128_u64[0] )
        sub_1C430((volatile signed __int32 *)v19.m128_u64[0]);
      v25 = *(_QWORD **)(a1 + 56);
      v26 = &v25[2 * *(_QWORD *)(a1 + 64)];
      if ( v25 != v26 )
      {
        if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v25 = 0, v25 += 2, v26 != v25) )
        {
          do
          {
            *v25 = 0;
            v25 += 4;
            *(v25 - 2) = 0;
          }
          while ( v26 != v25 );
        }
      }
      sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
      sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v27, v28);
      if ( v19.m128_u64[0] )
        sub_1C430((volatile signed __int32 *)v19.m128_u64[0]);
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
