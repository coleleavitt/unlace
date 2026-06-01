unsigned __int64 __fastcall sub_18160(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int16 v10; // ax
  int v11; // edx
  unsigned __int16 v12; // ax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int16 v17; // bx
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  int v25; // ebp
  __int64 v26; // rbx
  unsigned int v27; // r13d
  int v28; // edx
  int v29; // ecx
  int v30; // ebx
  int v31; // r8d
  int v32; // r9d
  unsigned int v33; // r14d
  unsigned int v34; // ebx
  __int64 v35; // rdx
  unsigned int v36; // r13d
  __int64 v37; // rbx
  unsigned __int16 v38; // ax
  int v39; // r8d
  int v40; // r9d
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // ax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // r8
  __int16 v47; // ax
  __int64 v48; // rbp
  _QWORD *v49; // rbx
  unsigned __int16 v50; // ax
  int v51; // r8d
  int v52; // r9d
  __int16 v53; // r14
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // ax
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  _QWORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  bool v62; // zf
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // r14
  __m128i v68; // xmm0
  unsigned __int64 v69; // rbp
  __int64 v70; // rbx
  bool v71; // cf
  unsigned __int64 v72; // rbx
  _BOOL8 v73; // r13
  __int64 v74; // rax
  int v75; // edx
  int insn; // eax
  __int64 v77; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  int v82; // [rsp+10h] [rbp-128h]
  __int64 v83; // [rsp+18h] [rbp-120h]
  __int64 v85; // [rsp+38h] [rbp-100h]
  __int64 v86; // [rsp+48h] [rbp-F0h] BYREF
  char v87[4]; // [rsp+54h] [rbp-E4h] BYREF
  unsigned __int16 v88; // [rsp+58h] [rbp-E0h]
  _OWORD v89[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-B8h]
  __int16 v91; // [rsp+88h] [rbp-B0h]
  __int128 v92; // [rsp+90h] [rbp-A8h]
  __int64 v93; // [rsp+A0h] [rbp-98h]
  __int64 v94; // [rsp+A8h] [rbp-90h]
  int v95; // [rsp+B0h] [rbp-88h]
  __int64 v96; // [rsp+B8h] [rbp-80h]
  int v97; // [rsp+C0h] [rbp-78h]
  __int64 v98; // [rsp+C8h] [rbp-70h]
  int v99; // [rsp+D0h] [rbp-68h]
  __int64 v100; // [rsp+D8h] [rbp-60h]
  int v101; // [rsp+E0h] [rbp-58h]
  __int64 v102; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v103; // [rsp+F8h] [rbp-40h]

  v3 = a1 + 33017;
  v7 = a1 + 33149;
  v8 = a1 + 33025;
  v103 = __readfsqword(0x28u);
  v85 = v3;
  *(_QWORD *)(v8 - 8) = 0;
  v83 = v7;
  *(_QWORD *)(v8 + 108) = 0;
  memset(
    (void *)(v8 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)v3 - (v8 & 0xFFFFFFF8) + 124) >> 3));
  qfseek(a2, 0, 0);
  v9 = qfsize(a2);
  *(_QWORD *)(a1 + 33312) = a2;
  *(_DWORD *)(a1 + 33376) = v9;
  sub_19DB0(1);
  if ( (unsigned int)sub_199C0(a1) != -889275714 )
    sub_E450((__int64)"Illegal magic number");
  *(_WORD *)(a1 + 33019) = sub_19930(a1);
  v10 = sub_19930(a1);
  v11 = *(unsigned __int16 *)(a1 + 33019);
  *(_WORD *)(a1 + 33085) = v10;
  if ( v10 > 0x2Du )
  {
    if ( v10 <= 0x37u && !(_WORD)v11 )
    {
      *(_BYTE *)(a1 + 33088) = v10 - 44;
      if ( v10 > 0x31u )
        *(_BYTE *)(a1 + 33345) = 1;
      goto LABEL_7;
    }
LABEL_122:
    sub_12DB0((__int64)"Unsupported file format (version %u.%u)", v10, v11);
  }
  if ( v10 != 45 )
    goto LABEL_122;
  *(_BYTE *)(a1 + 33088) = (unsigned __int16)v11 > 2u;
  if ( (unsigned int)(v11 - 2) > 1 )
    sub_12C00((__int64)"Class file with version %u.%u (JDK1.%u?) is not tested!", 45, v11, (unsigned __int16)v11 > 2u);
LABEL_7:
  v12 = sub_19930(a1);
  *(_WORD *)(a1 + 33017) = v12;
  if ( v12 <= 2u )
    sub_12DB0((__int64)"Empty constant pool");
  *(_BYTE *)(a1 + 33346) = sub_12A20(a1, a3);
  netnode_check(a1 + 33336, "$ Constant Pool ~", 0, 1);
  --*(_WORD *)(a1 + 33017);
  netnode_check(a1 + 33328, 0, 0, 1);
  sub_19E90(1);
  v17 = sub_13FF0(a1, 0, v13, v14, v15, v16);
  if ( sub_1A7F0(a1, 0) )
  {
    v18 = *(_QWORD *)(a1 + 33328);
    *(_WORD *)(a1 + 33081) = v17;
    *(_QWORD *)(a1 + 33073) = v18;
  }
  else
  {
    netnode_kill(a1 + 33328);
  }
  v19 = sub_19930(a1);
  *(_WORD *)(a1 + 33029) = v19;
  if ( (v19 & 0x89CE) != 0 )
    sub_19260(a1, (unsigned int)"Illegal class access bits (0x%X)\n", v19, v20, v21, v22);
  v23 = sub_19930(a1);
  *(_WORD *)(a1 + 33023) = v23;
  if ( sub_13D40(a1, 1, v23, 0xFFu, v87) )
  {
    *(_WORD *)(a1 + 33021) = v88;
  }
  else
  {
    sub_194D0(a1, -1, "'this' class", *(unsigned __int16 *)(a1 + 33023), 3);
    *(_DWORD *)(a1 + 33021) >>= 16;
  }
  if ( *(_QWORD *)(a1 + 33073) )
    sub_14890(a1);
  *(_WORD *)(a1 + 33027) = sub_19930(a1);
  v24 = sub_19930(a1);
  v25 = v24;
  v26 = 2 * (unsigned int)v24;
  if ( *(_DWORD *)(a1 + 33376) < (unsigned int)v26 )
    sub_19240();
  qfseek(a2, 2 * (unsigned int)v24, 1);
  *(_WORD *)(a1 + 33031) = sub_19930(a1);
  qfseek(a2, -2 - v26, 1);
  sub_1A7F0(a1, 3);
  sub_19DB0(1);
  if ( *(_WORD *)(a1 + 33023) )
  {
    v80 = *(_QWORD *)(a1 + 33053);
    *(_WORD *)(a1 + 33147) = 0;
    sub_1D070(a1, *(unsigned __int16 *)(a1 + 33021), v80, *(unsigned __int16 *)(a1 + 33029), 0, 3);
    hide_name(*(_QWORD *)(a1 + 33053));
  }
  if ( *(_DWORD *)(a1 + 33025) )
  {
    if ( sub_13D40(a1, 1, *(_WORD *)(a1 + 33027), 0xFFu, v87) )
    {
      v81 = *(_QWORD *)(a1 + 33053);
      *(_WORD *)(a1 + 33025) = v88;
      sub_1A5C0(a1, v81, v87);
    }
    else
    {
      sub_194D0(a1, -1, "parent class", *(unsigned __int16 *)(a1 + 33027), 3);
    }
  }
  if ( v25 )
  {
    v27 = 0;
    v86 = -1;
    do
    {
      v30 = sub_19930(a1);
      if ( (_WORD)v30 )
      {
        if ( !v27 )
          netnode_check(&v86, 0, 0, 1);
        v33 = (unsigned __int16)v30;
        v34 = v30 << 16;
        if ( sub_13D40(a1, 1, v33, 0xFFu, v87) )
        {
          sub_1A5C0(a1, *(_QWORD *)(a1 + 33053), v87);
          v34 |= v88;
        }
        else
        {
          sub_194D0(a1, -1, "interface", v33, 3);
        }
        *(_QWORD *)&v89[0] = v34;
        netnode_supset(v86, ++v27, v89, 8, 65);
      }
      else
      {
        sub_19260(a1, (unsigned int)"Ignore zero interface index\n", v28, v29, v31, v32);
      }
      --v25;
    }
    while ( v25 );
    if ( v27 )
    {
      *(_QWORD *)&v89[0] = v27;
      netnode_supset(v86, 0, v89, 8, 65);
      *(_QWORD *)(a1 + 33045) = v86;
    }
  }
  netnode_check(a1 + 33320, 0, 0, 1);
  *(_QWORD *)(a1 + 33033) = *(_QWORD *)(a1 + 33320);
  qfseek(a2, 2, 1);
  if ( *(_DWORD *)(a1 + 33348) )
  {
    v35 = *(unsigned __int16 *)(a1 + 33029);
    if ( (v35 & 0x89CE) == 0 )
      v35 = 0;
    sub_195A0(a1, *(_QWORD *)(a1 + 33053), v35);
  }
  v36 = 1;
  if ( *(_WORD *)(a1 + 33031) )
  {
    while ( 1 )
    {
      v37 = v36;
      *(_OWORD *)(a1 + 33281) = 0;
      *(_OWORD *)(a1 + 33265) = 0;
      *(_OWORD *)(a1 + 33293) = 0;
      *(_WORD *)(a1 + 33271) = v36;
      v38 = sub_19930(a1);
      *(_WORD *)(a1 + 33269) = v38;
      if ( v38 & 0xAF20 | v38 & 7 & ((v38 & 7) - 1) )
      {
        sub_19260(a1, (unsigned int)"Illegal Field#%u Attribute 0x%04x\n", v36, v38, v39, v40);
        sub_195A0(a1, v36 + *(_QWORD *)(a1 + 33053), *(unsigned __int16 *)(a1 + 33269));
      }
      v41 = sub_19930(a1);
      *(_WORD *)(a1 + 33265) = v41;
      if ( !sub_13D40(a1, 1, v41, 0x60u, nullptr) )
        *(_BYTE *)(a1 + 33273) |= 1u;
      v42 = sub_19930(a1);
      *(_WORD *)(a1 + 33267) = v42;
      if ( sub_13D40(a1, 1, v42, 0x40u, v87) )
      {
        sub_1A610(a1, *(_QWORD *)(a1 + 33053) + *(unsigned __int16 *)(a1 + 33271), v87, 0);
        if ( (*(_BYTE *)(a1 + 33273) & 3) == 0 )
          goto LABEL_43;
      }
      else
      {
        *(_BYTE *)(a1 + 33273) |= 2u;
      }
      sub_19260(a1, (unsigned int)"Illegal NameAndType of field %u\n", v36, v43, v44, v45);
LABEL_43:
      sub_16220(a1, 1u);
      if ( *(_QWORD *)(a1 + 33285) == -1 )
        *(_QWORD *)(a1 + 33285) = 0;
      if ( *(_QWORD *)(a1 + 33293) == -1 )
        *(_QWORD *)(a1 + 33293) = 0;
      netnode_supset(*(_QWORD *)(a1 + 33320), v36, a1 + 33265, 44, 83);
      if ( (*(_BYTE *)(a1 + 33273) & 1) != 0 )
      {
        if ( *(_WORD *)(a1 + 33031) < (unsigned __int16)++v36 )
          break;
      }
      else
      {
        v46 = v36++;
        sub_1D070(
          a1,
          *(unsigned __int16 *)(a1 + 33265),
          v37 + *(_QWORD *)(a1 + 33053),
          *(unsigned __int16 *)(a1 + 33269),
          v46,
          3);
        if ( *(_WORD *)(a1 + 33031) < (unsigned __int16)v36 )
          break;
      }
    }
  }
  v47 = sub_19930(a1);
  *(_WORD *)(a1 + 33041) = v47;
  if ( v47 )
  {
    v48 = -1;
    v49 = (_QWORD *)(a1 + 33141);
    do
    {
      v82 = -(int)v48;
      *v49 = 0;
      *(_QWORD *)(a1 + 33257) = 0;
      memset(
        (void *)(v83 & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8 * ((unsigned __int64)((unsigned int)v49 - (v83 & 0xFFFFFFF8) + 124) >> 3));
      *(_WORD *)(a1 + 33147) = -(__int16)v48;
      v50 = sub_19930(a1);
      *(_WORD *)(a1 + 33145) = v50;
      v53 = v50 & 7;
      if ( (v50 & 7 & ((v50 & 7) - 1)) != 0 )
        sub_19260(a1, (unsigned int)"Illegal Method#%u Attribute 0x%04x\n", v82, v50, v51, v52);
      else
        v53 = 0;
      sub_1A7F0(a1, 1);
      v54 = sub_19930(a1);
      *(_WORD *)(a1 + 33141) = v54;
      if ( !sub_13D40(a1, 1, v54, 0x60u, nullptr) )
        *(_BYTE *)(a1 + 33149) |= 1u;
      v55 = sub_19930(a1);
      *(_WORD *)(a1 + 33143) = v55;
      if ( sub_13D40(a1, 1, v55, 0xC0u, v87) )
      {
        sub_1A610(a1, *(_QWORD *)(a1 + 33157), v87, 1);
        if ( (*(_BYTE *)(a1 + 33149) & 3) == 0 )
          goto LABEL_66;
      }
      else
      {
        *(_BYTE *)(a1 + 33149) |= 2u;
      }
      sub_19260(a1, (unsigned int)"Illegal NameAndType of method %u\n", v82, v56, v57, v58);
LABEL_66:
      if ( v53 )
        sub_195A0(a1, *(_QWORD *)(a1 + 33157), *(unsigned __int16 *)(a1 + 33145));
      sub_16220(a1, 2u);
      if ( *(_QWORD *)(a1 + 33201) == -1 )
        *(_QWORD *)(a1 + 33201) = 0;
      v59 = (_QWORD *)(a1 + 33209);
      do
      {
        if ( *v59 == -1 )
          *v59 = 0;
        ++v59;
      }
      while ( (_QWORD *)(a1 + 33249) != v59 );
      if ( *(_QWORD *)(a1 + 33193) )
        sub_1AC90(a1);
      v60 = *(_QWORD *)(a1 + 33185);
      if ( v60 )
      {
        *(_QWORD *)&v89[0] = *(_QWORD *)(a1 + 33185);
        if ( !netnode_altval(v60, 0, 65) )
        {
          netnode_kill(v89);
          *(_QWORD *)(a1 + 33185) = 0;
        }
      }
      v61 = v48--;
      netnode_supset(*(_QWORD *)(a1 + 33320), v61, a1 + 33141, 124, 83);
    }
    while ( *(unsigned __int16 *)(a1 + 33041) >= (unsigned int)-(int)v48 );
  }
  sub_16220(a1, 3u);
  if ( *(_QWORD *)(a1 + 33113) == -1 )
    *(_QWORD *)(a1 + 33113) = 0;
  if ( *(_QWORD *)(a1 + 33121) == -1 )
    *(_QWORD *)(a1 + 33121) = 0;
  v62 = *(_WORD *)(a1 + 33097) == 0xFFFF;
  *(_QWORD *)(a1 + 33312) = 0;
  if ( v62 )
    *(_WORD *)(a1 + 33097) = 0;
  if ( *(_DWORD *)(a1 + 33376) )
  {
    v79 = qftell(a2);
    sub_6E90((__int64)"This file has extra information (pos=0x%llx)", v79);
  }
  sub_14D80(a1, 0);
  sub_19DB0(2);
  if ( !(unsigned __int8)sub_1B4E0(a1) && (*(_BYTE *)(a1 + 33030) & 2) != 0 )
  {
    sub_19260(a1, (unsigned int)"This is interface, but superclass is not java.lang.Object!\n", v63, v64, v65, v66);
    sub_7B10(a1, *(_QWORD *)(a1 + 33053), "Interface have nonstandart parent");
  }
  if ( *(_QWORD *)(a1 + 33045) && !*(_DWORD *)(a1 + 33025) )
  {
    sub_19260(a1, (unsigned int)"This have implements without superclass!\n", v63, 0, v65, v66);
    sub_7B10(a1, *(_QWORD *)(a1 + 33053), "Empty supperclass not for Object");
  }
  if ( *(_DWORD *)(a1 + 33348) )
    *(_BYTE *)(a1 + 33087) |= 0x40u;
  v67 = -1;
  netnode_supset(*(_QWORD *)(a1 + 33336), 0, v85, 124, 83);
  v62 = *(_WORD *)(a1 + 33041) == 0;
  *(_BYTE *)(a1 + 33344) = 1;
  if ( !v62 )
  {
    do
    {
      sub_E500((__int64)"Analysing method %u...\n", -(int)v67);
      netnode_supval(*(_QWORD *)(a1 + 33320), v67, a1 + 33141, 124, 83);
      v69 = *(_QWORD *)(a1 + 33157);
      show_auto(v69, 0);
      v70 = *(unsigned int *)(a1 + 33153);
      v71 = __CFADD__(v69, v70);
      v72 = v69 + v70;
      v73 = v71;
      v74 = getseg(v69);
      v75 = *(_DWORD *)(a1 + 33153);
      if ( !v74 || v73 || *(_QWORD *)(v74 + 8) < v72 )
        sub_12DB0((__int64)"Bad method %u code size 0x%X", -(int)v67, v75);
      if ( v75 )
      {
        do
        {
          insn = create_insn(v69, 0);
          if ( !insn )
            insn = 1;
          v69 += insn;
        }
        while ( v69 < v72 );
      }
      else
      {
        create_data(v69, 0, 16, -1);
      }
      if ( (*(_BYTE *)(a1 + 33149) & 1) == 0 )
        sub_1D070(
          a1,
          *(unsigned __int16 *)(a1 + 33141),
          *(_QWORD *)(a1 + 33157),
          *(unsigned __int16 *)(a1 + 33145),
          *(unsigned __int16 *)(a1 + 33031) - (unsigned int)v67,
          3);
      --v67;
      v68 = _mm_loadl_epi64((const __m128i *)(a1 + 33157));
      v91 = 0;
      v90 = 0;
      v94 = 0;
      v93 = 0xFFFFFFFFLL;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v102 = 0;
      v89[0] = _mm_unpacklo_epi64(v68, (__m128i)(v72 + 1));
      v89[1] = _mm_load_si128((const __m128i *)&xmmword_24EA0);
      v92 = 0;
      add_func_ex(v89);
    }
    while ( *(unsigned __int16 *)(a1 + 33041) >= (unsigned int)-(int)v67 );
  }
  *(_BYTE *)(a1 + 33344) = 0;
  sub_14D80(a1, 1);
  v77 = *(_QWORD *)(a1 + 33336);
  *(_QWORD *)&v89[0] = 161;
  netnode_supset(v77, -1, v89, 8, 65);
  sub_1E270(a1);
  create_filename_cmt();
  return v103 - __readfsqword(0x28u);
}

