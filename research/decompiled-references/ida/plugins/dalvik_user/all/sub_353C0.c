__int64 __fastcall sub_353C0(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  _QWORD *v5; // r15
  __int64 func; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 regvar; // rax
  const void *v11; // r12
  unsigned __int64 v12; // rbx
  const void *v13; // r13
  void *v14; // rdi
  size_t v16; // rax
  size_t v17; // rbx
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __m128i v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v3 = sub_135E0(a1, a2);
  v4 = _mm_loadu_si128(a1 + 1);
  LOBYTE(v24) = 1;
  v5 = (_QWORD *)(v3 + 1040);
  v26 = 0;
  v23 = -1;
  v25 = v4;
  if ( !(unsigned __int8)sub_2CA10((_QWORD *)(v3 + 1040), &v23, &v24) )
    goto LABEL_9;
  func = get_func();
  v7 = a1[2].m128i_i64[0];
  if ( !func )
    goto LABEL_10;
  v8 = a1[1].m128i_i64[1];
  v9 = a1[1].m128i_u64[0];
  v24 = 0;
  v25 = 0;
  v22 = v8;
  qmutex_lock();
  if ( !sub_2C930(v5, v9, v22) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  qmutex_unlock();
  sub_13B20(&v24);
  regvar = find_regvar();
  if ( !regvar || (v11 = *(const void **)(regvar + 24)) == nullptr )
  {
    if ( v24 )
    {
      v25.m128i_i64[0] = 0;
      qfree();
    }
LABEL_9:
    v7 = a1[2].m128i_i64[0];
LABEL_10:
    if ( a2 != v7 + 8 )
    {
      v12 = *(_QWORD *)(v7 + 16);
      if ( v12 < 2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
      else
      {
        v13 = *(const void **)(v7 + 8);
        v14 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v12 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)a2 = v20;
          v14 = (void *)v20;
        }
        *(_QWORD *)(a2 + 8) = v12;
        memmove(v14, v13, v12 - 1);
        *(_BYTE *)(*(_QWORD *)a2 + v12 - 1) = 0;
      }
    }
    return 1;
  }
  v16 = strlen(*(const char **)(regvar + 24));
  v17 = v16;
  if ( v16 )
  {
    v18 = *(void **)a2;
    v19 = v16 + 1;
    if ( *(_QWORD *)(a2 + 16) < v16 + 1 )
    {
      v21 = qvector_reserve();
      *(_QWORD *)a2 = v21;
      v18 = (void *)v21;
    }
    *(_QWORD *)(a2 + 8) = v19;
    memmove(v18, v11, v17);
    *(_BYTE *)(*(_QWORD *)a2 + v17) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

