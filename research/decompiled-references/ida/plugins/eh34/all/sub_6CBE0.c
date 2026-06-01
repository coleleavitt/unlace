__int64 __fastcall sub_6CBE0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r13
  int v7; // eax
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD **v10; // rbx
  void *v11; // rdi
  __int64 v13; // r13
  _QWORD *v14; // rdx
  __m128 v15; // xmm0
  int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  int v25; // eax
  __int64 v26; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+8h] [rbp-E0h] BYREF
  char v28; // [rsp+18h] [rbp-D0h]
  __int64 v29; // [rsp+20h] [rbp-C8h] BYREF
  int v30; // [rsp+28h] [rbp-C0h] BYREF
  void *v31; // [rsp+30h] [rbp-B8h]
  int *v32; // [rsp+38h] [rbp-B0h] BYREF
  int *v33; // [rsp+40h] [rbp-A8h]
  __int64 v34; // [rsp+48h] [rbp-A0h]
  __int64 v35; // [rsp+50h] [rbp-98h] BYREF
  __m128i v36; // [rsp+58h] [rbp-90h] BYREF
  __int128 v37; // [rsp+68h] [rbp-80h]
  __int128 v38; // [rsp+78h] [rbp-70h] BYREF
  __int128 v39; // [rsp+88h] [rbp-60h]
  __int128 v40; // [rsp+98h] [rbp-50h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  nullsub_42(*(_QWORD *)(a3 + 8), "c:\\temp\\begin_inlining.txt");
  sub_62880(&v29, (__int64 *)a2, *(_QWORD *)(a3 + 8), *(_QWORD *)(a2 + 472) + 296LL);
  v6 = (_QWORD *)(*(_QWORD *)(a2 + 472) + 296LL);
  v7 = sub_26300((__int64)v6);
  sub_269C0((bool *)&v26, v6, &v29, v7);
  if ( v28 )
  {
    v8 = v26;
    v9 = _mm_loadu_si128(&v27);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = v9;
    goto LABEL_3;
  }
  if ( !(_BYTE)v26 )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(a2 + 472);
  sub_65380(*(_QWORD **)(v13 + 376));
  v14 = v31;
  *(_QWORD *)(v13 + 376) = 0;
  *(_QWORD *)(v13 + 384) = v13 + 368;
  *(_QWORD *)(v13 + 392) = v13 + 368;
  *(_QWORD *)(v13 + 400) = 0;
  if ( v14 )
  {
    v15 = _mm_loadh_ps((const double *)&v32);
    *(_DWORD *)(v13 + 368) = v30;
    v16 = v33;
    *(__m128 *)(v13 + 376) = v15;
    *(_QWORD *)(v13 + 392) = v16;
    v14[1] = v13 + 368;
    v31 = nullptr;
    *(_QWORD *)(v13 + 400) = v34;
    v32 = &v30;
    v33 = &v30;
    v34 = 0;
  }
  v17 = *(_QWORD *)(a2 + 472);
  v36 = 0;
  v35 = v17;
  v18 = *(_QWORD *)(a3 + 8);
  v38 = 0;
  v39 = 0;
  v37 = 0;
  v40 = 0;
  v36.m128i_i32[2] = 1;
  LODWORD(v18) = *(_DWORD *)(v18 + 64);
  LODWORD(v38) = 0;
  v36.m128i_i32[3] = v18;
  LODWORD(v37) = v18;
  *((_QWORD *)&v38 + 1) = 0;
  *(_QWORD *)&v39 = &v38;
  *((_QWORD *)&v39 + 1) = &v38;
  *(_QWORD *)&v40 = 0;
  sub_670B0((unsigned __int64 *)(a2 + 480), (unsigned __int64)&v35);
  sub_65640(*((_QWORD **)&v38 + 1));
  v19 = *(_QWORD **)(a2 + 368);
  v20 = *(_QWORD *)(a2 + 176);
  if ( !v19 )
    goto LABEL_17;
  v21 = (_QWORD *)(a2 + 360);
  do
  {
    while ( 1 )
    {
      v22 = v19[2];
      v23 = v19[3];
      if ( v19[4] >= v20 )
        break;
      v19 = (_QWORD *)v19[3];
      if ( !v23 )
        goto LABEL_15;
    }
    v21 = v19;
    v19 = (_QWORD *)v19[2];
  }
  while ( v22 );
LABEL_15:
  if ( v21 == (_QWORD *)(a2 + 360) || v20 < v21[4] )
  {
LABEL_17:
    sub_64B50(
      (__int64)&v35,
      *(unsigned __int8 **)(a2 + 32),
      (__int64)"begin_inlining(%a): no entry for main function?",
      0.0);
LABEL_18:
    *(_QWORD *)a1 = v35;
    v24 = _mm_loadu_si128(&v36);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v24;
    goto LABEL_19;
  }
  sub_6B1C0((__int64)&v35, a2, a3, 0);
  if ( (_BYTE)v37 )
    goto LABEL_18;
  if ( (_BYTE)v35 )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    v25 = *(_DWORD *)(a2 + 296);
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v25;
  }
LABEL_19:
  if ( v28 && v26 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v26);
  }
LABEL_3:
  v10 = (_QWORD **)v31;
  if ( v31 )
  {
    do
    {
      sub_65380(v10[3]);
      v11 = v10;
      v10 = (_QWORD **)v10[2];
      operator delete(v11, 0x28u);
    }
    while ( v10 );
  }
  return a1;
}

