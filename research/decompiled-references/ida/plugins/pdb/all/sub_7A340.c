unsigned __int64 __fastcall sub_7A340(__int64 *a1, const char *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 j; // r13
  __int64 *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  void **v15; // rbp
  void **k; // r14
  const char *v17; // rdi
  size_t v18; // r8
  size_t v19; // r9
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // rbp
  size_t v24; // r12
  char *v25; // rbp
  char *v26; // r12
  char *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r14
  size_t v32; // rax
  size_t v33; // r15
  __int64 v34; // rsi
  __m128i si128; // xmm0
  void *v36; // r10
  void *v37; // rdi
  size_t v38; // rax
  size_t v39; // r14
  const char *v40; // r14
  char *v41; // rax
  char *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rbp
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  void *v60; // rdi
  size_t v61; // rdx
  __int64 v62; // rax
  void *v63; // rdi
  size_t v64; // r15
  char *v65; // [rsp+8h] [rbp-B0h]
  char *v66; // [rsp+8h] [rbp-B0h]
  char *v67; // [rsp+8h] [rbp-B0h]
  __int64 v68; // [rsp+10h] [rbp-A8h]
  size_t v69; // [rsp+10h] [rbp-A8h]
  size_t v70; // [rsp+10h] [rbp-A8h]
  __int64 *v71; // [rsp+18h] [rbp-A0h]
  __int64 v72; // [rsp+18h] [rbp-A0h]
  void *v73; // [rsp+18h] [rbp-A0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-90h]
  char *s; // [rsp+40h] [rbp-78h] BYREF
  __int128 v77; // [rsp+48h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v79; // [rsp+68h] [rbp-50h]
  unsigned __int64 v80; // [rsp+78h] [rbp-40h]

  v2 = a1;
  v80 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
    sub_29350();
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *v2;
        }
      }
    }
    v2[1] = 0;
    qfree(v3);
    *v2 = 0;
    v2[2] = 0;
  }
  v8 = v2[3];
  if ( v8 )
  {
    v9 = v2[4];
    if ( v9 )
    {
      v10 = 0;
      for ( j = 0; j != v9; ++j )
      {
        v12 = (__int64 *)(v8 + v10);
        v13 = *(_QWORD *)(v8 + v10 + 24);
        if ( v13 )
        {
          v12[4] = 0;
          qfree(v13);
        }
        v14 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v14);
        }
        v8 = v2[3];
        v10 += 56;
      }
    }
    v2[4] = 0;
    qfree(v8);
    v2[3] = 0;
    v2[5] = 0;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  sub_7A140((__int64 *)&src);
  if ( a2 && *a2 )
  {
    s = nullptr;
    v77 = 0;
    v21 = strlen(a2);
    v22 = v21 + 1;
    v23 = v21;
    s = (char *)qvector_reserve(&s, 0, v21 + 1, 1);
    *(_QWORD *)&v77 = v22;
    memmove(s, a2, v23);
    s[v23] = 0;
    v24 = n[0];
    dest = nullptr;
    v25 = s;
    v79 = 0;
    if ( n[0] )
    {
      dest = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v79 + 1) = v24;
      memcpy(dest, src, v24);
      *(_QWORD *)&v79 = v24;
    }
    while ( 1 )
    {
      v26 = nullptr;
      v27 = strchr(v25, 59);
      if ( v27 )
      {
        *v27 = 0;
        v26 = v27 + 1;
      }
      if ( (debug & 0x400000) != 0 )
        sub_29350();
      if ( !strncasecmp(v25, "cache*", 6u) )
        break;
      if ( strncasecmp(v25, "srv*", 4u) )
      {
        if ( !(unsigned __int8)qisdir(v25) )
          goto LABEL_36;
        goto LABEL_67;
      }
      if ( v25[4] )
      {
        v25 += 4;
        v40 = nullptr;
        while ( 1 )
        {
          v41 = strchr(v25, 42);
          if ( !v41 )
            break;
          *v41 = 0;
          v42 = v41 + 1;
          if ( !v40 )
            v40 = v25;
          if ( (unsigned __int8)qisdir(v25) )
            sub_78990((__int64)v2, v25, 0);
          v25 = v42;
        }
        if ( !v40 || !*v40 )
        {
          v40 = ::src;
          if ( (_QWORD)v79 )
            v40 = (const char *)dest;
        }
        if ( !strncasecmp(v25, "https://", 8u) )
        {
          sub_78D00(v2, v40, v25 + 8, 0x40u);
        }
        else if ( !strncasecmp(v25, "http://", 7u) )
        {
          sub_78D00(v2, v40, v25 + 7, 0x50u);
        }
        else
        {
          if ( *v25 )
          {
            if ( !(unsigned __int8)qisdir(v25) )
            {
              sub_244A0();
              goto LABEL_36;
            }
LABEL_67:
            sub_78990((__int64)v2, v25, 0);
            goto LABEL_36;
          }
          sub_78D00(v2, v40, "msdl.microsoft.com/download/symbols", 0x50u);
        }
        goto LABEL_36;
      }
      v65 = (char *)::src;
      if ( (_QWORD)v79 )
        v65 = (char *)dest;
      sub_78990((__int64)v2, v65, 0);
      v28 = v2[4];
      v29 = v2[5];
      if ( v29 < v28 + 1 )
      {
        v43 = qvector_reserve(v2 + 3, 0, v28 + 1, 56);
        v44 = v2[4];
        v45 = v2[5];
        v2[5] = v29;
        v46 = v2[3];
        v68 = v45;
        v47 = v44 - 1;
        if ( v47 >= 0 )
        {
          v71 = v2;
          v48 = v43;
          v49 = v47;
          v50 = v43;
          do
          {
            v51 = *(_QWORD *)v46;
            v52 = _mm_loadu_si128((const __m128i *)(v46 + 8));
            *(_QWORD *)v46 = 0;
            *(_OWORD *)(v46 + 8) = 0;
            *(_QWORD *)v48 = v51;
            *(__m128i *)(v48 + 8) = v52;
            v53 = *(_QWORD *)(v46 + 24);
            v54 = _mm_loadu_si128((const __m128i *)(v46 + 32));
            *(_QWORD *)(v46 + 24) = 0;
            *(_QWORD *)(v48 + 24) = v53;
            *(__m128i *)(v48 + 32) = v54;
            LODWORD(v53) = *(_DWORD *)(v46 + 48);
            *(_QWORD *)(v46 + 40) = 0;
            *(_DWORD *)(v48 + 48) = v53;
            v55 = *(_QWORD *)(v46 + 24);
            if ( v55 )
            {
              *(_QWORD *)(v46 + 32) = 0;
              qfree(v55);
            }
            v56 = *(_QWORD *)v46;
            if ( *(_QWORD *)v46 )
            {
              *(_QWORD *)(v46 + 8) = 0;
              qfree(v56);
            }
            v46 += 56;
            v48 += 56;
          }
          while ( v49-- != 0 );
          v2 = v71;
          v43 = v50;
          v46 = v71[3];
        }
        v72 = v43;
        qfree(v46);
        v30 = v72;
        v2[5] = v68;
        v28 = v2[4];
        v2[3] = v72;
      }
      else
      {
        v30 = v2[3];
      }
      v31 = v30 + 56 * v28;
      *(_QWORD *)v31 = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_OWORD *)(v31 + 8) = 0;
      *(_OWORD *)(v31 + 32) = 0;
      ++v2[4];
      if ( v65 && (v32 = strlen(v65), (v33 = v32) != 0) )
      {
        v60 = *(void **)v31;
        v61 = v32 + 1;
        if ( *(_QWORD *)(v31 + 16) < v32 + 1 )
        {
          v70 = v32 + 1;
          v62 = qvector_reserve(v31, *(_QWORD *)v31, v61, 1);
          *(_QWORD *)v31 = v62;
          v61 = v70;
          v60 = (void *)v62;
        }
        *(_QWORD *)(v31 + 8) = v61;
        memmove(v60, v65, v33);
        *(_BYTE *)(*(_QWORD *)v31 + v33) = 0;
      }
      else
      {
        *(_QWORD *)(v31 + 8) = 0;
      }
      v34 = *(_QWORD *)(v31 + 24);
      if ( *(_QWORD *)(v31 + 40) <= 0x23u )
      {
        v58 = qvector_reserve(v31 + 24, v34, 36, 1);
        *(_QWORD *)(v31 + 24) = v58;
        v34 = v58;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_94300);
      *(_QWORD *)(v31 + 32) = 36;
      *(__m128i *)v34 = si128;
      *(__m128i *)(v34 + 16) = _mm_load_si128((const __m128i *)&xmmword_94310);
      *(_DWORD *)(v34 + 31) = 1936486242;
      *(_BYTE *)(*(_QWORD *)(v31 + 24) + 35LL) = 0;
      *(_DWORD *)(v31 + 48) = 80;
      if ( !v26 )
      {
LABEL_55:
        if ( dest )
        {
          *(_QWORD *)&v79 = 0;
          qfree(dest);
        }
        if ( s )
        {
          *(_QWORD *)&v77 = 0;
          qfree(s);
        }
        goto LABEL_21;
      }
LABEL_37:
      v25 = v26;
    }
    if ( v25[6] )
    {
      v25 += 6;
      if ( (unsigned __int8)qisdir(v25) )
      {
        v38 = strlen(v25);
        v39 = v38;
        if ( v38 )
        {
          v63 = dest;
          v64 = v38 + 1;
          if ( *((_QWORD *)&v79 + 1) < v38 + 1 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v64, 1);
            v63 = dest;
          }
          *(_QWORD *)&v79 = v64;
          memmove(v63, v25, v39);
          *((_BYTE *)dest + v39) = 0;
        }
        else
        {
          *(_QWORD *)&v79 = 0;
        }
        goto LABEL_67;
      }
    }
LABEL_36:
    if ( !v26 )
      goto LABEL_55;
    goto LABEL_37;
  }
LABEL_21:
  v15 = (void **)v2[3];
  for ( k = &v15[7 * v2[4]]; k != v15; v15 += 7 )
  {
    v17 = ::src;
    if ( v15[1] )
      v17 = (const char *)*v15;
    if ( !(unsigned __int8)qisdir(v17) )
    {
      sub_244A0();
      if ( v15 != &src )
      {
        v18 = n[0];
        if ( n[0] && (v19 = n[0] - 1, n[0] != 1) )
        {
          v36 = src;
          v37 = *v15;
          if ( (unsigned __int64)v15[2] < n[0] )
          {
            v73 = src;
            v69 = n[0] - 1;
            v67 = (char *)n[0];
            v59 = qvector_reserve(v15, *v15, n[0], 1);
            *v15 = (void *)v59;
            v36 = v73;
            v37 = (void *)v59;
            v19 = v69;
            v18 = (size_t)v67;
          }
          v15[1] = (void *)v18;
          v66 = (char *)v18;
          memmove(v37, v36, v19);
          v66[(_QWORD)*v15 - 1] = 0;
        }
        else
        {
          v15[1] = nullptr;
        }
      }
    }
  }
  sub_7A010(v2);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v80 - __readfsqword(0x28u);
}

