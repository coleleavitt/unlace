__m128i *__fastcall sub_2D9200(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 i; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __m128i *v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r13
  char *v19; // r10
  size_t v20; // r11
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  char *v24; // r10
  size_t v25; // r11
  const void *v26; // r8
  void *v27; // rax
  char *v28; // rcx
  char *v29; // r13
  __int64 v30; // rax
  char *v31; // rdx
  __int64 *v32; // r14
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rbp
  char *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  const void *v40; // r8
  void *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 *v46; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v47; // [rsp+10h] [rbp-98h]
  char *v48; // [rsp+18h] [rbp-90h]
  size_t v49; // [rsp+20h] [rbp-88h]
  const void *v50; // [rsp+28h] [rbp-80h]
  _BYTE *v51; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v52[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+58h] [rbp-50h]
  int v54; // [rsp+60h] [rbp-48h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v46 = a4;
  v55 = __readfsqword(0x28u);
  v7 = a1 + 32;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = 3 * i;
        sub_2B9980((_QWORD *)(32 * v11 + v8));
        v8 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  sub_83C10((unsigned __int64 **)(a1 + 56));
  *(_QWORD *)(a1 + 24) = v7;
  v12 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  v13 = (__m128i)_mm_loadh_ps((const double *)&v46);
  *(__m128i *)v52 = v13;
  sub_2D7370(a2, v7, (__m128i *)v52, v12, nullptr, v13);
  *a3 = *(_QWORD *)v52;
  v14 = (__m128i *)qalloc();
  v15 = v14;
  if ( !v14 )
    sub_4F618();
  v14->m128i_i64[0] = 0;
  v14->m128i_i64[1] = 0;
  v16 = *(_QWORD **)(a1 + 24);
  v17 = (_QWORD *)*v16;
  v18 = 12LL * v16[1];
  v46 = (__int64 *)&v51;
  v47 = (unsigned __int64)&v17[v18];
  if ( &v17[v18] != v17 )
  {
    do
    {
      *(_DWORD *)v52 = 0;
      copy_argloc();
      v22 = v17[2];
      v53 = a2;
      *(_QWORD *)&v52[16] = v22;
      v54 = 2;
      v51 = v52;
      v23 = sub_2D9070(v15, (__int64)v52, v46, *(double *)v13.m128i_i64) + 24;
      copy_argloc();
      *(_QWORD *)(v23 + 56) = v17[2];
      if ( (_QWORD *)(v23 + 64) != v17 + 3 )
      {
        v24 = (char *)v17[4];
        if ( !v24 || (v25 = (size_t)(v24 - 1), v24 == &byte_1) )
        {
          *(_QWORD *)(v23 + 72) = 0;
        }
        else
        {
          v26 = (const void *)v17[3];
          v27 = *(void **)(v23 + 64);
          if ( *(_QWORD *)(v23 + 80) < (unsigned __int64)v24 )
          {
            v42 = v17[4];
            v43 = *(_QWORD *)(v23 + 64);
            v50 = (const void *)v17[3];
            v49 = (size_t)(v24 - 1);
            v48 = v24;
            v27 = (void *)qvector_reserve(v23 + 64, v43, v42, 1);
            v26 = v50;
            v25 = v49;
            *(_QWORD *)(v23 + 64) = v27;
            v24 = v48;
          }
          *(_QWORD *)(v23 + 72) = v24;
          v48 = v24;
          memmove(v27, v26, v25);
          v48[*(_QWORD *)(v23 + 64) - 1] = 0;
        }
      }
      copy_tinfo_t();
      if ( (_QWORD *)(v23 + 96) != v17 + 7 )
      {
        v19 = (char *)v17[8];
        if ( v19 && (v20 = (size_t)(v19 - 1), v19 != &byte_1) )
        {
          v40 = (const void *)v17[7];
          v41 = *(void **)(v23 + 96);
          if ( *(_QWORD *)(v23 + 112) < (unsigned __int64)v19 )
          {
            v44 = v17[8];
            v45 = *(_QWORD *)(v23 + 96);
            v50 = (const void *)v17[7];
            v49 = (size_t)(v19 - 1);
            v48 = v19;
            v41 = (void *)qvector_reserve(v23 + 96, v45, v44, 1);
            v40 = v50;
            v20 = v49;
            *(_QWORD *)(v23 + 96) = v41;
            v19 = v48;
          }
          *(_QWORD *)(v23 + 104) = v19;
          v48 = v19;
          memmove(v41, v40, v20);
          v48[*(_QWORD *)(v23 + 96) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(v23 + 104) = 0;
        }
      }
      v21 = v17[10];
      v17 += 12;
      *(_QWORD *)(v23 + 120) = v21;
      *(_DWORD *)(v23 + 128) = *((_DWORD *)v17 - 2);
      cleanup_argloc();
    }
    while ( (_QWORD *)v47 != v17 );
    v16 = *(_QWORD **)(a1 + 24);
  }
  v28 = (char *)v16[3];
  v48 = v28;
  if ( v28 )
  {
    if ( v16[4] )
    {
      v29 = *((char **)v28 + 1);
      if ( v28 != v29 )
      {
        while ( 1 )
        {
LABEL_25:
          while ( 1 )
          {
            *(_DWORD *)v52 = 0;
            copy_argloc();
            v30 = *((_QWORD *)v29 + 5);
            v53 = a2;
            *(_QWORD *)&v52[16] = v30;
            v54 = 1;
            v51 = v52;
            v47 = sub_2D9070(v15, (__int64)v52, v46, *(double *)v13.m128i_i64) + 24;
            copy_argloc();
            *(_QWORD *)(v47 + 56) = *((_QWORD *)v29 + 8);
            cleanup_argloc();
            if ( (*(_QWORD *)v29 & 2) == 0 )
              break;
LABEL_29:
            if ( v29 == v48 )
              goto LABEL_30;
          }
          v31 = *((char **)v29 + 2);
          if ( (*v31 & 2) == 0 )
          {
            while ( (**((_BYTE **)v31 + 1) & 2) == 0 )
              v31 = *((char **)v31 + 1);
            v29 = v31;
            goto LABEL_29;
          }
          v37 = (char *)(*(_QWORD *)v29 & 0xFFFFFFFFFFFFFFFCLL);
          v38 = *(_QWORD *)v37;
          if ( (*(_QWORD *)v37 & 2) == 0 )
          {
            while ( *((char **)v37 + 2) == v29 )
            {
              v29 = v37;
              v39 = v38 & 0xFFFFFFFFFFFFFFFCLL;
              v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v38 & 2) != 0 )
              {
                v29 = (char *)v39;
                if ( (char *)v39 != v48 )
                  goto LABEL_25;
                goto LABEL_30;
              }
              v37 = (char *)v39;
            }
          }
          v29 = v37;
          if ( v37 == v48 )
          {
LABEL_30:
            v16 = *(_QWORD **)(a1 + 24);
            break;
          }
        }
      }
    }
  }
  v32 = v46;
  v33 = v16[5];
  v51 = v52;
  v54 = 3;
  *(_QWORD *)v52 = 0;
  v53 = 0;
  *(__m128i *)&v52[8] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)(sub_2D9070(v15, (__int64)v52, v46, *(double *)v13.m128i_i64) + 144) = v33;
  cleanup_argloc();
  v34 = *(_QWORD *)(a1 + 24);
  v51 = v52;
  v35 = *(int *)(v34 + 48);
  v54 = 4;
  *(_QWORD *)v52 = 0;
  v53 = 0;
  *(__m128i *)&v52[8] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)(sub_2D9070(v15, (__int64)v52, v32, *(double *)v13.m128i_i64) + 144) = v35;
  cleanup_argloc();
  return v15;
}

