__int64 __fastcall sub_4BC10(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  char *v7; // rax
  unsigned __int64 v8; // rdx
  __m128 v9; // xmm0
  int v10; // eax
  int v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // r15
  void *v15; // r14
  void *v16; // r13
  unsigned __int32 v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rsi
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  void *v25; // rdi
  int v26; // eax
  __int64 v28; // rax
  size_t v29; // r13
  __m128i v30; // [rsp+8h] [rbp-1D0h] BYREF
  __m128i v31; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-1B0h]
  __int64 v33; // [rsp+30h] [rbp-1A8h]
  unsigned __int32 v34; // [rsp+3Ch] [rbp-19Ch]
  __int64 *v35; // [rsp+40h] [rbp-198h]
  _QWORD *v36; // [rsp+48h] [rbp-190h]
  int v37; // [rsp+54h] [rbp-184h] BYREF
  char *v38; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v39[8]; // [rsp+60h] [rbp-178h] BYREF
  __m128 v40; // [rsp+A0h] [rbp-138h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-128h]
  int v42; // [rsp+B8h] [rbp-120h]
  __int64 v43; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-110h]
  char v45; // [rsp+D8h] [rbp-100h]
  __int64 v46; // [rsp+E0h] [rbp-F8h] BYREF
  void *v47; // [rsp+E8h] [rbp-F0h] BYREF
  size_t v48[2]; // [rsp+F0h] [rbp-E8h]
  void *v49; // [rsp+100h] [rbp-D8h] BYREF
  __int128 v50; // [rsp+108h] [rbp-D0h]
  void *src; // [rsp+118h] [rbp-C0h]
  __int128 v52; // [rsp+120h] [rbp-B8h]
  unsigned __int32 v53; // [rsp+130h] [rbp-A8h]
  __int64 v54; // [rsp+140h] [rbp-98h] BYREF
  __int128 v55; // [rsp+148h] [rbp-90h]
  unsigned __int32 v56; // [rsp+190h] [rbp-48h]
  unsigned __int64 v57; // [rsp+198h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v57 = __readfsqword(0x28u);
  v33 = v5;
  qmutex_lock();
  v36 = v39;
  sub_43F20((__int64)v39, byte_7FBE9, 8u);
  sub_46BB0((__int64)v39, *(_DWORD *)(a1 + 8), a3);
  v54 = 0;
  v35 = &v54;
  v55 = 0;
  v7 = sub_48F20(a1, 2u, 5u, (__int64)v39, (__int64)&v54);
  v38 = v7;
  if ( !v7 )
    goto LABEL_16;
  if ( a2 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v42 = 0;
    v41 = v8;
    v40 = v9;
    v43 = 0;
    v45 = byte_7FBE9;
    v44 = 0;
    if ( !(unsigned __int8)sub_46430((__int64)&v40, (unsigned __int32 *)&v37, 1) )
    {
LABEL_15:
      sub_43EB0((__int64)&v40);
LABEL_16:
      v12 = 0;
      goto LABEL_36;
    }
    v10 = v37;
    v32 = &v46;
    --v37;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 + 4);
        v47 = nullptr;
        v49 = nullptr;
        src = nullptr;
        *(_OWORD *)v48 = 0;
        v50 = 0;
        v52 = 0;
        if ( !(unsigned __int8)sub_46950((__int64)&v40, v11, v32)
          || !(unsigned __int8)sub_464A0((__int64)&v40, (__int64 *)&v47)
          || !(unsigned __int8)sub_464A0((__int64)&v40, (__int64 *)&v49)
          || v41 < v42 + 4 )
        {
          break;
        }
        v13 = *(_DWORD *)(v40.m128_u64[1] + v42);
        v42 += 4;
        v53 = _byteswap_ulong(v13);
        if ( v45 )
          sub_1FAD0(&v43);
        v14 = v46;
        v15 = nullptr;
        v54 = v46;
        v31.m128i_i64[0] = v48[0];
        if ( v48[0] )
        {
          v29 = v48[0];
          v15 = (void *)qalloc_or_throw();
          memcpy(v15, v47, v29);
        }
        v16 = nullptr;
        v30.m128i_i64[0] = v50;
        if ( (_QWORD)v50 )
        {
          v16 = (void *)qalloc_or_throw();
          memcpy(v16, v49, v30.m128i_u64[0]);
        }
        v31.m128i_i64[1] = 0;
        v30.m128i_i64[1] = v52;
        if ( (_QWORD)v52 )
        {
          v31.m128i_i64[1] = qalloc_or_throw();
          memcpy((void *)v31.m128i_i64[1], src, v30.m128i_u64[1]);
        }
        v17 = v53;
        v18 = a2[1];
        v19 = *a2;
        v56 = v53;
        if ( a2[2] < (unsigned __int64)(v18 + 1) )
        {
          v34 = v53;
          v28 = qvector_reserve();
          v18 = a2[1];
          v17 = v34;
          *a2 = v28;
          v19 = v28;
        }
        v20 = _mm_loadl_epi64(&v31);
        v21 = v31.m128i_i64[1];
        v22 = v19 + 88 * v18;
        *(__m128i *)(v22 + 16) = _mm_unpacklo_epi64(v20, v20);
        v23 = _mm_loadl_epi64(&v30);
        *(_QWORD *)v22 = v14;
        *(_QWORD *)(v22 + 8) = v15;
        *(__m128i *)(v22 + 40) = _mm_unpacklo_epi64(v23, v23);
        v24 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
        *(_QWORD *)(v22 + 32) = v16;
        *(_QWORD *)(v22 + 56) = v21;
        v25 = src;
        *(_DWORD *)(v22 + 80) = v17;
        *(__m128i *)(v22 + 64) = _mm_unpacklo_epi64(v24, v24);
        ++a2[1];
        if ( v25 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree();
        }
        if ( v47 )
        {
          v48[0] = 0;
          qfree();
        }
        v26 = v37--;
        if ( v26 <= 0 )
          goto LABEL_34;
      }
      if ( src )
      {
        *(_QWORD *)&v52 = 0;
        qfree();
      }
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      if ( v47 )
      {
        v48[0] = 0;
        qfree();
      }
      goto LABEL_15;
    }
LABEL_34:
    sub_43EB0((__int64)&v40);
  }
  v12 = 1;
LABEL_36:
  sub_44B80((_QWORD **)&v38);
  qfree();
  if ( v39[4] )
  {
    v39[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v12;
}

