__int64 __fastcall sub_EE30(__int64 a1, const __m128i **a2)
{
  const __m128i *v3; // rdi
  const __m128i *v4; // r12
  const __m128i *i; // rbp
  const __m128i *v6; // rbx
  int v7; // ebx
  size_t v8; // rax
  size_t v9; // r12
  int v10; // eax
  size_t v11; // r12
  __int64 v12; // rbp
  const char *v13; // r14
  _BYTE *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int32 v17; // eax
  int v18; // r12d
  size_t v19; // rdx
  size_t v20; // r8
  size_t v21; // r12
  _BYTE *v22; // rsi
  size_t v23; // r12
  size_t v24; // r9
  size_t v25; // r8
  size_t v26; // r10
  _BYTE *v27; // rsi
  __int32 v28; // ebp
  const char *v29; // rbp
  size_t v30; // rax
  size_t v31; // r14
  size_t v32; // r12
  int v33; // eax
  unsigned int v34; // ebx
  size_t v36; // rbx
  const __m128i *v37; // rax
  unsigned __int64 v38; // rbp
  const __m128i *v39; // rcx
  __m128i *v40; // rax
  __int32 v41; // ecx
  __m128i v42; // xmm0
  __int32 v43; // ecx
  void *v44; // rdi
  size_t v45; // rbx
  size_t v46; // rbp
  size_t v47; // r12
  _BYTE *v48; // rsi
  void *v49; // rdi
  size_t v50; // r14
  size_t v51; // r12
  __int64 v52; // rcx
  const __m128i *v53; // rax
  const __m128i *v54; // r14
  const __m128i *v55; // rbp
  __int64 v56; // rbp
  __m128i *v57; // r12
  __int64 v58; // rbx
  __m128i v59; // xmm1
  __int64 v60; // rbp
  __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rdx
  __m128i v64; // xmm0
  __int64 v65; // rdi
  size_t v67; // r14
  size_t v68; // rbp
  size_t v69; // r14
  _BYTE *v70; // rsi
  void *v71; // [rsp+8h] [rbp-5530h]
  __pid_t v72; // [rsp+14h] [rbp-5524h]
  __m128i v73; // [rsp+18h] [rbp-5520h] BYREF
  __int64 v74; // [rsp+28h] [rbp-5510h]
  size_t v75; // [rsp+30h] [rbp-5508h]
  size_t v76; // [rsp+38h] [rbp-5500h]
  const __m128i *v77; // [rsp+40h] [rbp-54F8h]
  size_t v78; // [rsp+48h] [rbp-54F0h]
  void *src; // [rsp+50h] [rbp-54E8h]
  __int128 v80; // [rsp+58h] [rbp-54E0h]
  unsigned int v81; // [rsp+70h] [rbp-54C8h]
  void *dest; // [rsp+78h] [rbp-54C0h]
  size_t n[2]; // [rsp+80h] [rbp-54B8h]
  int v84; // [rsp+90h] [rbp-54A8h]
  void *v85; // [rsp+98h] [rbp-54A0h]
  size_t v86[2]; // [rsp+A0h] [rbp-5498h]
  char nptr[8228]; // [rsp+B4h] [rbp-5484h] BYREF
  __int64 v88; // [rsp+20D8h] [rbp-3460h]
  int v89; // [rsp+20E4h] [rbp-3454h]
  char s[1024]; // [rsp+40F0h] [rbp-1448h] BYREF
  _BYTE v91[4104]; // [rsp+44F0h] [rbp-1048h] BYREF
  unsigned __int64 v92; // [rsp+54F8h] [rbp-40h]

  v74 = a1;
  v92 = __readfsqword(0x28u);
  v72 = getpid();
  v3 = *a2;
  if ( *a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; i = (const __m128i *)((char *)i + 1) )
      {
        v6 = &v3[4 * (_QWORD)i];
        if ( v6[2].m128i_i64[1] )
        {
          v6[3].m128i_i64[0] = 0;
          qfree();
        }
        if ( v6->m128i_i64[1] )
        {
          v6[1].m128i_i64[0] = 0;
          qfree();
        }
        v3 = *a2;
      }
    }
    a2[1] = nullptr;
    qfree();
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  v88 = 0;
  v89 = 0;
  v7 = qfindfirst();
  if ( !v7 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(nptr[0] - 48) > 9u )
        goto LABEL_46;
      dest = nullptr;
      *(_OWORD *)n = 0;
      v85 = nullptr;
      *(_OWORD *)v86 = 0;
      v81 = strtol(nptr, nullptr, 10);
      if ( v72 == v81
        || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)v74 + 624LL))(
              v74,
              v81,
              s,
              1024) )
      {
        if ( v85 )
        {
          v86[0] = 0;
          qfree();
        }
        if ( dest )
        {
          n[0] = 0;
          qfree();
        }
        goto LABEL_46;
      }
      v8 = strlen(s);
      v9 = v8;
      if ( v8 )
      {
        v49 = dest;
        v50 = v8 + 1;
        if ( n[1] < v8 + 1 )
        {
          dest = (void *)qvector_reserve();
          v49 = dest;
        }
        n[0] = v50;
        memmove(v49, s, v9);
        *((_BYTE *)dest + v9) = 0;
      }
      else
      {
        n[0] = 0;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v74 + 632LL))(v74, v81);
      v84 = v10;
      if ( v10 == 4 )
      {
        v11 = 5;
        v12 = 4;
        v13 = "[32]";
      }
      else if ( v10 == 8 )
      {
        v11 = 5;
        v12 = 4;
        v13 = "[64]";
      }
      else
      {
        v11 = 4;
        v12 = 3;
        v13 = "[x]";
      }
      v14 = v85;
      if ( v86[1] < v11 )
      {
        v85 = (void *)qvector_reserve();
        v14 = v85;
      }
      v86[0] = v11;
      v15 = 0;
      do
      {
        v16 = v15++;
        v14[v16] = v13[v16];
      }
      while ( v15 < (unsigned int)v12 );
      *((_BYTE *)v85 + v12) = 0;
      v73.m128i_i64[0] = (__int64)v91;
      qsnprintf();
      if ( qfopen() )
      {
        v17 = qfread();
        v73.m128i_i32[2] = v17;
        v18 = v17;
        if ( v17 )
          break;
      }
      v45 = v86[0];
      if ( v86[0] )
      {
        v46 = v86[0] + 1;
        v47 = v86[0];
        v45 = v86[0] - 1;
      }
      else
      {
        v46 = 2;
        v47 = 1;
      }
      v48 = v85;
      if ( v86[1] < v46 )
      {
        v85 = (void *)qvector_reserve();
        v48 = v85;
      }
      v86[0] = v46;
      v48[v47] = 0;
      *((_BYTE *)v85 + v45) = 32;
      v36 = n[0];
      if ( !n[0] )
      {
        v73.m128i_i64[1] = 0;
        LODWORD(v75) = v81;
        goto LABEL_53;
      }
      v51 = n[0] - 1;
      if ( n[0] != 1 )
      {
        v68 = v86[0];
        v69 = n[0] - 1;
        if ( v86[0] )
        {
          v68 = v86[0] - 1;
          v69 = v51 + v86[0] - 1;
          v36 = n[0] + v86[0] - 1;
        }
        v70 = v85;
        if ( v86[1] < v36 )
        {
          v85 = (void *)qvector_reserve();
          v70 = v85;
        }
        v86[0] = v36;
        v70[v69] = 0;
        memcpy((char *)v85 + v68, dest, v51);
        v36 = n[0];
LABEL_51:
        LODWORD(v75) = v81;
        if ( !v36 )
        {
          v73.m128i_i64[1] = 0;
          goto LABEL_53;
        }
        goto LABEL_73;
      }
      v36 = 1;
      LODWORD(v75) = v81;
LABEL_73:
      v73.m128i_i64[1] = qalloc_or_throw();
      memcpy((void *)v73.m128i_i64[1], dest, v36);
LABEL_53:
      v71 = nullptr;
      LODWORD(v76) = v84;
      v73.m128i_i64[0] = v86[0];
      if ( v86[0] )
      {
        v67 = v86[0];
        v71 = (void *)qalloc_or_throw();
        memcpy(v71, v85, v67);
      }
      v37 = a2[1];
      v38 = (unsigned __int64)a2[2];
      if ( v38 < (unsigned __int64)v37->m128i_u64 + 1 )
      {
        v52 = qvector_reserve();
        v53 = a2[2];
        v54 = *a2;
        a2[2] = (const __m128i *)v38;
        v55 = a2[1];
        v77 = v53;
        v56 = (__int64)&v55[-1].m128i_i64[1] + 7;
        if ( v56 >= 0 )
        {
          v78 = v36;
          v57 = (__m128i *)v52;
          v58 = v56;
          v59 = 0;
          v60 = v52;
          do
          {
            v57->m128i_i32[0] = v54->m128i_i32[0];
            v61 = v54->m128i_i64[1];
            v62 = _mm_loadu_si128(v54 + 1);
            v54->m128i_i64[1] = 0;
            v57->m128i_i64[1] = v61;
            v57[1] = v62;
            LODWORD(v61) = v54[2].m128i_i32[0];
            v54[1] = v59;
            v57[2].m128i_i32[0] = v61;
            v63 = v54[2].m128i_i64[1];
            v64 = _mm_loadu_si128(v54 + 3);
            v54[2].m128i_i64[1] = 0;
            v57[2].m128i_i64[1] = v63;
            v57[3] = v64;
            v65 = v54->m128i_i64[1];
            v54[3].m128i_i64[1] = 0;
            if ( v65 )
            {
              v54[1].m128i_i64[0] = 0;
              qfree();
              v59 = 0;
            }
            v54 += 4;
            v57 += 4;
          }
          while ( v58-- != 0 );
          v36 = v78;
          v52 = v60;
        }
        v78 = v52;
        qfree();
        v39 = (const __m128i *)v78;
        a2[2] = v77;
        v37 = a2[1];
        *a2 = v39;
      }
      else
      {
        v39 = *a2;
      }
      v40 = (__m128i *)&v39[4 * (_QWORD)v37];
      v41 = v75;
      v40[1] = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
      v42 = _mm_loadl_epi64(&v73);
      v40->m128i_i32[0] = v41;
      v40->m128i_i64[1] = v73.m128i_i64[1];
      v43 = v76;
      v40[3] = _mm_unpacklo_epi64(v42, v42);
      v40[2].m128i_i32[0] = v43;
      v40[2].m128i_i64[1] = (__int64)v71;
      v44 = v85;
      a2[1] = (const __m128i *)((char *)a2[1] + 1);
      if ( v44 )
      {
        v86[0] = 0;
        qfree();
      }
      if ( dest )
      {
        n[0] = 0;
        qfree();
        v33 = qfindnext();
        goto LABEL_47;
      }
LABEL_46:
      v33 = qfindnext();
LABEL_47:
      v7 = v33;
      if ( v33 )
        goto LABEL_48;
    }
    v91[v17] = 0;
    qfclose();
    if ( v18 > 0 )
    {
      do
      {
        src = nullptr;
        v80 = 0;
        v29 = (const char *)(v73.m128i_i64[0] + v7);
        v30 = strlen(v29);
        v31 = v30 + 1;
        v32 = v30;
        src = (void *)qvector_reserve();
        *(_QWORD *)&v80 = v31;
        memmove(src, v29, v32);
        *((_BYTE *)src + v32) = 0;
        quote_cmdline_arg();
        v21 = v86[0];
        if ( v86[0] )
        {
          v19 = v86[0] + 1;
          v20 = v86[0];
          v21 = v86[0] - 1;
        }
        else
        {
          v19 = 2;
          v20 = 1;
        }
        v22 = v85;
        if ( v86[1] < v19 )
        {
          v76 = v20;
          v75 = v19;
          v85 = (void *)qvector_reserve();
          v20 = v76;
          v22 = v85;
          v19 = v75;
        }
        v86[0] = v19;
        v22[v20] = 0;
        *((_BYTE *)v85 + v21) = 32;
        v23 = v80;
        if ( (_QWORD)v80 )
        {
          v24 = v80 - 1;
          if ( (_QWORD)v80 != 1 )
          {
            v25 = v86[0];
            v26 = v80 - 1;
            if ( v86[0] )
            {
              v25 = v86[0] - 1;
              v26 = v24 + v86[0] - 1;
              v23 = v80 + v86[0] - 1;
            }
            v27 = v85;
            if ( v86[1] < v23 )
            {
              v77 = (const __m128i *)v26;
              v76 = v25;
              v75 = v80 - 1;
              v85 = (void *)qvector_reserve();
              v26 = (size_t)v77;
              v27 = v85;
              v25 = v76;
              v24 = v75;
            }
            v86[0] = v23;
            v27[v26] = 0;
            memcpy((char *)v85 + v25, src, v24);
          }
        }
        v28 = v7 + strlen(v29) + 1;
        v7 = v28;
        if ( src )
        {
          *(_QWORD *)&v80 = 0;
          qfree();
        }
      }
      while ( v73.m128i_i32[2] > v28 );
    }
    v36 = n[0];
    goto LABEL_51;
  }
LABEL_48:
  v34 = *((_DWORD *)a2 + 2);
  qfindclose();
  return v34;
}

