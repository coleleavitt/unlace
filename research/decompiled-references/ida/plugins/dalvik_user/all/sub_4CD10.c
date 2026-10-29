__int64 __fastcall sub_4CD10(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __m128 v9; // xmm0
  int v10; // eax
  void *v11; // r13
  unsigned __int32 v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  void *v20; // rdi
  int v21; // eax
  int v22; // esi
  __int64 v23; // r15
  void *v24; // r14
  size_t v25; // r13
  __int64 v26; // rax
  unsigned int v27; // ebx
  __m128i v29; // [rsp+8h] [rbp-1D0h] BYREF
  __m128i v30; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 *v31; // [rsp+28h] [rbp-1B0h]
  __int64 v32; // [rsp+30h] [rbp-1A8h]
  unsigned __int32 v33; // [rsp+3Ch] [rbp-19Ch]
  __int64 *v34; // [rsp+40h] [rbp-198h]
  _QWORD *v35; // [rsp+48h] [rbp-190h]
  int v36; // [rsp+54h] [rbp-184h] BYREF
  char *v37; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v38[8]; // [rsp+60h] [rbp-178h] BYREF
  __m128 v39; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-128h]
  int v41; // [rsp+B8h] [rbp-120h]
  __int64 v42; // [rsp+C0h] [rbp-118h]
  __int128 v43; // [rsp+C8h] [rbp-110h]
  char v44; // [rsp+D8h] [rbp-100h]
  __int64 v45; // [rsp+E0h] [rbp-F8h] BYREF
  void *src; // [rsp+E8h] [rbp-F0h] BYREF
  size_t n[2]; // [rsp+F0h] [rbp-E8h]
  void *v48; // [rsp+100h] [rbp-D8h] BYREF
  __int128 v49; // [rsp+108h] [rbp-D0h]
  void *v50; // [rsp+118h] [rbp-C0h] BYREF
  __int128 v51; // [rsp+120h] [rbp-B8h]
  unsigned __int32 v52[4]; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+140h] [rbp-98h] BYREF
  __int128 v54; // [rsp+148h] [rbp-90h]
  unsigned __int32 v55; // [rsp+190h] [rbp-48h]
  unsigned __int64 v56; // [rsp+198h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v56 = __readfsqword(0x28u);
  v32 = v5;
  qmutex_lock();
  v35 = v38;
  sub_43F20((__int64)v38, byte_7FBE9, 8u);
  sub_46BB0((__int64)v38, *(_DWORD *)(a1 + 8), a3);
  v53 = 0;
  v34 = &v53;
  v54 = 0;
  v7 = sub_48F20(a1, 2u, 0xFu, (__int64)v38, (__int64)&v53);
  v37 = v7;
  if ( !v7 )
    goto LABEL_33;
  if ( a2 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v41 = 0;
    v40 = v8;
    v39 = v9;
    v42 = 0;
    v44 = byte_7FBE9;
    v43 = 0;
    if ( !(unsigned __int8)sub_46430((__int64)&v39, (unsigned __int32 *)&v36, 1) )
    {
LABEL_32:
      sub_43EB0((__int64)&v39);
LABEL_33:
      v27 = 0;
      goto LABEL_34;
    }
    v10 = v36--;
    if ( v10 > 0 )
    {
      v31 = &v45;
      while ( 1 )
      {
        v22 = *(_DWORD *)(a1 + 4);
        src = nullptr;
        v48 = nullptr;
        v50 = nullptr;
        *(_OWORD *)n = 0;
        v49 = 0;
        v51 = 0;
        if ( !(unsigned __int8)sub_46950((__int64)&v39, v22, v31)
          || !(unsigned __int8)sub_464A0((__int64)&v39, (__int64 *)&src)
          || !(unsigned __int8)sub_464A0((__int64)&v39, (__int64 *)&v48)
          || !(unsigned __int8)sub_464A0((__int64)&v39, (__int64 *)&v50)
          || !(unsigned __int8)sub_46430((__int64)&v39, v52, 1) )
        {
          break;
        }
        v23 = v45;
        v24 = nullptr;
        v53 = v45;
        v30.m128i_i64[0] = n[0];
        if ( n[0] )
        {
          v25 = n[0];
          v24 = (void *)qalloc_or_throw();
          memcpy(v24, src, v25);
        }
        v11 = nullptr;
        v29.m128i_i64[0] = v49;
        if ( (_QWORD)v49 )
        {
          v11 = (void *)qalloc_or_throw();
          memcpy(v11, v48, v29.m128i_u64[0]);
        }
        v30.m128i_i64[1] = 0;
        v29.m128i_i64[1] = v51;
        if ( (_QWORD)v51 )
        {
          v30.m128i_i64[1] = qalloc_or_throw();
          memcpy((void *)v30.m128i_i64[1], v50, v29.m128i_u64[1]);
        }
        v12 = v52[0];
        v13 = a2[1];
        v14 = *a2;
        v55 = v52[0];
        if ( a2[2] < (unsigned __int64)(v13 + 1) )
        {
          v33 = v52[0];
          v26 = qvector_reserve();
          v13 = a2[1];
          v12 = v33;
          *a2 = v26;
          v14 = v26;
        }
        v15 = _mm_loadl_epi64(&v30);
        v16 = v30.m128i_i64[1];
        v17 = v14 + 88 * v13;
        *(__m128i *)(v17 + 16) = _mm_unpacklo_epi64(v15, v15);
        v18 = _mm_loadl_epi64(&v29);
        *(_QWORD *)v17 = v23;
        *(_QWORD *)(v17 + 8) = v24;
        *(__m128i *)(v17 + 40) = _mm_unpacklo_epi64(v18, v18);
        v19 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
        *(_QWORD *)(v17 + 32) = v11;
        *(_QWORD *)(v17 + 56) = v16;
        v20 = v50;
        *(_DWORD *)(v17 + 80) = v12;
        *(__m128i *)(v17 + 64) = _mm_unpacklo_epi64(v19, v19);
        ++a2[1];
        if ( v20 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        if ( src )
        {
          n[0] = 0;
          qfree();
        }
        v21 = v36--;
        if ( v21 <= 0 )
          goto LABEL_37;
      }
      if ( v50 )
      {
        *(_QWORD *)&v51 = 0;
        qfree();
      }
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      goto LABEL_32;
    }
LABEL_37:
    sub_43EB0((__int64)&v39);
  }
  v27 = 1;
LABEL_34:
  sub_44B80((_QWORD **)&v37);
  qfree();
  if ( v38[4] )
  {
    v38[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v27;
}

