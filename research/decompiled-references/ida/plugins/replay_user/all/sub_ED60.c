__int64 __fastcall sub_ED60(__int64 a1, char a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 j; // rbx
  _QWORD *v13; // rax
  char **v14; // rbx
  __int64 v15; // r9
  char v16; // r8
  char v17; // cl
  int v18; // edx
  __m128i *v19; // rbx
  char v20; // cl
  int v21; // edx
  const void *v22; // rsi
  __m128i *v23; // rbx
  char v24; // cl
  const void *v25; // rsi
  int v26; // edx
  __m128i *v27; // rbx
  int v28; // edx
  char v29; // cl
  const void *v30; // rsi
  __m128i *v31; // rbx
  char v32; // cl
  int v33; // edx
  const void *v34; // rsi
  __int64 v35; // r13
  char **v36; // rbx
  __int64 v37; // r13
  __int64 v38; // r9
  char v39; // r8
  char v40; // cl
  int v41; // edx
  char **v42; // rbx
  char v43; // cl
  char *v44; // rsi
  __int64 v45; // r9
  char v46; // r8
  char **v47; // rbx
  char **v48; // r13
  int v49; // edx
  __int64 v50; // r9
  char v51; // r8
  char v52; // cl
  __int64 v53; // rcx
  const char *v54; // rdx
  const char *v55; // rsi
  __m128i *v57; // rbx
  int v58; // edx
  char v59; // cl
  const void *v60; // rsi
  __int64 v61; // [rsp-10h] [rbp-158h]
  __int64 v62; // [rsp-10h] [rbp-158h]
  __int64 v63; // [rsp-10h] [rbp-158h]
  __int64 v64; // [rsp-10h] [rbp-158h]
  __int64 v65; // [rsp-10h] [rbp-158h]
  __m128i v66; // [rsp+0h] [rbp-148h] BYREF
  __m128i v67; // [rsp+10h] [rbp-138h]
  __m128i v68; // [rsp+20h] [rbp-128h]
  __m128i v69; // [rsp+30h] [rbp-118h]
  __m128i v70; // [rsp+40h] [rbp-108h]
  __m128i v71; // [rsp+50h] [rbp-F8h]
  __m128i v72; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v73; // [rsp+70h] [rbp-D8h]
  __m128i v74; // [rsp+80h] [rbp-C8h]
  __m128i v75; // [rsp+90h] [rbp-B8h]
  __m128i v76; // [rsp+A0h] [rbp-A8h]
  __m128i v77; // [rsp+B0h] [rbp-98h]
  __m128i v78; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v79; // [rsp+D0h] [rbp-78h]
  _OWORD v80[2]; // [rsp+E0h] [rbp-68h] BYREF
  char v81; // [rsp+100h] [rbp-48h] BYREF
  unsigned __int64 v82; // [rsp+108h] [rbp-40h]

  v3 = (__int64 *)(a1 + 672);
  v4 = *(_QWORD *)(a1 + 672);
  v82 = __readfsqword(0x28u);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree();
    *(_QWORD *)(a1 + 672) = 0;
    *(_QWORD *)(a1 + 688) = 0;
  }
  v6 = *(_QWORD *)(a1 + 696);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 704);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (_QWORD *)(v6 + 24 * i);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = *(_QWORD *)(a1 + 696);
        }
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    qfree();
    *(_QWORD *)(a1 + 696) = 0;
    *(_QWORD *)(a1 + 712) = 0;
  }
  if ( *(_QWORD *)(a1 + 720) )
  {
    *(_QWORD *)(a1 + 728) = 0;
    qfree();
    *(_QWORD *)(a1 + 720) = 0;
    *(_QWORD *)(a1 + 736) = 0;
  }
  v10 = *(_QWORD *)(a1 + 744);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 752);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (_QWORD *)(v10 + 24 * j);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = *(_QWORD *)(a1 + 744);
        }
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    qfree();
    *(_QWORD *)(a1 + 744) = 0;
    *(_QWORD *)(a1 + 760) = 0;
  }
  sub_E9E0((__int64)v3, off_24FC0, 1);
  v14 = &off_24B60;
  do
  {
    v15 = (__int64)v14[2];
    v16 = *((_BYTE *)v14 + 12);
    v17 = *((_BYTE *)v14 + 13);
    v18 = *((_DWORD *)v14 + 2);
    v14 += 4;
    sub_E4A0(v3, *(v14 - 4), v18, v17, v16, v15, (__int64)*(v14 - 1));
  }
  while ( v14 != &off_24C60 );
  v19 = &v66;
  v66 = _mm_loadu_si128((const __m128i *)&off_24B40);
  v67 = _mm_loadu_si128((const __m128i *)&off_24B50);
  v68 = _mm_loadu_si128((const __m128i *)&off_24B20);
  v69 = _mm_loadu_si128((const __m128i *)&off_24B30);
  v70 = _mm_loadu_si128((const __m128i *)&off_24B00);
  v71 = _mm_loadu_si128((const __m128i *)&off_24B10);
  do
  {
    v20 = v19->m128i_i8[13];
    v21 = v19->m128i_i32[2];
    v22 = (const void *)v19->m128i_i64[0];
    v61 = v19[1].m128i_i64[1];
    v19 += 2;
    sub_E4A0(v3, v22, v21, v20, v19[-2].m128i_i8[12], v19[-1].m128i_i64[0], v61);
  }
  while ( v19 != &v72 );
  v23 = &v66;
  v66 = _mm_loadu_si128((const __m128i *)&off_24AE0);
  v67 = _mm_loadu_si128(&xmmword_24AF0);
  v68 = _mm_loadu_si128((const __m128i *)&off_24AC0);
  v69 = _mm_loadu_si128(&xmmword_24AD0);
  v70 = _mm_loadu_si128(off_24AA0);
  v71 = _mm_loadu_si128(&xmmword_24AB0);
  v72 = _mm_loadu_si128((const __m128i *)&off_24A80);
  v73 = _mm_loadu_si128(&xmmword_24A90);
  v74 = _mm_loadu_si128(off_24A60);
  v75 = _mm_loadu_si128(&xmmword_24A70);
  v76 = _mm_loadu_si128((const __m128i *)&off_24A40);
  v77 = _mm_loadu_si128(&xmmword_24A50);
  do
  {
    v24 = v23->m128i_i8[13];
    v25 = (const void *)v23->m128i_i64[0];
    v26 = v23->m128i_i32[2];
    v62 = v23[1].m128i_i64[1];
    v23 += 2;
    sub_E4A0(v3, v25, v26, v24, v23[-2].m128i_i8[12], v23[-1].m128i_i64[0], v62);
  }
  while ( v23 != &v78 );
  if ( a2 )
  {
    v27 = &v66;
    v66 = _mm_loadu_si128((const __m128i *)&off_24FA0);
    v67 = _mm_loadu_si128((const __m128i *)&xmmword_24FB0);
    v68 = _mm_loadu_si128((const __m128i *)&off_24F80);
    v69 = _mm_loadu_si128((const __m128i *)&xmmword_24F90);
    v70 = _mm_loadu_si128((const __m128i *)&off_24F60);
    v71 = _mm_loadu_si128((const __m128i *)&xmmword_24F70);
    v72 = _mm_loadu_si128((const __m128i *)&off_24F40);
    v73 = _mm_loadu_si128((const __m128i *)&xmmword_24F50);
    v74 = _mm_loadu_si128((const __m128i *)&off_24F20);
    v75 = _mm_loadu_si128((const __m128i *)&xmmword_24F30);
    v76 = _mm_loadu_si128((const __m128i *)&off_24F00);
    v77 = _mm_loadu_si128((const __m128i *)&xmmword_24F10);
    v78 = _mm_loadu_si128((const __m128i *)&off_24EE0);
    v79 = _mm_loadu_si128((const __m128i *)&xmmword_24EF0);
    do
    {
      v28 = v27->m128i_i32[2];
      v29 = v27->m128i_i8[13];
      v30 = (const void *)v27->m128i_i64[0];
      v63 = v27[1].m128i_i64[1];
      v27 += 2;
      sub_E4A0(v3, v30, v28, v29, v27[-2].m128i_i8[12], v27[-1].m128i_i64[0], v63);
    }
    while ( v27 != (__m128i *)v80 );
    v31 = &v66;
    *(_DWORD *)(a1 + 780) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v3, off_24EC0, unk_24EC8, unk_24ECD, unk_24ECC, xmmword_24ED0, *((__int64 *)&xmmword_24ED0 + 1));
    *(_DWORD *)(a1 + 784) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v3, off_24EA0, unk_24EA8, unk_24EAD, unk_24EAC, xmmword_24EB0, *((__int64 *)&xmmword_24EB0 + 1));
    v66 = _mm_loadu_si128((const __m128i *)&off_24E80);
    v67 = _mm_loadu_si128((const __m128i *)&xmmword_24E90);
    v68 = _mm_loadu_si128((const __m128i *)&off_24E60);
    v69 = _mm_loadu_si128((const __m128i *)&xmmword_24E70);
    v70 = _mm_loadu_si128((const __m128i *)&off_24E40);
    v71 = _mm_loadu_si128((const __m128i *)&xmmword_24E50);
    v72 = _mm_loadu_si128((const __m128i *)&off_24E20);
    v73 = _mm_loadu_si128((const __m128i *)&xmmword_24E30);
    v74 = _mm_loadu_si128((const __m128i *)&off_24E00);
    v75 = _mm_loadu_si128((const __m128i *)&xmmword_24E10);
    v76 = _mm_loadu_si128((const __m128i *)&off_24DE0);
    v77 = _mm_loadu_si128((const __m128i *)&xmmword_24DF0);
    v78 = _mm_loadu_si128((const __m128i *)&off_24DC0);
    v79 = _mm_loadu_si128((const __m128i *)&xmmword_24DD0);
    v80[0] = _mm_loadu_si128((const __m128i *)&off_24DA0);
    v80[1] = _mm_loadu_si128((const __m128i *)&xmmword_24DB0);
    do
    {
      v32 = v31->m128i_i8[13];
      v33 = v31->m128i_i32[2];
      v34 = (const void *)v31->m128i_i64[0];
      v64 = v31[1].m128i_i64[1];
      v31 += 2;
      sub_E4A0(v3, v34, v33, v32, v31[-2].m128i_i8[12], v31[-1].m128i_i64[0], v64);
    }
    while ( v31 != (__m128i *)&v81 );
    v35 = 16;
    sub_E4A0(v3, off_24C60, unk_24C68, unk_24C6D, unk_24C6C, (__int64)off_24C70, unk_24C78);
  }
  else
  {
    v57 = &v66;
    v66 = _mm_loadu_si128((const __m128i *)&off_24D80);
    v67 = _mm_loadu_si128((const __m128i *)&xmmword_24D90);
    v68 = _mm_loadu_si128((const __m128i *)&off_24D60);
    v69 = _mm_loadu_si128((const __m128i *)&xmmword_24D70);
    v70 = _mm_loadu_si128((const __m128i *)&off_24D40);
    v71 = _mm_loadu_si128((const __m128i *)&xmmword_24D50);
    v72 = _mm_loadu_si128((const __m128i *)&off_24D20);
    v73 = _mm_loadu_si128((const __m128i *)&xmmword_24D30);
    v74 = _mm_loadu_si128((const __m128i *)&off_24D00);
    v75 = _mm_loadu_si128((const __m128i *)&xmmword_24D10);
    v76 = _mm_loadu_si128((const __m128i *)&off_24CE0);
    v77 = _mm_loadu_si128((const __m128i *)&xmmword_24CF0);
    v78 = _mm_loadu_si128((const __m128i *)&off_24CC0);
    v79 = _mm_loadu_si128((const __m128i *)&xmmword_24CD0);
    do
    {
      v58 = v57->m128i_i32[2];
      v59 = v57->m128i_i8[13];
      v60 = (const void *)v57->m128i_i64[0];
      v65 = v57[1].m128i_i64[1];
      v57 += 2;
      sub_E4A0(v3, v60, v58, v59, v57[-2].m128i_i8[12], v57[-1].m128i_i64[0], v65);
    }
    while ( v57 != (__m128i *)v80 );
    *(_DWORD *)(a1 + 780) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v3, off_24CA0, unk_24CA8, unk_24CAD, unk_24CAC, xmmword_24CB0, *((__int64 *)&xmmword_24CB0 + 1));
    *(_DWORD *)(a1 + 784) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v3, off_24C80, unk_24C88, unk_24C8D, unk_24C8C, xmmword_24C90, *((__int64 *)&xmmword_24C90 + 1));
    sub_E4A0(v3, off_24C60, unk_24C68, unk_24C6D, unk_24C6C, (__int64)off_24C70, unk_24C78);
    v35 = 8;
  }
  v36 = &off_24840;
  v37 = 4 * v35;
  do
  {
    v38 = (__int64)v36[2];
    v39 = *((_BYTE *)v36 + 12);
    v40 = *((_BYTE *)v36 + 13);
    v41 = *((_DWORD *)v36 + 2);
    v36 += 4;
    sub_E4A0(v3, *(v36 - 4), v41, v40, v39, v38, (__int64)*(v36 - 1));
  }
  while ( &(&off_24840)[v37] != v36 );
  sub_E4A0(v3, off_24820, unk_24828, unk_2482D, unk_2482C, (__int64)off_24830, unk_24838);
  v42 = (char **)&off_24720;
  do
  {
    v43 = *((_BYTE *)v42 + 13);
    v44 = *v42;
    v45 = (__int64)v42[2];
    v46 = *((_BYTE *)v42 + 12);
    v42 += 4;
    sub_E4A0(v3, v44, *((_DWORD *)v42 - 6), v43, v46, v45, (__int64)*(v42 - 1));
  }
  while ( &off_24820 != v42 );
  v47 = &off_24520;
  v48 = &(&off_24520)[v37];
  do
  {
    v49 = *((_DWORD *)v47 + 2);
    v50 = (__int64)v47[2];
    v51 = *((_BYTE *)v47 + 12);
    v52 = *((_BYTE *)v47 + 13);
    v47 += 4;
    sub_E4A0(v3, *(v47 - 4), v49, v52, v51, v50, (__int64)*(v47 - 1));
  }
  while ( v48 != v47 );
  v53 = *(_QWORD *)(a1 + 680);
  if ( (a2 != 1 || v53 != 76) && (v53 != 52 || a2) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return v82 - __readfsqword(0x28u);
  }
  if ( (*(_DWORD *)debug & 0x10000) == 0 )
    return v82 - __readfsqword(0x28u);
  v54 = s;
  if ( *(_QWORD *)(a1 + 840) )
    v54 = *(const char **)(a1 + 832);
  v55 = s;
  if ( *(_QWORD *)(a1 + 816) )
    v55 = *(const char **)(a1 + 808);
  return sub_9D40((__int64)"%s %s: preset_pc_registers nregs %d\n", v55, v54, v53);
}

