void __fastcall sub_3E8E20(__int64 a1, unsigned __int8 a2, __int64 a3, int a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  int v19; // r13d
  unsigned __int64 i; // r15
  int v21; // eax
  unsigned int v22; // [rsp+1Ch] [rbp-7Ch]
  int v23; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int128 v24; // [rsp+30h] [rbp-68h] BYREF
  __m128i v25; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v26 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 832);
  if ( a4 < *(_DWORD *)(v6 + 488) || a4 > *(_DWORD *)(v6 + 500) )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE4u, a5);
LABEL_29:
    BUG();
  }
  v8 = *(_QWORD *)(v6 + 584);
  if ( !v8 )
    goto LABEL_27;
  v9 = *(int *)(*(_QWORD *)(v6 + 576) + 4 * v8 - 4);
  *(_QWORD *)(v6 + 584) = v8 - 1;
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
    0x3BEA45E214ADDC55LL,
    v9,
    a2);
  sub_3E8420(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v5, v9, v5, 0);
  if ( *(_BYTE *)(a3 + 1) != 9 )
  {
    if ( !under_debugger )
      sub_37CFE0(0x291Au, a5);
    goto LABEL_29;
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( !v10 )
    goto LABEL_6;
  v11 = bitcount();
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) * v11,
    0x3BEA45E214ADDC55LL,
    v9,
    a2);
  sub_3E8420(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v5, v9, v5, 0);
  v12 = *(_QWORD *)(a1 + 832);
  v13 = *(_QWORD *)(v12 + 584);
  if ( !v13 )
LABEL_27:
    sub_3E4140(a5);
  v14 = *(int *)(*(_QWORD *)(v12 + 576) + 4 * v13 - 4);
  *(_QWORD *)(v12 + 584) = v13 - 1;
  v15 = *(_QWORD *)(a1 + 832);
  v22 = v14;
  v16 = *(int *)(v15 + 60);
  v17 = *(_DWORD *)(v15 + 84);
  if ( a2 )
    sub_3E8420(a1, 4u, v17, v16, 0x3BEA45E214ADDC55LL, v14, 0);
  else
    sub_3E8420(a1, 0xCu, v17, v16, v5, v14, 0);
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
    0x3BEA45E214ADDC55LL,
    v9,
    a2);
  v24 = 0;
  v18 = operator new(0x18u);
  *(_QWORD *)v18 = a1;
  *(_BYTE *)(v18 + 8) = a2;
  *(_QWORD *)&v24 = v18;
  *(_QWORD *)(v18 + 12) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v9)).m128i_u64[0];
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BD3C0), (__m128i)(unsigned __int64)sub_3E8580);
  v19 = bitcountr_zero();
  for ( i = v10 >> v19; i; i >>= 1 )
  {
    while ( (i & 1) == 0 )
    {
      ++v19;
      i >>= 1;
    }
    if ( v19 > 31 )
      v21 = -1;
    else
      v21 = v19;
    v23 = v21;
    if ( !v25.m128i_i64[0] )
      std::__throw_bad_function_call();
    if ( ((unsigned int (__fastcall *)(__int128 *, int *))v25.m128i_i64[1])(&v24, &v23) )
      break;
    ++v19;
  }
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v22);
LABEL_6:
  sub_3E8420(
    a1,
    a2 + 12,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
    v5,
    *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
    0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v9);
}

