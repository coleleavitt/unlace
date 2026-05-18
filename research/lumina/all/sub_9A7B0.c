__int64 __fastcall sub_9A7B0(__int64 *a1, int a2, char a3)
{
  char v4; // r12
  char *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __m128i v9; // xmm0
  void *v10; // rax
  const char *v11; // r8
  const char *v12; // rcx
  __m128i v13; // xmm0
  void *v14; // rdi
  void *v15; // r15
  __int64 v16; // r14
  __m128i v17; // xmm0
  void *v18; // rdi
  const char *v19; // r15
  __int64 v20; // r14
  unsigned int v21; // eax
  const char *v23; // rdi
  const char *v24; // rdi
  _WORD *v25; // rsi
  const char *v26; // rcx
  const char *v27; // rdx
  __int64 v28; // rbx
  const char *v29; // rdx
  const char *v30; // rsi
  void *v31; // rax
  void *v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  unsigned __int64 v35; // rbp
  const void *v36; // r14
  void *v37; // rdi
  bool v38; // zf
  __int64 v39; // rax
  unsigned int v40; // [rsp+Ch] [rbp-BCh]
  __m128i v41; // [rsp+10h] [rbp-B8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i v43; // [rsp+38h] [rbp-90h]
  void *v44; // [rsp+50h] [rbp-78h] BYREF
  __m128i v45; // [rsp+58h] [rbp-70h] BYREF
  void *v46; // [rsp+70h] [rbp-58h] BYREF
  __m128i v47; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v4 = a3;
  v6 = (char *)a1[2];
  v48 = __readfsqword(0x28u);
  v7 = sub_B6920(v6);
  if ( v7 )
    return v7;
  v8 = *((_DWORD *)a1 + 38);
  ptr = nullptr;
  v43 = 0;
  if ( v8 != -4 )
  {
    if ( v8 == -3 && a2 == -4 )
    {
      v40 = -3;
      sub_98CE0((char **)&v46, -3);
    }
    else
    {
      v40 = *((_DWORD *)a1 + 39);
      sub_98CE0((char **)&v46, v40);
    }
    v9 = _mm_loadu_si128(&v47);
    v10 = v46;
    v47 = 0;
    v46 = nullptr;
    ptr = v10;
    v43 = v9;
    v11 = s1;
    if ( v9.m128i_i64[0] )
      v11 = (const char *)ptr;
    v12 = s1;
    if ( a1[4] )
      v12 = (const char *)a1[3];
    sub_99740(
      (__int64 *)&v46,
      *(__int64 **)(a1[1] + 56),
      (__int64)(a1 + 9),
      (__int64)v12,
      (__int64)v11,
      (_BYTE *)a1 + 161);
    v13 = _mm_loadu_si128(&v47);
    v14 = (void *)a1[6];
    v15 = v46;
    v47 = 0;
    v46 = nullptr;
    v16 = v13.m128i_i64[0];
    if ( v14 )
    {
      a1[7] = 0;
      v41 = v13;
      j__free(v14);
      v17 = _mm_load_si128(&v41);
      v18 = v46;
      a1[6] = (__int64)v15;
      *(__m128i *)(a1 + 7) = v17;
      if ( v18 )
      {
        v47.m128i_i64[0] = 0;
        j__free(v18);
        v16 = a1[7];
      }
    }
    else
    {
      a1[6] = (__int64)v15;
      *(__m128i *)(a1 + 7) = v13;
    }
    v19 = s1;
    v41.m128i_i64[0] = a1[2];
    if ( v16 )
      v19 = (const char *)a1[6];
    v20 = *a1;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(**(_QWORD **)(a1[1] + 56) + 96LL))(
            *(_QWORD *)(a1[1] + 56),
            0,
            v19);
    if ( v21 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const char *))(*(_QWORD *)v20 + 352LL))(
              v20,
              v41.m128i_i64[0],
              v40,
              v19);
      v4 = a3 & (v21 == 0);
    }
    if ( v4 )
    {
      if ( *((_BYTE *)a1 + 161) )
        goto LABEL_19;
LABEL_29:
      v26 = s1;
      if ( v43.m128i_i64[0] )
      {
        v26 = (const char *)ptr;
        v27 = s1;
        if ( !a1[4] )
        {
LABEL_31:
          sub_994F0((__int64 *)&v44, *(__int64 **)(a1[1] + 56), (__int64)v27, (__int64)v26);
          v46 = nullptr;
          v47 = 0;
          v28 = qword_23EA50;
          if ( qword_23EA50 )
          {
            v46 = (void *)sub_1987B0(&v46, 0, qword_23EA50, 1);
            memset((char *)v46 + v47.m128i_i64[0], 0, v28 - v47.m128i_i64[0]);
            v47.m128i_i64[0] = v28;
          }
          v29 = s1;
          if ( v45.m128i_i64[0] )
          {
            v29 = (const char *)v44;
            v30 = s1;
            if ( !a1[7] )
              goto LABEL_35;
          }
          else
          {
            v30 = s1;
            if ( !a1[7] )
            {
LABEL_35:
              v7 = sub_B6F50(*(_QWORD *)(a1[1] + 56), v30, v29, &v46);
              if ( !v7 )
              {
                v31 = (void *)a1[6];
                v32 = v44;
                *((_BYTE *)a1 + 161) = 1;
                v33 = _mm_loadu_si128((const __m128i *)(a1 + 7));
                v34 = _mm_loadu_si128(&v45);
                a1[6] = (__int64)v32;
                v44 = v31;
                *(__m128i *)(a1 + 7) = v34;
                v45 = v33;
              }
              if ( v46 )
              {
                v47.m128i_i64[0] = 0;
                j__free(v46);
              }
              if ( v44 )
              {
                v45.m128i_i64[0] = 0;
                j__free(v44);
              }
              goto LABEL_19;
            }
          }
          v30 = (const char *)a1[6];
          goto LABEL_35;
        }
      }
      else
      {
        v27 = s1;
        if ( !a1[4] )
          goto LABEL_31;
      }
      v27 = (const char *)a1[3];
      goto LABEL_31;
    }
    v7 = v21;
    goto LABEL_19;
  }
  v35 = a1[4];
  if ( v35 )
  {
    if ( v35 == 1 )
    {
      a1[7] = 0;
      *((_BYTE *)a1 + 161) = 0;
LABEL_52:
      v23 = (const char *)a1[3];
      goto LABEL_24;
    }
    v36 = (const void *)a1[3];
    v37 = (void *)a1[6];
    if ( a1[8] < v35 )
    {
      v39 = sub_1987B0(a1 + 6, a1[6], a1[4], 1);
      a1[6] = v39;
      v37 = (void *)v39;
    }
    a1[7] = v35;
    memmove(v37, v36, v35 - 1);
    *(_BYTE *)(a1[6] + v35 - 1) = 0;
    v38 = a1[4] == 0;
    *((_BYTE *)a1 + 161) = 0;
    if ( !v38 )
      goto LABEL_52;
  }
  else
  {
    a1[7] = 0;
    *((_BYTE *)a1 + 161) = 0;
  }
  v23 = s1;
LABEL_24:
  v24 = (const char *)sub_195A60(v23);
  if ( v24 && !strcasecmp(v24, "idb") )
  {
    v25 = ptr;
    if ( v43.m128i_i64[1] <= 6uLL )
    {
      ptr = (void *)sub_1987B0(&ptr, ptr, 7, 1);
      v25 = ptr;
    }
    v43.m128i_i64[0] = 7;
    *(_DWORD *)v25 = 1668246563;
    v25[2] = 27745;
    *((_BYTE *)ptr + 6) = 0;
    goto LABEL_29;
  }
LABEL_19:
  if ( ptr )
  {
    v43.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v7;
}
