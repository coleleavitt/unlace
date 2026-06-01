__int64 __fastcall sub_16550(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rbp
  void *v13; // rdi
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  unsigned __int64 v18; // r12
  void **v19; // rbp
  void *v20; // rdi
  __m128i v21; // xmm5
  __int64 v22; // rdi
  __int64 v23; // rbp
  void *v24; // rdi
  td_thragent_t *v25; // rdi
  _QWORD *v26; // rbp
  _QWORD *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // ebp
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  __m128i v36; // [rsp+10h] [rbp-88h] BYREF
  _OWORD v37[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v38[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 1340) == -1;
  v39 = __readfsqword(0x28u);
  if ( !v1 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  v3 = *(_QWORD *)(a1 + 1224);
  *(_QWORD *)(a1 + 1340) = -1;
  *(_BYTE *)(a1 + 1348) = 0;
  *(_BYTE *)(a1 + 861) = 0;
  *(_WORD *)(a1 + 1413) = 0;
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_12030(*(_QWORD **)(v3 + 24));
    v5 = *(_QWORD *)(v3 + 72);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[10] = 0;
      qfree();
    }
    operator delete(v4, 0x60u);
  }
  v6 = *(_QWORD *)(a1 + 1176);
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1232) = a1 + 1216;
  *(_QWORD *)(a1 + 1240) = a1 + 1216;
  *(_QWORD *)(a1 + 1248) = 0;
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_12E30(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 176);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[23] = 0;
      qfree();
    }
    if ( v7[19] )
    {
      v7[20] = 0;
      qfree();
    }
    v9 = v7[15];
    while ( v9 )
    {
      v10 = (_QWORD *)v9;
      sub_122F0(*(_QWORD **)(v9 + 24));
      v11 = *(_QWORD *)(v9 + 40);
      v9 = *(_QWORD *)(v9 + 16);
      if ( v11 )
      {
        v10[6] = 0;
        qfree();
      }
      operator delete(v10, 0x40u);
    }
    if ( v7[10] )
    {
      v7[11] = 0;
      qfree();
    }
    if ( v7[7] )
    {
      v7[8] = 0;
      qfree();
    }
    operator delete(v7, 0xD0u);
  }
  v12 = *(_QWORD *)(a1 + 1128);
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = a1 + 1168;
  *(_QWORD *)(a1 + 1192) = a1 + 1168;
  *(_QWORD *)(a1 + 1200) = 0;
  while ( v12 )
  {
    sub_12720(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x28u);
  }
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(_QWORD *)(a1 + 1128) = 0;
  *(_QWORD *)(a1 + 1136) = a1 + 1120;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(_QWORD *)(a1 + 1144) = a1 + 1120;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 168));
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v36 = v14;
  *(_QWORD *)(a1 + 1152) = 0;
  v37[0] = v16;
  v37[1] = v17;
  v38[0] = v14;
  v35 = v15;
  v38[1] = v15;
  sub_106C0((__int64 *)v38, (__int64 *)v37);
  v18 = *(_QWORD *)(a1 + 192) + 8LL;
  v19 = (void **)(v15.m128i_i64[1] + 8);
  if ( v15.m128i_i64[1] + 8 < v18 )
  {
    do
    {
      v20 = *v19++;
      operator delete(v20, 0x1F8u);
    }
    while ( (unsigned __int64)v19 < v18 );
  }
  v21 = _mm_load_si128(&v35);
  v22 = *(_QWORD *)(a1 + 1400);
  *(__m128i *)(a1 + 168) = _mm_load_si128(&v36);
  *(__m128i *)(a1 + 184) = v21;
  if ( v22 )
  {
    qfclose();
    *(_QWORD *)(a1 + 1400) = 0;
  }
  v23 = *(_QWORD *)(a1 + 528);
  *(_BYTE *)(a1 + 1008) = 0;
  while ( v23 )
  {
    sub_11760(*(_QWORD **)(v23 + 24));
    v24 = (void *)v23;
    v23 = *(_QWORD *)(v23 + 16);
    operator delete(v24, 0x40u);
  }
  v25 = *(td_thragent_t **)(a1 + 952);
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_QWORD *)(a1 + 552) = 0;
  *(_WORD *)(a1 + 1350) = 0;
  if ( v25 )
  {
    td_ta_delete(v25);
    v26 = qword_48110;
    *(_QWORD *)(a1 + 952) = 0;
    while ( v26 )
    {
      v27 = v26;
      sub_11AC0((_QWORD *)v26[3]);
      v28 = v26[4];
      v26 = (_QWORD *)v26[2];
      if ( v28 )
      {
        v27[5] = 0;
        qfree();
      }
      operator delete(v27, 0x40u);
    }
    qword_48110 = nullptr;
    qword_48118 = (__int64)&dword_48108;
    qword_48120 = (__int64)&dword_48108;
    qword_48128 = 0;
  }
  v29 = *(_QWORD *)(a1 + 960);
  if ( v29 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v29,
      a1 + 968,
      *(unsigned __int8 *)(a1 + 969));
  v30 = *(_QWORD *)(a1 + 976);
  *(_BYTE *)(a1 + 969) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  if ( v30 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v30,
      a1 + 984,
      *(unsigned __int8 *)(a1 + 985));
  v31 = *(_QWORD *)(a1 + 992);
  *(_BYTE *)(a1 + 985) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  if ( v31 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v31,
      a1 + 1000,
      *(unsigned __int8 *)(a1 + 1001));
  v32 = *(_QWORD *)(a1 + 1416);
  *(_QWORD *)(a1 + 992) = 0;
  *(_BYTE *)(a1 + 1001) = 0;
  *(_DWORD *)(a1 + 1408) = 0;
  if ( v32 )
  {
    *(_QWORD *)(a1 + 1424) = 0;
    qfree();
    *(_QWORD *)(a1 + 1416) = 0;
    *(_QWORD *)(a1 + 1432) = 0;
  }
  v1 = *(_QWORD *)(a1 + 1096) == 0;
  *(_BYTE *)(a1 + 1349) = 0;
  *(_QWORD *)(a1 + 1448) = 0;
  if ( !v1 )
  {
    v33 = 0;
    do
    {
      ++v33;
      qfree();
    }
    while ( (unsigned __int64)v33 < *(_QWORD *)(a1 + 1096) );
  }
  if ( *(_QWORD *)(a1 + 1064) )
  {
    *(_QWORD *)(a1 + 1072) = 0;
    qfree();
    *(_QWORD *)(a1 + 1064) = 0;
    *(_QWORD *)(a1 + 1080) = 0;
  }
  if ( *(_QWORD *)(a1 + 1088) )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree();
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1104) = 0;
  }
  return sub_32760(a1);
}

