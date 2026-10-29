__int64 __fastcall sub_3C780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  _QWORD *exception; // rdi
  bool v10; // zf
  char v12; // al
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rsi
  _BYTE *v17; // r15
  char v18; // al
  __int64 *v19; // rsi
  size_t v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 i; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  __m128i v30; // xmm0
  char v32; // [rsp+0h] [rbp-1A0h]
  __int16 v34; // [rsp+1Ch] [rbp-184h] BYREF
  char v35; // [rsp+1Eh] [rbp-182h] BYREF
  char v36; // [rsp+1Fh] [rbp-181h]
  void *v37; // [rsp+20h] [rbp-180h] BYREF
  __m128i v38; // [rsp+28h] [rbp-178h] BYREF
  char v39; // [rsp+38h] [rbp-168h]
  __int64 v40; // [rsp+40h] [rbp-160h] BYREF
  __m128i v41; // [rsp+48h] [rbp-158h] BYREF
  char v42; // [rsp+58h] [rbp-148h]
  __int64 v43; // [rsp+68h] [rbp-138h]
  __int64 v44; // [rsp+70h] [rbp-130h]
  __int64 v45; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-C8h]
  __int64 v47; // [rsp+E0h] [rbp-C0h]
  __int64 v48; // [rsp+F0h] [rbp-B0h]
  __int64 v49; // [rsp+F8h] [rbp-A8h]
  __int64 v50; // [rsp+108h] [rbp-98h]
  __int64 v51; // [rsp+110h] [rbp-90h]
  char v52; // [rsp+158h] [rbp-48h]
  char v53; // [rsp+160h] [rbp-40h]
  unsigned __int64 v54; // [rsp+168h] [rbp-38h]

  v10 = *(_BYTE *)(a2 + 1984) == 0;
  v54 = __readfsqword(0x28u);
  if ( !v10 )
  {
    v12 = *(_BYTE *)(a2 + 1985);
    if ( v12 == 3 )
    {
      sub_ED80((__int64)&v40, a2 + 48, a3, a4, a5);
      if ( !v42 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
    }
    else
    {
      if ( v12 != 4 )
        goto LABEL_5;
      sub_66690(&v40, a2 + 1360, a3, a4, a5, a6);
      if ( !v42 )
        goto LABEL_5;
    }
    v14 = v40;
    v15 = _mm_loadu_si128(&v41);
    *(_BYTE *)(a2 + 1985) = -1;
    *(_QWORD *)a1 = v14;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v15;
    return a1;
  }
  *(_WORD *)(a2 + 1984) = -255;
  v16 = *(_QWORD *)(a3 + 40);
  v17 = *(_BYTE **)(a2 + 24);
  v34 = 17990;
  *(_QWORD *)(a2 + 1976) = v16;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int16 *))(*(_QWORD *)v17 + 8LL))(v17, v16, &v34) )
  {
    v18 = HIBYTE(v34);
  }
  else
  {
    v18 = v17[10];
    HIBYTE(v34) = v18;
  }
  if ( (v18 & 3) == 0 )
    goto LABEL_5;
  if ( !(unsigned __int8)sub_2FD10(*(_QWORD *)(a2 + 1976)) )
    goto LABEL_5;
  v19 = *(__int64 **)(a2 + 1976);
  sub_30660((__int64)&v40, (__int64)v19);
  v20 = a4;
  if ( !v53 )
    goto LABEL_5;
  if ( (v34 & 0x400) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 20LL) += sub_1E080(&v45, v19);
    if ( !v53 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = &off_8BF10;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_optional_access, (void (*)(void *))sub_20F70);
    }
    v20 = a4;
  }
  if ( !v47 || !v51 )
    goto LABEL_43;
  if ( v52 != 3 )
  {
    if ( v52 == 4 )
    {
      v32 = 4;
      v35 = 70;
      v36 = HIBYTE(v34);
      sub_6B060((unsigned int)&v37, a2 + 1360, (unsigned int)&v40, (unsigned int)&v35, a3, v20, a5, a6);
      goto LABEL_20;
    }
LABEL_43:
    *(_BYTE *)(a1 + 24) = 0;
LABEL_25:
    v53 = 0;
    if ( v50 )
    {
      v51 = 0;
      qfree(v50);
    }
    v21 = v48;
    if ( v48 )
    {
      v22 = v49;
      v23 = 0;
      if ( v49 )
      {
        do
        {
          v24 = v21 + 40 * v23;
          v25 = *(_QWORD *)(v24 + 16);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v24 + 24);
            if ( v26 )
            {
              for ( i = 0; i != v26; ++i )
              {
                v28 = v25 + 72 * i;
                v29 = *(_QWORD *)(v28 + 32);
                if ( v29 )
                {
                  *(_QWORD *)(v28 + 40) = 0;
                  qfree(v29);
                  v25 = *(_QWORD *)(v24 + 16);
                }
              }
            }
            *(_QWORD *)(v24 + 24) = 0;
            qfree(v25);
            v21 = v48;
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      v49 = 0;
      qfree(v21);
    }
    if ( v46 )
    {
      v47 = 0;
      qfree(v46);
    }
    if ( v43 )
    {
      v44 = 0;
      qfree(v43);
    }
    return a1;
  }
  v32 = 3;
  v35 = 70;
  v36 = HIBYTE(v34);
  sub_10510(&v37, a2 + 48, (__int64)&v40, (__int64)&v35, a3, v20, a5, a6);
LABEL_20:
  if ( v39 )
  {
    *(_QWORD *)a1 = v37;
    v30 = _mm_loadu_si128(&v38);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v30;
  }
  else
  {
    if ( (_BYTE)v37 )
      *(_BYTE *)(a2 + 1985) = v32;
    *(_BYTE *)(a1 + 24) = 0;
  }
  if ( v53 )
    goto LABEL_25;
  return a1;
}
