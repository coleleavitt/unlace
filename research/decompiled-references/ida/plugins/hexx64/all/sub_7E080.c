__int64 __fastcall sub_7E080(__int64 *a1, __int64 a2, __m128 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v15; // rax
  char *v16; // rax
  char v17; // dl
  _QWORD *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  bool v28; // cf
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // [rsp+Eh] [rbp-5Ah]
  char v32; // [rsp+Fh] [rbp-59h]
  __m128i v33; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v4 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
  if ( v4 < 0 )
    return 0;
  v5 = a1[1];
  v6 = v4;
  if ( v4 != v5 )
  {
    a3.m128_u64[0] = 0;
    v33 = 0;
    if ( v4 >= v5 )
    {
      v7 = *a1;
      v8 = a1[2];
      if ( (unsigned __int64)&v33 < *a1 || (unsigned __int64)&v33 >= v7 + 16 * v8 )
      {
        if ( v8 < v6 )
        {
          v15 = qvector_reserve((__int64)a1, v7, v6, 16);
          v5 = a1[1];
          *a1 = v15;
          v7 = v15;
          if ( v5 >= v6 )
            goto LABEL_29;
        }
        a3 = (__m128)_mm_load_si128(&v33);
        while ( 1 )
        {
          v9 = v5++;
          *(__m128 *)(v7 + 16 * v9) = a3;
          if ( v6 == v5 )
            break;
          v7 = *a1;
        }
      }
      else
      {
        if ( v8 < v6 )
        {
          v30 = qvector_reserve((__int64)a1, v7, v6, 16);
          v5 = a1[1];
          *a1 = v30;
          v7 = v30;
          if ( v5 >= v6 )
          {
LABEL_29:
            a1[1] = v6;
            v5 = v6;
            if ( *(_DWORD *)(a2 + 48) > 3u )
              goto LABEL_30;
            goto LABEL_10;
          }
        }
        a3.m128_u64[0] = 0;
        while ( 1 )
        {
          v19 = v5++;
          *(_OWORD *)(v7 + 16 * v19) = 0;
          if ( v6 == v5 )
            break;
          v7 = *a1;
        }
      }
      a1[1] = v5;
      if ( *(_DWORD *)(a2 + 48) > 3u )
        goto LABEL_30;
LABEL_10:
      v10 = (_QWORD *)*a1;
      v11 = 0;
      v12 = *a1 + 16 * v5;
      if ( *a1 == v12 )
        return 1;
      while ( 1 )
      {
        if ( (unsigned __int8)is_cvt64() )
        {
          if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
            goto LABEL_54;
          *v10 = v11 + (int)unpack_dd();
          if ( (unsigned __int8)is_cvt64() )
          {
LABEL_14:
            if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
LABEL_54:
              sub_7A510(*(double *)a3.m128_u64);
            v13 = (int)unpack_dd();
            goto LABEL_16;
          }
        }
        else
        {
          *v10 = v11 + sub_7CD40(a2, *(double *)a3.m128_u64);
          if ( (unsigned __int8)is_cvt64() )
            goto LABEL_14;
        }
        v13 = sub_7CD40(a2, *(double *)a3.m128_u64);
LABEL_16:
        v10[1] = v13;
        v11 = *v10 + v13;
        v10 += 2;
        if ( (_QWORD *)v12 == v10 )
          return 1;
      }
    }
    a1[1] = v4;
    v5 = v4;
  }
  if ( *(_DWORD *)(a2 + 48) <= 3u )
    goto LABEL_10;
  if ( !v5 )
    return 1;
LABEL_30:
  v16 = *(char **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_7A4F0(*(double *)a3.m128_u64);
  v17 = *v16;
  *(_QWORD *)a2 = v16 + 1;
  v18 = (_QWORD *)*a1;
  v31 = v17;
  v32 = v17 & 1;
  if ( (v17 & 1) == 0 )
  {
    v20 = v5 - 1;
    v21 = 0;
    v22 = sub_7CFC0(a2, 0, *(double *)a3.m128_u64);
    *v18 = v22;
    if ( v5 != 1 )
      goto LABEL_42;
    goto LABEL_48;
  }
  *v18 = 0;
  if ( v5 != 1 )
  {
    v21 = 1;
    v29 = sub_7CFC0(a2, 0, *(double *)a3.m128_u64);
    v18[1] = v29;
    v25 = v29;
    while ( 1 )
    {
      v26 = *a1;
      v27 = sub_7CEC0((_QWORD *)a2, *(double *)a3.m128_u64);
      if ( !v27 )
        break;
      v28 = __CFADD__(v25, v27);
      v22 = v25 + v27;
      if ( v28 )
        break;
      v20 = v5 - 1;
      v18 = (_QWORD *)(16 * v21 + v26);
      *v18 = v22;
      if ( v5 - 1 == v21 )
      {
LABEL_48:
        if ( (v31 & 2) != 0 )
        {
          v18[1] = ~v22;
          return 1;
        }
      }
LABEL_42:
      v23 = sub_7CEC0((_QWORD *)a2, *(double *)a3.m128_u64);
      if ( !v23 )
        return 0;
      v24 = *v18 + v23;
      if ( __CFADD__(*v18, v23) && (v21 || !v32) && (v20 != v21 || (v31 & 2) == 0) )
        return 0;
      ++v21;
      v18[1] = v23;
      v25 = v24;
      if ( v21 == v5 )
        return 1;
    }
    return 0;
  }
  if ( (v17 & 2) == 0 )
  {
    v18[1] = sub_7CFC0(a2, 0, *(double *)a3.m128_u64);
    return 1;
  }
  v18[1] = -1;
  return 1;
}

