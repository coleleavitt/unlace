__int64 *__fastcall sub_1B3410(unsigned __int64 *a1, __int64 *a2)
{
  __int64 module_data; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  int v5; // r14d
  __int64 v6; // rbp
  unsigned __int64 v7; // r10
  __int64 i; // r13
  __int64 v9; // r12
  __int64 v10; // r8
  __m128i v11; // xmm1
  __int64 *result; // rax
  unsigned __int64 v13; // r11
  char *v14; // r12
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  unsigned __int64 v19; // [rsp+10h] [rbp-58h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  module_data = get_module_data();
  v3 = *a1;
  if ( !*(_QWORD *)(module_data + 1344) )
    return sub_FAAD0(a2);
  v4 = module_data;
  v5 = 1;
  v6 = 0;
  v7 = a1[1] + v3;
  for ( i = *(_QWORD *)(module_data + 1344); ; i = *(_QWORD *)(v4 + 1344) )
  {
    v9 = 32LL * (int)v6;
    v10 = i + v9 + 528;
    v11 = _mm_loadu_si128((const __m128i *)(i + v9 + 536));
    result = (__int64 *)_mm_add_epi64(_mm_srli_si128(v11, 8), v11).m128i_u64[0];
    if ( v3 >= (unsigned __int64)result )
      goto LABEL_15;
    result = (__int64 *)v11.m128i_i64[0];
    v13 = v11.m128i_i64[0];
    if ( v7 <= v11.m128i_i64[0] )
      v13 = v7;
    if ( v3 >= v13 )
      break;
    v24 = v7;
    v23 = v4;
    v19 = v13;
    sub_FAAD0(a2);
    if ( v19 != -1 )
    {
      sub_FAAD0(a2);
      if ( v19 - v3 > 0xC )
      {
        v3 = v19;
        v7 = v24;
        result = *(__int64 **)(i + v9 + 536);
        v4 = v23;
        v10 = i + v9 + 528;
      }
      else
      {
        v3 = v19;
        v10 = i + v9 + 528;
        result = *(__int64 **)(i + v9 + 536);
        v4 = v23;
        v7 = v24;
      }
      break;
    }
    sub_FAAD0(a2);
    v7 = v24;
    v4 = v23;
    result = *(__int64 **)(i + v9 + 536);
    if ( (unsigned __int64)result >= v24 )
      return result;
    v3 = -1;
    if ( v6 != 5 )
      goto LABEL_10;
LABEL_15:
    ++v5;
    ++v6;
    if ( v5 == 7 )
      goto LABEL_19;
LABEL_16:
    ;
  }
  if ( (unsigned __int64)result >= v7 )
    goto LABEL_19;
  if ( (__int64 *)v3 != result || v7 < v3 + *(_QWORD *)(i + 32LL * (int)v6 + 544) )
  {
    if ( v6 != 5 )
    {
LABEL_10:
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 1344) + 32LL * v5 + 536) < v3 )
        goto LABEL_15;
    }
    v14 = (char *)result + *(_QWORD *)(i + 32LL * (int)v6 + 544);
    if ( (unsigned __int64)v14 > v7 )
      v14 = (char *)v7;
    if ( *(_QWORD *)(32LL * (int)v6 + i + 560) && v3 < (unsigned __int64)v14 )
    {
      v21 = v7;
      v18 = v4;
      sub_FAAD0(a2);
      v16 = _mm_loadu_si128((const __m128i *)(i + 32 * v6 + 536));
      if ( (char *)_mm_add_epi64(_mm_srli_si128(v16, 8), v16).m128i_i64[0] == v14 || (unsigned __int64)&v14[-v3] <= 0xC )
      {
        result = sub_FAAD0(a2);
        v4 = v18;
        v7 = v21;
      }
      else
      {
        result = sub_FAAD0(a2);
        v7 = v21;
        v4 = v18;
      }
      v3 = (unsigned __int64)v14;
    }
    goto LABEL_15;
  }
  v22 = v7;
  v20 = v4;
  ++v5;
  v17 = v10;
  ++v6;
  result = sub_FAAD0(a2);
  v4 = v20;
  v7 = v22;
  v15 = _mm_loadu_si128((const __m128i *)(v17 + 8));
  v3 = _mm_add_epi64(v15, _mm_srli_si128(v15, 8)).m128i_u64[0];
  if ( v5 != 7 )
    goto LABEL_16;
LABEL_19:
  if ( v3 < v7 )
  {
    sub_FAAD0(a2);
    return sub_FAAD0(a2);
  }
  return result;
}

