__m128i *__fastcall sub_2CEBD0(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // bl
  __m128i *v6; // rax
  __m128i *v7; // r12
  int v8; // ebp
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int32 v11; // r13d
  int v12; // eax
  __int64 v13; // rbx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v19; // r13
  int v20; // eax
  _BYTE *v21; // rax
  char v22; // dl
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rdx
  _QWORD *exception; // rdi
  __int64 v28; // [rsp+8h] [rbp-88h]
  int v29; // [rsp+10h] [rbp-80h]
  bool v30; // [rsp+16h] [rbp-7Ah]
  char v31; // [rsp+17h] [rbp-79h]
  const __m128i *v32; // [rsp+20h] [rbp-70h] BYREF
  __m128i v33; // [rsp+28h] [rbp-68h] BYREF
  __m128i v34; // [rsp+38h] [rbp-58h] BYREF
  __int64 v35; // [rsp+48h] [rbp-48h]
  unsigned __int64 v36; // [rsp+50h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v4 = (unsigned __int8 *)*a3;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)a4);
  if ( (unsigned __int64)v4 >= a4 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *v4;
    v33.m128i_i64[0] = (__int64)(v4 + 1);
    if ( v5 > 2u )
      return nullptr;
  }
  v6 = (__m128i *)qalloc();
  v7 = v6;
  if ( !v6 )
    sub_4E45E(16);
  v6->m128i_i64[0] = 0;
  v6->m128i_i64[1] = 0;
  v30 = v5 == 1;
  v8 = 0;
  v29 = unpack_dd();
  if ( v29 <= 0 )
    goto LABEL_21;
LABEL_11:
  while ( 2 )
  {
    v13 = sub_32D380(&v33, *(_QWORD *)(a1 + 8));
    if ( v33.m128i_i64[0] < (unsigned __int64)v33.m128i_i64[1] )
    {
      v9 = v33.m128i_i64[0] + 1;
      v10 = *(_BYTE *)v33.m128i_i64[0]++;
      if ( v10 > 0x54u )
        goto LABEL_22;
      if ( v10 <= 0x44u || (v11 = (char)(v10 + 1), !v30) )
        v11 = v10;
      v12 = unpack_dd();
      if ( !v12 )
        goto LABEL_10;
    }
    else
    {
      v11 = 0;
      v12 = unpack_dd();
      if ( !v12 )
        goto LABEL_10;
    }
    v34.m128i_i64[0] = v13;
    v14 = &v34;
    v34.m128i_i32[2] = v11;
    LODWORD(v35) = v12;
    v15 = v7->m128i_i64[0];
    v32 = &v34;
    if ( v15 )
    {
      if ( !v7->m128i_i64[1] )
        goto LABEL_15;
      v19 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v22 = 1;
LABEL_33:
        sub_2CE540(v7, (unsigned __int64 *)v15, v22, &v32);
        goto LABEL_10;
      }
      v31 = 1;
      while ( 1 )
      {
        v28 = (__int64)v14;
        v20 = sub_2533F0((__int64)v14, v19 + 24);
        v14 = (__m128i *)v28;
        if ( v20 >= 0 )
        {
          if ( (int)sub_2533F0(v19 + 24, v28) >= 0 )
          {
            if ( !v19 )
            {
LABEL_30:
              v22 = v31;
              v15 = v19;
              goto LABEL_33;
            }
LABEL_10:
            if ( v29 == ++v8 )
              goto LABEL_21;
            goto LABEL_11;
          }
          v21 = *(_BYTE **)(v19 + 16);
          v14 = (__m128i *)v28;
          v31 = 0;
        }
        else
        {
          v31 = 1;
          v21 = *(_BYTE **)(v19 + 8);
        }
        if ( (*v21 & 2) != 0 )
          goto LABEL_30;
        v19 = (unsigned __int64)v21;
      }
    }
    v23 = qalloc();
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
      goto LABEL_44;
    *(_OWORD *)(v23 + 16) = 0;
    *(_OWORD *)(v23 + 32) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v7->m128i_i64[0] = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
    *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
    v15 = v7->m128i_i64[0];
LABEL_15:
    v16 = qalloc();
    if ( !v16 )
    {
LABEL_44:
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)v16 = 0;
    *(__m128i *)(v16 + 24) = _mm_load_si128(&v34);
    *(_QWORD *)(v16 + 40) = v35;
    *(_QWORD *)v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = _mm_loadl_epi64(v7);
    *(_QWORD *)v16 = v15 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
    if ( v15 == v7->m128i_i64[0] )
    {
      *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
      *(_QWORD *)(v7->m128i_i64[0] + 8) = v16;
      *(_QWORD *)(v7->m128i_i64[0] + 16) = v16;
      v25 = *(_QWORD *)v16 & 2LL;
      *(_QWORD *)v16 &= ~1uLL;
      *(_QWORD *)v16 = v25 | v7->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      *(_QWORD *)(v15 + 8) = v16;
      if ( v15 == *(_QWORD *)(v7->m128i_i64[0] + 8) )
        *(_QWORD *)(v7->m128i_i64[0] + 8) = v16;
      sub_258D00(v7, (__int64 *)v16);
    }
    ++v7->m128i_i64[1];
    if ( v29 != ++v8 )
      continue;
    break;
  }
LABEL_21:
  v9 = v33.m128i_i64[0];
LABEL_22:
  *a3 = v9;
  return v7;
}

