__int64 __fastcall sub_42780(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 i; // r12
  __int64 *v9; // rax
  __int64 v10; // rdi
  const char *(__fastcall *v11)(__int64, __int64); // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // r13
  const char *v16; // r14
  unsigned int v17; // r12d
  __int64 j; // rax
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rdi
  const char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rdi
  const char *errdesc; // rax
  const char *v35; // rbx
  size_t v36; // rax
  size_t v37; // r12
  void *v38; // rdi
  size_t v39; // r13
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-98h]
  unsigned int v42; // [rsp+14h] [rbp-84h]
  __int64 v43; // [rsp+18h] [rbp-80h]
  void *v44; // [rsp+20h] [rbp-78h] BYREF
  __int128 v45; // [rsp+28h] [rbp-70h]
  const char *v46; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v48 = __readfsqword(0x28u);
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
  v11 = *(const char *(__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v11 == sub_24160 )
  {
    if ( *(_QWORD *)(a1 + 40) > 1u
      || ((*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 72LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
            a1 + 32,
            a3,
            *(unsigned int *)(a1 + 24)),
          *(_QWORD *)(a1 + 40)) )
    {
      v12 = *(const char **)(a1 + 32);
    }
    else
    {
      v12 = src;
    }
  }
  else
  {
    v12 = v11(a1, (__int64)a3);
  }
  v44 = nullptr;
  v45 = 0;
  if ( v12 )
  {
    v13 = strlen(v12);
    v14 = v13 + 1;
    v15 = v13;
    v44 = (void *)qvector_reserve(&v44, 0, v13 + 1, 1);
    *(_QWORD *)&v45 = v14;
    memmove(v44, v12, v15);
    *((_BYTE *)v44 + v15) = 0;
  }
  callui(1121);
  v16 = src;
  if ( (_QWORD)v45 )
    v16 = (const char *)v44;
  v17 = qfileexist(v16, &v44);
  if ( !(_BYTE)v17 )
  {
    if ( a3 )
      sub_37FD0(a3, (__int64)"source file not found: %s", v16);
LABEL_18:
    v17 = 0;
    goto LABEL_19;
  }
  v41 = fopenRT(v16);
  if ( !v41 )
  {
    if ( a3 )
    {
      errdesc = (const char *)get_errdesc(v16, 0xFFFFFFFFLL);
      v35 = errdesc;
      if ( errdesc && (v36 = strlen(errdesc), (v37 = v36) != 0) )
      {
        v38 = (void *)*a3;
        v39 = v36 + 1;
        if ( a3[2] < v36 + 1 )
        {
          v40 = qvector_reserve(a3, *a3, v36 + 1, 1);
          *a3 = v40;
          v38 = (void *)v40;
        }
        a3[1] = v39;
        memmove(v38, v35, v37);
        *(_BYTE *)(*a3 + v37) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    goto LABEL_18;
  }
  v42 = callui(112);
  v46 = nullptr;
  v47 = 0;
  for ( j = qgetline(&v46, v41); j >= 0; j = qgetline(&v46, v41) )
  {
    v24 = a2[1];
    v25 = a2[2];
    if ( v25 >= v24 + 1 )
    {
      v20 = *a2;
    }
    else
    {
      v20 = qvector_reserve(a2, 0, v24 + 1, 32);
      v26 = a2[2];
      v27 = *a2;
      a2[2] = v25;
      v43 = v26;
      v28 = a2[1] - 1;
      if ( v28 >= 0 )
      {
        v29 = v20;
        do
        {
          v30 = *(_QWORD *)v27;
          v31 = _mm_loadu_si128((const __m128i *)(v27 + 8));
          *(_QWORD *)v27 = 0;
          *(_QWORD *)(v27 + 16) = 0;
          *(_QWORD *)v29 = v30;
          *(__m128i *)(v29 + 8) = v31;
          *(_BYTE *)(v29 + 24) = *(_BYTE *)(v27 + 24);
          *(_DWORD *)(v29 + 28) = *(_DWORD *)(v27 + 28);
          v32 = *(_QWORD *)v27;
          if ( *(_QWORD *)v27 )
          {
            *(_QWORD *)(v27 + 8) = 0;
            qfree(v32);
          }
          v27 += 32;
          v29 += 32;
        }
        while ( v28-- != 0 );
        v27 = *a2;
      }
      qfree(v27);
      *a2 = v20;
      a2[2] = v43;
      v24 = a2[1];
    }
    v21 = 32 * v24 + v20;
    *(_QWORD *)v21 = 0;
    *(_QWORD *)(v21 + 24) = 0xFFFFFFFF00000001LL;
    *(_OWORD *)(v21 + 8) = 0;
    ++a2[1];
    v22 = *(_QWORD *)v21;
    if ( *(_QWORD *)v21 )
    {
      *(_QWORD *)(v21 + 8) = 0;
      qfree(v22);
      *(_QWORD *)v21 = 0;
      *(_QWORD *)(v21 + 16) = 0;
    }
    v23 = src;
    if ( (_QWORD)v47 )
      v23 = v46;
    replace_tabs(v21, v23, v42);
  }
  qfclose(v41);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
LABEL_19:
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  return v17;
}

