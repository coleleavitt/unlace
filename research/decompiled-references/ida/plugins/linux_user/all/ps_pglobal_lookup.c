__int64 __fastcall ps_pglobal_lookup(__int32 *a1, const char *a2, char *a3, __int64 *a4)
{
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // rbp
  int *v7; // r13
  char *v8; // r14
  const char *v9; // r15
  int *v10; // r12
  const char *v11; // rdi
  int *v12; // rbx
  const char *v13; // rsi
  int v14; // eax
  int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbp
  const char *v21; // rdi
  const char *v22; // rsi
  unsigned __int64 v23; // rbp
  size_t v24; // rax
  __int64 v25; // r14
  size_t v26; // r12
  int *v27; // r15
  __int64 v28; // r12
  char *v29; // r14
  const char *v30; // rbx
  int *v31; // rbx
  int *v32; // r13
  char *v33; // rdi
  const char *v34; // rsi
  int v35; // eax
  int *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  const char *v39; // rsi
  const char *v40; // rdi
  __int64 v41; // rax
  char *v42; // r13
  int *v43; // rsi
  __m128i v44; // xmm0
  int *v45; // rax
  __int64 v46; // rdx
  int *v47; // r12
  unsigned __int64 v48; // xmm0_8
  int *v49; // rdi
  const char *v50; // rsi
  char *s1[2]; // [rsp+0h] [rbp-98h] BYREF
  int *v52; // [rsp+18h] [rbp-80h]
  __int64 *v53; // [rsp+20h] [rbp-78h]
  char *s; // [rsp+28h] [rbp-70h]
  __int32 *v55; // [rsp+30h] [rbp-68h]
  const char *v56; // [rsp+38h] [rbp-60h]
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __m128i v58; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-40h]

  v55 = a1;
  v56 = a2;
  s = a3;
  v53 = a4;
  v59 = __readfsqword(0x28u);
  v58 = 0;
  s2 = nullptr;
  if ( a3 )
  {
    v4 = strlen(s);
    v5 = v4 + 1;
    v6 = v4;
    s2 = (char *)qvector_reserve();
    v58.m128i_i64[0] = v5;
    memmove(s2, s, v6);
    s2[v6] = 0;
    v7 = (int *)qword_48110;
    v8 = s2;
    if ( !qword_48110 )
      goto LABEL_16;
  }
  else
  {
    v7 = (int *)qword_48110;
    v8 = nullptr;
    if ( !qword_48110 )
      goto LABEL_18;
  }
  v9 = ::s;
  v52 = &dword_48108;
  v10 = &dword_48108;
  s1[0] = (char *)::s;
  if ( v58.m128i_i64[0] )
    v9 = v8;
  while ( 1 )
  {
    v16 = *((_QWORD *)v7 + 5);
    if ( !v58.m128i_i64[0] )
      break;
    if ( v16 )
      goto LABEL_15;
    v11 = s1[0];
    v12 = v7;
    v13 = v8;
LABEL_8:
    v14 = strcmp(v11, v13);
    v15 = *((int **)v7 + 2);
    v7 = *((int **)v7 + 3);
    if ( v14 >= 0 )
    {
      v10 = v12;
      v7 = v15;
    }
    if ( !v7 )
      goto LABEL_25;
  }
  if ( v16 )
  {
LABEL_15:
    v11 = *((const char **)v7 + 4);
    v12 = v7;
    v13 = v9;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v17 = *((_QWORD *)v7 + 2);
    if ( !v17 )
      break;
    v10 = v7;
    v7 = *((int **)v7 + 2);
    if ( *(_QWORD *)(v17 + 40) )
      goto LABEL_15;
  }
  v10 = v7;
LABEL_25:
  if ( v10 != v52 )
  {
    if ( !*((_QWORD *)v10 + 5) )
    {
      v21 = v8;
      v22 = ::s;
      if ( v58.m128i_i64[0] )
        goto LABEL_29;
      if ( !v8 )
      {
LABEL_31:
        v19 = *((_QWORD *)v10 + 7);
        goto LABEL_32;
      }
LABEL_35:
      v58.m128i_i64[0] = 0;
      qfree();
      goto LABEL_31;
    }
    v21 = ::s;
    v22 = *((const char **)v10 + 4);
    if ( v58.m128i_i64[0] )
      v21 = v8;
LABEL_29:
    if ( strcmp(v21, v22) >= 0 )
    {
      if ( !v8 )
        goto LABEL_31;
      goto LABEL_35;
    }
  }
LABEL_16:
  if ( v8 )
  {
    v58.m128i_i64[0] = 0;
    qfree();
  }
LABEL_18:
  v58.m128i_i64[1] = 0;
  s2 = (char *)&off_44D48;
  v58.m128i_i32[0] = *v55;
  sub_B3D0((__int64 (__fastcall ***)(_QWORD, __int64))&s2);
  v18 = v58.m128i_i64[1];
  if ( !v58.m128i_i64[1] )
    return 2;
  if ( *(_QWORD *)(v58.m128i_i64[1] + 1152) )
    sub_196C0((_QWORD *)v58.m128i_i64[1], v56);
  v19 = sub_16450(v18, s);
  if ( v19 == -1 )
  {
    if ( *(_QWORD *)(v18 + 1464) == -1 )
      return 5;
    s2 = nullptr;
    v58 = 0;
    if ( !(unsigned __int8)qgetenv() )
    {
      if ( s2 )
      {
        v58.m128i_i64[0] = 0;
        qfree();
      }
LABEL_75:
      if ( *(_QWORD *)(v18 + 1464) != -1 )
        sub_B0B0(
          (__int64)"*WARNING* Failed to resolve name '%s' in libpthread shared object.\n"
                   "          Support for multithread applications will be turned off.\n"
                   "          We recommend you to analyze libpthread and provide the\n"
                   "          missing symbol info as an environment variable:\n"
                   "\n"
                   "          export %s=####\n"
                   "\n"
                   "          where #### is the hexadecimal address of the symbol.\n"
                   "          The full list of symbols is in syms_as_envvars.py\n",
          s,
          s);
      return 5;
    }
    v23 = strtoull(s2, nullptr, 16);
    if ( s2 )
    {
      v58.m128i_i64[0] = 0;
      qfree();
    }
    if ( v23 == -1 )
      goto LABEL_75;
    v19 = *(_QWORD *)(v18 + 1464) + v23;
  }
  s2 = nullptr;
  v58 = 0;
  if ( s )
  {
    v24 = strlen(s);
    v25 = v24 + 1;
    v26 = v24;
    s2 = (char *)qvector_reserve();
    v58.m128i_i64[0] = v25;
    memmove(s2, s, v26);
    s2[v26] = 0;
  }
  v27 = (int *)qword_48110;
  if ( !qword_48110 )
  {
    v52 = &dword_48108;
    v31 = &dword_48108;
    goto LABEL_64;
  }
  v28 = v58.m128i_i64[0];
  v29 = s2;
  v30 = ::s;
  s = (char *)::s;
  if ( v58.m128i_i64[0] )
    v30 = s2;
  s1[0] = (char *)v30;
  v31 = &dword_48108;
  v52 = &dword_48108;
  while ( 2 )
  {
    v37 = *((_QWORD *)v27 + 5);
    if ( v28 )
    {
      v32 = v27;
      if ( !v37 )
      {
        v33 = s;
        v34 = v29;
        goto LABEL_50;
      }
LABEL_58:
      v33 = *((char **)v27 + 4);
      v34 = s1[0];
LABEL_50:
      v35 = strcmp(v33, v34);
      v36 = *((int **)v27 + 2);
      v27 = *((int **)v27 + 3);
      if ( v35 >= 0 )
      {
        v31 = v32;
        v27 = v36;
      }
      if ( !v27 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( v37 )
  {
LABEL_57:
    v32 = v27;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v38 = *((_QWORD *)v27 + 2);
    if ( !v38 )
      break;
    v31 = v27;
    v27 = *((int **)v27 + 2);
    if ( *(_QWORD *)(v38 + 40) )
      goto LABEL_57;
  }
  v31 = v27;
LABEL_60:
  if ( v31 == v52 )
    goto LABEL_64;
  if ( *((_QWORD *)v31 + 5) )
  {
    v39 = *((const char **)v31 + 4);
    v40 = ::s;
    if ( !v28 )
      goto LABEL_63;
    goto LABEL_71;
  }
  v39 = ::s;
  if ( !v28 )
    goto LABEL_68;
LABEL_71:
  v40 = v29;
LABEL_63:
  if ( strcmp(v40, v39) >= 0 )
  {
LABEL_68:
    *((_QWORD *)v31 + 7) = v19;
    if ( v29 )
    {
      v58.m128i_i64[0] = 0;
      qfree();
    }
    goto LABEL_32;
  }
LABEL_64:
  v41 = operator new(0x40u);
  v42 = s2;
  v43 = v31;
  v44 = _mm_loadu_si128(&v58);
  *(_QWORD *)(v41 + 56) = 0;
  v31 = (int *)v41;
  *(_QWORD *)(v41 + 32) = v42;
  *(__m128i *)(v41 + 40) = v44;
  s2 = nullptr;
  *(__m128i *)s1 = v44;
  v58 = 0;
  v45 = (int *)sub_21C90(&qword_48100, v43, v41 + 32);
  v47 = v45;
  if ( v46 )
  {
    if ( !v45 )
    {
      v48 = _mm_load_si128((const __m128i *)s1).m128i_u64[0];
      if ( v52 != (int *)v46 )
      {
        v50 = ::s;
        if ( *(_QWORD *)(v46 + 40) )
          v50 = *(const char **)(v46 + 32);
        s1[0] = (char *)v46;
        if ( !v48 )
          v42 = (char *)::s;
        strcmp(v42, v50);
      }
    }
    std::_Rb_tree_insert_and_rebalance();
    ++qword_48128;
    v29 = s2;
    goto LABEL_68;
  }
  if ( v31 )
  {
    if ( v42 )
    {
      *((_QWORD *)v31 + 5) = 0;
      qfree();
    }
    v49 = v31;
    v31 = v47;
    operator delete(v49, 0x40u);
    v29 = s2;
    goto LABEL_68;
  }
  *((_QWORD *)v45 + 7) = v19;
LABEL_32:
  *v53 = v19;
  return 0;
}

