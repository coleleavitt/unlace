_QWORD *__fastcall sub_1AC00(int *a1, __int64 a2)
{
  int v2; // eax
  size_t v3; // rax
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i v14; // xmm0
  size_t v15; // r14
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rbp
  void *v23; // rax
  size_t v24; // rbx
  __int64 v25; // r14
  __m128i v26; // xmm0
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rbp
  void *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  size_t v38; // [rsp+10h] [rbp-68h]
  size_t v39; // [rsp+10h] [rbp-68h]
  int *i; // [rsp+18h] [rbp-60h]
  size_t n; // [rsp+20h] [rbp-58h]
  size_t na; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  _QWORD *v45; // [rsp+30h] [rbp-48h]
  __int64 v46; // [rsp+38h] [rbp-40h]

  v45 = (_QWORD *)operator new(0x40u);
  v2 = a1[8];
  v45[5] = 0;
  *((_DWORD *)v45 + 8) = v2;
  v3 = *((_QWORD *)a1 + 6);
  *((_OWORD *)v45 + 3) = 0;
  n = v3;
  if ( v3 )
  {
    v24 = v3;
    v37 = 0;
    v25 = qalloc_or_throw();
    v45[5] = v25;
    v45[7] = v24;
    while ( 1 )
    {
      v27 = 48 * v37 + v25;
      v28 = *((_QWORD *)a1 + 5) + 48 * v37;
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
      {
        v30 = qalloc_or_throw();
        *(_QWORD *)v27 = v30;
        v31 = v30;
        v32 = 0;
        *(_QWORD *)(v27 + 16) = v29;
        while ( 1 )
        {
          v33 = 32 * v32 + v31;
          v34 = *(_QWORD *)v28 + 32 * v32;
          *(_DWORD *)v33 = -2;
          *(_QWORD *)(v33 + 24) = 0;
          *(_OWORD *)(v33 + 8) = 0;
          if ( v33 != v34 )
          {
            if ( *(int *)v34 >= -1 )
            {
              *(_QWORD *)(v33 + 8) = 0;
              *(_OWORD *)(v33 + 16) = 0;
              v39 = *(_QWORD *)(v34 + 16);
              if ( v39 )
              {
                v35 = (void *)qalloc_or_throw();
                *(_QWORD *)(v33 + 8) = v35;
                *(_QWORD *)(v33 + 24) = v39;
                memcpy(v35, *(const void **)(v34 + 8), v39);
                *(_QWORD *)(v33 + 16) = v39;
              }
            }
            else
            {
              *(_QWORD *)(v33 + 8) = *(_QWORD *)(v34 + 8);
            }
            *(_DWORD *)v33 = *(_DWORD *)v34;
          }
          if ( v29 == ++v32 )
            break;
          v31 = *(_QWORD *)v27;
        }
        *(_QWORD *)(v27 + 8) = v29;
      }
      v26 = _mm_loadu_si128((const __m128i *)(v28 + 24));
      ++v37;
      *(_BYTE *)(v27 + 40) = *(_BYTE *)(v28 + 40);
      *(__m128i *)(v27 + 24) = v26;
      if ( n == v37 )
        break;
      v25 = v45[5];
    }
    v45[6] = n;
  }
  v4 = *a1;
  v45[2] = 0;
  v45[3] = 0;
  v5 = *((_QWORD *)a1 + 3);
  *(_DWORD *)v45 = v4;
  v45[1] = a2;
  if ( v5 )
    v45[3] = sub_1AC00(v5, v45);
  v6 = (__int64)v45;
  for ( i = *((int **)a1 + 2); i; i = *((int **)i + 2) )
  {
    v46 = v6;
    v6 = operator new(0x40u);
    v7 = i[8];
    *(_QWORD *)(v6 + 40) = 0;
    *(_OWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 32) = v7;
    v44 = *((_QWORD *)i + 6);
    if ( v44 )
    {
      v11 = *((_QWORD *)i + 6);
      v12 = qalloc_or_throw();
      *(_QWORD *)(v6 + 40) = v12;
      v13 = v12;
      *(_QWORD *)(v6 + 56) = v11;
      v38 = 0;
      while ( 1 )
      {
        v15 = 48 * v38 + v13;
        v16 = *((_QWORD *)i + 5) + 48 * v38;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        v36 = *(_QWORD *)(v16 + 8);
        if ( v36 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          v18 = qalloc_or_throw();
          *(_QWORD *)v15 = v18;
          v19 = v18;
          v20 = 0;
          *(_QWORD *)(v15 + 16) = v17;
          while ( 1 )
          {
            v21 = 32 * v20 + v19;
            v22 = *(_QWORD *)v16 + 32 * v20;
            *(_DWORD *)v21 = -2;
            *(_QWORD *)(v21 + 24) = 0;
            *(_OWORD *)(v21 + 8) = 0;
            if ( v21 != v22 )
            {
              if ( *(int *)v22 >= -1 )
              {
                *(_QWORD *)(v21 + 8) = 0;
                *(_OWORD *)(v21 + 16) = 0;
                na = *(_QWORD *)(v22 + 16);
                if ( na )
                {
                  v23 = (void *)qalloc_or_throw();
                  *(_QWORD *)(v21 + 8) = v23;
                  *(_QWORD *)(v21 + 24) = na;
                  memcpy(v23, *(const void **)(v22 + 8), na);
                  *(_QWORD *)(v21 + 16) = na;
                }
              }
              else
              {
                *(_QWORD *)(v21 + 8) = *(_QWORD *)(v22 + 8);
              }
              *(_DWORD *)v21 = *(_DWORD *)v22;
            }
            if ( v36 == ++v20 )
              break;
            v19 = *(_QWORD *)v15;
          }
          *(_QWORD *)(v15 + 8) = v36;
        }
        v14 = _mm_loadu_si128((const __m128i *)(v16 + 24));
        ++v38;
        *(_BYTE *)(v15 + 40) = *(_BYTE *)(v16 + 40);
        *(__m128i *)(v15 + 24) = v14;
        if ( v44 == v38 )
          break;
        v13 = *(_QWORD *)(v6 + 40);
      }
      *(_QWORD *)(v6 + 48) = v44;
    }
    v8 = *i;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)v6 = v8;
    *(_QWORD *)(v46 + 16) = v6;
    *(_QWORD *)(v6 + 8) = v46;
    v9 = *((_QWORD *)i + 3);
    if ( v9 )
      *(_QWORD *)(v6 + 24) = sub_1AC00(v9, v6);
  }
  return v45;
}

