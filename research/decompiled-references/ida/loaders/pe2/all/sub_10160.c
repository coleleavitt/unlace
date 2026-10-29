__int64 __fastcall sub_10160(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int16 v4; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // edx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 i; // rax
  const __m128i *v17; // r15
  __m128i v18; // xmm1
  __int128 v19; // xmm0
  char v20; // al
  int v21; // ebx
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // r13d
  __int64 v26; // r15
  __int64 v27; // rbp
  char *v28; // rax
  __int64 v29; // r12
  int v30; // eax
  int v31; // edx
  char *v32; // r13
  const char *v33; // r15
  int v34; // eax
  const char *v35; // rdx
  char v36; // al
  __int64 v37; // rbx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  char v45; // al
  unsigned __int8 byte; // [rsp+0h] [rbp-618h]
  __int16 v47; // [rsp+Ch] [rbp-60Ch]
  unsigned int v48; // [rsp+Ch] [rbp-60Ch]
  __int64 v49; // [rsp+20h] [rbp-5F8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-5F0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-5E8h]
  __int64 v52; // [rsp+38h] [rbp-5E0h]
  const __m128i *v53; // [rsp+40h] [rbp-5D8h]
  __int128 v54; // [rsp+48h] [rbp-5D0h]
  __int64 v55; // [rsp+58h] [rbp-5C0h]
  int v56; // [rsp+60h] [rbp-5B8h]
  _QWORD v57[2]; // [rsp+70h] [rbp-5A8h] BYREF
  __int64 v58; // [rsp+80h] [rbp-598h]
  __int64 v59; // [rsp+88h] [rbp-590h]
  __int64 v60; // [rsp+90h] [rbp-588h]
  __int64 v61; // [rsp+98h] [rbp-580h]
  __m128i si128; // [rsp+A0h] [rbp-578h]
  __int64 v63; // [rsp+B0h] [rbp-568h]
  unsigned int v64; // [rsp+B8h] [rbp-560h]
  char v65; // [rsp+BCh] [rbp-55Ch]
  int v66; // [rsp+C4h] [rbp-554h]
  unsigned int v67; // [rsp+C8h] [rbp-550h]
  int v68; // [rsp+CCh] [rbp-54Ch]
  int v69; // [rsp+D0h] [rbp-548h]
  __int64 v70; // [rsp+E8h] [rbp-530h]
  __int128 v71; // [rsp+F0h] [rbp-528h]
  int v72; // [rsp+100h] [rbp-518h]
  char v73; // [rsp+104h] [rbp-514h]
  char v74; // [rsp+105h] [rbp-513h]
  bool v75; // [rsp+106h] [rbp-512h]
  __int16 v76; // [rsp+107h] [rbp-511h]
  __m128i v77; // [rsp+110h] [rbp-508h]
  __m128i v78; // [rsp+120h] [rbp-4F8h]
  __int64 v79; // [rsp+130h] [rbp-4E8h]
  __int64 v80; // [rsp+138h] [rbp-4E0h]
  __int64 v81; // [rsp+140h] [rbp-4D8h]
  __int128 v82; // [rsp+148h] [rbp-4D0h]
  __int128 v83; // [rsp+158h] [rbp-4C0h]
  __int128 v84; // [rsp+168h] [rbp-4B0h]
  __int128 v85; // [rsp+178h] [rbp-4A0h]
  __int128 v86; // [rsp+188h] [rbp-490h]
  __int128 v87; // [rsp+198h] [rbp-480h]
  __int128 v88; // [rsp+1A8h] [rbp-470h]
  __int128 v89; // [rsp+1B8h] [rbp-460h]
  unsigned __int64 v90; // [rsp+1C8h] [rbp-450h]
  char s[1023]; // [rsp+1D0h] [rbp-448h] BYREF
  char v92; // [rsp+5CFh] [rbp-49h] BYREF
  char v93; // [rsp+5D0h] [rbp-48h] BYREF
  unsigned __int64 v94; // [rsp+5D8h] [rbp-40h]

  v4 = word_379D0 & 0x2008;
  v94 = __readfsqword(0x28u);
  v57[0] = &off_35518;
  v59 = a1 + 72;
  v60 = a1 + 32;
  v58 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2F000);
  v47 = word_379D0 & 0x2008;
  v57[1] = a2;
  v61 = a4;
  v63 = qword_379D8;
  v70 = 0;
  v64 = qlsize();
  v75 = v4 == 8;
  v74 = byte_379E0;
  v72 = 0;
  v73 = a3;
  v76 = 0;
  v65 = 0;
  v71 = 0;
  if ( v61 )
  {
    v6 = *(_QWORD *)(v61 + 8);
    if ( v6 > 1 )
      si128.m128i_i64[0] = v6 - 1;
  }
  v7 = *(_QWORD *)(a1 + 592);
  if ( *(_DWORD *)(a1 + 72) == 23126 )
    v8 = v7 + 40;
  else
    v8 = *(unsigned __int16 *)(a1 + 92) + (_DWORD)v7 + 24;
  sub_DD10(a1, a2, v8, *(unsigned __int16 *)(a1 + 78), (__int64)v57);
  if ( v74 )
  {
    if ( !a3 )
    {
      v9 = getinf_flag();
      sub_F340(a1, a2, v9);
    }
    v10 = qword_379D8;
    if ( *(_DWORD *)v59 == 23126 )
    {
      v10 = qword_379D8 - (40 - *(unsigned __int16 *)(v60 + 6));
      v11 = v64;
    }
    else
    {
      v11 = (*(_DWORD *)(v59 + 80) + 4095) & 0xFFFFF000;
    }
    v12 = v10 + v11;
    v53 = nullptr;
    v55 = 0;
    v56 = -1;
    v54 = 0;
    v13 = *(_QWORD *)(v58 + 616);
    v14 = 0x100000000LL;
    if ( *(_DWORD *)(v13 + 24) == 8 )
      v14 = -1;
    v15 = *(_QWORD *)(v13 + 16);
    if ( v12 != v14 )
      v14 = v15 & v12;
    v51 = v15 & v10;
    v52 = v14;
    rangeset_t_add();
    for ( i = get_first_seg(); i; i = get_next_seg() )
      rangeset_t_sub();
    v17 = v53;
    if ( 16LL * (_QWORD)v54 )
    {
      v18 = 0;
      v19 = -1;
      do
      {
        v77 = v18;
        v20 = 2;
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v90 = 0xFFFFFFFF00000000LL;
        v78 = v18;
        v82 = v19;
        v83 = v19;
        v84 = v19;
        v85 = v19;
        v86 = v19;
        v87 = v19;
        v88 = v19;
        v89 = v19;
        v77 = _mm_loadu_si128(v17);
        if ( *(_WORD *)(v59 + 24) != 523 )
          v20 = (*(_WORD *)(v59 + 4) == 0xAA64 || *(_WORD *)(v59 + 4) == 512 || *(_WORD *)(v59 + 4) == 0x8664) + 1;
        BYTE3(v80) = v20;
        LOBYTE(v80) = 1;
        BYTE2(v80) = 6;
        add_segm_ex();
        ++v17;
        v18 = 0;
        v19 = -1;
      }
      while ( v17 != &v53[(_QWORD)v54] );
    }
  }
  if ( !a3 )
  {
    v21 = v69 + v68;
    if ( v69 + v68 < v64 && (v47 == 8 || netnode_altval()) )
    {
      if ( byte_379E1 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)(v58 + 616) + 16LL) & (qword_379D8 + netnode_altval());
        v41 = netnode_altval();
        v50 = v41;
        goto LABEL_74;
      }
      v50 = v64 - v21;
      v39 = *(_DWORD *)(v59 + 56);
      if ( !v39 )
        v39 = 1;
      v40 = v66;
      if ( !v66 )
        v40 = v68;
      v49 = *(_QWORD *)(*(_QWORD *)(v58 + 616) + 16LL) & (v63 + v67 + ((v39 + v40 - 1) & (unsigned int)-v39));
      if ( (unsigned int)sub_D070(
                           (__int64)"BUTTON YES ~Y~es\n"
                                    "BUTTON NO* ~N~o\n"
                                    "BUTTON CANCEL NONE\n"
                                    "Do you want to load overlay data?\n"
                                    "\n"
                                    " <Overlay VA:$::18::>\n"
                                    " <Overlay size:N::18::>\n",
                           &v49,
                           &v50)
        && v49 )
      {
        v53 = (const __m128i *)(v49 - v63);
        netnode_supset();
        v51 = v50;
        netnode_supset();
        v41 = v50;
LABEL_74:
        v78 = 0;
        v79 = 0;
        v42 = v49 + v41;
        v80 = 0;
        v81 = 0;
        v90 = 0xFFFFFFFF00000000LL;
        v77.m128i_i64[0] = v49;
        v82 = -1;
        v83 = -1;
        v84 = -1;
        v85 = -1;
        v86 = -1;
        v87 = -1;
        v88 = -1;
        v89 = -1;
        v43 = *(_QWORD *)(v58 + 616);
        v44 = 0x100000000LL;
        if ( *(_DWORD *)(v43 + 24) == 8 )
          v44 = -1;
        if ( v42 != v44 )
          v44 = *(_QWORD *)(v43 + 16) & v42;
        v77.m128i_i64[1] = v44;
        if ( !byte_379E1 )
        {
          v45 = 2;
          if ( *(_WORD *)(v59 + 24) != 523 )
            v45 = (*(_WORD *)(v59 + 4) == 0xAA64 || *(_WORD *)(v59 + 4) == 512 || *(_WORD *)(v59 + 4) == 0x8664) + 1;
          BYTE3(v80) = v45;
          LOBYTE(v80) = 1;
          BYTE2(v80) = 6;
          add_segm_ex();
        }
        file2base();
      }
    }
  }
  if ( (_QWORD)v71 )
  {
    v22 = v70;
    v72 = *(_DWORD *)(v70 + 56);
    create_filename_cmt();
    getinf();
    sub_97C0();
    v23 = *(_DWORD *)(v59 + 172);
    if ( v23 > 0x1B )
    {
      v24 = *(unsigned int *)(v59 + 168);
      if ( (_DWORD)v24 )
      {
        v25 = 0;
        v26 = *(_QWORD *)(v58 + 616);
        v27 = *(_QWORD *)(v26 + 16) & (qword_379D8 + v24 + 12);
        v48 = v23 / 0x1C;
        do
        {
          if ( !(unsigned __int8)is_loaded() || *(_QWORD *)(v26 + 16) < (unsigned __int64)(v27 + 1) )
            break;
          byte = get_byte();
          if ( (byte | (unsigned __int16)((unsigned __int16)get_byte() << 8)) == 16 )
            goto LABEL_36;
          ++v25;
          v27 = *(_QWORD *)(v26 + 16) & (v27 + 28);
        }
        while ( v48 != v25 );
      }
    }
    if ( (unsigned __int8)qctime_utc() )
    {
      v28 = &s[strlen(s)];
      if ( *(v28 - 1) == 10 )
        *(v28 - 1) = 0;
LABEL_36:
      getinf();
      sub_97C0();
    }
    v29 = 0;
    while ( 1 )
    {
      sub_97C0();
      sub_97C0();
      sub_97C0();
      sub_97C0();
      v30 = qsnprintf();
      v31 = *(_DWORD *)(v22 + 36);
      v32 = &s[v30];
      if ( v31 )
      {
        v33 = "Dummy";
        v34 = 1;
        while ( 1 )
        {
          if ( (v34 & v31) != 0 )
          {
            v33 += 20;
            v32 += (int)qsnprintf();
            v34 = *((_DWORD *)v33 - 1);
            if ( !v34 )
              goto LABEL_44;
          }
          else
          {
            v34 = *((_DWORD *)v33 + 4);
            v33 += 20;
            if ( !v34 )
              goto LABEL_44;
          }
          v31 = *(_DWORD *)(v22 + 36);
        }
      }
      if ( v32 >= &v93 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v35 = " Regular (allocated, relocated, loaded)";
      if ( v30 == 1023 )
      {
LABEL_59:
        *v32 = 0;
      }
      else
      {
        while ( 1 )
        {
          v36 = *v35++;
          *v32 = v36;
          if ( !v36 )
            break;
          if ( ++v32 == &v92 )
            goto LABEL_59;
        }
      }
LABEL_44:
      sub_97C0();
      if ( ((*(int *)(v22 + 36) >> 20) & 0xF) != 0 )
      {
        sub_97C0();
        if ( ++v29 >= (unsigned __int64)v71 )
          break;
      }
      else
      {
        sub_97C0();
        if ( ++v29 >= (unsigned __int64)v71 )
          break;
      }
      v22 = v70 + (v29 << 6);
      v72 = *(_DWORD *)(v22 + 56);
    }
  }
  if ( HIBYTE(v76) )
    *(_BYTE *)(a1 + 986) = 1;
  v37 = si128.m128i_i64[1];
  v57[0] = &off_35518;
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  return v37;
}

