__int64 __fastcall sub_59020(void **a1)
{
  unsigned int v1; // ebx
  char v3; // al
  void *v4; // rdi
  char *v5; // rax
  void **p_src; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r15
  size_t v10; // r13
  char *v11; // rdi
  unsigned __int64 v12; // rdx
  void *v13; // rsi
  void *v14; // rax
  unsigned __int64 v15; // r13
  void *v16; // rdx
  __int64 v17; // rdi
  char v18; // al
  void *v19; // rdx
  const char *v20; // r14
  _QWORD *v21; // r13
  char *v22; // r12
  __int64 v23; // rax
  size_t v24; // r8
  __int64 v25; // rdx
  const char *v26; // r15
  const char *v27; // r12
  const char *v28; // rdx
  const char *v29; // rsi
  __int64 v30; // rax
  void *v31; // rsi
  __int64 v32; // rdx
  void *v33; // r14
  __int64 v34; // r12
  char *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  char *v40; // rdi
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 i; // rbx
  char *v44; // r15
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  int v49; // r12d
  const char *v50; // rsi
  void **v51; // [rsp+8h] [rbp-128h]
  void **v52; // [rsp+10h] [rbp-120h]
  unsigned __int8 v53; // [rsp+1Fh] [rbp-111h]
  __int64 v54; // [rsp+20h] [rbp-110h]
  __int64 v55; // [rsp+20h] [rbp-110h]
  size_t n; // [rsp+28h] [rbp-108h]
  __int64 v57; // [rsp+30h] [rbp-100h]
  __int64 v58; // [rsp+30h] [rbp-100h]
  void *v59; // [rsp+30h] [rbp-100h]
  unsigned __int64 v60; // [rsp+30h] [rbp-100h]
  __int64 v62; // [rsp+38h] [rbp-F8h]
  char *v63; // [rsp+38h] [rbp-F8h]
  void *src; // [rsp+40h] [rbp-F0h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-E8h]
  void *v66; // [rsp+50h] [rbp-E0h] BYREF
  __int128 v67; // [rsp+58h] [rbp-D8h]
  void *v68; // [rsp+70h] [rbp-C0h] BYREF
  __int128 v69; // [rsp+78h] [rbp-B8h]
  void *v70; // [rsp+90h] [rbp-A0h] BYREF
  __int128 v71; // [rsp+98h] [rbp-98h]
  void *ptr; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-78h]
  char s[40]; // [rsp+D0h] [rbp-60h] BYREF
  unsigned __int64 v75; // [rsp+F8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  v67 = 0;
  v66 = nullptr;
  v1 = sub_1A2090("Offline", 0, &v66, 0, 0, 2);
  if ( !(_BYTE)v1 )
  {
LABEL_2:
    v1 = 0;
    goto LABEL_3;
  }
  if ( (word_2439A4 & 0x200) != 0 )
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Decrypt borrowed licenses, size=%zu\n", (size_t)v67);
  v68 = nullptr;
  v69 = 0;
  if ( (_QWORD)v67 )
  {
    v3 = sub_57F40((__int64 *)&v68, *(_BYTE *)v66 | 0x80u, (char *)v66 + 1, v67 - 1);
    v4 = v68;
    if ( !v3 )
    {
      if ( !v68 )
        goto LABEL_12;
      goto LABEL_11;
    }
    v5 = (char *)v68 + v69;
  }
  else
  {
    v5 = nullptr;
    v4 = nullptr;
  }
  p_src = &src;
  src = v4;
  v65 = (unsigned __int64)v5;
  if ( (unsigned int)sub_57810((__int64 *)&src, "stored licenses") == -1 )
  {
LABEL_74:
    v4 = v68;
    if ( !v68 )
    {
LABEL_12:
      if ( (word_2439A4 & 0x200) != 0 )
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Failed to unpack borrowed license info\n");
      goto LABEL_2;
    }
LABEL_11:
    *(_QWORD *)&v69 = 0;
    j__free(v4);
    goto LABEL_12;
  }
LABEL_16:
  v7 = v65;
  if ( (unsigned __int64)src < v65 )
  {
    while ( 1 )
    {
      ptr = nullptr;
      v73 = 0;
      v8 = sub_196ED0(p_src, v7);
      if ( v8 )
      {
        v9 = v73;
        v10 = v8;
        v11 = (char *)ptr;
        v12 = v73 + v8;
        if ( *((_QWORD *)&v73 + 1) < v12 )
        {
          v60 = v73 + v8;
          ptr = (void *)sub_1987B0(&ptr, ptr, v12, 1);
          v12 = v60;
          v11 = (char *)ptr;
        }
        v13 = src;
        *(_QWORD *)&v73 = v12;
        if ( __CFADD__(v10, src) || v7 < (unsigned __int64)src + v10 )
          goto LABEL_72;
        src = (char *)src + v10;
        if ( !memcpy(&v11[v9], v13, v10) )
          break;
      }
      v14 = a1[1];
      v15 = (unsigned __int64)a1[2];
      if ( v15 < (unsigned __int64)v14 + 1 )
      {
        v30 = sub_1987B0(a1, 0, (char *)v14 + 1, 280);
        v31 = a1[2];
        v32 = v30;
        a1[2] = (void *)v15;
        v33 = *a1;
        v58 = (__int64)a1[1] - 1;
        if ( v58 >= 0 )
        {
          v55 = v30;
          v53 = v1;
          v52 = a1;
          v63 = (char *)*a1;
          v51 = p_src;
          v34 = v30;
          do
          {
            v35 = *(char **)v63;
            v36 = _mm_loadu_si128((const __m128i *)(v63 + 8));
            *(_QWORD *)v63 = 0;
            *(_OWORD *)(v63 + 8) = 0;
            *(_QWORD *)v34 = v35;
            *(__m128i *)(v34 + 8) = v36;
            *(__m128i *)(v34 + 24) = _mm_loadu_si128((const __m128i *)(v63 + 24));
            *(__m128i *)(v34 + 40) = _mm_loadu_si128((const __m128i *)(v63 + 40));
            *(__m128i *)(v34 + 56) = _mm_loadu_si128((const __m128i *)(v63 + 56));
            *(__m128i *)(v34 + 72) = _mm_loadu_si128((const __m128i *)(v63 + 72));
            *(__m128i *)(v34 + 88) = _mm_loadu_si128((const __m128i *)(v63 + 88));
            *(__m128i *)(v34 + 104) = _mm_loadu_si128((const __m128i *)(v63 + 104));
            *(__m128i *)(v34 + 120) = _mm_loadu_si128((const __m128i *)(v63 + 120));
            *(__m128i *)(v34 + 136) = _mm_loadu_si128((const __m128i *)(v63 + 136));
            *(__m128i *)(v34 + 152) = _mm_loadu_si128((const __m128i *)(v63 + 152));
            *(__m128i *)(v34 + 168) = _mm_loadu_si128((const __m128i *)(v63 + 168));
            *(__m128i *)(v34 + 184) = _mm_loadu_si128((const __m128i *)(v63 + 184));
            *(__m128i *)(v34 + 200) = _mm_loadu_si128((const __m128i *)(v63 + 200));
            *(__m128i *)(v34 + 216) = _mm_loadu_si128((const __m128i *)(v63 + 216));
            v37 = *(_QWORD *)(v63 + 246);
            *(__m128i *)(v34 + 232) = _mm_loadu_si128((const __m128i *)(v63 + 232));
            *(_QWORD *)(v34 + 246) = v37;
            v38 = *((_QWORD *)v63 + 32);
            v39 = _mm_loadu_si128((const __m128i *)(v63 + 264));
            *((_QWORD *)v63 + 32) = 0;
            *(_QWORD *)(v34 + 256) = v38;
            *(__m128i *)(v34 + 264) = v39;
            v40 = *(char **)v63;
            *((_QWORD *)v63 + 34) = 0;
            if ( v40 )
            {
              v41 = *((_QWORD *)v63 + 1);
              if ( v41 )
              {
                v42 = 0;
                for ( i = 0; i != v41; ++i )
                {
                  v44 = &v40[v42];
                  v45 = *(void **)&v40[v42 + 88];
                  if ( v45 )
                  {
                    *((_QWORD *)v44 + 12) = 0;
                    j__free(v45);
                  }
                  v46 = *((void **)v44 + 7);
                  if ( v46 )
                  {
                    *((_QWORD *)v44 + 8) = 0;
                    j__free(v46);
                  }
                  v47 = *((void **)v44 + 4);
                  if ( v47 )
                  {
                    *((_QWORD *)v44 + 5) = 0;
                    j__free(v47);
                  }
                  v48 = *((void **)v44 + 1);
                  if ( v48 )
                  {
                    *((_QWORD *)v44 + 2) = 0;
                    j__free(v48);
                  }
                  v42 += 112;
                  v40 = *(char **)v63;
                }
              }
              *((_QWORD *)v63 + 1) = 0;
              j__free(v40);
            }
            --v58;
            v34 += 280;
            v63 += 280;
          }
          while ( v58 != -1 );
          v32 = v55;
          v1 = v53;
          p_src = v51;
          a1 = v52;
          v33 = *v52;
        }
        v59 = (void *)v32;
        j__free(v33);
        v16 = v59;
        *a1 = v59;
        a1[2] = v31;
        v14 = a1[1];
      }
      else
      {
        v16 = *a1;
      }
      v17 = (__int64)v16 + 280 * (_QWORD)v14;
      *(_QWORD *)v17 = 0;
      *(_QWORD *)(v17 + 256) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      *(_OWORD *)(v17 + 264) = 0;
      a1[1] = (char *)a1[1] + 1;
      v18 = sub_57960(v17, (unsigned __int64 *)&ptr);
      v11 = (char *)ptr;
      if ( !v18 )
        goto LABEL_72;
      if ( !ptr )
        goto LABEL_16;
      *(_QWORD *)&v73 = 0;
      j__free(ptr);
      v7 = v65;
      if ( (unsigned __int64)src >= v65 )
        goto LABEL_28;
    }
    v11 = (char *)ptr;
LABEL_72:
    if ( v11 )
    {
      *(_QWORD *)&v73 = 0;
      j__free(v11);
    }
    goto LABEL_74;
  }
LABEL_28:
  v19 = a1[1];
  if ( v19 )
  {
    if ( (word_2439A4 & 0x200) != 0 )
    {
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Decrypted borrowed licenses:\n");
      v19 = a1[1];
    }
    v20 = (const char *)*a1;
    v54 = (__int64)*a1 + 280 * (_QWORD)v19;
    if ( *a1 != (void *)v54 )
    {
      do
      {
        if ( (word_2439A4 & 0x200) != 0 )
        {
          v49 = *((unsigned __int16 *)v20 + 15);
          ptr = nullptr;
          v73 = 0;
          sub_299F0((char **)&ptr);
          v50 = s1;
          if ( (_QWORD)v73 )
            v50 = (const char *)ptr;
          sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"  License file %s, user '%s', %d seats:\n", v50, v20 + 58, v49);
          if ( ptr )
          {
            *(_QWORD *)&v73 = 0;
            j__free(ptr);
          }
        }
        v21 = *(_QWORD **)v20;
        v57 = *(_QWORD *)v20 + 112LL * *((_QWORD *)v20 + 1);
        if ( *(_QWORD *)v20 != v57 )
        {
          do
          {
            while ( 1 )
            {
              if ( (word_2439A4 & 0x200) != 0 )
              {
                v22 = s;
                v23 = sub_1992F0(s, 0x20u, "%F");
                ptr = nullptr;
                v24 = v23;
                v73 = 0;
                if ( v23 )
                {
                  v24 = strlen(s);
                  v25 = v24 + 1;
                }
                else
                {
                  v25 = 1;
                  v22 = "";
                }
                n = v24;
                v62 = v25;
                ptr = (void *)sub_1987B0(&ptr, 0, v25, 1);
                v26 = s1;
                *(_QWORD *)&v73 = v62;
                memmove(ptr, v22, n);
                *((_BYTE *)ptr + n) = 0;
                if ( (_QWORD)v73 )
                  v26 = (const char *)ptr;
                v27 = s1;
                if ( v21[8] )
                  v27 = (const char *)v21[7];
                v70 = nullptr;
                v71 = 0;
                sub_299F0((char **)&v70);
                v28 = s1;
                if ( (_QWORD)v71 )
                  v28 = (const char *)v70;
                v29 = s1;
                if ( v21[2] )
                  v29 = (const char *)v21[1];
                sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"    %s:%s borrowed for %s until %s\n", v29, v28, v27, v26);
                if ( v70 )
                {
                  *(_QWORD *)&v71 = 0;
                  j__free(v70);
                }
                if ( ptr )
                  break;
              }
              v21 += 14;
              if ( (_QWORD *)v57 == v21 )
                goto LABEL_51;
            }
            *(_QWORD *)&v73 = 0;
            v21 += 14;
            j__free(ptr);
          }
          while ( (_QWORD *)v57 != v21 );
        }
LABEL_51:
        v20 += 280;
      }
      while ( (const char *)v54 != v20 );
    }
  }
  else if ( (word_2439A4 & 0x200) != 0 )
  {
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"No borrowed licenses found\n");
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    j__free(v68);
  }
LABEL_3:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    j__free(v66);
  }
  return v1;
}
