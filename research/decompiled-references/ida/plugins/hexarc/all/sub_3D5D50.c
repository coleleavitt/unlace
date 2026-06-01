__int64 __fastcall sub_3D5D50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  const char *v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 i; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 j; // rbx
  _QWORD *v20; // rax
  const char *v22; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v23; // [rsp+18h] [rbp-1A0h]
  __m128i v24[2]; // [rsp+30h] [rbp-188h] BYREF
  char v25; // [rsp+50h] [rbp-168h]
  unsigned __int64 v26; // [rsp+54h] [rbp-164h]
  __int64 v27; // [rsp+60h] [rbp-158h]
  __int128 v28; // [rsp+68h] [rbp-150h]
  __int64 v29; // [rsp+78h] [rbp-140h]
  __int128 v30; // [rsp+80h] [rbp-138h]
  __int64 v31; // [rsp+90h] [rbp-128h]
  __int128 v32; // [rsp+98h] [rbp-120h]
  __int64 v33; // [rsp+A8h] [rbp-110h]
  __int128 v34; // [rsp+B0h] [rbp-108h]
  int v35; // [rsp+C0h] [rbp-F8h]
  __int64 v36; // [rsp+C8h] [rbp-F0h]
  __int128 v37; // [rsp+D0h] [rbp-E8h]
  __int64 v38; // [rsp+E0h] [rbp-D8h]
  __int64 v39; // [rsp+E8h] [rbp-D0h]
  __int64 v40; // [rsp+F0h] [rbp-C8h]
  __int64 v41; // [rsp+F8h] [rbp-C0h]
  __int128 v42; // [rsp+100h] [rbp-B8h]
  __int64 v43; // [rsp+110h] [rbp-A8h]
  __int64 v44; // [rsp+118h] [rbp-A0h]
  __int64 v45; // [rsp+120h] [rbp-98h]
  __int64 v46; // [rsp+128h] [rbp-90h]
  __int64 v47; // [rsp+130h] [rbp-88h]
  __int128 v48; // [rsp+138h] [rbp-80h]
  __int64 v49; // [rsp+148h] [rbp-70h]
  __int128 v50; // [rsp+150h] [rbp-68h]
  __int64 v51; // [rsp+160h] [rbp-58h]
  __int128 v52; // [rsp+168h] [rbp-50h]
  __int64 v53; // [rsp+178h] [rbp-40h]
  __int64 v54; // [rsp+180h] [rbp-38h]
  int v55; // [rsp+188h] [rbp-30h]
  unsigned __int64 v56; // [rsp+198h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 64);
  v56 = __readfsqword(0x28u);
  if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 60) - 1) >= 2 )
    v3 = 0;
  v4 = *(_QWORD *)(v3 + 64);
  v5 = sub_3CB5D0(**(_QWORD **)(a1 + 16), v4);
  v6 = (_QWORD *)v5;
  if ( !v5 )
    return 0;
  if ( (unsigned int)sub_135CC0(v5, v4) )
  {
    sub_7DBD0((__int64)v6);
    j__qfree();
    return 0;
  }
  *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v6;
  v7 = j__qalloc_or_throw();
  sub_24FC40((__int64 *)v7, (__int64)v6);
  v8 = sub_60B60(v6);
  v9 = **(_QWORD **)(a1 + 16);
  v26 = 0xFFFFFFFF00000000LL;
  v25 = 0;
  v24[0].m128i_i64[1] = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v24[0].m128i_i64[0] = (__int64)off_4B7B98;
  v38 = v7;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v24[1] = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v42 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v53 = v9;
  v54 = 0;
  v55 = 0;
  v52 = 0;
  *(_DWORD *)v6 |= 0x1800000u;
  v10 = sub_30AD40(v8, v24);
  v22 = nullptr;
  v23 = 0;
  sub_32F190((__int64 *)&v22, v10, v6);
  v11 = s1;
  if ( (_QWORD)v23 )
    v11 = v22;
  sub_66B20((__int64)"structural_analysis: %s\n", v11);
  sub_3C2980((__int64)v24, 1u, (__int64)&unk_3F00D2);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  sub_65F00(v24);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 104))-- == 1 )
    {
      sub_2515F0((__int64 *)v7);
      v13 = *(_QWORD *)(v7 + 184);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v7 + 192);
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = (_QWORD *)(v13 + 24 * i);
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
              v13 = *(_QWORD *)(v7 + 184);
            }
          }
        }
        *(_QWORD *)(v7 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v7 + 160) )
      {
        *(_QWORD *)(v7 + 168) = 0;
        qfree();
      }
      v17 = *(_QWORD *)(v7 + 128);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v7 + 136);
        if ( v18 )
        {
          for ( j = 0; j != v18; ++j )
          {
            v20 = (_QWORD *)(v17 + 32 * j);
            if ( *v20 )
            {
              v20[1] = 0;
              qfree();
              v17 = *(_QWORD *)(v7 + 128);
            }
          }
        }
        *(_QWORD *)(v7 + 136) = 0;
        qfree();
      }
      sub_24DCD0(v7 + 16);
      j__qfree();
    }
  }
  return 1;
}

