__int64 __fastcall sub_3FCA50(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  signed int dtype_size; // eax
  unsigned int v8; // r14d
  int *v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // r15d
  __int64 sp_delta; // r13
  __int64 v13; // r14
  unsigned __int8 dtype_by_size; // al
  char *v15; // rbx
  char *v16; // rdi
  int v18; // eax
  int v19; // eax
  int *v20; // r15
  unsigned int v21; // r14d
  int v22; // r10d
  unsigned int v23; // r15d
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  int v28; // eax
  __int64 v29; // r12
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+Ch] [rbp-B4h]
  __int64 v33; // [rsp+10h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-B0h]
  int v35; // [rsp+24h] [rbp-9Ch]
  int v36; // [rsp+28h] [rbp-98h]
  unsigned __int8 v37; // [rsp+28h] [rbp-98h]
  unsigned __int8 v38; // [rsp+38h] [rbp-88h]
  signed int v39; // [rsp+40h] [rbp-80h]
  __int64 v40; // [rsp+48h] [rbp-78h]
  _DWORD v41[4]; // [rsp+50h] [rbp-70h] BYREF
  _DWORD v42[4]; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int8 v43[24]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL) + 56LL);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCC2Bu, *(double *)a3.m128i_i64);
    BUG();
  }
  v5 = *(_QWORD *)(v40 + 832);
  v6 = *(int *)(v5 + 388);
  dtype_size = get_dtype_size();
  v8 = *(_DWORD *)(a2 + 8);
  v39 = dtype_size;
  if ( v8 - 22 <= 2 )
  {
    v18 = get_dtype_size();
    sub_1D6310(v40, v8, v18, 8, v6, 8, *(double *)a3.m128i_i64, 0);
    v19 = get_dtype_size();
    sub_1D6310(v40, 0x3Du, v19, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v6, *(double *)a3.m128i_i64, 0);
  }
  else
  {
    v9 = *(int **)(v40 + 832);
    v10 = v9[20];
    v38 = *(_BYTE *)(a2 + 12);
    get_dtype_by_size();
    sub_3F7E20(v40, 2u, v38, v9[14], v9[15], 8, a3, a4, a5, v10);
    v41[0] = 1;
    v41[2] = 8;
    v41[1] = v39;
    v42[0] = 1;
    v42[2] = 8;
    v42[1] = get_dtype_size();
    if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
    {
      sub_1D6450(v40, *(unsigned int *)(a2 + 8), (unsigned __int8 *)v41, nullptr, (unsigned __int8 *)v42, a3, a4, a5);
    }
    else
    {
      v37 = *(_BYTE *)(a2 + 12);
      v35 = *(_DWORD *)(v5 + 464);
      v20 = *(int **)(v40 + 832);
      v21 = v20[20];
      get_dtype_by_size();
      v22 = v20[15];
      if ( v39 )
      {
        v32 = v20[15];
        v33 = v20[114];
        v27 = get_dtype_size();
        sub_1D6310(v40, 3u, v27, v39, 0x3BEA45E214ADDC55LL, v33, *(double *)a3.m128i_i64, 0);
        v34 = v20[114];
        v28 = get_dtype_size();
        sub_1D6310(v40, 0xCu, v28, v34, v32, v34, *(double *)a3.m128i_i64, 0);
        v22 = v20[114];
      }
      sub_3F7E20(v40, 2u, v37, v20[14], v22, v35, a3, a4, a5, v21);
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
      {
        v23 = 18;
        if ( *(_DWORD *)(a2 + 8) == 15 )
          v23 = 17;
        v24 = *(int *)(v5 + 464);
        v25 = get_dtype_size();
        sub_1D6310(v40, v23, v25, 8, v24, v6, *(double *)a3.m128i_i64, 0);
      }
      v26 = *(unsigned int *)(a2 + 8);
      a4 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v5 + 464));
      *(_DWORD *)v43 = 1;
      a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), (__m128i)a4);
      *(_QWORD *)&v43[4] = a3.m128i_i64[0];
      sub_1D6450(v40, v26, (unsigned __int8 *)v41, v43, (unsigned __int8 *)v42, a3, a4, a5);
      sub_11CDA0((__int64)v43);
    }
    v11 = *(_DWORD *)(v5 + 80);
    get_item_end();
    sub_1CE9E0(*(_QWORD *)(v40 + 8));
    sp_delta = get_sp_delta();
    get_dtype_by_size();
    v13 = *(int *)(v5 + 60);
    if ( sp_delta )
    {
      v29 = *(int *)(v5 + 456);
      v30 = get_dtype_size();
      sub_1D6310(v40, 3u, v30, sp_delta, 0x3BEA45E214ADDC55LL, v29, *(double *)a3.m128i_i64, 0);
      v31 = get_dtype_size();
      sub_1D6310(v40, 0xCu, v31, v13, v13, v13, *(double *)a3.m128i_i64, 0);
    }
    else
    {
      v36 = *(_DWORD *)(v5 + 456);
      dtype_by_size = get_dtype_by_size();
      v15 = (char *)sub_3F7E20(v40, 2u, dtype_by_size, *(int *)(v5 + 56), (int)v13, v36, a3, a4, a5, v11);
      sub_12B6F0((__int64)v15, (unsigned __int64 *)v5, 61, -1, 1, a3);
      v16 = v15 + 64;
      v15 += 32;
      sub_11CA10(v16, v15);
      sub_11CDA0((__int64)v15);
    }
    sub_11CDA0((__int64)v42);
    sub_11CDA0((__int64)v41);
  }
  return 0;
}

