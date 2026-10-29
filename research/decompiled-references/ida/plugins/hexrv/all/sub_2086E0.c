__int64 __fastcall sub_2086E0(__int64 a1, __int64 a2, __int64 *a3, const char *a4, int a5)
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
  int v25; // r9d
  __int64 v26; // r13
  char *v27; // rsi
  char *v28; // r8
  __int64 v29; // r15
  char *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  char *v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r14
  size_t v39; // r9
  __int64 v40; // rdx
  char v41; // r15
  __int64 v42; // [rsp+0h] [rbp-80h]
  char *v43; // [rsp+0h] [rbp-80h]
  __int64 v44; // [rsp+8h] [rbp-78h]
  char *v45; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-70h]
  __int64 tinfo_property; // [rsp+20h] [rbp-60h] BYREF
  char *s1; // [rsp+28h] [rbp-58h] BYREF
  __m128i v49; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-40h]

  v5 = a5 & 8;
  v50 = __readfsqword(0x28u);
  v49 = 0;
  s1 = nullptr;
  if ( (a5 & 4) != 0 && (unsigned __int8)sub_208420((__int64)&s1, a3) )
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
    v36 = *(_QWORD *)(a2 + 1496);
    v37 = v36 + 376;
    v38 = v36 + 408;
    do
    {
      if ( !(unsigned int)lexcompare_tinfo() )
      {
        v10 = 3;
        v11 = 2;
        v12 = "wc";
        goto LABEL_40;
      }
      v37 += 8;
    }
    while ( v38 != v37 );
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
        || (tinfo_property = get_tinfo_property(), v41 = get_tinfo_property(), clear_tinfo_t(), (v41 & 0x3F) == 1) )
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
          v44 = v22 + 408;
          while ( (unsigned int)lexcompare_tinfo() )
          {
            v23 += 8;
            if ( v44 == v23 )
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
      if ( v49.m128i_i64[1] >= v10 )
        goto LABEL_6;
LABEL_41:
      s1 = (char *)qvector_reserve();
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
    v20 = sub_2086E0((unsigned int)&s1, a2, (unsigned int)&tinfo_property, 0, a5, v25);
    if ( !(_BYTE)v20 )
      goto LABEL_36;
    v26 = v49.m128i_i64[0];
    v27 = s1;
    if ( v49.m128i_i64[0] )
    {
      v39 = v49.m128i_i64[0] - 1;
      if ( (unsigned __int64)(v49.m128i_i64[0] - 1) <= 1 )
      {
        v40 = v49.m128i_i64[0] + 2;
        v29 = 2;
        v26 = v49.m128i_i64[0] + 1;
        v28 = "p_";
        if ( v49.m128i_i64[1] >= (unsigned __int64)(v49.m128i_i64[0] + 2) )
        {
LABEL_57:
          v49.m128i_i64[0] = v40;
          v27[v26] = 0;
          if ( !v39 )
            goto LABEL_32;
LABEL_58:
          v43 = v28;
          memmove(&s1[v29], s1, v39);
          v28 = v43;
          goto LABEL_32;
        }
      }
      else
      {
        if ( *s1 == 112 && s1[1] == 95 )
        {
          v29 = 1;
          v28 = "p";
        }
        else
        {
          v26 = v49.m128i_i64[0] + 1;
          v29 = 2;
          v28 = "p_";
        }
        v40 = v26 + 1;
        if ( v49.m128i_i64[1] >= (unsigned __int64)(v26 + 1) )
        {
          v49.m128i_i64[0] = v26 + 1;
          s1[v26] = 0;
          goto LABEL_58;
        }
      }
    }
    else
    {
      if ( v49.m128i_i64[1] > 2uLL )
      {
        v49.m128i_i64[0] = 3;
        v28 = "p_";
        LODWORD(v29) = 2;
        s1[2] = 0;
LABEL_32:
        v30 = s1;
        v31 = 0;
        do
        {
          v32 = v31++;
          v30[v32] = v28[v32];
        }
        while ( v31 < (unsigned int)v29 );
        if ( a1 )
        {
          v33 = *(char **)a1;
          v34 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v35 = _mm_loadu_si128(&v49);
          *(_QWORD *)a1 = s1;
          s1 = v33;
          *(__m128i *)(a1 + 8) = v35;
          v49 = v34;
        }
LABEL_36:
        clear_tinfo_t();
        v18 = s1;
        goto LABEL_25;
      }
      v39 = 0;
      v40 = 3;
      v26 = 2;
      v29 = 2;
      v28 = "p_";
    }
    n = v39;
    v45 = v28;
    v42 = v40;
    s1 = (char *)qvector_reserve();
    v40 = v42;
    v27 = s1;
    v28 = v45;
    v39 = n;
    goto LABEL_57;
  }
  v9 = s1;
  v10 = 4;
  v11 = 3;
  v12 = "chr";
  if ( v49.m128i_i64[1] < 4uLL )
    goto LABEL_41;
LABEL_6:
  v49.m128i_i64[0] = v10;
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
    v16 = v49.m128i_i64[0];
    if ( v49.m128i_i64[0] )
    {
      if ( !strcmp(s1, a4) )
      {
        v17 = v16-- + 1;
LABEL_14:
        if ( v49.m128i_i64[1] < v17 )
        {
          s1 = (char *)qvector_reserve();
          v15 = s1;
        }
        v49.m128i_i64[0] = v17;
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
    v21 = _mm_loadu_si128(&v49);
    s1 = v18;
    v49.m128i_i64[1] = v19;
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
    v49.m128i_i64[0] = 0;
    qfree();
  }
  return v20;
}

