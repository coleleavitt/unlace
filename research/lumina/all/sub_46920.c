unsigned __int64 __fastcall sub_46920(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r13
  void *v4; // rax
  size_t v5; // r15
  void *v6; // r12
  __int64 v7; // r13
  char *v8; // rbp
  char *v9; // rbx
  char *v10; // r14
  char v11; // r14
  __int64 v12; // rbx
  char *v13; // rdx
  void *v14; // rdi
  void *v15; // rdi
  __m128i v16; // xmm0
  void *v17; // rdx
  __m128i v18; // xmm1
  char *v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64); // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  const char *v33; // rdx
  const void *v34; // r13
  void *v35; // rax
  const char *v36; // rcx
  const char *v37; // rsi
  void *ptr; // [rsp+18h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+20h] [rbp-B0h] BYREF
  void *v41; // [rsp+38h] [rbp-98h] BYREF
  __int128 v42; // [rsp+40h] [rbp-90h]
  void *dest; // [rsp+58h] [rbp-78h] BYREF
  __int128 v44; // [rsp+60h] [rbp-70h]
  void *v45; // [rsp+78h] [rbp-58h] BYREF
  __int128 v46; // [rsp+80h] [rbp-50h]
  unsigned __int64 v47; // [rsp+90h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  ptr = nullptr;
  v41 = nullptr;
  v40 = 0;
  v42 = 0;
  if ( !(unsigned __int8)sub_195B20(&v41, 0) || v41 == &ptr )
    goto LABEL_7;
  v2 = *((_QWORD *)v41 + 1);
  if ( v2 >= 2 )
  {
    v3 = *(const void **)v41;
    v4 = ptr;
    if ( v40.m128i_i64[1] < v2 )
    {
      v4 = (void *)sub_1987B0(&ptr, ptr, v2, 1);
      ptr = v4;
    }
    v40.m128i_i64[0] = v2;
    memmove(v4, v3, v2 - 1);
    *((char *)ptr + v2 - 1) = 0;
LABEL_7:
    v5 = *(_QWORD *)(a2 + 40);
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_10;
  }
  v40.m128i_i64[0] = 0;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_8;
LABEL_10:
  v6 = (void *)sub_198760(v5);
  memcpy(v6, *(const void **)(a2 + 32), v5);
  if ( v5 == 1 )
LABEL_8:
    sub_2F260((__int64)"The license is not valid");
  v45 = nullptr;
  v46 = 0;
  sub_195B20(&v45, 1);
  v7 = v46;
  v8 = (char *)v45;
  v9 = (char *)v45 + 24 * v46;
  if ( v45 == v9 )
  {
    if ( !v45 )
      goto LABEL_39;
    v11 = 0;
    if ( (_QWORD)v46 )
      goto LABEL_18;
    goto LABEL_38;
  }
  v10 = (char *)v45;
  while ( *((_QWORD *)v10 + 1) <= 1u || strcasecmp(*(const char **)v10, (const char *)v6) )
  {
    v10 += 24;
    if ( v9 == v10 )
    {
      if ( !v8 )
        goto LABEL_39;
      v11 = 0;
      if ( v7 )
      {
LABEL_18:
        v12 = 0;
        do
        {
          v13 = &v8[24 * v12];
          v14 = *(void **)v13;
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            j__free(v14);
            v8 = (char *)v45;
          }
          ++v12;
        }
        while ( v7 != v12 );
        *(_QWORD *)&v46 = 0;
        j__free(v8);
        if ( v11 )
          goto LABEL_23;
LABEL_39:
        v25 = v42;
        v26 = 0;
        if ( (_QWORD)v42 )
        {
          do
          {
            v27 = (char *)v41 + 24 * v26;
            v28 = *(void **)v27;
            if ( *(_QWORD *)v27 )
            {
              *((_QWORD *)v27 + 1) = 0;
              j__free(v28);
            }
            ++v26;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v42 = 0;
        sub_195B20(&v41, 1);
        dest = nullptr;
        v44 = 0;
        v29 = sub_2FCC0();
        if ( v29 )
        {
          v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL);
          v31 = v30 == sub_464D0 ? v29 + 40 : v30(v29);
          if ( &dest != (void **)(v31 + 40) )
          {
            v32 = *(_QWORD *)(v31 + 48);
            if ( v32 <= 1 )
            {
              *(_QWORD *)&v44 = 0;
              goto LABEL_49;
            }
            v34 = *(const void **)(v31 + 40);
            v35 = dest;
            if ( *((_QWORD *)&v44 + 1) < v32 )
            {
              v35 = (void *)sub_1987B0(&dest, dest, v32, 1);
              dest = v35;
            }
            *(_QWORD *)&v44 = v32;
            memmove(v35, v34, v32 - 1);
            *((char *)dest + v32 - 1) = 0;
          }
        }
        if ( (unsigned __int64)v44 <= 1 )
        {
LABEL_49:
          sub_464E0((__int64 *)&v45, (__int64 *)&v41, ",");
          v33 = s1;
          if ( (_QWORD)v46 )
            v33 = (const char *)v45;
          sub_2F260(
            (__int64)"The license has been activated for another mac address: \"%s\" (found: \"%s\")",
            (const char *)v6,
            v33);
        }
        sub_464E0((__int64 *)&v45, (__int64 *)&v41, ",");
        v36 = s1;
        if ( (_QWORD)v46 )
        {
          v36 = (const char *)v45;
          v37 = s1;
          if ( (_QWORD)v44 )
            goto LABEL_62;
        }
        else
        {
          v37 = s1;
          if ( !(_QWORD)v44 )
            goto LABEL_61;
LABEL_62:
          v37 = (const char *)dest;
        }
LABEL_61:
        sub_2F260(
          (__int64)"The license file \"%s\" has been activated for another mac address: \"%s\" (found: \"%s\")",
          v37,
          (const char *)v6,
          v36);
      }
      *(_QWORD *)&v46 = 0;
LABEL_38:
      j__free(v8);
      goto LABEL_39;
    }
  }
  if ( v8 )
  {
    v11 = 1;
    if ( v7 )
      goto LABEL_18;
    *(_QWORD *)&v46 = 0;
    j__free(v8);
  }
LABEL_23:
  v15 = ptr;
  if ( v40.m128i_i64[1] < v5 )
  {
    ptr = (void *)sub_1987B0(&ptr, ptr, v5, 1);
    v15 = ptr;
  }
  v40.m128i_i64[0] = v5;
  memmove(v15, v6, v5 - 1);
  *((char *)ptr + v5 - 1) = 0;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v17 = ptr;
  v18 = _mm_loadu_si128(&v40);
  ptr = *(void **)a1;
  *(_QWORD *)a1 = v17;
  *(__m128i *)(a1 + 8) = v18;
  v40 = v16;
  if ( v6 )
    j__free(v6);
  v19 = (char *)v41;
  if ( v41 )
  {
    v20 = v42;
    if ( (_QWORD)v42 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          j__free(v23);
          v19 = (char *)v41;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v42 = 0;
    j__free(v19);
  }
  if ( ptr )
  {
    v40.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v47 - __readfsqword(0x28u);
}
