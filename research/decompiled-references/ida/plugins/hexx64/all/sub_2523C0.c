unsigned __int64 __fastcall sub_2523C0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // ebp
  __int64 v18; // rsi
  unsigned int i; // r13d
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r15
  _QWORD *v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rdi
  unsigned int v35; // eax
  _QWORD v36[5]; // [rsp+8h] [rbp-1D8h] BYREF
  char v37; // [rsp+30h] [rbp-1B0h]
  __m128i v38[2]; // [rsp+38h] [rbp-1A8h] BYREF
  char v39; // [rsp+58h] [rbp-188h]
  unsigned __int64 v40; // [rsp+5Ch] [rbp-184h]
  __int64 v41; // [rsp+68h] [rbp-178h]
  __int128 v42; // [rsp+70h] [rbp-170h]
  __int64 v43; // [rsp+80h] [rbp-160h]
  __int128 v44; // [rsp+88h] [rbp-158h]
  __int64 v45; // [rsp+98h] [rbp-148h]
  __int128 v46; // [rsp+A0h] [rbp-140h]
  __int64 v47; // [rsp+B0h] [rbp-130h]
  __int128 v48; // [rsp+B8h] [rbp-128h]
  int v49; // [rsp+C8h] [rbp-118h]
  __int64 v50; // [rsp+D0h] [rbp-110h]
  __int128 v51; // [rsp+D8h] [rbp-108h]
  unsigned __int64 v52; // [rsp+E8h] [rbp-F8h]
  __int64 v53; // [rsp+F0h] [rbp-F0h]
  __int64 v54; // [rsp+F8h] [rbp-E8h]
  __int64 v55; // [rsp+100h] [rbp-E0h]
  __int128 v56; // [rsp+108h] [rbp-D8h]
  __int64 v57; // [rsp+118h] [rbp-C8h]
  __int64 v58; // [rsp+120h] [rbp-C0h]
  __int64 v59; // [rsp+128h] [rbp-B8h]
  __int64 v60; // [rsp+130h] [rbp-B0h]
  __int64 v61; // [rsp+138h] [rbp-A8h]
  __int128 v62; // [rsp+140h] [rbp-A0h]
  __int64 v63; // [rsp+150h] [rbp-90h]
  __int128 v64; // [rsp+158h] [rbp-88h]
  __int64 v65; // [rsp+168h] [rbp-78h]
  __int128 v66; // [rsp+170h] [rbp-70h]
  __int64 v67; // [rsp+180h] [rbp-60h]
  __int64 v68; // [rsp+188h] [rbp-58h]
  int v69; // [rsp+190h] [rbp-50h]
  unsigned __int64 v70; // [rsp+1A0h] [rbp-40h]

  v11.m128i_i64[0] = 0;
  v70 = __readfsqword(0x28u);
  v39 = 0;
  v40 = 0xFFFFFFFF00000000LL;
  v38[0].m128i_i64[1] = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v13 = *(_QWORD *)(a1 + 216);
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v38[1] = 0;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v51 = 0;
  v14 = *(_QWORD **)(a1 + 8);
  v52 = a1;
  v53 = 0;
  v38[0].m128i_i64[0] = (__int64)off_4EBD58;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = v13;
  v68 = 0;
  v69 = 0;
  v56 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v15 = sub_670E0(v14, a2, (__int64)off_4EBD58, a4);
  *(_BYTE *)(v15 + 248) = 0;
  v16 = v15;
  if ( (unsigned int)sub_33E140(*(_QWORD *)(a1 + 216), 8u, v38, a1, v15) != 1 )
  {
    v17 = sub_3120C0(v16, v38);
    if ( v17 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v6 = *(_QWORD *)(a1 + 8);
      v7 = exception;
      v8 = *(_QWORD *)a1;
      *v7 = off_4DBCD0;
      v7[2] = v8;
      *((_DWORD *)v7 + 2) = v17;
      v7[3] = 0;
      *((_OWORD *)v7 + 2) = 0;
      v9 = *(_QWORD *)(v6 + 504);
      if ( v9 )
      {
        v10 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 504), (__int64)v38, v5, (__int64)off_4DBCD0);
        v7[3] = v10;
        v7[5] = v9;
        memcpy(v10, *(const void **)(v6 + 496), v9);
        v7[4] = v9;
      }
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
  }
  v18 = 9;
  sub_33E140(*(_QWORD *)(a1 + 216), 9u, v38);
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 896LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 900LL) = 0;
  sub_2799E0(*(_QWORD *)(a1 + 216));
  for ( i = 0; i != 10; ++i )
  {
    sub_138440(*(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 24) != 71 )
    {
      *(_DWORD *)(a1 + 24) = 71;
      v20 = qalloc_or_throw(24, v18, v27, v28);
      *(_QWORD *)(v20 + 16) = 0;
      v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
      *(__m128i *)v20 = v11;
      *(_QWORD *)(a1 + 40) = v20;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
LABEL_5:
      if ( i != 3 )
        goto LABEL_6;
LABEL_17:
      sub_29E310(a1);
      goto LABEL_6;
    }
    v29 = *(_QWORD **)(a1 + 40);
    v30 = (_QWORD *)*v29;
    if ( v29 == (_QWORD *)*v29 )
      goto LABEL_5;
    do
    {
      v31 = (__int64)v30;
      v30 = (_QWORD *)*v30;
      **(_QWORD **)(v31 + 8) = v30;
      v30[1] = *(_QWORD *)(v31 + 8);
      sub_255050(v31 + 16);
      qfree(v31);
      --v29[2];
    }
    while ( v29 != v30 );
    if ( i == 3 )
      goto LABEL_17;
LABEL_6:
    sub_33E140(*(_QWORD *)(a1 + 216), 0xAu, a1, 0);
    *(_DWORD *)(a1 + 56) = 0;
    v69 = 0;
    sub_250510((__int64)v38, (unsigned int)v40, a1 + 16, 0, *(double *)v11.m128i_i64);
    sub_33E140(*(_QWORD *)(a1 + 216), 0xAu, a1, 1);
    v21 = v60 == 0;
    *(_DWORD *)(a1 + 56) = 1;
    if ( !v21 )
      sub_2585C0(a1);
    v18 = 0;
    sub_3252D0(a1, 0, 1);
    sub_241D00(a1, 0, v22, v23, v24, *(double *)v11.m128i_i64);
    v25 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v25 + 3) & 2) == 0 )
      goto LABEL_24;
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 824LL);
    *(_DWORD *)(v26 + 8) = *(_DWORD *)(v25 + 64);
    *(_QWORD *)v26 = 0;
    if ( (unsigned __int8)sub_256040(a1) )
    {
      v18 = i;
      if ( !(unsigned __int8)sub_2AC820(a1, i) && !(unsigned __int8)sub_27D2C0(*(_QWORD *)(a1 + 216)) )
      {
        v18 = 0xFFFFFFFFLL;
        if ( !(unsigned __int8)sub_2AC820(a1, -1) && !(unsigned int)sub_29E310(a1) )
          break;
      }
    }
  }
  v35 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL) & 0xFFFFFFF0;
  if ( v35 == 64 || v35 == 208 )
    sub_F3CA0((_QWORD *)a1);
  sub_284DF0(a1, 1);
  if ( i == 10 )
  {
    sub_3311F0(*(_QWORD **)(a1 + 8), 0xFFFFFFFFFFFFFFFFLL, 0xDu);
    sub_23FE40(a1);
    sub_255F70(a1);
  }
  else if ( (int)sub_23FE40(a1) > 0 )
  {
    sub_255F70(a1);
  }
  sub_23FF10(a1);
  if ( *(char *)(*(_QWORD *)(a1 + 216) + 604LL) < 0 )
    sub_23FFE0(a1);
  v32 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v32 + 320) )
  {
    sub_37C180((__int64 *)a1);
    v32 = *(_QWORD *)(a1 + 8);
  }
  sub_3770B0(v32);
  sub_2112D0(*(_QWORD *)(a1 + 8), a1, *(double *)v11.m128i_i64);
  sub_1F1860(*(_QWORD *)(a1 + 8));
  v33 = *(_QWORD *)(a1 + 8);
  memset(&v36[1], 0, 32);
  v37 = 0;
  v36[0] = &off_4DF970;
  sub_11FBB0(v33, (__int64)v36);
  sub_251FC0(a1);
  sub_23FD80(a1);
  sub_376950(a1);
  sub_33E140(*(_QWORD *)(a1 + 216), 0xAu, a1, 8);
  *(_DWORD *)(a1 + 56) = 8;
  sub_3252D0(a1, 0, 1);
  *(_DWORD *)(a1 + 108) &= 0xFFFFFFF4;
LABEL_24:
  sub_6C480(v38);
  return v70 - __readfsqword(0x28u);
}

