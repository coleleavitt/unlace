unsigned __int64 __fastcall sub_3D3190(__int64 a1, __int64 a2, _QWORD *a3)
{
  __m128 v3; // xmm0
  _QWORD *v5; // rdi
  int v6; // edx
  int v7; // esi
  _QWORD *v8; // rax
  int *v9; // rbp
  int *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128 v20; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v21; // [rsp+10h] [rbp-28h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v3.m128_u64[0] = 0;
  v22 = __readfsqword(0x28u);
  v5 = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 20);
  if ( v7 < 0 )
    goto LABEL_22;
  if ( (unsigned __int64)v7 >= v5[15] )
    goto LABEL_22;
  if ( v6 < 0 )
    goto LABEL_22;
  v8 = (_QWORD *)(v5[14] + 24LL * v7);
  if ( (unsigned __int64)v6 >= v8[1] )
    goto LABEL_22;
  v9 = *(int **)(*v8 + 8LL * v6);
  if ( !v9 )
    goto LABEL_22;
  v10 = (int *)v5[8];
  v21 = v5 + 20;
  v3 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v10 + 374)), (__m128i)(unsigned __int64)v10);
  v20 = v3;
  v11 = *v10;
  v12 = (v11 >> 20) & 4;
  if ( (v11 & 0x40000000) != 0 )
    v12 = (v11 >> 20) & 4 | 2;
  if ( (v11 & 0x20000000) != 0 )
    v12 |= 1u;
  sub_1B43D0(v9, (__int64 *)(a1 + 16), (__int64)&v20, v12, v3);
  v13 = sub_3CFD70((__int64)v9, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), 0, 0);
  v15 = *(_DWORD *)(a1 + 48);
  if ( v15 < (int)v14 )
    goto LABEL_25;
  if ( v15 > (int)v14 )
    goto LABEL_20;
  if ( v15 )
  {
    if ( v13 <= *(_QWORD *)(a1 + 40) )
      goto LABEL_20;
LABEL_25:
    *(_QWORD *)(a1 + 48) = v14;
    *(_QWORD *)(a1 + 40) = v13;
    if ( (unsigned int)(v14 - 1) <= 1 )
      return v22 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v16 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v16 = *(_QWORD *)(a1 + 40);
  v17 = -v13;
  if ( v13 > 0 )
    v17 = v13;
  if ( v16 > v17 || v16 >= v17 && v13 < *(_QWORD *)(a1 + 40) )
    goto LABEL_25;
LABEL_20:
  if ( (unsigned int)(v14 - 1) > 1 )
  {
LABEL_21:
    v5 = *(_QWORD **)(a1 + 8);
    v6 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 20LL);
LABEL_22:
    v18 = sub_3D2AB0(v5, v7, v6, *(double *)v3.m128_u64);
    sub_3D30C0(a1, v18, 0, 0);
  }
  return v22 - __readfsqword(0x28u);
}

