__int64 __fastcall sub_216770(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v6; // r12
  _DWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  char v11; // al
  unsigned __int64 v12; // rdx
  int *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // r12
  unsigned __int64 v27; // [rsp+0h] [rbp-78h] BYREF
  __int64 v28; // [rsp+8h] [rbp-70h]
  __m128i v29; // [rsp+10h] [rbp-68h] BYREF
  int v30; // [rsp+20h] [rbp-58h]
  int v31; // [rsp+24h] [rbp-54h]
  _QWORD v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v32[3] = __readfsqword(0x28u);
  v3 = *(int *)(a2 + 44);
  if ( (_DWORD)v3 == *(_DWORD *)(v2 + 480) )
    return 1;
  v6 = **(_QWORD **)(a1 + 88) + 104 * v3;
  if ( (*(_BYTE *)(v6 + 25) & 5) != 0 )
    return 0;
  if ( !*(_BYTE *)(v2 + 320) )
  {
    v8 = *(_DWORD **)a2;
    v9 = *(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 != v9 )
    {
      while ( *v8 )
      {
        if ( (_DWORD *)v9 == ++v8 )
          goto LABEL_10;
      }
      if ( (_DWORD *)v9 != v8 )
        return 0;
    }
  }
LABEL_10:
  v10 = *(_DWORD *)(v6 + 88);
  v27 = -1;
  v28 = 0;
  if ( !(unsigned __int8)sub_1BC890(v6, (__int64)&v27, v10) )
    return 0;
  v11 = *(_BYTE *)(a2 + 32);
  if ( v11 == 1 )
  {
    v12 = *(int *)(a2 + 24);
  }
  else
  {
    if ( v11 != 5 )
      sub_2149C0();
    v12 = *(_QWORD *)(a2 + 24);
  }
  if ( (_BYTE)v28 != v11 )
    return 0;
  if ( !HIDWORD(v28) )
    return 0;
  if ( v12 < v27 )
    return 0;
  if ( SHIDWORD(v28) + v27 - 1 < v12 + *(int *)(a2 + 40) - 1 )
    return 0;
  v13 = (int *)(**(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 16) + 480LL));
  if ( !(unsigned __int8)sub_1BD540(v13, v13[22], v6, *(_DWORD *)(v6 + 88), &v29)
    || !(unsigned __int8)sub_215FE0(a1, *(_DWORD *)(a2 + 44), (__int64)(v13 + 20), v30) )
  {
    return 0;
  }
  if ( v31 )
  {
    if ( !under_debugger )
      sub_37B760(52860);
LABEL_37:
    BUG();
  }
  v14 = sub_2156E0((__int64 *)(a1 + 96), *(_QWORD *)(a1 + 16), *(_DWORD *)(a2 + 44));
  v15 = *(_QWORD *)v14;
  v16 = *(_QWORD *)v14 + 8LL * *(_QWORD *)(v14 + 8);
  if ( v16 != *(_QWORD *)v14 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)v15 + 48LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL);
      *(_QWORD *)(*(_QWORD *)v15 + 40LL) += v30;
      v17 = (_DWORD *)(*(_QWORD *)v15 + 24LL);
      if ( **(_BYTE **)v17 == 9 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
        *(_DWORD *)(v18 + 16) = v17[6];
      }
      v15 += 8;
    }
    while ( v16 != v15 );
  }
  *(_QWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 24) = -1;
  v19 = *(_QWORD *)(a1 + 16);
  v20 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 44));
  v32[0] = off_4ABF98;
  v21 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 480));
  v22 = *(_QWORD *)(v19 + 784);
  v32[1] = 0;
  v32[2] = _mm_unpacklo_epi32(v20, v21).m128i_u64[0];
  v23 = sub_109C80(v22, 0);
  v24 = (_QWORD *)v23;
  if ( !v23 )
  {
    if ( !under_debugger )
      sub_37B760(50446);
    goto LABEL_37;
  }
  ++*(_DWORD *)(v23 + 24);
  v25 = sub_10A220(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 784LL), 0);
  v26 = (_QWORD *)v25;
  if ( !v25 )
  {
    if ( !under_debugger )
      sub_37B760(50446);
    goto LABEL_37;
  }
  ++*(_DWORD *)(v25 + 24);
  sub_FE780(v24, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), v32, 7);
  sub_FE780(v26, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), v32, 7);
  sub_FE750((__int64)v26);
  sub_FE750((__int64)v24);
  return 1;
}

