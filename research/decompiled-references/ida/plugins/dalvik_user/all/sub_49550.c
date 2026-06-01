__int64 __fastcall sub_49550(unsigned __int64 a1, __int64 *a2, const char *a3)
{
  __int64 v5; // rax
  size_t v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  size_t v10; // r13
  size_t v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // rdx
  __m128 v17; // xmm0
  int v18; // eax
  char v20; // dl
  unsigned int v21; // edx
  size_t v22; // rax
  size_t v23; // r13
  char v24; // r15
  __int64 v25; // r14
  void *v26; // r13
  unsigned __int32 v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rsi
  __m128i v30; // xmm0
  void *v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  void *v35; // rdi
  size_t v36; // r14
  __m128i v37; // [rsp+0h] [rbp-1A8h] BYREF
  void *v38; // [rsp+10h] [rbp-198h]
  __m128 *v39; // [rsp+18h] [rbp-190h]
  __int64 *v40; // [rsp+20h] [rbp-188h]
  __int64 v41; // [rsp+28h] [rbp-180h]
  unsigned __int8 v42; // [rsp+33h] [rbp-175h]
  unsigned __int32 v43; // [rsp+34h] [rbp-174h]
  __int64 *v44; // [rsp+38h] [rbp-170h]
  int v45; // [rsp+44h] [rbp-164h] BYREF
  char *v46; // [rsp+48h] [rbp-160h] BYREF
  __int64 v47; // [rsp+50h] [rbp-158h] BYREF
  __int64 v48; // [rsp+58h] [rbp-150h]
  unsigned __int64 v49; // [rsp+60h] [rbp-148h]
  __int64 v50; // [rsp+68h] [rbp-140h]
  __int64 v51[3]; // [rsp+70h] [rbp-138h] BYREF
  char v52; // [rsp+88h] [rbp-120h]
  __m128 v53; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v54; // [rsp+A0h] [rbp-108h]
  int v55; // [rsp+A8h] [rbp-100h]
  __int64 v56; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-F0h]
  char v58; // [rsp+C8h] [rbp-E0h]
  char v59; // [rsp+D0h] [rbp-D8h]
  __int64 v60; // [rsp+D8h] [rbp-D0h] BYREF
  void *dest; // [rsp+E0h] [rbp-C8h]
  __int128 v62; // [rsp+E8h] [rbp-C0h]
  void *src; // [rsp+F8h] [rbp-B0h]
  __int128 v64; // [rsp+100h] [rbp-A8h]
  unsigned __int32 v65; // [rsp+110h] [rbp-98h]
  __int64 v66; // [rsp+120h] [rbp-88h] BYREF
  __int128 v67; // [rsp+128h] [rbp-80h]
  unsigned __int32 v68; // [rsp+160h] [rbp-48h]
  unsigned __int64 v69; // [rsp+168h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v69 = __readfsqword(0x28u);
  v41 = v5;
  qmutex_lock();
  v40 = &v47;
  sub_43F20((__int64)&v47, byte_7FBE9, 0x400u);
  if ( v52 )
    sub_1FAD0(v51);
  v7 = strlen(a3);
  v8 = v49;
  v9 = v47;
  v10 = v7 + 4;
  v11 = v7;
  v12 = v48;
  if ( v49 >= v10 + v48 )
    goto LABEL_9;
  do
  {
    v49 = v50 + v8;
    v13 = qrealloc();
    v9 = v13;
    if ( !v13 )
      sub_43DF0((__int64)"JDWP encoder");
    v47 = v13;
    v12 = v48;
    v8 = v49;
  }
  while ( v49 < v10 + v48 );
  if ( v49 < v48 + 4 )
  {
    do
    {
      v49 = v50 + v8;
      v14 = qrealloc();
      v9 = v14;
      if ( !v14 )
        sub_43DF0((__int64)"JDWP encoder");
      v47 = v14;
      v8 = v49;
      v12 = v48;
LABEL_9:
      ;
    }
    while ( v8 < v12 + 4 );
  }
  *(_DWORD *)(v9 + v12) = _byteswap_ulong(v11);
  v48 += 4;
  memcpy((void *)(v47 + v48), a3, v11);
  v48 += v11;
  v66 = 0;
  v44 = &v66;
  v67 = 0;
  v15 = sub_48F20(a1, 1u, 2u, (__int64)v40, (__int64)&v66);
  v46 = v15;
  if ( v15 )
  {
    v16 = *((_QWORD *)v15 + 1);
    v17 = _mm_loadh_ps((const double *)v15);
    v55 = 0;
    v54 = v16;
    v58 = byte_7FBE9;
    v53 = v17;
    v56 = 0;
    v39 = &v53;
    v57 = 0;
    v42 = sub_46430((__int64)&v53, (unsigned __int32 *)&v45, 1);
    if ( v42 )
    {
      while ( 1 )
      {
        v18 = v45--;
        if ( v18 <= 0 )
          break;
        dest = nullptr;
        src = nullptr;
        v62 = 0;
        v64 = 0;
        if ( v55 >= v54 )
          goto LABEL_14;
        v20 = *(_BYTE *)(v53.m128_u64[1] + v55++);
        v59 = v20;
        if ( v58 )
          sub_1FAD0(&v56);
        if ( !(unsigned __int8)sub_46950((__int64)v39, *(_DWORD *)(a1 + 12), &v60) || v54 < v55 + 4 )
        {
          if ( src )
          {
            *(_QWORD *)&v64 = 0;
            qfree();
          }
LABEL_14:
          if ( dest )
          {
            *(_QWORD *)&v62 = 0;
            qfree();
          }
          goto LABEL_16;
        }
        v21 = *(_DWORD *)(v53.m128_u64[1] + v55);
        v55 += 4;
        v65 = _byteswap_ulong(v21);
        if ( v58 )
          sub_1FAD0(&v56);
        if ( a3 && (v22 = strlen(a3), (v23 = v22) != 0) )
        {
          v35 = dest;
          v36 = v22 + 1;
          if ( *((_QWORD *)&v62 + 1) < v22 + 1 )
          {
            dest = (void *)qvector_reserve();
            v35 = dest;
          }
          *(_QWORD *)&v62 = v36;
          memmove(v35, a3, v23);
          *((_BYTE *)dest + v23) = 0;
        }
        else
        {
          *(_QWORD *)&v62 = 0;
        }
        if ( a2 )
        {
          v24 = v59;
          v25 = v60;
          v26 = nullptr;
          LOBYTE(v66) = v59;
          *(_QWORD *)&v67 = v60;
          v37.m128i_i64[0] = v62;
          if ( (_QWORD)v62 )
          {
            v26 = (void *)qalloc_or_throw();
            memcpy(v26, dest, v37.m128i_u64[0]);
          }
          v38 = nullptr;
          v37.m128i_i64[1] = v64;
          if ( (_QWORD)v64 )
          {
            v38 = (void *)qalloc_or_throw();
            memcpy(v38, src, v37.m128i_u64[1]);
          }
          v27 = v65;
          v28 = a2[1];
          v29 = *a2;
          v68 = v65;
          if ( a2[2] < (unsigned __int64)(v28 + 1) )
          {
            v43 = v65;
            v34 = qvector_reserve();
            v28 = a2[1];
            v27 = v43;
            *a2 = v34;
            v29 = v34;
          }
          v30 = _mm_loadl_epi64(&v37);
          v31 = v38;
          v32 = v29 + 72 * v28;
          *(_BYTE *)v32 = v24;
          *(__m128i *)(v32 + 24) = _mm_unpacklo_epi64(v30, v30);
          v33 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
          *(_QWORD *)(v32 + 8) = v25;
          *(_QWORD *)(v32 + 16) = v26;
          *(_QWORD *)(v32 + 40) = v31;
          *(_DWORD *)(v32 + 64) = v27;
          *(__m128i *)(v32 + 48) = _mm_unpacklo_epi64(v33, v33);
          ++a2[1];
        }
        if ( src )
        {
          *(_QWORD *)&v64 = 0;
          qfree();
        }
        if ( dest )
        {
          *(_QWORD *)&v62 = 0;
          qfree();
        }
      }
    }
    else
    {
LABEL_16:
      v42 = 0;
    }
    sub_43EB0((__int64)v39);
  }
  else
  {
    v42 = 0;
  }
  sub_44B80((_QWORD **)&v46);
  sub_43FA0((__int64)v40);
  qmutex_unlock();
  return v42;
}

