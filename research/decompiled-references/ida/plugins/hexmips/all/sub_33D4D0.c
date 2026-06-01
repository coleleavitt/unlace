unsigned __int64 __fastcall sub_33D4D0(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // r13
  __int64 v3; // rdi
  __int64 first_seg; // r12
  char *v5; // r15
  char **v6; // rbp
  char **v7; // rbx
  char *v8; // r15
  char *v9; // rbx
  char *v10; // rbp
  char *v11; // rax
  char **v12; // r12
  __int64 j; // rbx
  __int64 v14; // r13
  const char **v15; // r15
  char **v16; // rbx
  __int64 v17; // r12
  char v18; // al
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rsi
  char *v24; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // rsi
  int v30; // eax
  const __m128i *v31; // rbp
  const char *v32; // r15
  __int32 v33; // r13d
  const __m128i *i; // rbx
  const char *v35; // rsi
  __m128i *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  char v41; // al
  char *v42; // rsi
  char *v43; // rsi
  __m128i v44; // [rsp+0h] [rbp-A8h] BYREF
  char *v45; // [rsp+10h] [rbp-98h]
  char **p_s; // [rsp+18h] [rbp-90h]
  __int64 v47; // [rsp+20h] [rbp-88h]
  char *v48; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __int128 v50; // [rsp+38h] [rbp-70h]
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  __int128 v52; // [rsp+58h] [rbp-50h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v1 = a1 + 1160;
  v53 = __readfsqword(0x28u);
  v2 = (char *)a1;
  *(_DWORD *)(a1 + 1416) &= ~0x20u;
  v3 = *(_QWORD *)(a1 + 1160);
  v47 = v1;
  if ( v3 )
  {
    *((_QWORD *)v2 + 146) = 0;
    qfree();
    *((_QWORD *)v2 + 145) = 0;
    *((_QWORD *)v2 + 147) = 0;
  }
  if ( *((_QWORD *)v2 + 148) )
  {
    *((_QWORD *)v2 + 149) = 0;
    qfree();
    *((_QWORD *)v2 + 148) = 0;
    *((_QWORD *)v2 + 150) = 0;
  }
  if ( *((_QWORD *)v2 + 151) )
  {
    *((_QWORD *)v2 + 152) = 0;
    qfree();
    *((_QWORD *)v2 + 151) = 0;
    *((_QWORD *)v2 + 153) = 0;
  }
  if ( *((_QWORD *)v2 + 154) )
  {
    *((_QWORD *)v2 + 155) = 0;
    qfree();
    *((_QWORD *)v2 + 154) = 0;
    *((_QWORD *)v2 + 156) = 0;
  }
  if ( *((_QWORD *)v2 + 157) )
  {
    *((_QWORD *)v2 + 158) = 0;
    qfree();
    *((_QWORD *)v2 + 157) = 0;
    *((_QWORD *)v2 + 159) = 0;
  }
  if ( *((_QWORD *)v2 + 160) )
  {
    *((_QWORD *)v2 + 161) = 0;
    qfree();
    *((_QWORD *)v2 + 160) = 0;
    *((_QWORD *)v2 + 162) = 0;
  }
  first_seg = get_first_seg();
  p_s = &s;
  while ( first_seg )
  {
    s = nullptr;
    v50 = 0;
    if ( get_segm_name() <= 0 && s )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
      s = nullptr;
      *((_QWORD *)&v50 + 1) = 0;
    }
    v5 = (char *)::s1;
    if ( (_QWORD)v50 )
      v5 = s;
    v6 = off_4C6160;
    v7 = off_4C6160;
    while ( strcasecmp(v5, *v7) )
    {
      if ( ++v7 == &off_4C6180 )
      {
        s1 = nullptr;
        v52 = 0;
        get_segm_class();
        v8 = s1;
        v9 = (char *)::s1;
        if ( (_QWORD)v52 )
          v9 = s1;
        while ( strcasecmp(v9, *v6) )
        {
          if ( &off_4C6180 == ++v6 )
          {
            if ( v8 )
            {
              *(_QWORD *)&v52 = 0;
              qfree();
            }
            goto LABEL_26;
          }
        }
        if ( v8 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
        break;
      }
    }
    v26 = *((_QWORD *)v2 + 146);
    v27 = _mm_loadl_epi64((const __m128i *)first_seg);
    v28 = _mm_loadl_epi64((const __m128i *)(first_seg + 8));
    v29 = *((_QWORD *)v2 + 145);
    if ( *((_QWORD *)v2 + 147) < (unsigned __int64)(v26 + 1) )
    {
      v44.m128i_i64[1] = v28.m128i_i64[0];
      v44.m128i_i64[0] = v27.m128i_i64[0];
      v39 = qvector_reserve();
      *((_QWORD *)v2 + 145) = v39;
      v26 = *((_QWORD *)v2 + 146);
      v29 = v39;
      v28 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
      v27 = _mm_loadl_epi64(&v44);
    }
    *(__m128i *)(v29 + 16 * v26) = _mm_unpacklo_epi64(v27, v28);
    ++*((_QWORD *)v2 + 146);
LABEL_26:
    v10 = (char *)::s1;
    if ( (_QWORD)v50 )
    {
      v10 = s;
      v11 = strrchr(s, 58);
      if ( v11 )
        v10 = v11 + 1;
    }
    if ( (_BYTE)byte_4CF8F0 )
    {
      v44.m128i_i64[0] = (__int64)&xmmword_4CE910;
    }
    else
    {
      v30 = __cxa_guard_acquire(&byte_4CF8F0);
      v44.m128i_i64[0] = (__int64)&xmmword_4CE910;
      if ( v30 )
      {
        sub_33D280((__int64)(&xmmword_4CE910 - 43), &xmmword_4CE910, 10);
        sub_335390((const char **)&xmmword_4CE910 - 86, (const char **)&xmmword_4CE910 - 54);
        v44.m128i_i64[1] = first_seg;
        v48 = v2;
        v45 = v10;
        v31 = &xmmword_4CE910 - 27;
        do
        {
          v32 = (const char *)v31->m128i_i64[0];
          v33 = v31->m128i_i32[2];
          for ( i = v31; ; i[1] = _mm_load_si128(i) )
          {
            v35 = (const char *)i[-1].m128i_i64[0];
            v36 = (__m128i *)i--;
            if ( strcmp(v32, v35) >= 0 )
              break;
          }
          v37 = v44.m128i_i64[0];
          ++v31;
          v36->m128i_i64[0] = (__int64)v32;
          v36->m128i_i32[2] = v33;
        }
        while ( v31 != (const __m128i *)v37 );
        first_seg = v44.m128i_i64[1];
        v10 = v45;
        v2 = v48;
        __cxa_guard_release(&byte_4CF8F0);
      }
    }
    v45 = v2;
    v44.m128i_i64[1] = first_seg;
    v12 = &off_4CE660;
    for ( j = 43; j > 0; j = j - 1 - v14 )
    {
      while ( 1 )
      {
        v14 = j >> 1;
        v15 = (const char **)&v12[2 * (j >> 1)];
        if ( strcmp(*v15, v10) < 0 )
          break;
        j >>= 1;
        if ( v14 <= 0 )
          goto LABEL_35;
      }
      v12 = (char **)(v15 + 2);
    }
LABEL_35:
    v16 = v12;
    v2 = v45;
    v17 = v44.m128i_i64[1];
    if ( v16 != (char **)v44.m128i_i64[0] && !strcmp(*v16, v10) )
    {
      v40 = *((_DWORD *)v16 + 2);
      if ( v40 == 2 )
      {
        v19 = (__int64 *)(v2 + 1256);
        goto LABEL_40;
      }
      if ( v40 > 2 )
      {
        v19 = (__int64 *)(v2 + 1280);
        if ( v40 == 3 )
          goto LABEL_40;
      }
      else
      {
        if ( v40 == -1 )
          goto LABEL_75;
        if ( v40 == 1 )
        {
          v41 = *(_BYTE *)(v17 + 42);
          if ( v41 && (v41 & 2) != 0 )
          {
            s1 = nullptr;
            v52 = 0;
            sub_67670((__int64 *)&s1);
            v42 = (char *)::s1;
            if ( (_QWORD)v52 )
              v42 = s1;
            sub_2B05F0((__int64)"AUTOHIDE REGISTRY\n%s", v42);
            v43 = (char *)::s1;
            if ( (_QWORD)v52 )
              v43 = s1;
            sub_68EA0((__int64)"%s\n", v43);
            if ( s1 )
            {
              *(_QWORD *)&v52 = 0;
              qfree();
            }
LABEL_73:
            if ( !s )
              goto LABEL_44;
            goto LABEL_43;
          }
LABEL_75:
          v19 = (__int64 *)(v2 + 1232);
          goto LABEL_40;
        }
      }
    }
    if ( *(_BYTE *)(v17 + 184) != 1 || (v19 = (__int64 *)(v2 + 1280), (unsigned int)getinf() != 11) )
    {
      v18 = *(_BYTE *)(v17 + 42);
      if ( v18 )
      {
        v19 = (__int64 *)(v2 + 1184);
        if ( (v18 & 2) != 0 )
          goto LABEL_73;
      }
      else
      {
        if ( *(_BYTE *)(v17 + 184) != 2 )
          goto LABEL_73;
        v19 = (__int64 *)(v2 + 1208);
      }
    }
LABEL_40:
    v20 = v19[1];
    v21 = _mm_loadl_epi64((const __m128i *)v17);
    v22 = _mm_loadl_epi64((const __m128i *)(v17 + 8));
    v23 = *v19;
    if ( v19[2] < (unsigned __int64)(v20 + 1) )
    {
      v44.m128i_i64[1] = v22.m128i_i64[0];
      v44.m128i_i64[0] = v21.m128i_i64[0];
      v38 = qvector_reserve();
      v20 = v19[1];
      v21 = _mm_loadl_epi64(&v44);
      *v19 = v38;
      v23 = v38;
      v22 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
    }
    *(__m128i *)(v23 + 16 * v20) = _mm_unpacklo_epi64(v21, v22);
    v24 = s;
    ++v19[1];
    if ( !v24 )
      goto LABEL_44;
LABEL_43:
    *(_QWORD *)&v50 = 0;
    qfree();
LABEL_44:
    first_seg = get_next_seg();
  }
  return v53 - __readfsqword(0x28u);
}

