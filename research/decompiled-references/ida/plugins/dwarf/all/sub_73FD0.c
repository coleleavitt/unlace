unsigned __int64 __fastcall sub_73FD0(
        void *a1,
        __int64 a2,
        char *a3,
        signed __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  int *v8; // r10
  __int64 v9; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  void *v13; // r13
  int *v14; // r14
  __int64 v15; // rax
  char *v16; // r10
  __int64 v17; // r13
  void *v18; // r15
  size_t v19; // rcx
  __int64 v20; // r14
  void *v21; // r14
  void *v23; // r15
  __int64 v24; // rax
  int *v25; // rax
  signed __int64 v26; // rdi
  signed __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi
  signed __int64 v34; // r15
  size_t v35; // r14
  size_t v36; // r15
  size_t v37; // r14
  void *v38; // rax
  const void *v39; // rsi
  int *src; // [rsp+0h] [rbp-C0h]
  void *srca; // [rsp+0h] [rbp-C0h]
  size_t n; // [rsp+8h] [rbp-B8h]
  int *v43; // [rsp+10h] [rbp-B0h]
  void *v44; // [rsp+10h] [rbp-B0h]
  __m128i v45; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v46; // [rsp+30h] [rbp-90h] BYREF
  char *v47; // [rsp+40h] [rbp-80h]
  size_t v48; // [rsp+48h] [rbp-78h]
  void *v49; // [rsp+50h] [rbp-70h]
  void *dest; // [rsp+58h] [rbp-68h]
  __int64 v51; // [rsp+60h] [rbp-60h] BYREF
  __m128i v52; // [rsp+68h] [rbp-58h]
  __int64 v53; // [rsp+78h] [rbp-48h]
  unsigned __int64 v54; // [rsp+88h] [rbp-38h]

  v8 = (int *)a2;
  v9 = a4;
  v48 = a4;
  v49 = a1;
  if ( a4 > a5 )
    v9 = a5;
  v47 = a3;
  dest = a6;
  v54 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a8 + 8);
  if ( a7 >= v9 )
  {
    v28 = 0;
    v52 = 0;
    if ( v11 )
    {
      v37 = 4 * v11;
      v45.m128i_i64[0] = a2;
      v46.m128i_i64[0] = v11;
      v38 = (void *)qalloc_or_throw(4 * v11);
      v39 = *(const void **)a8;
      v28 = (__int64)v38;
      v52.m128i_i64[1] = v46.m128i_i64[0];
      memcpy(v38, v39, v37);
      v8 = (int *)v45.m128i_i64[0];
      v52.m128i_i64[0] = v46.m128i_i64[0];
    }
    v29 = *(_QWORD *)(a8 + 24);
    v51 = v28;
    v53 = v29;
    sub_736B0((int *)v49, v8, v47, v48, a5, (int *)dest, (__int64)&v51);
    if ( v28 )
      qfree(v28);
  }
  else
  {
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    if ( (__int64)v48 <= a5 )
    {
      v23 = nullptr;
      v17 = a5 / 2;
      v46.m128i_i64[0] = a2 + 4 * (a5 / 2);
      if ( v11 )
      {
        v35 = 4 * v11;
        v45 = v12;
        v23 = (void *)qalloc_or_throw(4 * v11);
        memcpy(v23, *(const void **)a8, v35);
        v8 = (int *)a2;
        v12 = _mm_load_si128(&v45);
      }
      v24 = *(_QWORD *)(a8 + 24);
      v51 = (__int64)v23;
      v45.m128i_i64[0] = (__int64)v8;
      v53 = v24;
      v52 = v12;
      v25 = sub_71AE0((int *)v49, (__int64)v8, (int *)v46.m128i_i64[0], (__int64)&v51);
      v16 = (char *)v45.m128i_i64[0];
      v14 = v25;
      if ( v23 )
      {
        qfree(v23);
        v16 = (char *)v45.m128i_i64[0];
      }
      v45.m128i_i64[0] = ((char *)v14 - (_BYTE *)v49) >> 2;
    }
    else
    {
      v13 = nullptr;
      v45.m128i_i64[0] = (__int64)v48 / 2;
      v14 = (int *)((char *)v49 + 4 * ((__int64)v48 / 2));
      if ( v11 )
      {
        v36 = 4 * v11;
        v46 = v12;
        v13 = (void *)qalloc_or_throw(4 * v11);
        memcpy(v13, *(const void **)a8, v36);
        v8 = (int *)a2;
        v12 = _mm_load_si128(&v46);
      }
      v15 = *(_QWORD *)(a8 + 24);
      v51 = (__int64)v13;
      v53 = v15;
      v43 = v8;
      v52 = v12;
      v46.m128i_i64[0] = (__int64)sub_71D50(v8, (__int64)v47, v14, (__int64)&v51);
      v16 = (char *)v43;
      if ( v13 )
      {
        qfree(v13);
        v16 = (char *)v43;
      }
      v17 = (v46.m128i_i64[0] - (__int64)v16) >> 2;
    }
    v44 = (void *)(v48 - v45.m128i_i64[0]);
    if ( (__int64)(v48 - v45.m128i_i64[0]) <= v17 || v17 > a7 )
    {
      if ( (__int64)v44 > a7 )
      {
        LODWORD(v18) = (unsigned int)sub_710A0((char *)v14, v16, (char *)v46.m128i_i64[0]);
      }
      else
      {
        LODWORD(v18) = v46.m128i_i32[0];
        if ( v44 )
        {
          v26 = v46.m128i_i64[0] - (_QWORD)v16;
          v27 = v46.m128i_i64[0] - (_QWORD)v16;
          v48 = v16 - (char *)v14;
          v18 = (void *)(v46.m128i_i64[0] - (v16 - (char *)v14));
          if ( v16 - (char *)v14 <= 4 )
          {
            if ( v16 - (char *)v14 == 4 )
            {
              *(_DWORD *)dest = *v14;
              if ( v27 <= 4 )
              {
                if ( v27 == 4 )
                  *v14 = *(_DWORD *)v16;
              }
              else
              {
                memmove(v14, v16, v27);
              }
              *(_DWORD *)(v46.m128i_i64[0] - 4) = *(_DWORD *)dest;
            }
            else if ( v26 <= 4 )
            {
              if ( v26 == 4 )
                *v14 = *(_DWORD *)v16;
            }
            else
            {
              memmove(v14, v16, v26);
            }
          }
          else
          {
            src = (int *)v16;
            memmove(dest, v14, v16 - (char *)v14);
            if ( v26 <= 4 )
            {
              if ( v26 == 4 )
                *v14 = *src;
            }
            else
            {
              memmove(v14, src, v26);
            }
            memmove(v18, dest, v48);
          }
        }
      }
    }
    else
    {
      LODWORD(v18) = (_DWORD)v14;
      if ( v17 )
      {
        v34 = v16 - (char *)v14;
        v48 = v46.m128i_i64[0] - (_QWORD)v16;
        if ( v46.m128i_i64[0] - (__int64)v16 <= 4 )
        {
          if ( v46.m128i_i64[0] - (_QWORD)v16 == 4 )
          {
            *(_DWORD *)dest = *(_DWORD *)v16;
            if ( v34 <= 4 )
            {
              if ( v34 == 4 )
                *(_DWORD *)(v46.m128i_i64[0] - 4) = *v14;
            }
            else
            {
              memmove((void *)(v46.m128i_i64[0] - v34), v14, v16 - (char *)v14);
            }
            *v14 = *(_DWORD *)dest;
          }
          else if ( v34 <= 4 )
          {
            if ( v34 == 4 )
              *(_DWORD *)(v46.m128i_i64[0] - 4) = *v14;
          }
          else
          {
            memmove((void *)(v46.m128i_i64[0] - v34), v14, v16 - (char *)v14);
          }
        }
        else
        {
          memmove(dest, v16, v46.m128i_i64[0] - (_QWORD)v16);
          if ( v34 <= 4 )
          {
            if ( v34 == 4 )
              *(_DWORD *)(v46.m128i_i64[0] - 4) = *v14;
          }
          else
          {
            memmove((void *)(v46.m128i_i64[0] - v34), v14, v34);
          }
          memmove(v14, dest, v48);
        }
        LODWORD(v18) = (_DWORD)v14 + v48;
      }
    }
    v19 = *(_QWORD *)(a8 + 8);
    v48 = 0;
    v52 = 0;
    if ( v19 )
    {
      n = v19;
      srca = (void *)(4 * v19);
      v30 = (void *)qalloc_or_throw(4 * v19);
      v31 = *(const void **)a8;
      v48 = (size_t)v30;
      v52.m128i_i64[1] = n;
      memcpy(v30, v31, (size_t)srca);
      v52.m128i_i64[0] = n;
    }
    v53 = *(_QWORD *)(a8 + 24);
    v51 = v48;
    sub_73FD0((_DWORD)v49, (_DWORD)v14, (_DWORD)v18, v45.m128i_i32[0], v17, (_DWORD)dest, a7, (__int64)&v51);
    if ( v48 )
      qfree(v48);
    v20 = *(_QWORD *)(a8 + 8);
    v49 = nullptr;
    v52 = 0;
    if ( v20 )
    {
      v48 = 4 * v20;
      v32 = (void *)qalloc_or_throw(4 * v20);
      v33 = *(const void **)a8;
      v52.m128i_i64[1] = v20;
      v49 = v32;
      memcpy(v32, v33, v48);
      v52.m128i_i64[0] = v20;
    }
    v21 = v49;
    v53 = *(_QWORD *)(a8 + 24);
    v51 = (__int64)v49;
    sub_73FD0((_DWORD)v18, v46.m128i_i32[0], (_DWORD)v47, (_DWORD)v44, a5 - v17, (_DWORD)dest, a7, (__int64)&v51);
    if ( v21 )
      qfree(v21);
  }
  return v54 - __readfsqword(0x28u);
}

