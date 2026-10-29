unsigned __int64 __fastcall sub_2A270(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v5; // rax
  char *v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdx
  size_t v15; // r12
  __int64 v16; // rdx
  char *v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  char *v21; // rax
  int v22; // r9d
  size_t v23; // rax
  size_t v24; // r14
  char *v25; // rdi
  size_t v26; // r9
  char *v27; // r14
  size_t v28; // r10
  size_t v29; // r9
  char *v30; // r14
  size_t v31; // r10
  size_t v32; // rbp
  void *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rbx
  char *v41; // rax
  void *v42; // rdi
  void *v44; // rdi
  size_t v45; // r14
  void *v46; // rdi
  size_t v47; // r14
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-D0h]
  char *v50; // [rsp+18h] [rbp-B8h]
  char *v51; // [rsp+18h] [rbp-B8h]
  int v52; // [rsp+18h] [rbp-B8h]
  const char *v53; // [rsp+18h] [rbp-B8h]
  char *v54; // [rsp+18h] [rbp-B8h]
  char *v55; // [rsp+18h] [rbp-B8h]
  size_t v56; // [rsp+20h] [rbp-B0h]
  size_t na; // [rsp+28h] [rbp-A8h]
  int n; // [rsp+28h] [rbp-A8h]
  void *v59; // [rsp+38h] [rbp-98h] BYREF
  __int128 v60; // [rsp+40h] [rbp-90h]
  char *s1; // [rsp+58h] [rbp-78h] BYREF
  __int128 v62; // [rsp+60h] [rbp-70h]
  void *ptr; // [rsp+78h] [rbp-58h] BYREF
  size_t v64[2]; // [rsp+80h] [rbp-50h]
  unsigned __int64 v65; // [rsp+90h] [rbp-40h]

  v3 = 0;
  v65 = __readfsqword(0x28u);
  v5 = a2[1];
  v59 = nullptr;
  v49 = v5;
  v60 = 0;
  if ( v5 )
  {
    do
    {
      v13 = 0;
      v14 = *a2 + 24 * v3;
      v15 = *(_QWORD *)(v14 + 8);
      if ( v15 )
      {
        v51 = (char *)(*a2 + 24 * v3);
        v13 = sub_198760(*(_QWORD *)(v14 + 8));
        memcpy((void *)v13, *(const void **)v51, v15);
        v21 = strchr((const char *)v13, 58);
        if ( v21 )
        {
          v22 = (_DWORD)v21 - v13;
          v52 = v22;
          v23 = (int)v21 - (int)v13;
          if ( v22 != -1 )
          {
            s1 = nullptr;
            v56 = v15 - 1;
            if ( v22 > v15 - 1 )
              v23 = v15 - 1;
            v62 = 0;
            if ( v23 )
            {
              v24 = v23 + 1;
              na = v23;
              s1 = (char *)sub_1987B0(&s1, 0, v23 + 1, 1);
              *(_QWORD *)&v62 = v24;
              memmove(s1, (const void *)v13, na);
              s1[na] = 0;
              v25 = s1;
              if ( (_QWORD)v62 )
              {
                n = v52;
                v53 = s1;
                if ( !strcmp(s1, "equal") )
                {
                  ptr = nullptr;
                  v29 = n + 1;
                  *(_OWORD *)v64 = 0;
                  if ( v29 > v56 )
                    v29 = v15 - 1;
                  v30 = nullptr;
                  v31 = v56 - v29;
                  v15 = v56 - v29;
                  if ( v56 != v29 )
                  {
                    v44 = nullptr;
                    v45 = v31 + 1;
                    if ( v31 != -1 )
                    {
                      v54 = (char *)v29;
                      ptr = (void *)sub_1987B0(&ptr, 0, v31 + 1, 1);
                      v29 = (size_t)v54;
                      v44 = ptr;
                    }
                    v64[0] = v45;
                    memmove(v44, (const void *)(v13 + v29), v15);
                    *((_BYTE *)ptr + v15) = 0;
                    v30 = (char *)ptr;
                    v15 = v64[0];
                  }
                  ptr = nullptr;
                  *(_OWORD *)v64 = 0;
                  if ( v13 )
                  {
                    j__free((void *)v13);
                    if ( ptr )
                    {
                      v64[0] = 0;
                      j__free(ptr);
                    }
                  }
                  v13 = (__int64)v30;
                  v25 = s1;
                }
                else
                {
                  v25 = (char *)v53;
                  if ( !strcmp(v53, "like") )
                  {
                    ptr = nullptr;
                    *(_OWORD *)v64 = 0;
                    v26 = n + 1;
                    if ( v26 > v56 )
                      v26 = v15 - 1;
                    v27 = nullptr;
                    v28 = v56 - v26;
                    v15 = v56 - v26;
                    if ( v56 != v26 )
                    {
                      v46 = nullptr;
                      v47 = v28 + 1;
                      if ( v28 != -1 )
                      {
                        v55 = (char *)v26;
                        ptr = (void *)sub_1987B0(&ptr, 0, v28 + 1, 1);
                        v26 = (size_t)v55;
                        v46 = ptr;
                      }
                      v64[0] = v47;
                      memmove(v46, (const void *)(v13 + v26), v15);
                      *((_BYTE *)ptr + v15) = 0;
                      v27 = (char *)ptr;
                      v15 = v64[0];
                    }
                    ptr = nullptr;
                    *(_OWORD *)v64 = 0;
                    if ( v13 )
                    {
                      j__free((void *)v13);
                      if ( ptr )
                      {
                        v64[0] = 0;
                        j__free(ptr);
                      }
                    }
                    v25 = s1;
                    v13 = (__int64)v27;
                  }
                }
              }
              if ( v25 )
              {
                *(_QWORD *)&v62 = 0;
                j__free(v25);
              }
            }
          }
        }
      }
      v16 = v60;
      v17 = (char *)v59;
      if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v59 = (void *)sub_1987B0(&v59, v59, v60 + 1, 24);
        v16 = v60;
        v17 = (char *)v59;
      }
      v6 = &v17[24 * v16];
      *(_QWORD *)v6 = 0;
      *(_OWORD *)(v6 + 8) = 0;
      *(_QWORD *)&v60 = v60 + 1;
      sub_299F0((char **)v6);
      v7 = a1[19];
      v8 = 2;
      if ( v7 )
        v8 = v7-- + 1;
      v9 = a1[18];
      if ( a1[20] < v8 )
      {
        v50 = (char *)v8;
        v18 = sub_1987B0(a1 + 18, v9, v8, 1);
        a1[18] = v18;
        v8 = (unsigned __int64)v50;
        v9 = v18;
      }
      a1[19] = v8;
      *(_BYTE *)(v9 + v7) = 115;
      *(_BYTE *)(a1[18] + v7 + 1) = 0;
      v10 = a1[22];
      v11 = a1[21];
      if ( a1[23] < (unsigned __int64)(v10 + 1) )
      {
        v20 = sub_1987B0(a1 + 21, v11, v10 + 1, 32);
        a1[21] = v20;
        v11 = v20;
        v10 = a1[22];
      }
      v12 = v11 + 32 * v10;
      *(_BYTE *)v12 = 2;
      *(_QWORD *)(v12 + 24) = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a1[22];
      sub_176520(v12);
      *(_BYTE *)v12 = 7;
      *(_QWORD *)(v12 + 8) = 0;
      *(_OWORD *)(v12 + 16) = 0;
      if ( v15 )
      {
        v19 = (void *)sub_198760(v15);
        *(_QWORD *)(v12 + 8) = v19;
        *(_QWORD *)(v12 + 24) = v15;
        memcpy(v19, (const void *)v13, v15);
        *(_QWORD *)(v12 + 16) = v15;
      }
      if ( v13 )
        j__free((void *)v13);
      ++v3;
    }
    while ( v49 != v3 );
  }
  ptr = nullptr;
  *(_OWORD *)v64 = 0;
  sub_289B0((__int64 *)&ptr, &v59);
  v32 = v64[0];
  v33 = nullptr;
  if ( v64[0] )
  {
    v33 = (void *)sub_198760(v64[0]);
    memcpy(v33, ptr, v32);
  }
  v34 = a1[16];
  v35 = a1[15];
  if ( a1[17] < (unsigned __int64)(v34 + 1) )
  {
    v48 = sub_1987B0(a1 + 15, v35, v34 + 1, 24);
    a1[15] = v48;
    v34 = a1[16];
    v35 = v48;
  }
  v36 = v35 + 24 * v34;
  *(_QWORD *)v36 = v33;
  *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
  v37 = ptr;
  ++a1[16];
  if ( v37 )
  {
    v64[0] = 0;
    j__free(v37);
  }
  v38 = (char *)v59;
  if ( v59 )
  {
    v39 = v60;
    if ( (_QWORD)v60 )
    {
      v40 = 0;
      do
      {
        v41 = &v38[24 * v40];
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          j__free(v42);
          v38 = (char *)v59;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v60 = 0;
    j__free(v38);
  }
  return v65 - __readfsqword(0x28u);
}
