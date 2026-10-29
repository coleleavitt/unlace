__int64 __fastcall sub_57960(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rcx
  int v7; // eax
  char *v9; // r15
  int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // r8
  size_t v13; // r12
  char *v14; // rdi
  const void *v15; // rsi
  _WORD *v16; // rax
  const char *v17; // rdx
  const char *v18; // r13
  const char *v19; // rax
  const __m128i *v20; // rax
  const char *v21; // rdx
  const char *v22; // r13
  __m128i v23; // xmm0
  const char *v24; // rax
  char *v25; // r14
  __int64 v26; // rdi
  int v27; // eax
  char *v28; // rdi
  unsigned int v29; // eax
  void *v30; // r15
  size_t v31; // r13
  char *v32; // rdx
  const void *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  char *v37; // r15
  unsigned int v38; // eax
  __int64 v39; // r8
  size_t v40; // r14
  __int64 v41; // rsi
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-90h]
  char *v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  void *src[2]; // [rsp+10h] [rbp-88h] BYREF
  void *v48; // [rsp+20h] [rbp-78h] BYREF
  __int128 v49; // [rsp+28h] [rbp-70h]
  void *ptr[11]; // [rsp+40h] [rbp-58h] BYREF

  LODWORD(v2) = 0;
  v3 = *a2;
  v4 = a2[1];
  ptr[3] = (void *)__readfsqword(0x28u);
  v6 = v3 + v4;
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  v7 = sub_196ED0(src, v6);
  if ( v7 > 3 )
    return (unsigned int)v2;
  v9 = (char *)src[1];
  v10 = v7;
  v48 = nullptr;
  v49 = 0;
  v11 = sub_196ED0(src, src[1]);
  if ( !v11 )
    goto LABEL_11;
  v12 = v49;
  v13 = v11;
  v14 = (char *)v48;
  v2 = v49 + v11;
  if ( *((_QWORD *)&v49 + 1) < v2 )
  {
    v44 = v49;
    v48 = (void *)sub_1987B0(&v48, v48, v2, 1);
    v12 = v44;
    v14 = (char *)v48;
  }
  v15 = src[0];
  *(_QWORD *)&v49 = v2;
  LOBYTE(v2) = (v9 < (char *)src[0] + v13) | __CFADD__(v13, src[0]);
  if ( !(_BYTE)v2 )
  {
    src[0] = (char *)src[0] + v13;
    if ( !memcpy(&v14[v12], v15, v13) )
    {
LABEL_8:
      v14 = (char *)v48;
      goto LABEL_9;
    }
LABEL_11:
    *(__m128i *)ptr = _mm_unpacklo_epi64(
                        (__m128i)(unsigned __int64)v48,
                        (__m128i)(unsigned __int64)((unsigned __int64)v48 + v49));
    if ( (int)sub_196ED0(ptr, (char *)v48 + v49) <= 3 )
    {
      *(_WORD *)(a1 + 26) = sub_196ED0(ptr, ptr[1]);
      *(_WORD *)(a1 + 28) = sub_196ED0(ptr, ptr[1]);
      *(_WORD *)(a1 + 30) = sub_196ED0(ptr, ptr[1]);
      *(_QWORD *)(a1 + 32) = sub_196FF0(ptr, ptr[1]);
      *(_QWORD *)(a1 + 127) = sub_196FF0(ptr, ptr[1]);
      *(_DWORD *)(a1 + 40) = sub_196ED0(ptr, ptr[1]);
      *(_DWORD *)(a1 + 44) = sub_196ED0(ptr, ptr[1]);
      *(_DWORD *)(a1 + 48) = sub_196ED0(ptr, ptr[1]);
      v16 = ptr[0];
      v17 = (const char *)ptr[1];
      v18 = (char *)ptr[0] + 6;
      if ( ptr[1] >= (char *)ptr[0] + 6 )
      {
        ptr[0] = (char *)ptr[0] + 6;
        *(_DWORD *)(a1 + 52) = *(_DWORD *)v16;
        *(_WORD *)(a1 + 56) = v16[2];
        v19 = v18;
        while ( v17 != v19 )
        {
          if ( !*v19++ )
          {
            ptr[0] = (void *)v19;
            if ( strlen(v18) <= 0x45 )
            {
              sub_1998A0(a1 + 58, v18, 69);
              v20 = (const __m128i *)ptr[0];
              v21 = (const char *)ptr[1];
              v22 = (char *)ptr[0] + 16;
              if ( ptr[1] >= (char *)ptr[0] + 16 )
              {
                ptr[0] = (char *)ptr[0] + 16;
                v23 = _mm_loadu_si128(v20);
                v24 = v22;
                *(__m128i *)(a1 + 135) = v23;
                while ( v21 != v24 )
                {
                  if ( !*v24++ )
                  {
                    ptr[0] = (void *)v24;
                    if ( strlen(v22) > 0x40 )
                      goto LABEL_19;
                    sub_1998A0(a1 + 151, v22, 64);
                    if ( v10 == 3 )
                    {
                      v37 = (char *)src[1];
                      v38 = sub_196ED0(src, src[1]);
                      if ( v38 )
                      {
                        v39 = *(_QWORD *)(a1 + 264);
                        v40 = v38;
                        v41 = *(_QWORD *)(a1 + 256);
                        v2 = v39 + v38;
                        if ( *(_QWORD *)(a1 + 272) < v2 )
                        {
                          v46 = *(_QWORD *)(a1 + 264);
                          v43 = sub_1987B0(a1 + 256, v41, v39 + v38, 1);
                          *(_QWORD *)(a1 + 256) = v43;
                          v39 = v46;
                          v41 = v43;
                        }
                        v42 = (char *)src[0];
                        *(_QWORD *)(a1 + 264) = v2;
                        LOBYTE(v2) = (v37 < &v42[v40]) | __CFADD__(v40, v42);
                        if ( (_BYTE)v2 )
                          goto LABEL_14;
                        src[0] = &v42[v40];
                        if ( !memcpy((void *)(v41 + v39), v42, v40) )
                          goto LABEL_8;
                      }
                    }
                    v25 = (char *)src[1];
                    v14 = (char *)v48;
                    LODWORD(v2) = 1;
                    if ( src[0] >= src[1] )
                      goto LABEL_9;
                    while ( 1 )
                    {
                      memset(ptr, 0, 24);
                      v29 = sub_196ED0(src, v25);
                      if ( v29 )
                      {
                        v30 = ptr[1];
                        v31 = v29;
                        v28 = (char *)ptr[0];
                        v32 = (char *)ptr[1] + v29;
                        if ( ptr[2] < v32 )
                        {
                          v45 = (char *)ptr[1] + v29;
                          ptr[0] = (void *)sub_1987B0(ptr, ptr[0], v32, 1);
                          v32 = v45;
                          v28 = (char *)ptr[0];
                        }
                        v33 = src[0];
                        ptr[1] = v32;
                        if ( __CFADD__(v31, src[0]) || v25 < (char *)src[0] + v31 )
                          goto LABEL_45;
                        src[0] = (char *)src[0] + v31;
                        if ( !memcpy(&v28[(_QWORD)v30], v33, v31) )
                          break;
                      }
                      v34 = *(_QWORD *)(a1 + 8);
                      v35 = *(_QWORD *)a1;
                      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v34 + 1) )
                      {
                        v36 = sub_1987B0(a1, v35, v34 + 1, 112);
                        *(_QWORD *)a1 = v36;
                        v34 = *(_QWORD *)(a1 + 8);
                        v35 = v36;
                      }
                      v26 = v35 + 112 * v34;
                      *(_QWORD *)v26 = 112;
                      *(_QWORD *)(v26 + 8) = 0;
                      *(_QWORD *)(v26 + 32) = 0;
                      *(_QWORD *)(v26 + 56) = 0;
                      *(_QWORD *)(v26 + 80) = 0;
                      *(_QWORD *)(v26 + 88) = 0;
                      *(_OWORD *)(v26 + 16) = 0;
                      *(_OWORD *)(v26 + 40) = 0;
                      *(_OWORD *)(v26 + 64) = 0;
                      *(_OWORD *)(v26 + 96) = 0;
                      ++*(_QWORD *)(a1 + 8);
                      v27 = sub_56330(v26, (unsigned __int64 *)ptr);
                      v28 = (char *)ptr[0];
                      LODWORD(v2) = v27;
                      if ( !(_BYTE)v27 )
                        goto LABEL_45;
                      if ( ptr[0] )
                      {
                        ptr[1] = nullptr;
                        j__free(ptr[0]);
                      }
                      v25 = (char *)src[1];
                      if ( src[0] >= src[1] )
                        goto LABEL_8;
                    }
                    v28 = (char *)ptr[0];
LABEL_45:
                    if ( v28 )
                    {
                      ptr[1] = nullptr;
                      j__free(v28);
                    }
                    goto LABEL_14;
                  }
                }
              }
            }
            break;
          }
        }
      }
LABEL_19:
      if ( (word_2439A4 & 0x200) != 0 )
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Cannot unpack borrowed license info: wrong data in registry\n");
    }
    else if ( (word_2439A4 & 0x200) != 0 )
    {
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Cannot unpack borrowed license info: wrong version in registry\n");
    }
LABEL_14:
    v14 = (char *)v48;
    LODWORD(v2) = 0;
    goto LABEL_9;
  }
  LODWORD(v2) = 0;
LABEL_9:
  if ( v14 )
  {
    *(_QWORD *)&v49 = 0;
    j__free(v14);
  }
  return (unsigned int)v2;
}
