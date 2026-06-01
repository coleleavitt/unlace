__int64 __fastcall sub_393D00(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int16 v17; // ax
  __int16 v18; // dx
  __m128i *v19; // rax
  __m128i *v20; // r12
  int v21; // eax
  __m128i v22; // xmm0
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 n; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 ii; // rbp
  _QWORD *v31; // rax
  __int64 v33; // rax
  _QWORD *v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 i; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 j; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int32 v45; // ecx
  char v46; // al
  char v47; // r8
  char v48; // al
  char v49; // r14
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 k; // r15
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 m; // r15
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r15
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r15
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // r15
  _QWORD *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r15
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  unsigned int v74; // [rsp+0h] [rbp-118h]
  __int64 v75; // [rsp+0h] [rbp-118h]
  __int64 v76; // [rsp+0h] [rbp-118h]
  __int64 v77; // [rsp+0h] [rbp-118h]
  __int64 v78; // [rsp+0h] [rbp-118h]
  __int64 v79; // [rsp+0h] [rbp-118h]
  __int64 v80; // [rsp+0h] [rbp-118h]
  __int64 v82; // [rsp+8h] [rbp-110h]
  __int64 v83; // [rsp+8h] [rbp-110h]
  __int64 v84; // [rsp+8h] [rbp-110h]
  __int64 v85; // [rsp+8h] [rbp-110h]
  __int64 v86; // [rsp+8h] [rbp-110h]
  __int64 v87; // [rsp+8h] [rbp-110h]
  __int64 v88; // [rsp+8h] [rbp-110h]
  __int64 v89; // [rsp+8h] [rbp-110h]
  __int64 v90; // [rsp+8h] [rbp-110h]
  __int64 v91; // [rsp+8h] [rbp-110h]
  __int64 v92; // [rsp+8h] [rbp-110h]
  __int64 v93; // [rsp+8h] [rbp-110h]
  __int64 v94; // [rsp+8h] [rbp-110h]
  __int64 v95; // [rsp+8h] [rbp-110h]
  __int64 v96; // [rsp+8h] [rbp-110h]
  __int64 v97; // [rsp+8h] [rbp-110h]
  __int16 v99; // [rsp+14h] [rbp-104h]
  __int64 v100; // [rsp+18h] [rbp-100h]
  __int64 v101; // [rsp+18h] [rbp-100h]
  __int64 v102; // [rsp+18h] [rbp-100h]
  __int64 v103; // [rsp+18h] [rbp-100h]
  __int64 v104; // [rsp+18h] [rbp-100h]
  __int64 v105; // [rsp+18h] [rbp-100h]
  __int64 v106; // [rsp+18h] [rbp-100h]
  int v107; // [rsp+20h] [rbp-F8h] BYREF
  int v108; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v109; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD *v110; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v111; // [rsp+38h] [rbp-E0h]
  __int64 v112; // [rsp+40h] [rbp-D8h]
  __m128i v113; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v114; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v115[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v116; // [rsp+80h] [rbp-98h]
  __int128 v117; // [rsp+88h] [rbp-90h]
  __m128i v118; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v119; // [rsp+B0h] [rbp-68h] BYREF
  int v120; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v121; // [rsp+D8h] [rbp-40h]

  v121 = __readfsqword(0x28u);
  sub_390EF0((__int64)&v110, a4);
  v10 = *(_DWORD *)a4;
  v115[0] = 0;
  v107 = v10;
  v11 = *(_DWORD *)(a4 + 4);
  v115[1] = -1;
  v108 = v11;
  v12 = *(_DWORD *)(a4 + 8);
  v116 = 0;
  v99 = v12;
  v13 = *(_QWORD *)(a4 + 24);
  v117 = 0;
  v109 = v13;
  if ( v110 )
  {
    if ( !(unsigned __int8)sub_384990((__int64 *)&v109, 0) )
    {
      v74 = 0;
      goto LABEL_33;
    }
  }
  else if ( !v112 )
  {
    v74 = 0;
    goto LABEL_35;
  }
  if ( !a3 || a6 == 1 )
  {
    v33 = *(_QWORD *)(a3 + 32);
    if ( !v33
      || (v34 = *(_QWORD **)(v33 + 8), v35 = sub_3312A0(v34, v109),
                                       !(unsigned __int8)sub_332C60((__int64)(v34 + 1), v35)) )
    {
      sub_14C800(&v118, *(_QWORD *)(a2 + 112), &v110, v115, 0);
      v14 = v118.m128i_i64[0];
      if ( v118.m128i_i64[0] )
      {
        if ( !*(_DWORD *)(v118.m128i_i64[0] + 104) )
        {
          sub_258D30((__int64 *)v118.m128i_i64[0]);
          v36 = *(_QWORD *)(v14 + 184);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v14 + 192);
            if ( v37 )
            {
              for ( i = 0; i != v37; ++i )
              {
                v39 = (_QWORD *)(v36 + 24 * i);
                if ( *v39 )
                {
                  v39[1] = 0;
                  v100 = i;
                  qfree();
                  v36 = *(_QWORD *)(v14 + 184);
                  i = v100;
                }
              }
            }
            *(_QWORD *)(v14 + 192) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v14 + 160) )
          {
            *(_QWORD *)(v14 + 168) = 0;
            qfree();
          }
          v40 = *(_QWORD *)(v14 + 128);
          if ( v40 )
          {
            v41 = *(_QWORD *)(v14 + 136);
            if ( v41 )
            {
              for ( j = 0; j != v41; ++j )
              {
                v43 = (_QWORD *)(v40 + 32 * j);
                if ( *v43 )
                {
                  v43[1] = 0;
                  v101 = j;
                  qfree();
                  v40 = *(_QWORD *)(v14 + 128);
                  j = v101;
                }
              }
            }
            *(_QWORD *)(v14 + 136) = 0;
            qfree();
          }
          sub_255410(v14 + 16);
          j__qfree();
        }
        v44 = v110;
        v15 = v109;
        if ( !v110 )
          v44 = v111;
        if ( v109 == *v44 )
        {
          v107 = 0;
          v108 = 0;
          v99 = 0;
        }
        goto LABEL_7;
      }
      if ( v110 )
      {
        if ( *v110 != v109 )
          goto LABEL_94;
      }
      else if ( v109 != *v111 )
      {
        goto LABEL_94;
      }
      v107 = 0;
      v108 = 0;
      goto LABEL_94;
    }
  }
  v14 = *(_QWORD *)(a3 + 32);
  if ( v14 )
  {
    ++*(_DWORD *)(v14 + 104);
    v15 = v109;
LABEL_7:
    v16 = *(_QWORD *)v14;
    if ( a5 != 1 && v107 >= 0 )
    {
      v113.m128i_i32[3] = v107;
      v17 = v99;
      v113.m128i_i32[2] = 0;
      v113.m128i_i64[0] = (__int64)off_4E0BF8;
      v114.m128i_i64[0] = v16;
      v114.m128i_i64[1] = v15;
      goto LABEL_10;
    }
    if ( v15 == v16 )
    {
      v107 = 0;
      v17 = v99;
      v45 = 0;
      goto LABEL_65;
    }
    v102 = v15;
    v46 = sub_332B20((_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL), &v110);
    v15 = v102;
    if ( v46 )
    {
LABEL_71:
      v47 = *(_BYTE *)(a2 + 718);
      ++*(_DWORD *)(v14 + 104);
      v82 = v15;
      v118.m128i_i64[0] = v14;
      v48 = sub_38C400(&v118, v15, &v108, &v107, v47, (__m128i)0LL);
      v23 = (*(_DWORD *)(v14 + 104))-- == 1;
      v15 = v82;
      v49 = v48;
      if ( v23 )
      {
        sub_258D30((__int64 *)v14);
        v50 = *(_QWORD *)(v14 + 184);
        v51 = v82;
        if ( v50 )
        {
          v52 = *(_QWORD *)(v14 + 192);
          if ( v52 )
          {
            for ( k = 0; k != v52; ++k )
            {
              v54 = (_QWORD *)(v50 + 24 * k);
              if ( *v54 )
              {
                v54[1] = 0;
                v83 = v52;
                v75 = v51;
                qfree();
                v50 = *(_QWORD *)(v14 + 184);
                v52 = v83;
                v51 = v75;
              }
            }
          }
          *(_QWORD *)(v14 + 192) = 0;
          v76 = v51;
          qfree();
          v51 = v76;
        }
        if ( *(_QWORD *)(v14 + 160) )
        {
          *(_QWORD *)(v14 + 168) = 0;
          v77 = v51;
          qfree();
          v51 = v77;
        }
        v55 = *(_QWORD *)(v14 + 128);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v14 + 136);
          if ( v56 )
          {
            for ( m = 0; m != v56; ++m )
            {
              v58 = (_QWORD *)(v55 + 32 * m);
              if ( *v58 )
              {
                v58[1] = 0;
                v84 = v56;
                v78 = v51;
                qfree();
                v55 = *(_QWORD *)(v14 + 128);
                v56 = v84;
                v51 = v78;
              }
            }
          }
          *(_QWORD *)(v14 + 136) = 0;
          v79 = v51;
          qfree();
          v51 = v79;
        }
        v80 = v51;
        sub_255410(v14 + 16);
        j__qfree();
        v15 = v80;
      }
      v16 = *(_QWORD *)v14;
      if ( v49 )
      {
        v45 = v107;
        v17 = 15;
      }
      else if ( a3 )
      {
        v45 = *(_DWORD *)(a3 + 44);
        v108 = *(_DWORD *)(a3 + 48);
        v17 = *(_WORD *)(a3 + 52);
        v107 = v45;
      }
      else
      {
        v17 = v99;
        v45 = v107;
      }
LABEL_65:
      v113.m128i_i32[3] = v45;
      v113.m128i_i32[2] = 0;
      v113.m128i_i64[0] = (__int64)off_4E0BF8;
      v114.m128i_i64[0] = v16;
      v114.m128i_i64[1] = v15;
      if ( a5 == 1 && !*(_BYTE *)(*(_QWORD *)(a3 + 128) + 714LL) )
      {
        v18 = *(_WORD *)(a4 + 4);
        goto LABEL_11;
      }
LABEL_10:
      v18 = v108;
LABEL_11:
      v119.m128i_i16[7] = v17;
      v119.m128i_i64[0] = 0;
      v119.m128i_i32[2] = -1;
      v119.m128i_i16[6] = v18;
      v120 = 1;
      v118 = 0;
      v19 = (__m128i *)qalloc();
      v20 = v19;
      if ( !v19 )
        sub_3885F0((__int64)"hexrays_place_t");
      *v19 = _mm_load_si128(&v113);
      v19[1] = _mm_load_si128(&v114);
      if ( a1[2].m128i_i64[1] )
      {
        qfree();
        a1[2].m128i_i64[1] = 0;
      }
      v21 = v120;
      *a1 = _mm_load_si128(&v118);
      v22 = _mm_load_si128(&v119);
      a1[2].m128i_i32[0] = v21;
      a1[1] = v22;
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__m128i *))(v20->m128i_i64[0] + 16))(v20);
      qfree();
      v74 = 1;
      goto LABEL_15;
    }
    v74 = 0;
    if ( !a6 )
    {
LABEL_15:
      v23 = (*(_DWORD *)(v14 + 104))-- == 1;
      if ( v23 )
      {
        sub_258D30((__int64 *)v14);
        v24 = *(_QWORD *)(v14 + 184);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v14 + 192);
          if ( v25 )
          {
            for ( n = 0; n != v25; ++n )
            {
              v27 = (_QWORD *)(v24 + 24 * n);
              if ( *v27 )
              {
                v27[1] = 0;
                qfree();
                v24 = *(_QWORD *)(v14 + 184);
              }
            }
          }
          *(_QWORD *)(v14 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v14 + 160) )
        {
          *(_QWORD *)(v14 + 168) = 0;
          qfree();
        }
        v28 = *(_QWORD *)(v14 + 128);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v14 + 136);
          if ( v29 )
          {
            for ( ii = 0; ii != v29; ++ii )
            {
              v31 = (_QWORD *)(v28 + 32 * ii);
              if ( *v31 )
              {
                v31[1] = 0;
                qfree();
                v28 = *(_QWORD *)(v14 + 128);
              }
            }
          }
          *(_QWORD *)(v14 + 136) = 0;
          qfree();
        }
        sub_255410(v14 + 16);
        j__qfree();
      }
      goto LABEL_33;
    }
    sub_14C800(&v118, *(_QWORD *)(a2 + 112), &v110, v115, 0);
    v23 = (*(_DWORD *)(v14 + 104))-- == 1;
    v15 = v102;
    if ( v23 )
    {
      sub_258D30((__int64 *)v14);
      v59 = *(_QWORD *)(v14 + 184);
      v60 = v102;
      if ( v59 )
      {
        v61 = 0;
        v85 = *(_QWORD *)(v14 + 192);
        if ( v85 )
        {
          do
          {
            v62 = (_QWORD *)(v59 + 24 * v61);
            if ( *v62 )
            {
              v62[1] = 0;
              v103 = v60;
              qfree();
              v59 = *(_QWORD *)(v14 + 184);
              v60 = v103;
            }
            ++v61;
          }
          while ( v85 != v61 );
        }
        *(_QWORD *)(v14 + 192) = 0;
        v86 = v60;
        qfree();
        v60 = v86;
      }
      if ( *(_QWORD *)(v14 + 160) )
      {
        *(_QWORD *)(v14 + 168) = 0;
        v87 = v60;
        qfree();
        v60 = v87;
      }
      v63 = *(_QWORD *)(v14 + 128);
      if ( v63 )
      {
        v64 = 0;
        v88 = *(_QWORD *)(v14 + 136);
        if ( v88 )
        {
          do
          {
            v65 = (_QWORD *)(v63 + 32 * v64);
            if ( *v65 )
            {
              v65[1] = 0;
              v104 = v60;
              qfree();
              v63 = *(_QWORD *)(v14 + 128);
              v60 = v104;
            }
            ++v64;
          }
          while ( v88 != v64 );
        }
        *(_QWORD *)(v14 + 136) = 0;
        v89 = v60;
        qfree();
        v60 = v89;
      }
      v90 = v60;
      sub_255410(v14 + 16);
      j__qfree();
      v15 = v90;
    }
    v14 = v118.m128i_i64[0];
    if ( v118.m128i_i64[0] )
    {
      if ( !*(_DWORD *)(v118.m128i_i64[0] + 104) )
      {
        v91 = v15;
        sub_258D30((__int64 *)v118.m128i_i64[0]);
        v66 = *(_QWORD *)(v14 + 184);
        v67 = v91;
        if ( v66 )
        {
          v68 = 0;
          v92 = *(_QWORD *)(v14 + 192);
          if ( v92 )
          {
            do
            {
              v69 = (_QWORD *)(v66 + 24 * v68);
              if ( *v69 )
              {
                v69[1] = 0;
                v105 = v67;
                qfree();
                v66 = *(_QWORD *)(v14 + 184);
                v67 = v105;
              }
              ++v68;
            }
            while ( v92 != v68 );
          }
          *(_QWORD *)(v14 + 192) = 0;
          v93 = v67;
          qfree();
          v67 = v93;
        }
        if ( *(_QWORD *)(v14 + 160) )
        {
          *(_QWORD *)(v14 + 168) = 0;
          v94 = v67;
          qfree();
          v67 = v94;
        }
        v70 = *(_QWORD *)(v14 + 128);
        if ( v70 )
        {
          v71 = 0;
          v95 = *(_QWORD *)(v14 + 136);
          if ( v95 )
          {
            do
            {
              v72 = (_QWORD *)(v70 + 32 * v71);
              if ( *v72 )
              {
                v72[1] = 0;
                v106 = v67;
                qfree();
                v70 = *(_QWORD *)(v14 + 128);
                v67 = v106;
              }
              ++v71;
            }
            while ( v95 != v71 );
          }
          *(_QWORD *)(v14 + 136) = 0;
          v96 = v67;
          qfree();
          v67 = v96;
        }
        v97 = v67;
        sub_255410(v14 + 16);
        j__qfree();
        v15 = v97;
      }
      v73 = v110;
      if ( !v110 )
        v73 = v111;
      if ( *v73 == v15 )
      {
        v107 = 0;
        v16 = *(_QWORD *)v14;
        v45 = 0;
        v17 = 0;
        v108 = 0;
        goto LABEL_65;
      }
      goto LABEL_71;
    }
  }
LABEL_94:
  v74 = -(LODWORD(v115[0]) == -18);
LABEL_33:
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree();
  }
LABEL_35:
  if ( v111 )
  {
    v112 = 0;
    qfree();
  }
  return v74;
}

