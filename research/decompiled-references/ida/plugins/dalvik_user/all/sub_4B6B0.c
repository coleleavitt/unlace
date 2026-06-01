__int64 __fastcall sub_4B6B0(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  char *v5; // rax
  __int64 v6; // rdx
  __m128 v7; // xmm0
  int v8; // eax
  void *v9; // r14
  void *v10; // r13
  unsigned __int32 v11; // r8d
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  void *v20; // rdi
  __m128i v21; // xmm0
  int v22; // eax
  int v23; // esi
  void *v24; // r15
  __m128 v25; // xmm1
  size_t v26; // r14
  __int64 v27; // rax
  size_t v28; // r13
  unsigned int v29; // ebx
  __m128i v31; // [rsp+8h] [rbp-210h] BYREF
  size_t v32; // [rsp+18h] [rbp-200h] BYREF
  __m128i v33; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-1E8h]
  __int64 *v35; // [rsp+38h] [rbp-1E0h]
  __int64 v36; // [rsp+40h] [rbp-1D8h]
  unsigned __int32 v37; // [rsp+4Ch] [rbp-1CCh]
  _QWORD *v38; // [rsp+50h] [rbp-1C8h]
  _BYTE *v39; // [rsp+58h] [rbp-1C0h]
  int v40; // [rsp+64h] [rbp-1B4h] BYREF
  char *v41; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v42[8]; // [rsp+70h] [rbp-1A8h] BYREF
  __m128 v43; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-158h]
  int v45; // [rsp+C8h] [rbp-150h]
  __int64 v46; // [rsp+D0h] [rbp-148h]
  __int128 v47; // [rsp+D8h] [rbp-140h]
  char v48; // [rsp+E8h] [rbp-130h]
  __int128 v49; // [rsp+F0h] [rbp-128h] BYREF
  void *src; // [rsp+100h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-110h]
  void *v52; // [rsp+118h] [rbp-100h] BYREF
  size_t v53[2]; // [rsp+120h] [rbp-F8h]
  void *v54; // [rsp+130h] [rbp-E8h]
  __int128 v55; // [rsp+138h] [rbp-E0h]
  unsigned __int32 v56; // [rsp+148h] [rbp-D0h] BYREF
  __m128i v57; // [rsp+150h] [rbp-C8h] BYREF
  _BYTE v58[24]; // [rsp+160h] [rbp-B8h] BYREF
  unsigned __int32 v59; // [rsp+1B8h] [rbp-60h]
  __m128i v60; // [rsp+1C0h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+1D8h] [rbp-40h]

  v34 = a3;
  v61 = __readfsqword(0x28u);
  v36 = *(_QWORD *)(a1 + 24);
  qmutex_lock();
  v38 = v42;
  sub_43F20((__int64)v42, byte_7FBE9, 8u);
  sub_46BB0((__int64)v42, *(_DWORD *)(a1 + 8), v34);
  memset(v58, 0, sizeof(v58));
  v39 = v58;
  v5 = sub_48F20(a1, 2u, 4u, (__int64)v42, (__int64)v58);
  v41 = v5;
  if ( !v5 )
    goto LABEL_32;
  if ( a2 )
  {
    v6 = *((_QWORD *)v5 + 1);
    v7 = _mm_loadh_ps((const double *)v5);
    v45 = 0;
    v44 = v6;
    v43 = v7;
    v46 = 0;
    v48 = byte_7FBE9;
    v47 = 0;
    if ( (unsigned __int8)sub_46430((__int64)&v43, (unsigned __int32 *)&v40, 1) )
    {
      v8 = v40;
      v35 = (__int64 *)&v49 + 1;
      --v40;
      if ( v8 <= 0 )
      {
LABEL_33:
        sub_43EB0((__int64)&v43);
        goto LABEL_34;
      }
      while ( 1 )
      {
        v23 = *(_DWORD *)a1;
        src = nullptr;
        v52 = nullptr;
        v54 = nullptr;
        v49 = 0;
        *(_OWORD *)n = 0;
        *(_OWORD *)v53 = 0;
        v55 = 0;
        if ( !(unsigned __int8)sub_46950((__int64)&v43, v23, v35)
          || !(unsigned __int8)sub_464A0((__int64)&v43, (__int64 *)&src)
          || !(unsigned __int8)sub_464A0((__int64)&v43, (__int64 *)&v52)
          || !(unsigned __int8)sub_46430((__int64)&v43, &v56, 1) )
        {
          break;
        }
        v24 = nullptr;
        *(_QWORD *)&v49 = v34;
        v25 = _mm_loadh_ps((const double *)&v49 + 1);
        v31.m128i_i64[1] = n[0];
        v33 = (__m128i)v25;
        *(__m128 *)v58 = v25;
        if ( n[0] )
        {
          v26 = n[0];
          v24 = (void *)qalloc_or_throw();
          memcpy(v24, src, v26);
        }
        v9 = nullptr;
        v32 = v53[0];
        if ( v53[0] )
        {
          v28 = v53[0];
          v9 = (void *)qalloc_or_throw();
          memcpy(v9, v52, v28);
        }
        v10 = nullptr;
        v31.m128i_i64[0] = v55;
        if ( (_QWORD)v55 )
        {
          v10 = (void *)qalloc_or_throw();
          memcpy(v10, v54, v31.m128i_u64[0]);
        }
        v11 = v56;
        v12 = a2[1];
        v13 = _mm_load_si128(&v57);
        v14 = *a2;
        v59 = v56;
        v60 = v13;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v37 = v56;
          v27 = qvector_reserve();
          v12 = a2[1];
          v11 = v37;
          *a2 = v27;
          v14 = v27;
        }
        v15 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
        v16 = _mm_load_si128(&v33);
        v17 = 112 * v12 + v14;
        *(__m128i *)(v17 + 24) = _mm_unpacklo_epi64(v15, v15);
        v18 = _mm_loadl_epi64((const __m128i *)&v32);
        *(_QWORD *)(v17 + 16) = v24;
        *(_QWORD *)(v17 + 40) = v9;
        *(__m128i *)(v17 + 48) = _mm_unpacklo_epi64(v18, v18);
        v19 = _mm_loadl_epi64(&v31);
        *(_QWORD *)(v17 + 64) = v10;
        *(__m128i *)v17 = v16;
        v20 = v54;
        *(__m128i *)(v17 + 72) = _mm_unpacklo_epi64(v19, v19);
        v21 = _mm_load_si128(&v60);
        *(_DWORD *)(v17 + 88) = v11;
        *(__m128i *)(v17 + 96) = v21;
        ++a2[1];
        if ( v20 )
        {
          *(_QWORD *)&v55 = 0;
          qfree();
        }
        if ( v52 )
        {
          v53[0] = 0;
          qfree();
        }
        if ( src )
        {
          n[0] = 0;
          qfree();
        }
        v22 = v40--;
        if ( v22 <= 0 )
          goto LABEL_33;
      }
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree();
      }
      if ( v52 )
      {
        v53[0] = 0;
        qfree();
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
    }
    sub_43EB0((__int64)&v43);
LABEL_32:
    v29 = 0;
    goto LABEL_35;
  }
LABEL_34:
  v29 = 1;
LABEL_35:
  sub_44B80((_QWORD **)&v41);
  qfree();
  if ( v42[4] )
  {
    v42[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v29;
}

