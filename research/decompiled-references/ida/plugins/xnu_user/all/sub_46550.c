__int64 __fastcall sub_46550(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // r12d
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdi
  const char *v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rdx
  size_t v17; // rbx
  __int64 (*v18)(); // rcx
  __m128i v19; // xmm0
  const __m128i *v20; // r15
  const __m128i *v21; // r13
  __int64 v22; // rbx
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __m128i *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rax
  __m128i v32; // [rsp+0h] [rbp-308h] BYREF
  __int64 (*v33)(); // [rsp+10h] [rbp-2F8h]
  __int64 v34; // [rsp+18h] [rbp-2F0h]
  const char *v35; // [rsp+20h] [rbp-2E8h] BYREF
  __int128 v36; // [rsp+28h] [rbp-2E0h]
  __m128i *v37; // [rsp+40h] [rbp-2C8h]
  __m128i v38; // [rsp+48h] [rbp-2C0h] BYREF
  int v39[4]; // [rsp+60h] [rbp-2A8h] BYREF
  __m128i v40; // [rsp+70h] [rbp-298h] BYREF
  __int64 v41; // [rsp+80h] [rbp-288h]
  int v42; // [rsp+88h] [rbp-280h]
  char v43; // [rsp+8Ch] [rbp-27Ch]
  __int64 v44; // [rsp+90h] [rbp-278h]
  char v45; // [rsp+98h] [rbp-270h]
  __int64 v46; // [rsp+A8h] [rbp-260h]
  __int128 v47; // [rsp+B0h] [rbp-258h]
  __m128i si128; // [rsp+C0h] [rbp-248h]
  char v49; // [rsp+D0h] [rbp-238h]
  __m128i v50; // [rsp+D8h] [rbp-230h]
  __int64 v51; // [rsp+E8h] [rbp-220h]
  __int128 v52; // [rsp+F0h] [rbp-218h]
  __int16 v53; // [rsp+100h] [rbp-208h]
  __int64 v54; // [rsp+128h] [rbp-1E0h]
  __int128 v55; // [rsp+130h] [rbp-1D8h]
  __int64 v56; // [rsp+140h] [rbp-1C8h]
  __int128 v57; // [rsp+148h] [rbp-1C0h]
  __int64 v58; // [rsp+158h] [rbp-1B0h]
  __int128 v59; // [rsp+160h] [rbp-1A8h]
  __int64 v60; // [rsp+170h] [rbp-198h]
  __int128 v61; // [rsp+178h] [rbp-190h]
  const __m128i *v62; // [rsp+188h] [rbp-180h]
  __int128 v63; // [rsp+190h] [rbp-178h]
  __int64 v64; // [rsp+1A0h] [rbp-168h]
  __int128 v65; // [rsp+1A8h] [rbp-160h]
  __int64 v66; // [rsp+1B8h] [rbp-150h]
  __int128 v67; // [rsp+1C0h] [rbp-148h]
  __int64 v68; // [rsp+1D0h] [rbp-138h]
  __int128 v69; // [rsp+1D8h] [rbp-130h]
  __int64 v70; // [rsp+1E8h] [rbp-120h]
  __int128 v71; // [rsp+1F0h] [rbp-118h]
  __int64 v72; // [rsp+200h] [rbp-108h]
  __int128 v73; // [rsp+208h] [rbp-100h]
  __int16 v74; // [rsp+218h] [rbp-F0h]
  char v75; // [rsp+21Ah] [rbp-EEh]
  int v76; // [rsp+21Ch] [rbp-ECh]
  __int128 v77; // [rsp+220h] [rbp-E8h]
  __int64 v78; // [rsp+230h] [rbp-D8h]
  __int64 v79; // [rsp+238h] [rbp-D0h]
  int v80; // [rsp+240h] [rbp-C8h]
  __int64 v81; // [rsp+248h] [rbp-C0h]
  __int128 v82; // [rsp+250h] [rbp-B8h]
  __int64 v83; // [rsp+260h] [rbp-A8h]
  __m128i v84[3]; // [rsp+270h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+2A0h] [rbp-68h]
  unsigned __int64 v86; // [rsp+2C8h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  if ( !(unsigned __int8)sub_3B560(a1, (__int64)&v35, a3, a2, nullptr, 2) )
    goto LABEL_2;
  v7 = *(_QWORD *)(a1 + 112);
  v8 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v7 + 1) )
  {
    v30 = qvector_reserve();
    *(_QWORD *)(a1 + 104) = v30;
    v7 = *(_QWORD *)(a1 + 112);
    v8 = v30;
  }
  v9 = v8 + 72 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_DWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  ++*(_QWORD *)(a1 + 112);
  v10 = open_linput();
  *(_QWORD *)(v9 + 48) = v10;
  if ( v10 )
  {
    v41 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
    *(__m128i *)v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_974D8, (__m128i)(unsigned __int64)&v40);
    v50 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v40 = _mm_load_si128((const __m128i *)&xmmword_823B0);
    v42 = 8;
    v43 = 1;
    v44 = v10;
    v45 = 0;
    v46 = 0;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v62 = nullptr;
    v64 = 0;
    v66 = 0;
    v47 = 0;
    v52 = 0;
    v55 = 0;
    v57 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v83 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v77 = -1;
    v82 = 0;
    if ( !sub_31110((__int64)v39) )
      goto LABEL_10;
    v11 = *(_DWORD *)(a1 + 16);
    if ( v11 )
    {
      v12 = -1;
      if ( v11 == 13 )
      {
        v12 = 12;
        if ( *(_BYTE *)(a1 + 24) )
          v12 = 16777228;
      }
    }
    else
    {
      v12 = 7;
      if ( *(_BYTE *)(a1 + 24) )
        v12 = 16777223;
    }
    v5 = sub_31960((__int64)v39, v12, 0);
    if ( (_BYTE)v5 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = src;
      if ( (_QWORD)v36 )
        v14 = v35;
      v15 = "found kernelcache: %s\n";
      sub_1BF10(v13, (__int64)"found kernelcache: %s\n", v14);
      v17 = *(_QWORD *)(a2 + 8);
      v18 = nullptr;
      if ( v17 )
      {
        v31 = (void *)qalloc_or_throw();
        v15 = *(const char **)a2;
        v18 = (__int64 (*)())memcpy(v31, *(const void **)a2, v17);
      }
      v19 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      if ( *(_QWORD *)v9 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v33 = v18;
        v32 = v19;
        qfree();
        v19 = _mm_load_si128(&v32);
        v18 = v33;
      }
      *(_QWORD *)v9 = v18;
      *(_DWORD *)(v9 + 64) = a3;
      *(__m128i *)(v9 + 8) = v19;
      if ( !HIBYTE(v74) )
        sub_46440((__int64)v39, (__int64)v15, v16, v18);
      v20 = v62;
      v34 = v9 + 24;
      v21 = &v62[5 * v63];
      if ( v21 != v62 )
      {
        do
        {
          v27 = *(_QWORD *)(v9 + 32);
          v28 = *(_QWORD *)(v9 + 24);
          if ( *(_QWORD *)(v9 + 40) < (unsigned __int64)(v27 + 1) )
          {
            v29 = qvector_reserve();
            *(_QWORD *)(v9 + 24) = v29;
            v27 = *(_QWORD *)(v9 + 32);
            v28 = v29;
          }
          v22 = v28 + 32 * v27;
          *(_QWORD *)v22 = 0;
          *(_OWORD *)(v22 + 8) = 0;
          *(_QWORD *)(v22 + 24) = 0;
          ++*(_QWORD *)(v9 + 32);
          v37 = nullptr;
          v38 = 0;
          v37 = (__m128i *)qvector_reserve();
          memset(&v37->m128i_i8[v38.m128i_i64[0]], 0, 16 - v38.m128i_i64[0]);
          v38.m128i_i64[0] = 16;
          *v37 = _mm_loadu_si128(v20 + 4);
          v23 = v37;
          v24 = _mm_loadu_si128(&v38);
          v37 = nullptr;
          v38 = 0;
          if ( *(_QWORD *)v22 )
          {
            *(_QWORD *)(v22 + 8) = 0;
            v33 = (__int64 (*)())v23;
            v32 = v24;
            qfree();
            v24 = _mm_load_si128(&v32);
            v23 = (__m128i *)v33;
          }
          *(_QWORD *)v22 = v23;
          v25 = v37;
          *(__m128i *)(v22 + 8) = v24;
          if ( v25 )
          {
            v38.m128i_i64[0] = 0;
            qfree();
          }
          v26 = v20[2].m128i_i64[0];
          v20 += 5;
          *(_QWORD *)(v22 + 24) = v26;
        }
        while ( v20 != v21 );
      }
      if ( (unsigned __int8)sub_34390((__int64)v39, "__PRELINK_DATA", "__data", v84) )
        *(_QWORD *)(v9 + 56) = v85;
    }
    else
    {
LABEL_10:
      v5 = 0;
    }
    sub_2BAE0((__int64)v39);
  }
  else
  {
LABEL_2:
    v5 = 0;
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return v5;
}

