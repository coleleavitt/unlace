__int64 __fastcall sub_986B0(__int64 a1)
{
  char v3; // al
  void *v4; // rdi
  __int64 v5; // rax
  const char *v6; // rbp
  __int64 v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  void *v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  void *v16; // rdi
  size_t v17; // r14
  const void *v18; // r14
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // r12
  int v25; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v26; // [rsp+10h] [rbp-68h] BYREF
  char v27; // [rsp+18h] [rbp-60h]
  char *s[2]; // [rsp+20h] [rbp-58h] BYREF
  void *dest; // [rsp+30h] [rbp-48h] BYREF
  __m128i v30; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 0x10) == 0 )
  {
    s[0] = nullptr;
    if ( (unsigned __int16)sub_94680((__int64 *)a1, 3) == 7969 )
    {
      v7 = a1 + 40;
      s[0] = (char *)sub_956A0((__int64 *)a1, 3u);
      v6 = s[0];
      if ( s[0] )
      {
LABEL_14:
        v8 = strlen(v6);
        v9 = v8;
        if ( v8 )
        {
          v16 = *(void **)(a1 + 40);
          v17 = v8 + 1;
          if ( *(_QWORD *)(a1 + 56) < v8 + 1 )
          {
            v20 = qvector_reserve(v7, *(_QWORD *)(a1 + 40), v8 + 1, 1);
            *(_QWORD *)(a1 + 40) = v20;
            v16 = (void *)v20;
          }
          *(_QWORD *)(a1 + 48) = v17;
          memmove(v16, v6, v9);
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + v9) = 0;
          v6 = s[0];
          goto LABEL_17;
        }
        v6 = s[0];
LABEL_16:
        *(_QWORD *)(a1 + 48) = 0;
LABEL_17:
        if ( *v6 != 60 && strchr(v6, 60) )
          sub_806F0(v7, ", ", ",");
      }
    }
    else
    {
      v5 = *(_QWORD *)a1;
      dest = nullptr;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, char **, void **))(*(_QWORD *)(a1 + 256) + 96LL))(
              *(_QWORD *)(v5 + 24),
              s,
              &dest) )
      {
        v6 = s[0];
        v7 = a1 + 40;
        if ( !s[0] )
          goto LABEL_16;
        goto LABEL_14;
      }
    }
    *(_DWORD *)(a1 + 212) |= 0x10u;
  }
  if ( *(_QWORD *)(a1 + 48) <= 1u )
    return *(_QWORD *)(a1 + 40);
  dest = nullptr;
  v30 = 0;
  if ( (unsigned __int16)sub_97BF0(a1) == 36
    || (unsigned __int16)sub_97BF0(a1) == 22
    || (v13 = sub_97BF0(a1), (unsigned __int16)v13 <= 0x17u) && (v14 = 8912900, _bittest64(&v14, v13))
    || (unsigned __int16)sub_97BF0(a1) == 4
    || (unsigned __int16)sub_97BF0(a1) == 36
    && (v21 = *(_QWORD *)a1,
        s[0] = nullptr,
        v27 = 0,
        v22 = *(_QWORD *)(v21 + 24),
        v23 = *(_QWORD *)(a1 + 256),
        v26 = 0,
        v25 = 0,
        !(*(unsigned int (__fastcall **)(__int64, __int64, int *, char **))(v23 + 112))(v22, 62, &v25, s))
    && v25
    && (*(_OWORD *)s = 0,
        sub_95870((__int64 *)a1, (__m128i *)s, 0x3Eu),
        v24 = sub_96D10(a1, (__int64)&v26, (__int64 *)s),
        sub_84A10(s),
        v24)
    && v26 == 3
    || (unsigned __int16)sub_97BF0(a1) == 30
    || (unsigned __int16)sub_97BF0(a1) == 57 )
  {
    v3 = sub_97CA0((__int64)&dest, *(const char **)(a1 + 40), (_QWORD *)a1);
LABEL_7:
    v4 = dest;
    if ( v3 )
    {
      v10 = *(void **)(a1 + 40);
      v11 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 40) = dest;
      v12 = _mm_loadu_si128(&v30);
      dest = v10;
      v4 = v10;
      v30.m128i_i64[1] = v11;
      *(__m128i *)(a1 + 48) = v12;
    }
    goto LABEL_9;
  }
  if ( (unsigned __int16)sub_97BF0(a1) == 13 || (unsigned __int16)sub_97BF0(a1) == 40 )
  {
    v15 = *(_QWORD *)(a1 + 48);
    if ( v15 > 1 )
    {
      v18 = *(const void **)(a1 + 40);
      v19 = dest;
      if ( v30.m128i_i64[1] < v15 )
      {
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 48), 1);
        v19 = dest;
      }
      v30.m128i_i64[0] = v15;
      memmove(v19, v18, v15 - 1);
      *((char *)dest + v15 - 1) = 0;
    }
    else
    {
      v30.m128i_i64[0] = 0;
    }
    v3 = validate_name(&dest, 2, 1);
    goto LABEL_7;
  }
  v4 = dest;
LABEL_9:
  if ( v4 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v4);
  }
  return *(_QWORD *)(a1 + 40);
}
