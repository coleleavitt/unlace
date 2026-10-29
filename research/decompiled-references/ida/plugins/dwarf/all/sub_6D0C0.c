__int64 __fastcall sub_6D0C0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 i; // r12
  __int64 *v9; // rax
  __int64 v10; // rdi
  const char *(__fastcall *v11)(__int64); // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // r13
  char *v16; // rax
  const char *v17; // r14
  unsigned int v18; // r12d
  __int64 j; // rax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rdi
  const char *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // rdi
  const char *errdesc; // rax
  const char *v36; // rbx
  size_t v37; // rax
  size_t v38; // r12
  void *v39; // rdi
  size_t v40; // r13
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-98h]
  unsigned int v43; // [rsp+14h] [rbp-84h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  const char *v45; // [rsp+20h] [rbp-78h] BYREF
  __int128 v46; // [rsp+28h] [rbp-70h]
  const char *v47; // [rsp+40h] [rbp-58h] BYREF
  __int128 v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 )
  {
    v7 = a2[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 32 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v6);
    *a2 = 0;
    a2[2] = 0;
  }
  v11 = *(const char *(__fastcall **)(__int64))(*a1 + 16LL);
  if ( v11 != sub_672C0 )
  {
    v12 = (const char *)((__int64 (__fastcall *)(_QWORD *, __int64 *))v11)(a1, a3);
LABEL_10:
    if ( v12 )
      goto LABEL_11;
    return 0;
  }
  v12 = src;
  if ( !a1[5] )
    goto LABEL_10;
  v12 = (const char *)a1[4];
  if ( !v12 )
    return 0;
LABEL_11:
  v45 = nullptr;
  v46 = 0;
  v13 = strlen(v12);
  v14 = v13 + 1;
  v15 = v13;
  v16 = (char *)qvector_reserve(&v45, 0, v13 + 1, 1);
  *(_QWORD *)&v46 = v14;
  v45 = v16;
  memmove(v16, v12, v15);
  v45[v15] = 0;
  callui(1121, &v45);
  v17 = src;
  if ( (_QWORD)v46 )
    v17 = v45;
  v18 = qfileexist(v17);
  if ( (_BYTE)v18 )
  {
    v42 = fopenRT(v17);
    if ( v42 )
    {
      v43 = callui(112, v17);
      v47 = nullptr;
      v48 = 0;
      for ( j = qgetline(&v47, v42); j >= 0; j = qgetline(&v47, v42) )
      {
        v25 = a2[1];
        v26 = a2[2];
        if ( v26 >= v25 + 1 )
        {
          v21 = *a2;
        }
        else
        {
          v21 = qvector_reserve(a2, 0, v25 + 1, 32);
          v27 = a2[2];
          v28 = *a2;
          a2[2] = v26;
          v44 = v27;
          v29 = a2[1] - 1;
          if ( v29 >= 0 )
          {
            v30 = v21;
            do
            {
              v31 = *(_QWORD *)v28;
              v32 = _mm_loadu_si128((const __m128i *)(v28 + 8));
              *(_QWORD *)v28 = 0;
              *(_QWORD *)(v28 + 16) = 0;
              *(_QWORD *)v30 = v31;
              *(__m128i *)(v30 + 8) = v32;
              *(_BYTE *)(v30 + 24) = *(_BYTE *)(v28 + 24);
              *(_DWORD *)(v30 + 28) = *(_DWORD *)(v28 + 28);
              v33 = *(_QWORD *)v28;
              if ( *(_QWORD *)v28 )
              {
                *(_QWORD *)(v28 + 8) = 0;
                qfree(v33);
              }
              v28 += 32;
              v30 += 32;
            }
            while ( v29-- != 0 );
            v28 = *a2;
          }
          qfree(v28);
          *a2 = v21;
          a2[2] = v44;
          v25 = a2[1];
        }
        v22 = 32 * v25 + v21;
        *(_QWORD *)v22 = 0;
        *(_QWORD *)(v22 + 24) = 0xFFFFFFFF00000001LL;
        *(_OWORD *)(v22 + 8) = 0;
        ++a2[1];
        v23 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 )
        {
          *(_QWORD *)(v22 + 8) = 0;
          qfree(v23);
          *(_QWORD *)v22 = 0;
          *(_QWORD *)(v22 + 16) = 0;
        }
        v24 = src;
        if ( (_QWORD)v48 )
          v24 = v47;
        replace_tabs(v22, v24, v43);
      }
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      qfclose(v42);
      goto LABEL_17;
    }
    if ( a3 )
    {
      errdesc = (const char *)get_errdesc(v17, 0xFFFFFFFFLL);
      v36 = errdesc;
      if ( errdesc && (v37 = strlen(errdesc), (v38 = v37) != 0) )
      {
        v39 = (void *)*a3;
        v40 = v37 + 1;
        if ( a3[2] < v37 + 1 )
        {
          v41 = qvector_reserve(a3, *a3, v37 + 1, 1);
          *a3 = v41;
          v39 = (void *)v41;
        }
        a3[1] = v40;
        memmove(v39, v36, v38);
        *(_BYTE *)(*a3 + v38) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
  }
  else if ( a3 )
  {
    sub_20160(a3, (__int64)"source file not found: %s", v17);
  }
  v18 = 0;
LABEL_17:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v18;
}

