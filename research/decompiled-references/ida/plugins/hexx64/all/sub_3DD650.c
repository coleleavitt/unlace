__int64 __fastcall sub_3DD650(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  const char *v17; // rsi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 i; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 j; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  const char *v31; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-1A0h]
  __m128i v33[2]; // [rsp+30h] [rbp-188h] BYREF
  char v34; // [rsp+50h] [rbp-168h]
  unsigned __int64 v35; // [rsp+54h] [rbp-164h]
  __int64 v36; // [rsp+60h] [rbp-158h]
  __int128 v37; // [rsp+68h] [rbp-150h]
  __int64 v38; // [rsp+78h] [rbp-140h]
  __int128 v39; // [rsp+80h] [rbp-138h]
  __int64 v40; // [rsp+90h] [rbp-128h]
  __int128 v41; // [rsp+98h] [rbp-120h]
  __int64 v42; // [rsp+A8h] [rbp-110h]
  __int128 v43; // [rsp+B0h] [rbp-108h]
  int v44; // [rsp+C0h] [rbp-F8h]
  __int64 v45; // [rsp+C8h] [rbp-F0h]
  __int128 v46; // [rsp+D0h] [rbp-E8h]
  __int64 v47; // [rsp+E0h] [rbp-D8h]
  __int64 v48; // [rsp+E8h] [rbp-D0h]
  __int64 v49; // [rsp+F0h] [rbp-C8h]
  __int64 v50; // [rsp+F8h] [rbp-C0h]
  __int128 v51; // [rsp+100h] [rbp-B8h]
  __int64 v52; // [rsp+110h] [rbp-A8h]
  __int64 v53; // [rsp+118h] [rbp-A0h]
  __int64 v54; // [rsp+120h] [rbp-98h]
  __int64 v55; // [rsp+128h] [rbp-90h]
  __int64 v56; // [rsp+130h] [rbp-88h]
  __int128 v57; // [rsp+138h] [rbp-80h]
  __int64 v58; // [rsp+148h] [rbp-70h]
  __int128 v59; // [rsp+150h] [rbp-68h]
  __int64 v60; // [rsp+160h] [rbp-58h]
  __int128 v61; // [rsp+168h] [rbp-50h]
  __int64 v62; // [rsp+178h] [rbp-40h]
  __int64 v63; // [rsp+180h] [rbp-38h]
  int v64; // [rsp+188h] [rbp-30h]
  unsigned __int64 v65; // [rsp+198h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 64);
  v65 = __readfsqword(0x28u);
  if ( v5 && (unsigned int)(*(_DWORD *)(v5 + 60) - 1) >= 2 )
    v5 = 0;
  v6 = *(_QWORD *)(v5 + 64);
  v7 = sub_3D2ED0(**(_QWORD **)(a1 + 16), v6);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 0;
  if ( (unsigned int)sub_13C380(v7, v6, a3, a4) )
  {
    sub_84290((__int64)v8);
    j__qfree((__int64)v8);
    return 0;
  }
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v8;
  v11 = j__qalloc_or_throw(224, v6, v9, v10);
  sub_256FC0((__int64 *)v11, (__int64)v8);
  v14 = sub_670E0(v8, (__int64)v8, v12, v13);
  v15 = **(_QWORD **)(a1 + 16);
  v35 = 0xFFFFFFFF00000000LL;
  v34 = 0;
  v33[0].m128i_i64[1] = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v33[0].m128i_i64[0] = (__int64)off_4EBD58;
  v47 = v11;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v33[1] = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v46 = 0;
  v51 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v62 = v15;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  *(_DWORD *)v8 |= 0x1800000u;
  v16 = sub_3120C0(v14, v33);
  v31 = nullptr;
  v32 = 0;
  sub_3369B0((__int64 *)&v31, v16, v8, 0.0);
  v17 = s1;
  if ( (_QWORD)v32 )
    v17 = v31;
  sub_6D0A0((__int64)"structural_analysis: %s\n", v17);
  sub_3CA280((__int64)v33, 1u, (__int64)&unk_4190BD);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree((__int64)v31);
  }
  sub_6C480(v33);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v11);
      v19 = *(_QWORD *)(v11 + 184);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v11 + 192);
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = (__int64 *)(v19 + 24 * i);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23);
              v19 = *(_QWORD *)(v11 + 184);
            }
          }
        }
        *(_QWORD *)(v11 + 192) = 0;
        qfree(v19);
      }
      v24 = *(_QWORD *)(v11 + 160);
      if ( v24 )
      {
        *(_QWORD *)(v11 + 168) = 0;
        qfree(v24);
      }
      v25 = *(_QWORD *)(v11 + 128);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v11 + 136);
        if ( v26 )
        {
          for ( j = 0; j != v26; ++j )
          {
            v28 = (__int64 *)(v25 + 32 * j);
            v29 = *v28;
            if ( *v28 )
            {
              v28[1] = 0;
              qfree(v29);
              v25 = *(_QWORD *)(v11 + 128);
            }
          }
        }
        *(_QWORD *)(v11 + 136) = 0;
        qfree(v25);
      }
      sub_255050(v11 + 16, 0.0);
      j__qfree(v11);
    }
  }
  return 1;
}

