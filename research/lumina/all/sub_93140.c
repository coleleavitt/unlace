__int64 __fastcall sub_93140(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  void *v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  const char *v16; // rdi
  const void *v18; // rbp
  void *v19; // rax
  const void *v20; // r15
  void *v21; // rax
  const void *v22; // r15
  void *v23; // rax
  const void *v24; // r15
  void *v25; // rax
  const void *v26; // r15
  void *v27; // rax
  const void *v28; // r15
  void *v29; // rax
  const void *v30; // r15
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // r12
  char *v36; // rbp
  __int64 v37; // r12
  void **v38; // r12
  const char *v39; // r14
  char *v40; // rax
  signed __int64 v41; // rax
  unsigned __int64 v42; // r8
  size_t v43; // rbp
  char *v44; // rax
  char *v45; // rdx
  unsigned __int64 v46; // rbp
  char *v47; // r14
  const char *v48; // rsi
  char *v49; // rax
  void *v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rbx
  char *v53; // rax
  void *v54; // rdi
  _QWORD *v55; // rsi
  __int64 v56; // rax
  char *v57; // rbp
  __int16 v58; // r15
  char *v59; // rax
  _BYTE *v60; // rbp
  char *v61; // rdi
  __int64 v62; // rbp
  char *v63; // rdi
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // r12
  char *v67; // rdi
  __int64 v68; // rbp
  char *v69; // rax
  void *v70; // rdi
  __int64 v71; // rax
  void *v72; // rax
  __int64 v73; // rax
  __m128i v74; // xmm0
  char *v75; // rdi
  char *v76; // r15
  __int64 v77; // r14
  __int64 v78; // rbp
  __int64 v79; // rbx
  char *v80; // rdx
  void *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // [rsp+8h] [rbp-C0h]
  signed __int64 v85; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v87; // [rsp+18h] [rbp-B0h] BYREF
  void *v88; // [rsp+30h] [rbp-98h] BYREF
  __int128 v89; // [rsp+38h] [rbp-90h]
  void *v90; // [rsp+50h] [rbp-78h] BYREF
  __int128 v91; // [rsp+58h] [rbp-70h]
  char *endptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v93; // [rsp+78h] [rbp-50h]
  unsigned __int64 v94; // [rsp+88h] [rbp-40h]

  v3 = a1 + 40;
  v94 = __readfsqword(0x28u);
  if ( a1 + 40 != a3 + 8 )
  {
    v6 = *(_QWORD *)(a3 + 16);
    if ( v6 > 1 )
    {
      v30 = *(const void **)(a3 + 8);
      v31 = *(void **)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < v6 )
      {
        v71 = sub_1987B0(v3, v31, *(_QWORD *)(a3 + 16), 1);
        *(_QWORD *)(a1 + 40) = v71;
        v31 = (void *)v71;
      }
      *(_QWORD *)(a1 + 48) = v6;
      memmove(v31, v30, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
  *(_WORD *)(a1 + 64) = *(_WORD *)(a3 + 32);
  if ( a1 + 72 != a3 + 40 )
  {
    v7 = *(_QWORD *)(a3 + 48);
    if ( v7 > 1 )
    {
      v28 = *(const void **)(a3 + 40);
      v29 = *(void **)(a1 + 72);
      if ( *(_QWORD *)(a1 + 88) < v7 )
      {
        v29 = (void *)sub_1987B0(a1 + 72, *(_QWORD *)(a1 + 72), *(_QWORD *)(a3 + 48), 1);
        *(_QWORD *)(a1 + 72) = v29;
      }
      *(_QWORD *)(a1 + 80) = v7;
      memmove(v29, v28, v7 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  if ( a1 + 96 != a3 + 64 )
  {
    v8 = *(_QWORD *)(a3 + 72);
    if ( v8 > 1 )
    {
      v26 = *(const void **)(a3 + 64);
      v27 = *(void **)(a1 + 96);
      if ( *(_QWORD *)(a1 + 112) < v8 )
      {
        v27 = (void *)sub_1987B0(a1 + 96, *(_QWORD *)(a1 + 96), *(_QWORD *)(a3 + 72), 1);
        *(_QWORD *)(a1 + 96) = v27;
      }
      *(_QWORD *)(a1 + 104) = v8;
      memmove(v27, v26, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 104) = 0;
    }
  }
  if ( a1 + 120 != a3 + 88 )
  {
    v9 = *(_QWORD *)(a3 + 96);
    if ( v9 > 1 )
    {
      v24 = *(const void **)(a3 + 88);
      v25 = *(void **)(a1 + 120);
      if ( *(_QWORD *)(a1 + 136) < v9 )
      {
        v25 = (void *)sub_1987B0(a1 + 120, *(_QWORD *)(a1 + 120), *(_QWORD *)(a3 + 96), 1);
        *(_QWORD *)(a1 + 120) = v25;
      }
      *(_QWORD *)(a1 + 128) = v9;
      memmove(v25, v24, v9 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 128) = 0;
    }
  }
  *(_WORD *)(a1 + 144) = *(_WORD *)(a3 + 112);
  if ( a1 + 152 != a3 + 120 )
  {
    v10 = *(_QWORD *)(a3 + 128);
    if ( v10 > 1 )
    {
      v22 = *(const void **)(a3 + 120);
      v23 = *(void **)(a1 + 152);
      if ( *(_QWORD *)(a1 + 168) < v10 )
      {
        v23 = (void *)sub_1987B0(a1 + 152, *(_QWORD *)(a1 + 152), *(_QWORD *)(a3 + 128), 1);
        *(_QWORD *)(a1 + 152) = v23;
      }
      *(_QWORD *)(a1 + 160) = v10;
      memmove(v23, v22, v10 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 152) + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 160) = 0;
    }
  }
  if ( a1 + 176 != a3 + 144 )
  {
    v11 = *(_QWORD *)(a3 + 152);
    if ( v11 > 1 )
    {
      v20 = *(const void **)(a3 + 144);
      v21 = *(void **)(a1 + 176);
      if ( *(_QWORD *)(a1 + 192) < v11 )
      {
        v21 = (void *)sub_1987B0(a1 + 176, *(_QWORD *)(a1 + 176), *(_QWORD *)(a3 + 152), 1);
        *(_QWORD *)(a1 + 176) = v21;
      }
      *(_QWORD *)(a1 + 184) = v11;
      memmove(v21, v20, v11 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + v11 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 184) = 0;
    }
  }
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a3 + 168);
  if ( a1 + 208 != a3 + 176 )
  {
    v12 = *(_QWORD *)(a3 + 184);
    if ( v12 > 1 )
    {
      v18 = *(const void **)(a3 + 176);
      v19 = *(void **)(a1 + 208);
      if ( *(_QWORD *)(a1 + 224) < v12 )
      {
        v19 = (void *)sub_1987B0(a1 + 208, *(_QWORD *)(a1 + 208), v12, 1);
        *(_QWORD *)(a1 + 208) = v19;
      }
      *(_QWORD *)(a1 + 216) = v12;
      memmove(v19, v18, v12 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 208) + v12 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 216) = 0;
    }
  }
  ptr = nullptr;
  v87 = 0;
  if ( (unsigned __int8)sub_19AD90("VAULT_HOST") )
  {
    v13 = *(void **)(a1 + 40);
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 48));
    v15 = _mm_loadu_si128(&v87);
    *(_QWORD *)(a1 + 40) = ptr;
    ptr = v13;
    *(__m128i *)(a1 + 48) = v15;
    v87 = v14;
  }
  if ( (unsigned __int8)sub_19AD90("VAULT_PORT") )
  {
    v16 = s1;
    if ( v87.m128i_i64[0] )
      v16 = (const char *)ptr;
    *(_WORD *)(a1 + 64) = strtol(v16, nullptr, 10);
  }
  if ( *(_QWORD *)(a1 + 48) <= 1u )
  {
    v55 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) <= 8u )
    {
      v56 = sub_1987B0(v3, v55, 9, 1);
      *(_QWORD *)(a1 + 40) = v56;
      v55 = (_QWORD *)v56;
    }
    *(_QWORD *)(a1 + 48) = 9;
    *v55 = 0x746C756176786568LL;
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 8LL) = 0;
  }
  if ( !*(_WORD *)(a1 + 64) )
    *(_WORD *)(a1 + 64) = -103;
  if ( (unsigned __int8)sub_19AD90("VAULT_PROXY_CONN") )
  {
    v32 = *(void **)(a1 + 120);
    if ( v32 )
    {
      *(_QWORD *)(a1 + 128) = 0;
      j__free(v32);
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 136) = 0;
    }
    v33 = *(void **)(a1 + 152);
    *(_WORD *)(a1 + 144) = 0;
    if ( v33 )
    {
      *(_QWORD *)(a1 + 160) = 0;
      j__free(v33);
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 168) = 0;
    }
    v34 = *(void **)(a1 + 176);
    if ( v34 )
    {
      *(_QWORD *)(a1 + 184) = 0;
      j__free(v34);
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 192) = 0;
    }
    if ( v87.m128i_i64[0] > 1uLL )
    {
      v89 = 0;
      v88 = nullptr;
      sub_449A0(&ptr, (__int64 *)&v88, "@", 0);
      v35 = v89;
      v36 = (char *)v88;
      if ( (unsigned __int64)v89 <= 2 )
      {
        v37 = 0;
        if ( (_QWORD)v89 != 2 )
          goto LABEL_65;
        if ( *((_QWORD *)v88 + 1) <= 1u )
          goto LABEL_87;
        v93 = 0;
        endptr = nullptr;
        sub_449A0(v88, (__int64 *)&endptr, ":", 0);
        v62 = v93;
        v63 = endptr;
        if ( (unsigned __int64)v93 > 2 )
        {
          if ( endptr )
          {
            v79 = 0;
            do
            {
              v80 = &v63[24 * v79];
              v81 = *(void **)v80;
              if ( *(_QWORD *)v80 )
              {
                *((_QWORD *)v80 + 1) = 0;
                j__free(v81);
                v63 = endptr;
              }
              ++v79;
            }
            while ( v62 != v79 );
            *(_QWORD *)&v93 = 0;
            j__free(v63);
          }
          goto LABEL_86;
        }
        v64 = *(_QWORD *)(a1 + 152);
        v65 = _mm_loadu_si128((const __m128i *)(a1 + 160));
        *(_QWORD *)(a1 + 152) = *(_QWORD *)endptr;
        *(_QWORD *)(a1 + 160) = *((_QWORD *)v63 + 1);
        *(_QWORD *)(a1 + 168) = *((_QWORD *)v63 + 2);
        *(_QWORD *)v63 = v64;
        *(__m128i *)(v63 + 8) = v65;
        v66 = v93;
        v67 = endptr;
        if ( (_QWORD)v93 == 2 )
        {
          v73 = *(_QWORD *)(a1 + 176);
          v74 = _mm_loadu_si128((const __m128i *)(a1 + 184));
          *(_QWORD *)(a1 + 176) = *((_QWORD *)endptr + 3);
          *(_QWORD *)(a1 + 184) = *((_QWORD *)v67 + 4);
          *(_QWORD *)(a1 + 192) = *((_QWORD *)v67 + 5);
          *((_QWORD *)v67 + 3) = v73;
          *((__m128i *)v67 + 2) = v74;
          if ( !v67 )
            goto LABEL_123;
        }
        else
        {
          if ( !endptr )
          {
LABEL_123:
            v36 = (char *)v88;
            v37 = 24;
LABEL_65:
            v90 = nullptr;
            v38 = (void **)&v36[v37];
            v91 = 0;
            if ( v38[1] )
            {
              v39 = (const char *)*v38;
              if ( *(_BYTE *)*v38 == 91 )
              {
                v40 = strchr((const char *)*v38, 93);
                if ( v40 && v40 != v39 + 1 )
                {
                  endptr = nullptr;
                  v41 = v40 - v39;
                  v42 = v41;
                  v93 = 0;
                  v43 = v41 - 1;
                  if ( v41 == 1 )
                  {
                    v91 = 0u;
                  }
                  else
                  {
                    v75 = nullptr;
                    if ( v41 )
                    {
                      v85 = v41;
                      endptr = (char *)sub_1987B0(&endptr, 0, v41, 1);
                      v42 = v85;
                      v75 = endptr;
                    }
                    *(_QWORD *)&v93 = v42;
                    v84 = v42;
                    memmove(v75, v39 + 1, v43);
                    v42 = v84;
                    endptr[v84 - 1] = 0;
                    v76 = endptr;
                    v77 = v93;
                    endptr = nullptr;
                    v78 = *((_QWORD *)&v93 + 1);
                    v93 = 0;
                    if ( v90 )
                    {
                      *(_QWORD *)&v91 = 0;
                      j__free(v90);
                      v90 = v76;
                      *(_QWORD *)&v91 = v77;
                      v42 = v84;
                      *((_QWORD *)&v91 + 1) = v78;
                      if ( endptr )
                      {
                        *(_QWORD *)&v93 = 0;
                        j__free(endptr);
                        v42 = v84;
                      }
                    }
                    else
                    {
                      v90 = v76;
                      *(_QWORD *)&v91 = v77;
                      *((_QWORD *)&v91 + 1) = v78;
                    }
                  }
                  v44 = (char *)v38[1];
                  if ( !v44 )
                    goto LABEL_81;
                  v45 = v44 - 1;
                  if ( v44 != (_BYTE *)&dword_0 + 1 && v42 )
                  {
                    v46 = 1;
                    v47 = nullptr;
                    if ( v42 < (unsigned __int64)v45 )
                    {
                      v47 = &v45[-v42];
                      v46 = (unsigned __int64)&v44[-v42];
                      memmove(*v38, (char *)*v38 + v42, (size_t)&v45[-v42]);
                    }
                    v48 = (const char *)*v38;
                    if ( (unsigned __int64)v38[2] < v46 )
                    {
                      v82 = sub_1987B0(v38, v48, v46, 1);
                      *v38 = (void *)v82;
                      v48 = (const char *)v82;
                    }
                    v38[1] = (void *)v46;
                    v47[(_QWORD)v48] = 0;
                    if ( !v38[1] )
                      goto LABEL_81;
                  }
                  v49 = (char *)*v38;
                  if ( *(_BYTE *)*v38 != 58 || !v49 )
                  {
LABEL_81:
                    if ( (unsigned __int64)v91 > 1 )
                      v38 = &v90;
                    goto LABEL_83;
                  }
                  v39 = (const char *)*v38;
LABEL_101:
                  v57 = v49 + 1;
                  v58 = strtoul(v49 + 1, &endptr, 10);
                  v59 = endptr;
                  if ( v57 == endptr )
                    goto LABEL_84;
                  while ( *v59 == 32 )
                    endptr = ++v59;
                  if ( *v59 )
                  {
LABEL_84:
                    if ( v90 )
                      j__free(v90);
LABEL_86:
                    v36 = (char *)v88;
                    goto LABEL_87;
                  }
                  v60 = (_BYTE *)(v57 - v39);
                  v61 = (char *)*v38;
                  if ( v60 == (_BYTE *)&dword_0 + 1 )
                  {
                    if ( v61 )
                    {
                      v38[1] = nullptr;
                      j__free(v61);
                      *v38 = nullptr;
                      v38[2] = nullptr;
                    }
                  }
                  else
                  {
                    v72 = v38[1];
                    if ( v72 < v60 )
                    {
                      if ( v38[2] < v60 )
                      {
                        v83 = sub_1987B0(v38, *v38, v60, 1);
                        *v38 = (void *)v83;
                        v61 = (char *)v83;
                        v72 = v38[1];
                      }
                      memset(&v61[(_QWORD)v72], 0, v60 - (_BYTE *)v72);
                      v38[1] = v60;
                      v61 = (char *)*v38;
                    }
                    else if ( v72 != v60 )
                    {
                      v38[1] = v60;
                    }
                    v60[(_QWORD)v61 - 1] = 0;
                  }
                  *(_WORD *)(a1 + 144) = v58;
                  goto LABEL_81;
                }
LABEL_87:
                if ( !v36 )
                  goto LABEL_32;
                v35 = v89;
                if ( !(_QWORD)v89 )
                  goto LABEL_93;
                goto LABEL_89;
              }
              if ( !strncasecmp((const char *)*v38, "::ffff:", 7u) && strchr(v39, 46) )
                v39 += 7;
            }
            else
            {
              v39 = s1;
            }
            v49 = strchr(v39, 58);
            if ( !v49 )
            {
LABEL_83:
              v50 = *(void **)(a1 + 120);
              v51 = _mm_loadu_si128((const __m128i *)(a1 + 128));
              *(_QWORD *)(a1 + 120) = *v38;
              *(_QWORD *)(a1 + 128) = v38[1];
              *(_QWORD *)(a1 + 136) = v38[2];
              *v38 = v50;
              *(__m128i *)(v38 + 1) = v51;
              goto LABEL_84;
            }
            goto LABEL_101;
          }
          if ( !(_QWORD)v93 )
          {
LABEL_122:
            *(_QWORD *)&v93 = 0;
            j__free(v67);
            goto LABEL_123;
          }
        }
        v68 = 0;
        do
        {
          v69 = &v67[24 * v68];
          v70 = *(void **)v69;
          if ( *(_QWORD *)v69 )
          {
            *((_QWORD *)v69 + 1) = 0;
            j__free(v70);
          }
          ++v68;
          v67 = endptr;
        }
        while ( v66 != v68 );
        goto LABEL_122;
      }
      if ( v88 )
      {
LABEL_89:
        v52 = 0;
        do
        {
          v53 = &v36[24 * v52];
          v54 = *(void **)v53;
          if ( *(_QWORD *)v53 )
          {
            *((_QWORD *)v53 + 1) = 0;
            j__free(v54);
            v36 = (char *)v88;
          }
          ++v52;
        }
        while ( v35 != v52 );
LABEL_93:
        *(_QWORD *)&v89 = 0;
        j__free(v36);
      }
    }
  }
LABEL_32:
  if ( ptr )
  {
    v87.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return 1;
}
