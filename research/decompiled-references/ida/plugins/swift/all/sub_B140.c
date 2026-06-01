__int64 __fastcall sub_B140(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  size_t v7; // rax
  const char *v8; // r14
  size_t v9; // r15
  const char *v10; // rbp
  char *v11; // rax
  size_t v12; // rax
  size_t v13; // r13
  unsigned __int64 v14; // rbx
  const char *v15; // r15
  unsigned int v16; // ebx
  size_t v18; // rbp
  __int64 v19; // r13
  char *v20; // r8
  char idainfo_by_type; // r12
  __int64 v22; // r14
  __int64 v23; // rdi
  int v24; // eax
  __int16 v25; // dx
  __int64 v26; // rdi
  __int64 v27; // r13
  __m128i si128; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdi
  const char *v31; // rax
  __int64 v32; // rbx
  void *v33; // rdi
  const char *v34; // rax
  size_t v35; // rax
  char *s1[2]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-1C0h]
  __int64 v38; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v39; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-198h] BYREF
  __m128i v42; // [rsp+48h] [rbp-190h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-178h] BYREF
  __int16 v44; // [rsp+70h] [rbp-168h]
  _QWORD v45[43]; // [rsp+80h] [rbp-158h] BYREF

  v3 = *(_QWORD *)(a3 + 8) == 0;
  v37 = a2;
  v45[35] = __readfsqword(0x28u);
  s1[0] = (char *)::s1;
  if ( !v3 )
    s1[0] = *(char **)a3;
  v4 = *(_QWORD *)(a1 + 544);
  v5 = *(_QWORD *)(a1 + 536);
  v41 = 0;
  v42 = 0;
  v6 = v5 + 24 * v4;
  if ( v5 == v6 )
    return 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 8);
    v10 = *(const char **)v5;
    v8 = "";
    if ( v9 )
    {
      v11 = strstr(*(const char **)v5, "=>");
      if ( !v11 || (v7 = v11 - v10, v7 == -1) )
      {
        --v9;
        v8 = "";
      }
      else
      {
        v8 = &v10[v7 + 2];
        v9 = v7;
      }
    }
    if ( !strncmp(s1[0], v10, v9) )
      break;
    v5 += 24;
    if ( v6 == v5 )
      return 0;
  }
  if ( !v8 )
  {
    v3 = &s1[0][v9] == nullptr;
    v31 = &s1[0][v9];
    v15 = &s1[0][v9];
    if ( v3 )
      return 0;
    v14 = 0;
    v18 = strlen(v31);
    v19 = v18 + 1;
    v20 = (char *)v18;
LABEL_18:
    s1[0] = v20;
    v41 = qvector_reserve(&v41, v8, v19, 1);
    v20 = s1[0];
    v8 = (const char *)v41;
    goto LABEL_19;
  }
  v12 = strlen(v8);
  v13 = v12;
  v14 = v12;
  if ( !v12 )
  {
    v15 = &s1[0][v9];
    if ( !v15 )
      return 0;
    v8 = nullptr;
    v18 = strlen(v15);
    v19 = v18 + 1;
    v20 = (char *)v18;
    goto LABEL_18;
  }
  v32 = v12 + 1;
  v33 = (void *)qvector_reserve(&v41, 0, v12 + 1, 1);
  v42.m128i_i64[0] = v32;
  v41 = (__int64)v33;
  memmove(v33, v8, v13);
  *(_BYTE *)(v41 + v13) = 0;
  v14 = v42.m128i_i64[0];
  v8 = (const char *)v41;
  v3 = &s1[0][v9] == nullptr;
  v34 = &s1[0][v9];
  v15 = &s1[0][v9];
  if ( v3 )
    goto LABEL_20;
  s1[0] = (char *)v42.m128i_i64[1];
  v35 = strlen(v34);
  v20 = (char *)v35;
  if ( v14 )
  {
    --v14;
    v18 = v35 + v14;
  }
  else
  {
    v18 = v35;
  }
  v19 = v18 + 1;
  if ( s1[0] < (char *)(v18 + 1) )
    goto LABEL_18;
LABEL_19:
  v42.m128i_i64[0] = v19;
  v8[v18] = 0;
  memmove((void *)(v14 + v41), v15, (size_t)v20);
  v14 = v42.m128i_i64[0];
  v8 = (const char *)v41;
LABEL_20:
  if ( v14 <= 1 )
  {
    v16 = 0;
  }
  else
  {
    v38 = 0;
    if ( v8
      && (v43[1] = v8, v44 = 256, v43[0] = get_idati(), v16 = create_tinfo(&v38, 61, 61, v43), (_BYTE)v16)
      && (get_tinfo_property(v38, 2) & 0xF) != 0xB )
    {
      if ( get_tinfo_size(0, v38, 0) == -1 )
      {
        *(_DWORD *)(v37 + 68) = 7;
      }
      else
      {
        idainfo_by_type = get_idainfo_by_type(&v39, &v40, v45, &v38, v43);
        if ( idainfo_by_type )
        {
          if ( (v40 & 0xF00000) == 0x500000 && v39 != 8 )
            v40 &= 0xFFAAAAAAFAAFFFFFLL;
          v22 = v37;
          v23 = v43[0];
          *(_DWORD *)v37 = v39;
          *(_DWORD *)(v22 + 4) = log2ceil(v23);
          v24 = v40;
          v25 = v40;
          *(_QWORD *)(v22 + 8) = v40;
          if ( (v25 & 0x600) == 0x400 && (v24 & 0xF0000000) == 0x60000000 || (v24 & 0xF00000) == 0x800000 )
            *(_QWORD *)(v37 + 16) = v45[0];
          copy_tinfo_t(v37 + 24, &v38);
          v26 = *(_QWORD *)(v37 + 32);
          v27 = v41;
          v41 = 0;
          si128 = _mm_loadu_si128(&v42);
          v42 = 0;
          if ( v26 )
          {
            *(_QWORD *)(v37 + 40) = 0;
            *(__m128i *)s1 = si128;
            qfree(v26);
            si128 = _mm_load_si128((const __m128i *)s1);
          }
          v29 = v37;
          v30 = v38;
          *(_QWORD *)(v37 + 32) = v27;
          *(_DWORD *)(v29 + 68) = 1;
          *(__m128i *)(v29 + 40) = si128;
          if ( (get_tinfo_property(v30, 2) & 0xF) != 0xA )
            idainfo_by_type = (get_tinfo_property(v38, 2) & 0xF) == 8;
          *(_BYTE *)(v37 + 72) = idainfo_by_type;
        }
        else
        {
          *(_DWORD *)(v37 + 68) = 6;
        }
      }
    }
    else
    {
      v16 = 0;
    }
    clear_tinfo_t(&v38);
    v8 = (const char *)v41;
  }
  if ( v8 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v8);
  }
  return v16;
}

