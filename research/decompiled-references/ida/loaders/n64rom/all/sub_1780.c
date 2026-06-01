unsigned __int64 __fastcall sub_1780(
        __int64 a1,
        __int16 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *v11; // rax
  __m128i si128; // xmm0
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm1
  __m128 v16; // xmm0
  int v17; // eax
  int v18; // ebp
  _WORD *v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // r15
  unsigned int v22; // ebx
  unsigned __int64 v23; // rdi
  _WORD *v24; // rsi
  _WORD *v25; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v27; // rbx
  __int64 j; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  const char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128 v45; // xmm4
  __m128 v46; // xmm5
  const char *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __m128 v57; // xmm4
  __m128 v58; // xmm5
  const char *v59; // rdx
  const char *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  const char *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __m128 v70; // xmm4
  __m128 v71; // xmm5
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __m128 v76; // xmm4
  __m128 v77; // xmm5
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __m128 v82; // xmm4
  __m128 v83; // xmm5
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int8 v88; // al
  __int64 v90; // [rsp-8h] [rbp-1070h]
  char v91; // [rsp+0h] [rbp-1068h]
  char v92; // [rsp+0h] [rbp-1068h]
  char v93; // [rsp+0h] [rbp-1068h]
  char v94; // [rsp+0h] [rbp-1068h]
  char v95; // [rsp+0h] [rbp-1068h]
  char v96; // [rsp+0h] [rbp-1068h]
  char v97; // [rsp+0h] [rbp-1068h]
  char v98; // [rsp+0h] [rbp-1068h]
  char v99; // [rsp+0h] [rbp-1068h]
  __int64 v100; // [rsp+8h] [rbp-1060h]
  unsigned __int64 v101; // [rsp+10h] [rbp-1058h]
  unsigned __int64 v102; // [rsp+18h] [rbp-1050h]
  _BYTE v103[2]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int8 v104; // [rsp+22h] [rbp-1046h]
  unsigned __int8 v105; // [rsp+23h] [rbp-1045h]
  __m128 v106; // [rsp+24h] [rbp-1044h]
  unsigned int v107; // [rsp+34h] [rbp-1034h]
  unsigned int v108; // [rsp+38h] [rbp-1030h]
  unsigned int v109; // [rsp+3Ch] [rbp-102Ch]
  char v110[20]; // [rsp+40h] [rbp-1028h] BYREF
  unsigned __int8 v111; // [rsp+54h] [rbp-1014h]
  unsigned __int8 v112; // [rsp+55h] [rbp-1013h]
  unsigned __int8 v113; // [rsp+56h] [rbp-1012h]
  unsigned __int8 v114; // [rsp+57h] [rbp-1011h]
  unsigned __int8 v115; // [rsp+58h] [rbp-1010h]
  char v116; // [rsp+59h] [rbp-100Fh]
  unsigned __int8 v117; // [rsp+5Ah] [rbp-100Eh]
  unsigned __int8 v118; // [rsp+5Bh] [rbp-100Dh]
  unsigned __int16 v119; // [rsp+5Ch] [rbp-100Ch]
  unsigned __int8 v120; // [rsp+5Eh] [rbp-100Ah]
  unsigned __int8 v121; // [rsp+5Fh] [rbp-1009h]
  char v122[4032]; // [rsp+60h] [rbp-1008h] BYREF
  char v123; // [rsp+1020h] [rbp-48h] BYREF
  unsigned __int64 v124; // [rsp+1028h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  set_processor_type("mipsr", 1);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  qlseek(a1, 0, 0);
  lread(a1, v103, 4096);
  byte_5111 = v103[0] == 55;
  if ( v103[0] == 55 )
  {
    v11 = (const __m128i *)v103;
    do
    {
      si128 = _mm_load_si128(v11++);
      v11[-1] = _mm_or_si128(_mm_slli_epi16(si128, 8u), _mm_srli_epi16(si128, 8u));
    }
    while ( v11 != (const __m128i *)&v123 );
  }
  v119 = __ROL2__(v119, 8);
  v13 = _mm_cvtsi32_si128(_byteswap_ulong(v106.m128_u32[3]));
  v14 = _mm_cvtsi32_si128(_byteswap_ulong(v106.m128_u32[1]));
  v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v106.m128_u32[2])), v13);
  v107 = _byteswap_ulong(v107);
  v16 = (__m128)_mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v106.m128_u32[0])), v14), v15);
  v106 = v16;
  v108 = _byteswap_ulong(v108);
  v109 = _byteswap_ulong(v109);
  if ( v104 == 19 )
    sub_13A0((__int64)"IDA was never tested with compressed ROM images");
  v17 = qlsize(a1);
  v18 = v17;
  if ( (a2 & 0x2008) != 0 || v17 == 4096 )
  {
    if ( !(unsigned int)mem2base(v122, 2751463488LL, 2751467520LL, 64) )
      goto LABEL_62;
    set_selector(1, 0);
    if ( !(unsigned __int8)add_segm(1, 2751463488LL, 2751467520LL, "BOOT", "CODE", 0) )
      goto LABEL_62;
  }
  else
  {
    sub_1470((__int64)"The boot code is not loaded into the database, use manual load to load it");
  }
  v19 = (_WORD *)qalloc(0x10000);
  if ( !v19 )
    sub_1540((__int64)"n64 loader");
  v20 = v18 - qlseek(a1, 0, 1);
  v101 = v106.m128_u32[1];
  v21 = v106.m128_u32[1];
  v102 = v20 + (unsigned __int64)v106.m128_u32[1];
  if ( v20 )
  {
    while ( 1 )
    {
      v22 = 0x10000;
      if ( v20 <= 0x10000 )
        v22 = v20;
      v100 = qlseek(a1, 0, 1);
      lread(a1, v19, v22);
      if ( byte_5111 )
      {
        v23 = (unsigned __int64)v22 >> 1;
        if ( v23 )
        {
          v24 = &v19[v23];
          v25 = v19;
          if ( (v23 & 1) == 0 || (v25 = v19 + 1, *v19 = __ROL2__(*v19, 8), v24 != v19 + 1) )
          {
            do
            {
              *v25 = __ROL2__(*v25, 8);
              v25[1] = __ROL2__(v25[1], 8);
              v25 += 2;
            }
            while ( v24 != v25 );
          }
        }
      }
      if ( !(unsigned int)mem2base(v19, v21, v21 + v22, v100) )
        break;
      v20 -= v22;
      if ( !v20 )
        goto LABEL_22;
      v21 += v22;
    }
LABEL_62:
    sub_16C0(0);
  }
LABEL_22:
  for ( i = v102; v101 < i && !(unsigned __int8)get_byte(i - 1); --i )
    ;
  v27 = ((i + 3) & 0xFFFFFFFFFFFFFFFCLL) + 4;
  disable_flags(v27, v102);
  set_selector(2, 0);
  if ( !(unsigned __int8)add_segm(2, v101, v27, "CODE", "CODE", 0) )
    goto LABEL_62;
  set_selector(3, 0);
  if ( !(unsigned __int8)add_segm(3, 0x4000000, 67112960, "SPDATA", "DATA", 0) )
    goto LABEL_62;
  set_selector(4, 0);
  if ( !(unsigned __int8)add_segm(4, 67112960, 67117056, "SPCODE", "CODE", 0) )
    goto LABEL_62;
  for ( j = 67112960; j != 67117056; j += 4 )
  {
    put_dword(j, 0);
    v29 = j;
    create_insn(v29, 0);
  }
  *(double *)v16.m128_u64 = put_dword(67117052, 65011720);
  sub_12D0(
    (__int64)"Image name     : \"%-20.20s\"",
    (__int64)v110,
    v30,
    v31,
    v32,
    v33,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v34,
    v35,
    a9,
    a10,
    v91);
  v41 = "Nintendo";
  if ( v118 != 78 )
    v41 = "Unknown";
  sub_12D0(
    (__int64)"Manufacturer   : 0x%02X - %s",
    v118,
    (__int64)v41,
    v36,
    v37,
    v38,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v39,
    v40,
    a9,
    a10,
    v92);
  v47 = "Waverace64";
  if ( v106.m128_i32[2] != 5190 )
  {
    v47 = "Bomber64, Duke64, TetPal";
    if ( v106.m128_i32[2] != 5192 )
    {
      v47 = "Darkrift, Fire demo";
      if ( v106.m128_i32[2] != 5188 )
        v47 = "Unknown";
    }
  }
  sub_12D0(
    (__int64)"Release ID     : 0x%08X - %s",
    v106.m128_u32[2],
    (__int64)v47,
    v42,
    v43,
    v44,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v45,
    v46,
    a9,
    a10,
    v93);
  sub_12D0(
    (__int64)"Cartridge ID   : 0x%04X",
    v119,
    v48,
    v49,
    v50,
    v51,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v52,
    v53,
    a9,
    a10,
    v94);
  switch ( v120 )
  {
    case 'D':
      v59 = "Germany";
      break;
    case 'E':
      v59 = "USA";
      break;
    case 'J':
      v59 = "Japan";
      break;
    case 'P':
      v59 = "Europe";
      break;
    case 'U':
      v59 = "Australia";
      break;
    default:
      v59 = "Unknown";
      break;
  }
  sub_12D0(
    (__int64)"Country        : 0x%04X - %s",
    v120,
    (__int64)v59,
    v54,
    v55,
    v56,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v57,
    v58,
    a9,
    a10,
    v95);
  v65 = "Yes";
  if ( v104 != 19 )
  {
    v65 = "Unknown";
    v60 = "No";
    if ( v104 == 18 )
      v65 = "No";
  }
  sub_12D0(
    (__int64)"Compressed     : 0x%02X - %s",
    v104,
    (__int64)v65,
    (__int64)v60,
    v61,
    v62,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v63,
    v64,
    a9,
    a10,
    v96);
  sub_12D0(
    (__int64)"CRC1           : 0x%08X",
    v106.m128_u32[3],
    v66,
    v67,
    v68,
    v69,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v70,
    v71,
    a9,
    a10,
    v97);
  sub_12D0(
    (__int64)"CRC2           : 0x%08X",
    v107,
    v72,
    v73,
    v74,
    v75,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v76,
    v77,
    a9,
    a10,
    v98);
  if ( v105 != 64 )
    sub_12D0(
      (__int64)"Unknown field  : 0x%02X (UNUSUAL VALUE)",
      v105,
      v78,
      v79,
      v80,
      v81,
      v16,
      (__m128)v15,
      (__m128)v13,
      (__m128)v14,
      v82,
      v83,
      a9,
      a10,
      v99);
  if ( v106.m128_i32[0] != 15 )
    sub_12D0(
      (__int64)"Clockrate      : 0x%08X (UNUSUAL VALUE)",
      v106.m128_u32[0],
      v78,
      v79,
      v80,
      v81,
      v16,
      (__m128)v15,
      (__m128)v13,
      (__m128)v14,
      v82,
      v83,
      a9,
      a10,
      v99);
  if ( v108 )
    sub_12D0(
      (__int64)"unknown1       : 0x%08X",
      v108,
      v78,
      v79,
      v80,
      v81,
      v16,
      (__m128)v15,
      (__m128)v13,
      (__m128)v14,
      v82,
      v83,
      a9,
      a10,
      v99);
  if ( v109 )
    sub_12D0(
      (__int64)"unknown2       : 0x%08X",
      v109,
      v78,
      v79,
      v80,
      v81,
      v16,
      (__m128)v15,
      (__m128)v13,
      (__m128)v14,
      v82,
      v83,
      a9,
      a10,
      v99);
  v84 = v111;
  v85 = v112;
  v86 = v114;
  v87 = v115;
  if ( v117 | (unsigned __int8)(v116 | v115 | v114 | v113 | v112 | v111) )
  {
    v90 = v117;
    sub_12D0(
      (__int64)"unknown3       : %02X %02X %02X %02X %02X %02X %02X",
      v111,
      v112,
      v113,
      v114,
      v115,
      v16,
      (__m128)v15,
      (__m128)v13,
      (__m128)v14,
      v82,
      v83,
      a9,
      a10,
      v116);
    v84 = v90;
    v88 = v121;
    if ( !v121 )
      goto LABEL_52;
  }
  else
  {
    v88 = v121;
    if ( !v121 )
      goto LABEL_52;
  }
  sub_12D0(
    (__int64)"unknown4       : 0x%02X",
    v88,
    v84,
    v85,
    v86,
    v87,
    v16,
    (__m128)v15,
    (__m128)v13,
    (__m128)v14,
    v82,
    v83,
    a9,
    a10,
    v99);
LABEL_52:
  setinf(14, 2);
  setinf(15, v106.m128_u32[1]);
  qfree(v19);
  if ( *(_DWORD *)(get_ph() + 4) != 12 )
  {
    if ( !under_debugger )
      interr(10238);
    BUG();
  }
  sub_1600(0xBB8u, "n64.cfg");
  return v124 - __readfsqword(0x28u);
}

