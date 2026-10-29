unsigned __int64 __fastcall sub_9AFA0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rcx
  const __m128i *v8; // rdi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  bool v11; // cf
  __int64 *v12; // rbp
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // r13
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  int v19; // eax
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // r11
  unsigned __int64 *v24; // r9
  unsigned __int64 *v25; // r10
  unsigned __int64 *v26; // r9
  __int64 v27; // r14
  __int64 v28; // r15
  const __m128i *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // [rsp+18h] [rbp-1A0h]
  int v35; // [rsp+2Ch] [rbp-18Ch] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-188h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-180h]
  __m128i v38; // [rsp+40h] [rbp-178h] BYREF
  __m128i *v39; // [rsp+50h] [rbp-168h] BYREF
  __int128 v40; // [rsp+58h] [rbp-160h]
  __int64 v41[4]; // [rsp+70h] [rbp-148h] BYREF
  __int128 v42; // [rsp+90h] [rbp-128h]
  __int128 v43; // [rsp+A0h] [rbp-118h]
  __int64 v44; // [rsp+B0h] [rbp-108h]
  __int128 v45; // [rsp+B8h] [rbp-100h]
  __int64 v46; // [rsp+C8h] [rbp-F0h]
  __int128 v47; // [rsp+D0h] [rbp-E8h]
  __int64 v48; // [rsp+108h] [rbp-B0h]
  __int128 v49; // [rsp+110h] [rbp-A8h]
  __int64 v50; // [rsp+120h] [rbp-98h]
  __int128 v51; // [rsp+128h] [rbp-90h]
  __int64 v52; // [rsp+144h] [rbp-74h]
  __int64 v53; // [rsp+14Ch] [rbp-6Ch]
  __int64 v54; // [rsp+154h] [rbp-64h]
  unsigned __int64 v55; // [rsp+15Ch] [rbp-5Ch]
  __int64 v56; // [rsp+168h] [rbp-50h]
  __int64 v57; // [rsp+170h] [rbp-48h]
  unsigned __int64 v58; // [rsp+178h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 224);
  if ( (v2 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v2 == -1 )
  {
    if ( under_debugger )
      BUG();
    v1 = interr(30478);
  }
  v3 = *(_QWORD *)(v1 + 232);
  v40 = 0;
  v39 = nullptr;
  v4 = qvector_reserve(&v39, 0, 1, 16);
  v5 = *((_QWORD *)&v40 + 1);
  v6 = v4;
  v7 = v4;
  *((_QWORD *)&v40 + 1) = 0;
  v8 = v39;
  v9 = v40 - 1;
  if ( (__int64)v40 - 1 >= 0 )
  {
    do
    {
      v10 = _mm_loadu_si128(v8);
      v7 += 16;
      ++v8;
      *(__m128i *)(v7 - 16) = v10;
      v11 = v9-- == 0;
    }
    while ( !v11 );
    v8 = v39;
  }
  qfree(v8);
  v39 = (__m128i *)v6;
  *((_QWORD *)&v40 + 1) = v5;
  v12 = (__int64 *)(16 * v40 + v6);
  *v12 = v2;
  v12[1] = v3;
  *(_QWORD *)&v40 = v40 + 1;
  while ( 1 )
  {
    v13 = operator new(0x20u);
    v41[0] = v13;
    *(_QWORD *)v13 = off_C9528;
    *(_DWORD *)(v13 + 8) = 1;
    *(_OWORD *)(v13 + 16) = 0;
    v55 = 0xFFFFFFFF00000000LL;
    v41[3] = 0;
    v44 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v56 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0x80000000LL;
    v36 = v2;
    v37 = v3;
    v42 = 0;
    v43 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v14 = sub_98E20((__int64 *)&v36, v41);
    v15 = v41[0];
    if ( !v14 )
      break;
    v16 = v57;
    v38.m128i_i64[0] = 0;
    v35 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __m128i *))(v57 + 112))(
           *(_QWORD *)(v41[0] + 24),
           49,
           &v35,
           &v38)
      || !v35 )
    {
      v17 = v2;
      sub_1B750((__int64)v41);
      goto LABEL_13;
    }
    v38 = 0;
    sub_95870(v41, &v38, 0x31u);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(v16 + 48))(*(_QWORD *)(v15 + 24));
    v20 = sub_94EA0(*(_QWORD **)(v15 + 16), *(_QWORD *)(v15 + 24), v38.m128i_i64, v19 != 0);
    v2 = v20;
    v22 = v21;
    v3 = v21;
    sub_84A10(&v38);
    if ( (v20 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v20 == -1 )
      break;
    v23 = v40;
    v24 = (unsigned __int64 *)v39;
    v25 = (unsigned __int64 *)&v39[v40];
    if ( v39 != (__m128i *)v25 )
    {
      do
      {
        v36 = v20;
        v37 = v22;
        if ( !(unsigned int)sub_849A0(&v36, v24) )
          break;
        v24 = v26 + 2;
      }
      while ( v25 != v24 );
      if ( v25 != v26 )
        break;
    }
    v27 = *((_QWORD *)&v40 + 1);
    if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v23 + 1) )
    {
      v28 = qvector_reserve(&v39, 0, v23 + 1, 16);
      v29 = v39;
      v30 = *((_QWORD *)&v40 + 1);
      *((_QWORD *)&v40 + 1) = v27;
      v31 = v40 - 1;
      if ( (__int64)v40 - 1 >= 0 )
      {
        v32 = v28;
        do
        {
          v33 = _mm_loadu_si128(v29);
          v32 += 16;
          ++v29;
          *(__m128i *)(v32 - 16) = v33;
          v11 = v31-- == 0;
        }
        while ( !v11 );
        v29 = v39;
      }
      v34 = v30;
      qfree(v29);
      v39 = (__m128i *)v28;
      *((_QWORD *)&v40 + 1) = v34;
      v25 = (unsigned __int64 *)(v28 + 16 * v40);
    }
    *v25 = v20;
    v25[1] = v22;
    *(_QWORD *)&v40 = v40 + 1;
    sub_1B750((__int64)v41);
  }
  v17 = 0x8000000000000000LL;
  sub_1B750((__int64)v41);
LABEL_13:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v17;
}

