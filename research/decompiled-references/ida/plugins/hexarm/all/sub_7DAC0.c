__int64 __fastcall sub_7DAC0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  int v5; // eax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v17; // rax
  char *v18; // rax
  char v19; // dl
  __int64 *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rax
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // [rsp+Eh] [rbp-5Ah]
  char v34; // [rsp+Fh] [rbp-59h]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v3 = (__int64 *)a2;
  v36 = __readfsqword(0x28u);
  v5 = sub_7CF30((_QWORD *)a2);
  if ( v5 < 0 )
    return 0;
  v6 = a1[1];
  v7 = v5;
  if ( v5 != v6 )
  {
    v35 = 0;
    if ( v5 >= v6 )
    {
      v8 = (__int64 *)*a1;
      v9 = a1[2];
      if ( (unsigned __int64)&v35 < *a1 || &v35 >= (__m128i *)&v8[2 * v9] )
      {
        if ( v9 < v7 )
        {
          v3 = a1;
          v17 = qvector_reserve();
          v6 = a1[1];
          *a1 = v17;
          v8 = (__int64 *)v17;
          if ( v6 >= v7 )
            goto LABEL_29;
        }
        v10 = _mm_load_si128(&v35);
        while ( 1 )
        {
          v11 = v6++;
          *(__m128i *)&v8[2 * v11] = v10;
          if ( v7 == v6 )
            break;
          v8 = (__int64 *)*a1;
        }
      }
      else
      {
        if ( v9 < v7 )
        {
          v3 = a1;
          v32 = qvector_reserve();
          v6 = a1[1];
          *a1 = v32;
          v8 = (__int64 *)v32;
          if ( v6 >= v7 )
          {
LABEL_29:
            a1[1] = v7;
            v6 = v7;
            if ( *(_DWORD *)(a2 + 48) > 3u )
              goto LABEL_30;
            goto LABEL_10;
          }
        }
        while ( 1 )
        {
          v21 = v6++;
          *(_OWORD *)&v8[2 * v21] = 0;
          if ( v7 == v6 )
            break;
          v8 = (__int64 *)*a1;
        }
      }
      a1[1] = v6;
      if ( *(_DWORD *)(a2 + 48) > 3u )
        goto LABEL_30;
LABEL_10:
      v12 = (_QWORD *)*a1;
      v13 = 0;
      v14 = *a1 + 16 * v6;
      if ( *a1 == v14 )
        return 1;
      while ( 1 )
      {
        if ( (unsigned __int8)is_cvt64() )
        {
          if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
            goto LABEL_54;
          v3 = (__int64 *)a2;
          *v12 = v13 + (int)unpack_dd();
          if ( (unsigned __int8)is_cvt64() )
          {
LABEL_14:
            if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
LABEL_54:
              sub_79F50(v3);
            v3 = (__int64 *)a2;
            v15 = (int)unpack_dd();
            goto LABEL_16;
          }
        }
        else
        {
          v3 = (__int64 *)a2;
          *v12 = v13 + sub_7C780(a2);
          if ( (unsigned __int8)is_cvt64() )
            goto LABEL_14;
        }
        v3 = (__int64 *)a2;
        v15 = sub_7C780(a2);
LABEL_16:
        v12[1] = v15;
        v13 = *v12 + v15;
        v12 += 2;
        if ( (_QWORD *)v14 == v12 )
          return 1;
      }
    }
    a1[1] = v5;
    v6 = v5;
  }
  if ( *(_DWORD *)(a2 + 48) <= 3u )
    goto LABEL_10;
  if ( !v6 )
    return 1;
LABEL_30:
  v18 = *(char **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_79F30(v3);
  v19 = *v18;
  *(_QWORD *)a2 = v18 + 1;
  v20 = (__int64 *)*a1;
  v33 = v19;
  v34 = v19 & 1;
  if ( (v19 & 1) == 0 )
  {
    v22 = v6 - 1;
    v23 = 0;
    v24 = sub_7CA00(a2, 0);
    *v20 = v24;
    if ( v6 != 1 )
      goto LABEL_42;
    goto LABEL_48;
  }
  *v20 = 0;
  if ( v6 != 1 )
  {
    v23 = 1;
    v31 = sub_7CA00(a2, 0);
    v20[1] = v31;
    v27 = v31;
    while ( 1 )
    {
      v28 = *a1;
      v29 = sub_7C900((_QWORD *)a2);
      if ( !v29 )
        break;
      v30 = __CFADD__(v27, v29);
      v24 = v27 + v29;
      if ( v30 )
        break;
      v22 = v6 - 1;
      v20 = (__int64 *)(16 * v23 + v28);
      *v20 = v24;
      if ( v6 - 1 == v23 )
      {
LABEL_48:
        if ( (v33 & 2) != 0 )
        {
          v20[1] = ~v24;
          return 1;
        }
      }
LABEL_42:
      v25 = sub_7C900((_QWORD *)a2);
      if ( !v25 )
        return 0;
      v26 = *v20 + v25;
      if ( __CFADD__(*v20, v25) && (v23 || !v34) && (v22 != v23 || (v33 & 2) == 0) )
        return 0;
      ++v23;
      v20[1] = v25;
      v27 = v26;
      if ( v23 == v6 )
        return 1;
    }
    return 0;
  }
  if ( (v19 & 2) == 0 )
  {
    v20[1] = sub_7CA00(a2, 0);
    return 1;
  }
  v20[1] = -1;
  return 1;
}

