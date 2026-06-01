unsigned __int64 __fastcall sub_311B20(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  double v4; // xmm0_8
  int v5; // eax
  __int64 v6; // rbp
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r13d
  int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbp
  __m128i *j; // rbx
  __int64 v16; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  unsigned int i; // r12d
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __m128i *v27; // rcx
  __int64 *v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v30; // [rsp+10h] [rbp-C8h]
  __int64 v31; // [rsp+18h] [rbp-C0h]
  __int64 *v32; // [rsp+20h] [rbp-B8h]
  __m128i *v33; // [rsp+28h] [rbp-B0h]
  __int64 v34; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-A0h]
  int v36; // [rsp+40h] [rbp-98h]
  __int64 v37; // [rsp+50h] [rbp-88h] BYREF
  int v38; // [rsp+60h] [rbp-78h]
  __m128i v39; // [rsp+70h] [rbp-68h] BYREF
  __int64 v40; // [rsp+80h] [rbp-58h]
  __int64 v41[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v3 = *a1;
  v42 = __readfsqword(0x28u);
  v33 = &v39;
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v39, (__m128i)(unsigned __int64)&v39);
  v4 = (*(double (__fastcall **)(__int64 *))(v3 + 80))(a1);
  v6 = *(_QWORD *)(a2 + 8) + 24LL * v5;
  sub_648D0((__int64 *)v6, (const void **)(a2 + 56), v4);
  v7 = _mm_load_si128(&v29);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(a2 + 72);
  v39 = v7;
  v40 = 0;
  v41[0] = 0;
  v41[1] = 0;
  sub_310F30(a1, &v39, 0);
  v32 = v41;
  v31 = a2 + 32;
  v29.m128i_i64[0] = (__int64)&v37;
  while ( v40 )
  {
    v8 = v39.m128i_i64[0];
    v9 = *(_QWORD *)v39.m128i_i64[0];
    v10 = *(_DWORD *)(v39.m128i_i64[0] + 16);
    **(_QWORD **)(v39.m128i_i64[0] + 8) = *(_QWORD *)v39.m128i_i64[0];
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
    qfree(v8);
    --v40;
    sub_64340(v32, v10, *(double *)v7.m128i_i64);
    v30 = &v34;
    sub_64000(&v34, v31, *(double *)v7.m128i_i64);
    v36 = *(_DWORD *)(a2 + 48);
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v10);
    v12 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v13 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v10, v12);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 152))(a1, v10, v13) )
        {
          sub_64000((__int64 *)v29.m128i_i64[0], v31, *(double *)v7.m128i_i64);
          v38 = *(_DWORD *)(a2 + 48);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            v29.m128i_i64[0],
            (unsigned int)v13,
            v10);
          if ( *(_DWORD *)(a2 + 80) == 1 )
            sub_64280(v30, (__int64 *)v29.m128i_i64[0], *(double *)v7.m128i_i64);
          else
            sub_64700(v30, (__int64 *)v29.m128i_i64[0]);
          qfree(v37);
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    v14 = 24LL * (int)v10;
    if ( sub_647F0(v14 + *(_QWORD *)(a2 + 8), (__int64)v30) )
    {
      v18 = *(_QWORD *)(a2 + 8) + v14;
      v19 = *(_QWORD *)v18;
      *(_QWORD *)v18 = v34;
      v34 = v19;
      v20 = *(_QWORD *)(v18 + 8);
      *(_QWORD *)(v18 + 8) = v35;
      v35 = v20;
      LODWORD(v20) = *(_DWORD *)(v18 + 16);
      *(_DWORD *)(v18 + 16) = v36;
      v36 = v20;
      v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v10);
      if ( v21 > 0 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v10, i);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v23, v10)
            && (unsigned __int8)sub_64190(v32, v23, *(double *)v7.m128i_i64) )
          {
            v26 = qalloc_or_throw(24, (unsigned int)v23, v24, v25);
            v27 = v33;
            *(_DWORD *)(v26 + 16) = v23;
            *(_QWORD *)v26 = v27;
            v28 = (__int64 *)v39.m128i_i64[1];
            *(_QWORD *)(v26 + 8) = v39.m128i_i64[1];
            *v28 = v26;
            v39.m128i_i64[1] = v26;
            ++v40;
          }
        }
      }
    }
    qfree(v34);
  }
  qfree(v41[0]);
  for ( j = (__m128i *)v39.m128i_i64[0]; j != v33; --v40 )
  {
    v16 = (__int64)j;
    j = (__m128i *)j->m128i_i64[0];
    **(_QWORD **)(v16 + 8) = j;
    j->m128i_i64[1] = *(_QWORD *)(v16 + 8);
    qfree(v16);
  }
  return v42 - __readfsqword(0x28u);
}

