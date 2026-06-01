__int64 __fastcall sub_23420(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 *v7; // rbp
  __int64 v8; // r13
  const char *v9; // rax
  char *v10; // r14
  int v11; // eax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // r13
  size_t v15; // rax
  size_t v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rax
  size_t v30; // r9
  void *v31; // r13
  __m128i v32; // xmm1
  __int64 v33; // rsi
  void *v34; // rdi
  size_t v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // [rsp+0h] [rbp-148h]
  size_t nc; // [rsp+18h] [rbp-130h]
  unsigned int na; // [rsp+18h] [rbp-130h]
  size_t n; // [rsp+18h] [rbp-130h]
  size_t nb; // [rsp+18h] [rbp-130h]
  size_t v42; // [rsp+20h] [rbp-128h]
  size_t v43; // [rsp+28h] [rbp-120h]
  char *v44; // [rsp+38h] [rbp-110h] BYREF
  __int64 v45; // [rsp+40h] [rbp-108h] BYREF
  __int128 v46; // [rsp+48h] [rbp-100h]
  __int64 *v47; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-E0h]
  void *dest; // [rsp+80h] [rbp-C8h]
  __int128 v50; // [rsp+88h] [rbp-C0h]
  __int64 v51; // [rsp+98h] [rbp-B0h]
  __int64 v52; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-A0h]
  __int64 v54; // [rsp+B8h] [rbp-90h]
  __int128 v55; // [rsp+C0h] [rbp-88h]
  __int64 v56; // [rsp+D0h] [rbp-78h]
  __int128 v57; // [rsp+D8h] [rbp-70h]
  __int64 v58; // [rsp+E8h] [rbp-60h]
  __int128 v59; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v60; // [rsp+108h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 864);
  v60 = __readfsqword(0x28u);
  v46 = 0;
  v45 = 0;
  v4 = sub_3D0C0(v2, &v45);
  if ( !(_BYTE)v4 )
    goto LABEL_2;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v4 = sub_444D0(&v52, &v45, 0, 0);
  if ( (_BYTE)v4 && (v6 = sub_40FE0(&v52, "threads")) != 0 )
  {
    v47 = nullptr;
    v48 = 0;
    sub_41050(v6, &v47, "thread");
    v7 = v47;
    v37 = &v47[v48];
    if ( v37 != v47 )
    {
      while ( 1 )
      {
        v8 = *v7;
        dest = nullptr;
        v51 = -1;
        v50 = 0;
        v9 = (const char *)sub_41140(v8, "id");
        v10 = (char *)v9;
        if ( !v9 || (v44 = nullptr, v11 = strtol(v9, &v44, 16), v44 == v10) )
        {
          if ( (int)v51 < 0 )
          {
LABEL_47:
            if ( !dest )
              goto LABEL_23;
            goto LABEL_22;
          }
        }
        else
        {
          LODWORD(v51) = v11;
          if ( v11 < 0 )
            goto LABEL_47;
        }
        v12 = (const char *)sub_41140(v8, "core");
        if ( v12 )
          HIDWORD(v51) = strtol(v12, nullptr, 10);
        v13 = (const char *)sub_41140(v8, "name");
        v14 = v13;
        if ( v13 )
        {
          v15 = strlen(v13);
          v16 = v15;
          if ( v15 )
          {
            v34 = dest;
            v35 = v15 + 1;
            if ( *((_QWORD *)&v50 + 1) < v15 + 1 )
            {
              v42 = v15;
              nb = v15 + 1;
              dest = (void *)qvector_reserve();
              v16 = v42;
              v34 = dest;
              v35 = nb;
            }
            *(_QWORD *)&v50 = v35;
            nc = v16;
            memmove(v34, v14, v16);
            *((_BYTE *)dest + nc) = 0;
          }
          else
          {
            *(_QWORD *)&v50 = 0;
          }
        }
        v17 = a2[1];
        v18 = *a2;
        v19 = v51;
        v20 = *a2 + 32 * v17;
        if ( *a2 == v20 )
          goto LABEL_49;
        v21 = *a2;
        while ( (_DWORD)v51 != *(_DWORD *)(v21 + 24) )
        {
          v21 += 32;
          if ( v20 == v21 )
            goto LABEL_49;
        }
        if ( v20 == v21 )
        {
LABEL_49:
          v30 = v50;
          v31 = nullptr;
          if ( (_QWORD)v50 )
          {
            n = v50;
            v31 = (void *)qalloc_or_throw();
            memcpy(v31, dest, n);
            v17 = a2[1];
            v18 = *a2;
            v19 = v51;
            v30 = n;
          }
          v32 = _mm_cvtsi32_si128(HIDWORD(v51));
          if ( a2[2] < (unsigned __int64)(v17 + 1) )
          {
            v43 = v30;
            na = v19;
            v36 = qvector_reserve();
            *a2 = v36;
            v17 = a2[1];
            v18 = v36;
            v30 = v43;
            v32 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v32));
            v19 = na;
          }
          v33 = 32 * v17 + v18;
          *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
          *(_QWORD *)v33 = v31;
          *(_QWORD *)(v33 + 24) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), v32).m128i_u64[0];
          ++a2[1];
        }
        if ( !dest )
          goto LABEL_23;
LABEL_22:
        *(_QWORD *)&v50 = 0;
        qfree();
LABEL_23:
        if ( v37 == ++v7 )
        {
          v7 = v47;
          break;
        }
      }
    }
    if ( v7 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
  }
  else
  {
    v4 = 0;
  }
  v22 = v58;
  if ( v58 )
  {
    v23 = v59;
    if ( (_QWORD)v59 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 48 * v24);
        if ( v25[3] )
        {
          v25[4] = 0;
          qfree();
        }
        if ( *v25 )
        {
          v25[1] = 0;
          qfree();
        }
        ++v24;
        v22 = v58;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  v26 = v56;
  if ( v56 )
  {
    v27 = v57;
    if ( (_QWORD)v57 )
    {
      v28 = 0;
      do
      {
        v29 = 3 * v28++;
        sub_130C0((_QWORD *)(32 * v29 + v26));
        v26 = v56;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
LABEL_2:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return v4;
}

