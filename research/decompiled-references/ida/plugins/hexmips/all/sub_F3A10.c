__int64 __fastcall sub_F3A10(int *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdi
  int *v21; // rcx
  char v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // rax
  int *v31; // [rsp+0h] [rbp-80h]
  int *v32; // [rsp+0h] [rbp-80h]
  _QWORD v33[2]; // [rsp+8h] [rbp-78h] BYREF
  __m128 v34; // [rsp+18h] [rbp-68h] BYREF
  __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  __int128 v36; // [rsp+30h] [rbp-50h]
  unsigned __int64 v37; // [rsp+40h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 64);
  v4 = a1[3];
  v37 = __readfsqword(0x28u);
  v36 = 0;
  v5 = *(_QWORD *)(v3 + 1440);
  v35 = 0;
  if ( v4 + v5 - 1 >= v5 )
  {
    v35 = qvector_reserve();
    *(__m128i *)(v35 + 16 * v36) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v4);
    *(_QWORD *)&v36 = v36 + 1;
  }
  v6 = sub_EEA80(a2);
  v9 = a1[4];
  v10 = v6;
  v11 = v6 - v9;
  if ( v11 > 0 )
  {
    v12 = *(_QWORD *)(v3 + 1496);
    v13 = *(_QWORD *)(v3 + 1440) + v9;
    v33[1] = v11;
    v14 = *(_QWORD *)(v12 + 24);
    v33[0] = *(_QWORD *)(v14 + 16) & v13;
    sub_311E30(&v35, v33, v33[0], v14, v7, v8);
  }
  sub_311F30(&v35, *(_QWORD *)(a2 + 64) + 208LL);
  if ( (_QWORD)v36 )
  {
    v32 = a1 + 54;
    v34 = _mm_loadh_ps((const double *)(v3 + 128));
    if ( (unsigned __int8)sub_3130F0(a1 + 54, &v34, 0) )
    {
      v34 = _mm_loadh_ps((const double *)(v3 + 128));
      sub_311E30(v32, &v34, v26, v27, v28, v29);
      sub_312EE0(v32, &v35);
    }
    v31 = a1 + 38;
    sub_312EE0(a1 + 38, &v35);
    sub_312EE0(a1 + 28, &v35);
    sub_312EE0(a1 + 64, &v35);
    if ( (int)v10 > a1[3] )
      v10 = a1[3];
    v17 = a1[4] - v10;
    if ( v17 <= 0 )
      goto LABEL_16;
    v22 = 1;
  }
  else
  {
    if ( (int)v10 > a1[3] )
      v10 = a1[3];
    v17 = a1[4] - v10;
    if ( v17 <= 0 )
      goto LABEL_9;
    v21 = a1 + 38;
    v22 = 0;
    v31 = a1 + 38;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(v3 + 1496) + 24LL);
  v24 = *(_QWORD *)(v23 + 16) & (*(_QWORD *)(v3 + 1440) + v10);
  v34.m128_u64[1] = v17;
  v34.m128_u64[0] = v24;
  if ( (unsigned __int8)sub_311E30(v31, &v34, v23, v21, v15, v16) )
  {
    v30.m128_u64[0] = sub_32AA40(a1, *(_QWORD *)(a2 + 64));
    v34 = v30;
    sub_312E50(v31, &v34);
  }
  else if ( !v22 )
  {
LABEL_9:
    v18 = 0;
    goto LABEL_10;
  }
LABEL_16:
  v25 = *(_DWORD *)(a2 + 24);
  v18 = 1;
  BYTE1(v25) &= ~2u;
  LOBYTE(v25) = v25 | 0x80;
  *(_DWORD *)(a2 + 24) = v25;
LABEL_10:
  v19 = v35;
  a1[70] |= 0x40u;
  if ( v19 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return v18;
}

