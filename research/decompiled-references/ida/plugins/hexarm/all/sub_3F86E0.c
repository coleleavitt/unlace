__int64 __fastcall sub_3F86E0(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned __int8 *a4, __int64 a5)
{
  __int64 v8; // r13
  int v9; // r14d
  int v10; // r12d
  bool v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 *v15; // [rsp+8h] [rbp-60h]
  _BYTE v16[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a5 )
    return sub_1D5E90(a1, a2, a3, a4, (unsigned __int8 *)a5);
  if ( *(_BYTE *)a5 != 1 )
    return sub_1D5E90(a1, a2, a3, a4, (unsigned __int8 *)a5);
  v15 = a4;
  sub_3F55F0(a1, a2, *(int *)(a5 + 8));
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(_DWORD *)(a5 + 4);
  v10 = *(_DWORD *)(a5 + 8);
  v11 = sub_11E2E0(a2);
  a4 = v15;
  if ( !v11 || *(_DWORD *)(v8 + 80) != 8 || (unsigned int)(v10 - 8) > 0x107 || v9 != 4 )
    return sub_1D5E90(a1, a2, a3, a4, (unsigned __int8 *)a5);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  v13 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v16 = 1;
  *(_QWORD *)&v16[4] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(*(_DWORD *)(v13 + 632))).m128i_u64[0];
  sub_1D5E90(a1, a2, a3, v15, v16);
  v14 = sub_1D6180(a1, 2, 7, *(int *)&v16[8], *(_DWORD *)(a5 + 8), 0);
  sub_11C7E0((__int64)v16);
  return v14;
}

