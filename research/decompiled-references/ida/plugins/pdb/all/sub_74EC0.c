__int64 __fastcall sub_74EC0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 *v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  const void *v21; // r13
  size_t v22; // rax
  size_t v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 *v31; // r8
  __int64 *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v43; // rdx
  void *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rax
  __int64 *v47; // [rsp+0h] [rbp-58h]
  __int64 *v48; // [rsp+0h] [rbp-58h]
  __int64 *v49; // [rsp+0h] [rbp-58h]
  __int64 *v50; // [rsp+0h] [rbp-58h]
  __int64 *v51; // [rsp+0h] [rbp-58h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int64)a2 < a1[19] )
  {
    v4 = *(_DWORD *)(a1[18] + 120LL * a2 + 112);
    if ( v4 == -1 )
      return v4;
    v5 = a1[70];
    v6 = (__int64 *)a1[69];
    v8 = (__int64)&v6[7 * v5];
    if ( v6 != (__int64 *)v8 )
    {
      while ( *((_DWORD *)v6 + 12) != a3 )
      {
        v6 += 7;
        if ( (__int64 *)v8 == v6 )
          goto LABEL_15;
      }
      if ( (__int64 *)v8 != v6 )
      {
        v9 = v6[1];
        v10 = (unsigned int *)(*v6 + 4 * v9);
        if ( (unsigned int *)*v6 == v10 )
          goto LABEL_30;
        v11 = (unsigned int *)*v6;
        while ( v4 != *v11 )
        {
          if ( v10 == ++v11 )
            goto LABEL_30;
        }
        if ( v10 == v11 )
        {
LABEL_30:
          v24 = v9 + 1;
          if ( v6[2] < v24 )
          {
            v25 = qvector_reserve(v6, *v6, v24, 4);
            v26 = v6[1];
            *v6 = v25;
            v10 = (unsigned int *)(v25 + 4 * v26);
          }
          *v10 = v4;
          ++v6[1];
        }
        return *((unsigned int *)v6 + 13);
      }
    }
LABEL_15:
    if ( a1[13] )
    {
      v13 = a1[11];
      v14 = *(_QWORD **)(a1[10] + 8 * (a3 % v13));
      if ( v14 )
      {
        v15 = (_QWORD *)*v14;
        if ( *(_DWORD *)(*v14 + 8LL) != a3 )
        {
          while ( 1 )
          {
            v16 = (_QWORD *)*v15;
            if ( !*v15 )
              break;
            v14 = v15;
            if ( a3 % v13 != *((unsigned int *)v16 + 2) % v13 )
              break;
            v15 = (_QWORD *)*v15;
            if ( *((_DWORD *)v16 + 2) == a3 )
              goto LABEL_21;
          }
          return (unsigned int)-1;
        }
LABEL_21:
        if ( v14 )
        {
          v17 = (__int64 *)*v14;
          if ( v17 )
          {
LABEL_23:
            v18 = a1[71];
            if ( v18 < v5 + 1 )
            {
              v48 = v17;
              v28 = qvector_reserve(a1 + 69, 0, v5 + 1, 56);
              v29 = a1[70];
              v30 = a1[71];
              a1[71] = v18;
              v31 = v48;
              v32 = (__int64 *)a1[69];
              v54 = v28;
              v33 = v29 - 1;
              v55 = v30;
              if ( v33 >= 0 )
              {
                v34 = v28;
                do
                {
                  v35 = *v32;
                  v36 = _mm_loadu_si128((const __m128i *)(v32 + 1));
                  *v32 = 0;
                  *(_OWORD *)(v32 + 1) = 0;
                  *(_QWORD *)v34 = v35;
                  *(__m128i *)(v34 + 8) = v36;
                  v37 = v32[3];
                  v38 = _mm_loadu_si128((const __m128i *)v32 + 2);
                  v32[3] = 0;
                  *(_QWORD *)(v34 + 24) = v37;
                  *(__m128i *)(v34 + 32) = v38;
                  v39 = v32[6];
                  v32[5] = 0;
                  *(_QWORD *)(v34 + 48) = v39;
                  v40 = v32[3];
                  if ( v40 )
                  {
                    v32[4] = 0;
                    v52 = v33;
                    v49 = v31;
                    qfree(v40);
                    v33 = v52;
                    v31 = v49;
                  }
                  v41 = *v32;
                  if ( *v32 )
                  {
                    v32[1] = 0;
                    v53 = v33;
                    v50 = v31;
                    qfree(v41);
                    v33 = v53;
                    v31 = v50;
                  }
                  v32 += 7;
                  v34 += 56;
                }
                while ( v33-- != 0 );
                v32 = (__int64 *)a1[69];
              }
              v51 = v31;
              qfree(v32);
              v43 = a1[70];
              v17 = v51;
              a1[71] = v55;
              a1[69] = v54;
              v8 = v54 + 56 * v43;
            }
            *(_QWORD *)v8 = 0;
            *(_OWORD *)(v8 + 8) = 0;
            *(_QWORD *)(v8 + 24) = 0;
            *(_OWORD *)(v8 + 32) = 0;
            ++a1[70];
            v19 = *(_QWORD *)(v8 + 8);
            v20 = *(_QWORD *)v8;
            if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v19 + 1) )
            {
              v47 = v17;
              v27 = qvector_reserve(v8, v20, v19 + 1, 4);
              v17 = v47;
              *(_QWORD *)v8 = v27;
              v20 = v27;
              v19 = *(_QWORD *)(v8 + 8);
            }
            *(_DWORD *)(v20 + 4 * v19) = v4;
            ++*(_QWORD *)(v8 + 8);
            v21 = (const void *)v17[2];
            if ( v21 && (v22 = strlen((const char *)v17[2]), (v23 = v22) != 0) )
            {
              v44 = *(void **)(v8 + 24);
              v45 = v22 + 1;
              if ( *(_QWORD *)(v8 + 40) < v22 + 1 )
              {
                v46 = qvector_reserve(v8 + 24, *(_QWORD *)(v8 + 24), v45, 1);
                *(_QWORD *)(v8 + 24) = v46;
                v44 = (void *)v46;
              }
              *(_QWORD *)(v8 + 32) = v45;
              memmove(v44, v21, v23);
              *(_BYTE *)(*(_QWORD *)(v8 + 24) + v23) = 0;
            }
            else
            {
              *(_QWORD *)(v8 + 32) = 0;
            }
            *(_DWORD *)(v8 + 48) = a3;
            v4 = v5;
            *(_DWORD *)(v8 + 52) = v5;
            return v4;
          }
        }
      }
    }
    else
    {
      v17 = (__int64 *)a1[12];
      if ( v17 )
      {
        while ( *((_DWORD *)v17 + 2) != a3 )
        {
          v17 = (__int64 *)*v17;
          if ( !v17 )
            return (unsigned int)-1;
        }
        goto LABEL_23;
      }
    }
    return (unsigned int)-1;
  }
  if ( under_debugger )
    BUG();
  interr(30577);
  return sub_75300();
}

