__int64 __fastcall sub_35C20(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // r12
  _QWORD *v11; // rax
  const char *(__fastcall *v12)(__int64); // rdx
  const char *(__fastcall *v13)(__int64); // rax
  const char *v14; // r12
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r13
  const char *v18; // r14
  unsigned int v19; // r12d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rsi
  __m128i v34; // xmm0
  const char *errdesc; // rax
  const char *v37; // rbx
  size_t v38; // rax
  size_t v39; // r12
  void *v40; // rdi
  size_t v41; // r13
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  void *v48; // [rsp+20h] [rbp-78h] BYREF
  __int128 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+40h] [rbp-58h]
  __int128 v51; // [rsp+48h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v8 = *a2;
  if ( *a2 )
  {
    v9 = a2[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (_QWORD *)(v8 + 32 * i);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v12 = sub_304B0;
  v13 = *(const char *(__fastcall **)(__int64))(*a1 + 16LL);
  if ( v13 == sub_304B0 )
  {
    v14 = nptr;
    if ( a1[3] )
    {
      v14 = (const char *)a1[2];
      if ( (debug & 0x40000) == 0 )
        goto LABEL_11;
      goto LABEL_23;
    }
  }
  else
  {
    v14 = (const char *)((__int64 (__fastcall *)(_QWORD *, __int64 *))v13)(a1, a3);
  }
  if ( (debug & 0x40000) == 0 )
    goto LABEL_11;
LABEL_23:
  sub_111A0((__int64)"DEXSIP: dex_source_file_t::read_file(%s)\n", v14);
LABEL_11:
  v48 = nullptr;
  v49 = 0;
  if ( v14 )
  {
    v15 = strlen(v14);
    v16 = v15 + 1;
    v17 = v15;
    v48 = (void *)qvector_reserve();
    *(_QWORD *)&v49 = v16;
    memmove(v48, v14, v17);
    *((_BYTE *)v48 + v17) = 0;
  }
  ((void (__fastcall *)(__int64, void **, const char *(__fastcall *)(__int64), __int64, __int64, __int64))callui)(
    1121,
    &v48,
    v12,
    a4,
    a5,
    a6);
  v18 = nptr;
  if ( (_QWORD)v49 )
    v18 = (const char *)v48;
  v19 = qfileexist();
  if ( !(_BYTE)v19 )
  {
    if ( a3 )
      sub_13B20(a3);
LABEL_18:
    v19 = 0;
    goto LABEL_19;
  }
  v43 = fopenRT();
  if ( !v43 )
  {
    if ( a3 )
    {
      errdesc = (const char *)get_errdesc();
      v37 = errdesc;
      if ( errdesc && (v38 = strlen(errdesc), (v39 = v38) != 0) )
      {
        v40 = (void *)*a3;
        v41 = v38 + 1;
        if ( a3[2] < v38 + 1 )
        {
          v42 = qvector_reserve();
          *a3 = v42;
          v40 = (void *)v42;
        }
        a3[1] = v41;
        memmove(v40, v37, v39);
        *(_BYTE *)(*a3 + v39) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    goto LABEL_18;
  }
  callui(112, v18, v21, v22, v23, v24, v43, v44, v45, v46);
  v50 = 0;
  v51 = 0;
  while ( qgetline() >= 0 )
  {
    v27 = a2[1];
    v28 = a2[2];
    if ( v28 >= v27 + 1 )
    {
      v25 = *a2;
    }
    else
    {
      v25 = qvector_reserve();
      v29 = a2[2];
      v30 = *a2;
      a2[2] = v28;
      v47 = v29;
      v31 = a2[1] - 1;
      if ( v31 >= 0 )
      {
        v32 = v25;
        do
        {
          v33 = *(_QWORD *)v30;
          v34 = _mm_loadu_si128((const __m128i *)(v30 + 8));
          *(_QWORD *)v30 = 0;
          *(_QWORD *)(v30 + 16) = 0;
          *(_QWORD *)v32 = v33;
          *(__m128i *)(v32 + 8) = v34;
          *(_BYTE *)(v32 + 24) = *(_BYTE *)(v30 + 24);
          *(_DWORD *)(v32 + 28) = *(_DWORD *)(v30 + 28);
          if ( *(_QWORD *)v30 )
          {
            *(_QWORD *)(v30 + 8) = 0;
            qfree();
          }
          v30 += 32;
          v32 += 32;
        }
        while ( v31-- != 0 );
      }
      qfree();
      *a2 = v25;
      a2[2] = v47;
      v27 = a2[1];
    }
    v26 = 32 * v27 + v25;
    *(_QWORD *)v26 = 0;
    *(_QWORD *)(v26 + 24) = 0xFFFFFFFF00000001LL;
    *(_OWORD *)(v26 + 8) = 0;
    ++a2[1];
    if ( *(_QWORD *)v26 )
    {
      *(_QWORD *)(v26 + 8) = 0;
      qfree();
      *(_QWORD *)v26 = 0;
      *(_QWORD *)(v26 + 16) = 0;
    }
    replace_tabs();
  }
  qfclose();
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
LABEL_19:
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return v19;
}

