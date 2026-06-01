__int64 __fastcall sub_311760(__int64 *a1, __int64 a2)
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
  __m128i *v15; // rbx
  __m128i *i; // rbp
  __int64 v17; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, int); // rax
  unsigned int v23; // r12d
  __int64 v24; // r15
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  unsigned int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __m128i *v30; // rcx
  __int64 *v31; // rdx
  unsigned int v32; // eax
  __m128i v33; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v34; // [rsp+10h] [rbp-C8h]
  __int64 v35; // [rsp+18h] [rbp-C0h]
  __int64 *v36; // [rsp+20h] [rbp-B8h]
  __m128i *v37; // [rsp+28h] [rbp-B0h]
  __int64 v38; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-A0h]
  int v40; // [rsp+40h] [rbp-98h]
  __int64 v41; // [rsp+50h] [rbp-88h] BYREF
  int v42; // [rsp+60h] [rbp-78h]
  __m128i v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+80h] [rbp-58h]
  __int64 v45[10]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *a1;
  v45[2] = __readfsqword(0x28u);
  v37 = &v43;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v43, (__m128i)(unsigned __int64)&v43);
  v4 = (*(double (__fastcall **)(__int64 *))(v3 + 80))(a1);
  v6 = *(_QWORD *)(a2 + 8) + 24LL * v5;
  sub_648D0((__int64 *)v6, (const void **)(a2 + 56), v4);
  v7 = _mm_load_si128(&v33);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(a2 + 72);
  v43 = v7;
  v44 = 0;
  v45[0] = 0;
  v45[1] = 0;
  sub_310F30(a1, &v43, 1);
  v33.m128i_i64[0] = (__int64)&v41;
  while ( v44 )
  {
    v8 = v43.m128i_i64[0];
    v9 = *(_QWORD *)v43.m128i_i64[0];
    v10 = *(_DWORD *)(v43.m128i_i64[0] + 16);
    **(_QWORD **)(v43.m128i_i64[0] + 8) = *(_QWORD *)v43.m128i_i64[0];
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
    qfree(v8);
    --v44;
    v36 = v45;
    sub_64340(v45, v10, *(double *)v7.m128i_i64);
    v35 = a2 + 32;
    v34 = &v38;
    sub_64000(&v38, a2 + 32, *(double *)v7.m128i_i64);
    v40 = *(_DWORD *)(a2 + 48);
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v10);
    v12 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v13 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v10, v12);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v13, v10) )
        {
          sub_64000((__int64 *)v33.m128i_i64[0], v35, *(double *)v7.m128i_i64);
          v42 = *(_DWORD *)(a2 + 48);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            v33.m128i_i64[0],
            (unsigned int)v13,
            v10);
          if ( *(_DWORD *)(a2 + 80) == 1 )
            sub_64280(v34, (__int64 *)v33.m128i_i64[0], *(double *)v7.m128i_i64);
          else
            sub_64700(v34, (__int64 *)v33.m128i_i64[0]);
          qfree(v41);
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    v14 = 24LL * (int)v10;
    if ( sub_647F0(v14 + *(_QWORD *)(a2 + 8), (__int64)v34) )
    {
      v19 = *(_QWORD *)(a2 + 8) + v14;
      v20 = *(_QWORD *)v19;
      *(_QWORD *)v19 = v38;
      v38 = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *(_QWORD *)(v19 + 8) = v39;
      v39 = v21;
      LODWORD(v21) = *(_DWORD *)(v19 + 16);
      *(_DWORD *)(v19 + 16) = v40;
      v40 = v21;
      v22 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      LODWORD(v34) = v22 == sub_65090 ? sub_65090((__int64)a1, v10) : (unsigned int)v22((__int64)a1, v10);
      if ( (int)v34 > 0 )
      {
        v23 = 0;
        do
        {
          v24 = *a1;
          v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
          if ( v25 == sub_650D0 )
          {
            v26 = sub_650D0((__int64)a1, v10, v23);
          }
          else
          {
            v32 = v25((__int64)a1, v10, v23);
            v24 = *a1;
            v26 = v32;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v24 + 152))(a1, v10, v26)
            && (unsigned __int8)sub_64190(v36, v26, *(double *)v7.m128i_i64) )
          {
            v29 = qalloc_or_throw(24, v26, v27, v28);
            v30 = v37;
            *(_DWORD *)(v29 + 16) = v26;
            *(_QWORD *)v29 = v30;
            v31 = (__int64 *)v43.m128i_i64[1];
            *(_QWORD *)(v29 + 8) = v43.m128i_i64[1];
            *v31 = v29;
            v43.m128i_i64[1] = v29;
            ++v44;
          }
          ++v23;
        }
        while ( (_DWORD)v34 != v23 );
      }
    }
    qfree(v38);
  }
  qfree(v45[0]);
  v15 = (__m128i *)v43.m128i_i64[0];
  for ( i = v37; v15 != i; --v44 )
  {
    v17 = (__int64)v15;
    v15 = (__m128i *)v15->m128i_i64[0];
    **(_QWORD **)(v17 + 8) = v15;
    v15->m128i_i64[1] = *(_QWORD *)(v17 + 8);
    qfree(v17);
  }
  return 1;
}

