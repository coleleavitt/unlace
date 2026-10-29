unsigned __int64 __fastcall sub_3F1D20(__int64 a1, unsigned __int8 a2, int a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  signed int v9; // r15d
  int dtype_size; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  signed int v14; // r14d
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  __int64 v23; // [rsp+18h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-68h]
  int v25; // [rsp+2Ch] [rbp-64h]
  unsigned __int8 v26[16]; // [rsp+30h] [rbp-60h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 832);
  v6 = *(_QWORD *)(v5 + 4464);
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 4456) + 4 * v6 - 4);
  *(_QWORD *)(v5 + 4464) = v6 - 1;
  v8 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v8 = 7;
  v9 = v7;
  sub_3E9CF0(a1, 0, v8, v7);
  v23 = a3;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 4u, dtype_size, v9, 0x3BEA45E214ADDC55LL, a3, 0);
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
LABEL_16:
    sub_3E6800(a4);
  v13 = 31;
  v14 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_QWORD *)v26 = 1;
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  v15 = *(_QWORD *)(a1 + 832);
  v27[0] = 0xFFFFFFFF00000000LL;
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 80));
  LODWORD(v15) = *(_DWORD *)(v15 + 472);
  v27[1] = 0;
  v25 = v15;
  v17 = 7;
  *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v14)).m128i_u64[0];
  do
  {
    while ( 1 )
    {
      v18 = a2;
      if ( _bittest(&v18, v17) )
        break;
      --v17;
      v25 += 4;
      v13 -= 4;
      if ( v17 == -1 )
        goto LABEL_15;
    }
    v19 = v13;
    v24 = v25 + 4;
    do
    {
      v20 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        v20 = 7;
      sub_1D2C40(a1, 0, v20, v25, v14, 0);
      if ( (_DWORD)v19 )
      {
        sub_11CFD0((__int64)v27, *(_QWORD *)(a1 + 832), v19, 1, *(_QWORD *)(a1 + 40), 0);
        sub_1D2850(a1, 22, v26, (unsigned __int8 *)v27, v26);
      }
      v21 = get_dtype_size();
      sub_1D2710(a1, 0x13u, v21, v23, v14, v23, 0);
      --v19;
      ++v25;
    }
    while ( v25 != v24 );
    --v17;
    v13 -= 4;
  }
  while ( v17 != -1 );
LABEL_15:
  sub_119360((__int64)v27);
  sub_119360((__int64)v26);
  return v28 - __readfsqword(0x28u);
}

