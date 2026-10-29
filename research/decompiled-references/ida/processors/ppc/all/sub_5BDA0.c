__int64 __fastcall sub_5BDA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, const __m128i *a5)
{
  _QWORD *v5; // r12
  __int64 v6; // rax
  __m128i v8; // xmm0
  unsigned int v9; // r13d
  __int64 v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp-10h] [rbp-A0h]
  unsigned int v25; // [rsp+Ch] [rbp-84h]
  unsigned int v28; // [rsp+2Ch] [rbp-64h] BYREF
  __m256i v29; // [rsp+30h] [rbp-60h] BYREF
  __int64 v30; // [rsp+50h] [rbp-40h]
  unsigned __int64 v31; // [rsp+58h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 336);
  if ( !v5 )
    return 0;
  v6 = a5[2].m128i_i64[0];
  *(__m128i *)v29.m256i_i8 = _mm_loadu_si128(a5);
  v8 = _mm_loadu_si128(a5 + 1);
  v30 = v6;
  *(__m128i *)&v29.m256i_u64[2] = v8;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __m256i *, __int64, __int64))(*v5 + 64LL))(v5, &v29, a4, a3);
  if ( !(_BYTE)v9 )
    return 0;
  v28 = 0x10000;
  reg_finder_make_rfop(v5, &v28, &v29, a4, a3);
  v11 = v28;
  v5[9] = -1;
  if ( (_DWORD)v11 == 0x10000 )
    return 0;
  v12 = *(_QWORD **)(a1 + 336);
  v13 = *(_QWORD *)(a4 + 16);
  memset(&v29, 0, 25);
  v14 = -1;
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*v12 + 16LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v12[1] + 32LL) + 16LL) & v13;
  if ( v15 != sub_591A0 )
  {
    v25 = v11;
    v22 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v15)(v12, v16, 0, -1);
    v11 = v25;
    v16 = v22;
    v14 = v23;
  }
  v17 = v16;
  v18 = (__int64)&v29;
  reg_finder_find(v12, &v29, v17, v14, v11, 0, 0);
  v19 = v24;
  v20 = v29.m256i_i64[0];
  if ( (unsigned __int8)(v29.m256i_i8[24] - 12) > 1u )
    goto LABEL_14;
  v19 = *(_QWORD *)v29.m256i_i64[0];
  if ( v29.m256i_i64[1] != 1 )
  {
    v21 = (_QWORD *)(v29.m256i_i64[0] + 24);
    v18 = 24 * v29.m256i_i64[1];
    if ( 24 * v29.m256i_i64[1] != 24 )
    {
      while ( v19 == *v21 )
      {
        v21 += 3;
        if ( v21 == (_QWORD *)(v29.m256i_i64[0] + 24 * v29.m256i_i64[1]) )
          goto LABEL_17;
      }
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
  }
LABEL_17:
  *a2 = v19;
LABEL_15:
  if ( v20 )
  {
    v29.m256i_i64[1] = 0;
    qfree(v20, (const char *)v18, v19);
  }
  return v9;
}

