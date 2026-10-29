__int64 __fastcall sub_97CA0(__int64 a1, const char *a2, _QWORD *a3)
{
  size_t v5; // rax
  __int64 v6; // r15
  size_t v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r14
  void (__fastcall *v10)(_QWORD *); // rdx
  void (__fastcall *v11)(_QWORD *); // rax
  _QWORD *v12; // rbx
  __int64 v13; // r15
  void *v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // r15d
  __int64 v20; // rcx
  char *v21; // rbx
  int v22; // eax
  char *v23; // rdi
  __int64 v24; // rbp
  char *v25; // rbx
  char *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 result; // rax
  size_t v30; // rax
  int v31; // eax
  unsigned __int64 v32; // r13
  __int64 v33; // r15
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  char *v37; // rbp
  char *v38; // rax
  signed __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r14
  unsigned __int8 s2a; // [rsp+8h] [rbp-70h]
  char *s2; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __m128i v47; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a2 || !*a2 || *a2 == 35 )
    return 0;
  s1 = nullptr;
  v47 = 0;
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  s1 = (char *)qvector_reserve(&s1, 0, v5 + 1, 1);
  v47.m128i_i64[0] = v6;
  memmove(s1, a2, v7);
  s1[v7] = 0;
  v8 = a3[31];
  if ( !v8 )
  {
    v8 = sub_87C20(*(_QWORD **)(*a3 + 16LL), *(_QWORD *)(*a3 + 24LL));
    a3[31] = v8;
  }
  v9 = *(_DWORD **)(v8 + 216);
  if ( v9 && !v9[2] )
  {
    v10 = **(void (__fastcall ***)(_QWORD *))v9;
    if ( v10 == sub_15E30 )
    {
      v11 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v9 + 16LL);
      if ( v11 == sub_15D70 )
      {
        v12 = *((_QWORD **)v9 + 16);
        *(_QWORD *)v9 = &off_C71D8;
        if ( v12 )
        {
          v13 = v12[2];
          while ( v13 )
          {
            sub_80300(*(_QWORD **)(v13 + 24));
            v14 = (void *)v13;
            v13 = *(_QWORD *)(v13 + 16);
            operator delete(v14, 0x30u);
          }
          operator delete(v12, 0x30u);
        }
        v15 = *((_QWORD *)v9 + 19);
        while ( v15 )
        {
          v16 = (_QWORD *)v15;
          sub_80A30(*(_QWORD **)(v15 + 24));
          v17 = *(_QWORD *)(v15 + 32);
          v15 = *(_QWORD *)(v15 + 16);
          if ( v17 )
          {
            v16[5] = 0;
            qfree(v17);
          }
          operator delete(v16, 0x48u);
        }
        v18 = *((_QWORD *)v9 + 12);
        if ( v18 )
        {
          *((_QWORD *)v9 + 13) = 0;
          qfree(v18);
        }
        operator delete(v9, 0xC0u);
      }
      else
      {
        v11(v9);
      }
    }
    else
    {
      v10(v9);
    }
  }
  v19 = v9[31];
  v20 = 0;
  v21 = (char *)&unk_C97C0;
  while ( 1 )
  {
    if ( *(_DWORD *)v21 == v19 && *((_DWORD *)v21 + 6) == (*((_DWORD *)v21 + 6) & v9[47]) )
    {
      v45 = v20;
      s2 = *((char **)v21 + 1);
      v30 = strlen(s2);
      v31 = strncmp(a2, s2, v30);
      v20 = v45;
      if ( !v31 )
        break;
    }
    ++v20;
    v21 += 32;
    if ( v20 == 5 )
    {
      v22 = v19;
      goto LABEL_25;
    }
  }
  sub_806F0((__int64)&s1, s2, *((const char **)&unk_C97C0 + 4 * v45 + 2));
  v22 = v9[31];
LABEL_25:
  if ( v22 != 1
    || (v34 = sub_97BF0((__int64)a3), (unsigned __int16)v34 > 0x17u)
    || (v35 = 8912900, !_bittest64(&v35, v34)) )
  {
LABEL_26:
    if ( v19 != 8 )
      goto LABEL_27;
    goto LABEL_52;
  }
  if ( v47.m128i_i64[0] )
  {
    v36 = v47.m128i_i64[0] - 1;
    if ( (unsigned __int64)(v47.m128i_i64[0] - 1) > 7 )
    {
      v37 = s1;
      if ( !strncmp(s1, "typedef ", 8u) )
      {
        v38 = strrchr(v37, 32);
        if ( v38 )
        {
          v39 = v38 - v37;
          if ( v39 != -1 )
          {
            v40 = v39 + 1;
            v41 = 1;
            v42 = 0;
            if ( v40 < v36 )
            {
              v42 = v36 - v40;
              v41 = v36 - v40 + 1;
              memmove(v37, &v37[v40], v36 - v40);
              v37 = s1;
            }
            if ( v47.m128i_i64[1] < v41 )
            {
              s1 = (char *)qvector_reserve(&s1, v37, v41, 1);
              v37 = s1;
            }
            v47.m128i_i64[0] = v41;
            v37[v42] = 0;
            goto LABEL_26;
          }
        }
      }
    }
    if ( v19 != 8 )
      goto LABEL_42;
  }
  else if ( v19 != 8 )
  {
    goto LABEL_28;
  }
LABEL_52:
  sub_806F0((__int64)&s1, "<-chan", "RO_chan");
  sub_806F0((__int64)&s1, "chan<-", "WO_chan");
LABEL_27:
  if ( v47.m128i_i64[0] )
  {
LABEL_42:
    v23 = s1;
    goto LABEL_29;
  }
LABEL_28:
  v23 = (char *)src;
LABEL_29:
  if ( !sub_317F0(v23) )
  {
    result = validate_name(&s1, 8, 1);
    v26 = s1;
    if ( !(_BYTE)result )
      goto LABEL_34;
  }
  v24 = v47.m128i_i64[0];
  v25 = s1;
  if ( !v47.m128i_i64[0] )
  {
    if ( !(unsigned __int8)sub_81D60(src) )
      goto LABEL_32;
    v32 = 2;
    v33 = 1;
LABEL_45:
    if ( v47.m128i_i64[1] < v32 )
    {
      s1 = (char *)qvector_reserve(&s1, v25, v32, 1);
      v25 = s1;
    }
    v47.m128i_i64[0] = v32;
    v25[v33] = 0;
    s1[v24] = 95;
    v25 = s1;
    goto LABEL_32;
  }
  if ( (unsigned __int8)sub_81D60(s1) )
  {
    v32 = v24 + 1;
    v33 = v24--;
    goto LABEL_45;
  }
LABEL_32:
  if ( a1 )
  {
    v26 = *(char **)a1;
    v27 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v25;
    v28 = _mm_loadu_si128(&v47);
    s1 = v26;
    v47.m128i_i64[1] = v27;
    result = 1;
    *(__m128i *)(a1 + 8) = v28;
  }
  else
  {
    v26 = v25;
    result = 1;
  }
LABEL_34:
  if ( v26 )
  {
    s2a = result;
    v47.m128i_i64[0] = 0;
    qfree(v26);
    return s2a;
  }
  return result;
}

