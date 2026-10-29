__int64 __fastcall sub_21DAF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v7; // r12
  _DWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  char v12; // al
  unsigned __int64 v13; // rdx
  int *v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rdi
  double v26; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r9d
  _QWORD *v32; // rbp
  __int64 v33; // rax
  _QWORD *v34; // r12
  unsigned __int64 v35; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+8h] [rbp-70h]
  __m128i v37; // [rsp+10h] [rbp-68h] BYREF
  int v38; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+24h] [rbp-54h]
  _QWORD v40[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v40[3] = __readfsqword(0x28u);
  v4 = *(int *)(a2 + 44);
  if ( (_DWORD)v4 == *(_DWORD *)(v3 + 480) )
    return 1;
  v7 = **(_QWORD **)(a1 + 88) + 104 * v4;
  if ( (*(_BYTE *)(v7 + 25) & 5) != 0 )
    return 0;
  if ( !*(_BYTE *)(v3 + 320) )
  {
    v9 = *(_DWORD **)a2;
    v10 = *(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 != v10 )
    {
      while ( *v9 )
      {
        if ( (_DWORD *)v10 == ++v9 )
          goto LABEL_10;
      }
      if ( (_DWORD *)v10 != v9 )
        return 0;
    }
  }
LABEL_10:
  v11 = *(_DWORD *)(v7 + 88);
  v35 = -1;
  v36 = 0;
  if ( !(unsigned __int8)sub_1C3110(v7, (__int64)&v35, v11, a3) )
    return 0;
  v12 = *(_BYTE *)(a2 + 32);
  if ( v12 == 1 )
  {
    v13 = *(int *)(a2 + 24);
  }
  else
  {
    if ( v12 != 5 )
      sub_21BD40(a3);
    v13 = *(_QWORD *)(a2 + 24);
  }
  if ( (_BYTE)v36 != v12 )
    return 0;
  if ( !HIDWORD(v36) )
    return 0;
  if ( v13 < v35 )
    return 0;
  if ( SHIDWORD(v36) + v35 - 1 < v13 + *(int *)(a2 + 40) - 1 )
    return 0;
  v14 = (int *)(**(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 16) + 480LL));
  if ( !(unsigned __int8)sub_1C3DC0(v14, v14[22], v7, *(_DWORD *)(v7 + 88), &v37)
    || !(unsigned __int8)sub_21D360(a1, *(_DWORD *)(a2 + 44), v14 + 20, v38) )
  {
    return 0;
  }
  if ( v39 )
  {
    if ( !under_debugger )
      sub_383060(0xCE7Cu, a3);
LABEL_37:
    BUG();
  }
  v16 = sub_21CA60((__int64 *)(a1 + 96), *(_QWORD *)(a1 + 16), *(_DWORD *)(a2 + 44));
  v19 = *(_QWORD *)v16;
  v20 = *(_QWORD *)(v16 + 8);
  v21 = *(_QWORD *)v16 + 8 * v20;
  if ( v21 != *(_QWORD *)v16 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)v19 + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
      *(_QWORD *)(*(_QWORD *)v19 + 40LL) += v38;
      v15 = *(_QWORD *)v19 + 24LL;
      v20 = *(_QWORD *)v15;
      if ( **(_BYTE **)v15 == 9 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)v19 + 40LL);
        v20 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)(v20 + 8) = v17;
        v15 = *(unsigned int *)(v15 + 24);
        *(_DWORD *)(v20 + 16) = v15;
      }
      v19 += 8;
    }
    while ( v21 != v19 );
  }
  *(_QWORD *)(v16 + 8) = 0;
  *(_DWORD *)(v16 + 24) = -1;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 44));
  v40[0] = off_4DF798;
  v24 = _mm_cvtsi32_si128(*(_DWORD *)(v22 + 480));
  v25 = *(_QWORD *)(v22 + 784);
  v40[1] = 0;
  *(_QWORD *)&v26 = _mm_unpacklo_epi32(v23, v24).m128i_u64[0];
  *(double *)&v40[2] = v26;
  v27 = sub_110340(v25, 0, v20, v15, v17, v18, v26, (__m128)v24);
  v32 = (_QWORD *)v27;
  if ( !v27 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, v26);
    goto LABEL_37;
  }
  ++*(_DWORD *)(v27 + 24);
  v33 = sub_1108E0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 784LL), 0, v28, v29, v30, v31, v26, (__m128)v24);
  v34 = (_QWORD *)v33;
  if ( !v33 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, v26);
    goto LABEL_37;
  }
  ++*(_DWORD *)(v33 + 24);
  sub_104E40(v32, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), v40, 7);
  sub_104E40(v34, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), v40, 7);
  sub_104E10((__int64)v34, v26);
  sub_104E10((__int64)v32, v26);
  return 1;
}

