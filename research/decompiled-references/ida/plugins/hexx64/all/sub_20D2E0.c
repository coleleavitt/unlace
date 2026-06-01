__int64 __fastcall sub_20D2E0(__int64 a1, __int64 a2, __int64 *a3, const char *a4, int a5)
{
  int v5; // r14d
  char *v9; // rsi
  unsigned __int64 v10; // rbx
  size_t v11; // r13
  const char *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  char *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // ebx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v25; // r13
  char *v26; // rsi
  char *v27; // r8
  __int64 v28; // r15
  char *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  char *v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r14
  size_t v38; // r9
  __int64 v39; // rdx
  char v40; // r15
  __int64 v41; // [rsp+0h] [rbp-80h]
  char *v42; // [rsp+0h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-78h]
  char *v44; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-70h]
  __int64 tinfo_property; // [rsp+20h] [rbp-60h] BYREF
  char *s1; // [rsp+28h] [rbp-58h] BYREF
  __m128i v48; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-40h]

  v5 = a5 & 8;
  v49 = __readfsqword(0x28u);
  v48 = 0;
  s1 = nullptr;
  if ( (a5 & 4) != 0 && (unsigned __int8)sub_20D020((__int64)&s1, a3) )
    goto LABEL_10;
  if ( !v5 )
    goto LABEL_23;
  if ( (get_tinfo_property() & 0xF) == 8 )
  {
    v10 = 3;
    v11 = 2;
    v12 = "ok";
    goto LABEL_40;
  }
  if ( (get_tinfo_property() & 0x1F) != 0x12 )
  {
    v35 = *(_QWORD *)(a2 + 1496);
    v36 = v35 + 376;
    v37 = v35 + 408;
    do
    {
      if ( !(unsigned int)lexcompare_tinfo() )
      {
        v10 = 3;
        v11 = 2;
        v12 = "wc";
        goto LABEL_40;
      }
      v36 += 8;
    }
    while ( v37 != v36 );
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 2) <= 5u )
    {
      v10 = 5;
      v11 = 4;
      v12 = "code";
      goto LABEL_40;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      get_tinfo_property();
      set_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) == 1
        || (tinfo_property = get_tinfo_property(), v40 = get_tinfo_property(), clear_tinfo_t(), (v40 & 0x3F) == 1) )
      {
        v12 = "ptr";
      }
      else
      {
        v12 = "str";
        if ( (get_tinfo_property() & 0x1F) != 0x12 )
        {
          v22 = *(_QWORD *)(a2 + 1496);
          v23 = v22 + 376;
          v43 = v22 + 408;
          while ( (unsigned int)lexcompare_tinfo() )
          {
            v23 += 8;
            if ( v43 == v23 )
            {
              clear_tinfo_t();
              goto LABEL_23;
            }
          }
          v12 = "wstr";
        }
      }
      clear_tinfo_t();
      v11 = strlen(v12);
      v10 = v11 + 1;
LABEL_40:
      v9 = s1;
      if ( v48.m128i_i64[1] >= v10 )
        goto LABEL_6;
LABEL_41:
      s1 = (char *)qvector_reserve((__int64)&s1, (__int64)v9, v10, 1);
      v9 = s1;
      goto LABEL_6;
    }
LABEL_23:
    if ( (get_tinfo_property() & 0xF) != 0xA )
    {
      v18 = s1;
      v20 = 0;
      goto LABEL_25;
    }
    tinfo_property = get_tinfo_property();
    v20 = sub_20D2E0((__int64)&s1, a2, &tinfo_property, nullptr, a5);
    if ( !(_BYTE)v20 )
      goto LABEL_36;
    v25 = v48.m128i_i64[0];
    v26 = s1;
    if ( v48.m128i_i64[0] )
    {
      v38 = v48.m128i_i64[0] - 1;
      if ( (unsigned __int64)(v48.m128i_i64[0] - 1) <= 1 )
      {
        v39 = v48.m128i_i64[0] + 2;
        v28 = 2;
        v25 = v48.m128i_i64[0] + 1;
        v27 = "p_";
        if ( v48.m128i_i64[1] >= (unsigned __int64)(v48.m128i_i64[0] + 2) )
        {
LABEL_57:
          v48.m128i_i64[0] = v39;
          v26[v25] = 0;
          if ( !v38 )
            goto LABEL_32;
LABEL_58:
          v42 = v27;
          memmove(&s1[v28], s1, v38);
          v27 = v42;
          goto LABEL_32;
        }
      }
      else
      {
        if ( *s1 == 112 && s1[1] == 95 )
        {
          v28 = 1;
          v27 = "p";
        }
        else
        {
          v25 = v48.m128i_i64[0] + 1;
          v28 = 2;
          v27 = "p_";
        }
        v39 = v25 + 1;
        if ( v48.m128i_i64[1] >= (unsigned __int64)(v25 + 1) )
        {
          v48.m128i_i64[0] = v25 + 1;
          s1[v25] = 0;
          goto LABEL_58;
        }
      }
    }
    else
    {
      if ( v48.m128i_i64[1] > 2uLL )
      {
        v48.m128i_i64[0] = 3;
        v27 = "p_";
        LODWORD(v28) = 2;
        s1[2] = 0;
LABEL_32:
        v29 = s1;
        v30 = 0;
        do
        {
          v31 = v30++;
          v29[v31] = v27[v31];
        }
        while ( v30 < (unsigned int)v28 );
        if ( a1 )
        {
          v32 = *(char **)a1;
          v33 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v34 = _mm_loadu_si128(&v48);
          *(_QWORD *)a1 = s1;
          s1 = v32;
          *(__m128i *)(a1 + 8) = v34;
          v48 = v33;
        }
LABEL_36:
        clear_tinfo_t();
        v18 = s1;
        goto LABEL_25;
      }
      v38 = 0;
      v39 = 3;
      v25 = 2;
      v28 = 2;
      v27 = "p_";
    }
    n = v38;
    v44 = v27;
    v41 = v39;
    s1 = (char *)qvector_reserve((__int64)&s1, (__int64)s1, v39, 1);
    v39 = v41;
    v26 = s1;
    v27 = v44;
    v38 = n;
    goto LABEL_57;
  }
  v9 = s1;
  v10 = 4;
  v11 = 3;
  v12 = "chr";
  if ( v48.m128i_i64[1] < 4uLL )
    goto LABEL_41;
LABEL_6:
  v48.m128i_i64[0] = v10;
  if ( (_DWORD)v11 )
  {
    v13 = 0;
    do
    {
      v14 = v13++;
      v9[v14] = v12[v14];
    }
    while ( v13 < (unsigned int)v11 );
  }
  s1[v11] = 0;
LABEL_10:
  v15 = s1;
  if ( a4 )
  {
    v16 = v48.m128i_i64[0];
    if ( v48.m128i_i64[0] )
    {
      if ( !strcmp(s1, a4) )
      {
        v17 = v16-- + 1;
LABEL_14:
        if ( v48.m128i_i64[1] < v17 )
        {
          s1 = (char *)qvector_reserve((__int64)&s1, (__int64)v15, v17, 1);
          v15 = s1;
        }
        v48.m128i_i64[0] = v17;
        v15[v16] = 95;
        s1[v16 + 1] = 0;
        v15 = s1;
      }
    }
    else if ( !*a4 )
    {
      v17 = 2;
      goto LABEL_14;
    }
  }
  if ( a1 )
  {
    v18 = *(char **)a1;
    v19 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v15;
    v20 = 1;
    v21 = _mm_loadu_si128(&v48);
    s1 = v18;
    v48.m128i_i64[1] = v19;
    *(__m128i *)(a1 + 8) = v21;
  }
  else
  {
    v18 = v15;
    v20 = 1;
  }
LABEL_25:
  if ( v18 )
  {
    v48.m128i_i64[0] = 0;
    qfree((__int64)v18);
  }
  return v20;
}

