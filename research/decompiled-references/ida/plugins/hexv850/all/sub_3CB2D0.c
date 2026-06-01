__int64 __fastcall sub_3CB2D0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // esi
  unsigned int v15; // eax
  __m128i v16; // xmm0
  __int64 v17; // rcx

  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(_DWORD *)(a3 + 20);
  v8 = *(int *)(a3 + 24);
  if ( !v6 )
  {
    if ( v7 < 0 )
    {
      v12 = 0;
      goto LABEL_12;
    }
    v10 = v7;
    if ( (unsigned __int64)v7 < 0x500000001LL && (v8 & 0x80000000) == 0LL && v8 < *(_QWORD *)&stru_1008[v7].st_name )
    {
      v12 = *(_QWORD *)(stru_FF0[v7].st_size + 8 * v8);
      goto LABEL_9;
    }
LABEL_22:
    v13 = *(_QWORD *)(v6 + 64);
    v12 = 0;
    v14 = *(_DWORD *)(v13 + 64);
    if ( v14 > v7 )
      goto LABEL_10;
LABEL_23:
    v6 = 0;
    goto LABEL_12;
  }
  v9 = *(_DWORD *)(v6 + 60);
  if ( (unsigned int)(v9 - 1) > 1 )
  {
    if ( v7 >= 0 )
    {
      v10 = v7;
      if ( (unsigned __int64)v7 >= 0x500000001LL || (v8 & 0x80000000) != 0LL )
      {
        v12 = 0;
        v6 = 0;
        goto LABEL_9;
      }
      v11 = (_QWORD *)(24LL * v7 + 4096);
      if ( v8 < *(_QWORD *)&stru_1008[v7].st_name )
        goto LABEL_7;
      goto LABEL_17;
    }
LABEL_20:
    v12 = 0;
    v6 = 0;
    goto LABEL_12;
  }
  if ( v7 < 0 )
    goto LABEL_20;
  v10 = v7;
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 120) || (v8 & 0x80000000) != 0LL )
    goto LABEL_22;
  v11 = (_QWORD *)(*(_QWORD *)(v6 + 112) + 24LL * v7);
  if ( v8 < v11[1] )
  {
LABEL_7:
    v12 = *(_QWORD *)(*v11 + 8 * v8);
    if ( (unsigned int)(v9 - 1) >= 2 )
      v6 = 0;
    goto LABEL_9;
  }
LABEL_17:
  v12 = 0;
  if ( (unsigned int)(v9 - 1) >= 2 )
    v6 = 0;
LABEL_9:
  v13 = *(_QWORD *)(v6 + 64);
  v14 = *(_DWORD *)(v13 + 64);
  if ( v14 <= v7 )
    goto LABEL_23;
LABEL_10:
  if ( v7 >= (unsigned int)v14 )
    sub_3C8F80(a4);
  v6 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v10);
LABEL_12:
  v15 = sub_132B50(*(_QWORD *)(v6 + 64), v12, *(unsigned int *)(v6 + 72));
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 72));
  v17 = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v16).m128i_u64[0];
  return a1;
}

