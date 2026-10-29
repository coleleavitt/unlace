unsigned __int64 __fastcall sub_5910(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm4_8
  double v10; // xmm5_8
  int v11; // edx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char *v17; // rcx
  char *v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 v51; // r8
  __int64 v52; // r9
  __m128 v53; // xmm4
  __m128 v54; // xmm5
  char *v55; // rdx
  char *v56; // rcx
  char v57; // al
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  char *v62; // rdx
  char *v63; // rcx
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int8 v69; // al
  double v70; // xmm0_8
  char *v72; // rdx
  char *v73; // rcx
  char v74; // al
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __m128 v79; // xmm4
  __m128 v80; // xmm5
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __m128 v85; // xmm4
  __m128 v86; // xmm5
  __int64 v87; // r9
  __m128 v88; // xmm4
  __m128 v89; // xmm5
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __m128 v93; // xmm4
  __m128 v94; // xmm5
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128 v99; // xmm4
  __m128 v100; // xmm5
  __int64 v101; // r8
  __int64 v102; // r9
  __m128 v103; // xmm4
  __m128 v104; // xmm5
  char *v105; // rdx
  char *v106; // rcx
  char v107; // al
  char v108; // al
  int v109; // [rsp+0h] [rbp-518h] BYREF
  char v110; // [rsp+4h] [rbp-514h] BYREF
  unsigned __int16 v111; // [rsp+6h] [rbp-512h]
  unsigned __int16 v112; // [rsp+8h] [rbp-510h]
  unsigned __int16 v113; // [rsp+Ah] [rbp-50Eh]
  unsigned __int16 v114; // [rsp+Ch] [rbp-50Ch]
  unsigned __int16 v115; // [rsp+Eh] [rbp-50Ah]
  unsigned __int16 v116; // [rsp+10h] [rbp-508h]
  unsigned __int16 v117; // [rsp+12h] [rbp-506h]
  char v118[4]; // [rsp+14h] [rbp-504h] BYREF
  unsigned __int16 v119; // [rsp+18h] [rbp-500h]
  char v120[4]; // [rsp+1Ah] [rbp-4FEh] BYREF
  unsigned __int16 v121; // [rsp+1Eh] [rbp-4FAh]
  char v122; // [rsp+20h] [rbp-4F8h] BYREF
  char v123; // [rsp+28h] [rbp-4F0h] BYREF
  unsigned __int16 v124; // [rsp+2Ah] [rbp-4EEh]
  unsigned __int16 v125; // [rsp+2Ch] [rbp-4ECh]
  unsigned __int16 v126; // [rsp+2Eh] [rbp-4EAh]
  unsigned __int16 v127; // [rsp+30h] [rbp-4E8h]
  unsigned __int16 v128; // [rsp+32h] [rbp-4E6h]
  unsigned __int16 v129; // [rsp+34h] [rbp-4E4h]
  unsigned __int16 v130; // [rsp+36h] [rbp-4E2h]
  char v131[4]; // [rsp+38h] [rbp-4E0h] BYREF
  unsigned __int16 v132; // [rsp+3Ch] [rbp-4DCh]
  char v133[4]; // [rsp+3Eh] [rbp-4DAh] BYREF
  unsigned __int16 v134; // [rsp+42h] [rbp-4D6h]
  _BYTE v135[100]; // [rsp+44h] [rbp-4D4h] BYREF
  _BYTE v136[36]; // [rsp+A8h] [rbp-470h] BYREF
  _BYTE v137[52]; // [rsp+CCh] [rbp-44Ch] BYREF
  _BYTE v138[24]; // [rsp+100h] [rbp-418h] BYREF
  _BYTE v139[12]; // [rsp+118h] [rbp-400h] BYREF
  char v140; // [rsp+124h] [rbp-3F4h] BYREF
  _BYTE v141[932]; // [rsp+164h] [rbp-3B4h] BYREF
  unsigned __int64 v142; // [rsp+508h] [rbp-10h]

  v142 = __readfsqword(0x28u);
  setinf_flag(3, 2, 0);
  set_processor_type("metapc", 1);
  qlseek(a1, 0, 0);
  lread(a1, &v109, 256);
  v11 = 0;
  v12 = 200;
  if ( v109 != 1406092743 )
  {
    v11 = 256;
    v12 = 256;
  }
  sub_3200(a1, v12, v11, a2, a3, a4, a5, v9, v10, a8, a9);
  create_filename_cmt();
  if ( v109 == 1406092743 )
  {
    v72 = v138;
    v73 = &v122;
    do
    {
      v74 = *v73++;
      if ( !v74 )
        break;
      if ( v74 < 0 )
        v74 = byte_6700[v74 & 0x7F];
      *v72++ = v74;
    }
    while ( v72 != &v140 );
    *v72 = 0;
    sub_2B80(
      (__int64)"Name        : %s",
      (__int64)v138,
      (__int64)v72,
      (__int64)v73,
      v13,
      v14,
      a2,
      a3,
      a4,
      a5,
      v15,
      v16,
      a8,
      a9,
      v109);
    if ( v118[0] )
      qsnprintf(v138, 1024, "%4.4s/%u", v118, v119);
    else
      qstrncpy(v138, "-", 1024);
    sub_2B80((__int64)"Token       : %s", (__int64)v138, v75, v76, v77, v78, a2, a3, a4, a5, v79, v80, a8, a9, v109);
    if ( v120[0] )
      *(double *)a2.m128_u64 = qsnprintf(v138, 1024, "%4.4s/%u", v120, v121);
    else
      qstrncpy(v138, "-", 1024);
    sub_2B80((__int64)"Creator     : %s", (__int64)v138, v81, v82, v83, v84, a2, a3, a4, a5, v85, v86, a8, a9, v109);
    sub_2B80((__int64)"Release     : %u.%u.%u.%u", v112, v113, v114, v115, v87, a2, a3, a4, a5, v88, v89, a8, a9, v109);
    sub_2B80((__int64)"Protocol    : %u.%03u", v116, v117, v90, v91, v92, a2, a3, a4, a5, v93, v94, a8, a9, v109);
    sub_2B80((__int64)"Flags       : %04X", v111, v95, v96, v97, v98, a2, a3, a4, a5, v99, v100, a8, a9, v109);
    v105 = v138;
    v106 = v135;
    do
    {
      v107 = *v106++;
      if ( !v107 )
        break;
      if ( v107 < 0 )
        v107 = byte_6700[v107 & 0x7F];
      *v105++ = v107;
    }
    while ( v105 != v141 );
    *v105 = 0;
    sub_2B80(
      (__int64)"User info   : %s",
      (__int64)v138,
      (__int64)v105,
      (__int64)v106,
      v101,
      v102,
      a2,
      a3,
      a4,
      a5,
      v103,
      v104,
      a8,
      a9,
      v109);
    v62 = v138;
    v63 = v136;
    do
    {
      v108 = *v63++;
      if ( !v108 )
        break;
      if ( v108 < 0 )
        v108 = byte_6700[v108 & 0x7F];
      *v62++ = v108;
    }
    while ( v62 != v139 );
  }
  else
  {
    v17 = v138;
    v18 = &v110;
    do
    {
      v19 = *v18++;
      if ( !v19 )
        break;
      if ( v19 < 0 )
        v19 = byte_6700[v19 & 0x7F];
      *v17++ = v19;
    }
    while ( v18 != &v123 );
    *v17 = 0;
    sub_2B80(
      (__int64)"Name        : %s",
      (__int64)v138,
      (__int64)v18,
      (__int64)v17,
      v13,
      v14,
      a2,
      a3,
      a4,
      a5,
      v15,
      v16,
      a8,
      a9,
      v109);
    if ( v131[0] )
      *(double *)a2.m128_u64 = qsnprintf(v138, 1024, "%4.4s/%u", v131, v132);
    else
      qstrncpy(v138, "-", 1024);
    sub_2B80((__int64)"Token       : %s", (__int64)v138, v20, v21, v22, v23, a2, a3, a4, a5, v24, v25, a8, a9, v109);
    if ( v133[0] )
      *(double *)a2.m128_u64 = qsnprintf(v138, 1024, "%4.4s/%u", v133, v134);
    else
      qstrncpy(v138, "-", 1024);
    sub_2B80((__int64)"Creator     : %s", (__int64)v138, v26, v27, v28, v29, a2, a3, a4, a5, v30, v31, a8, a9, v109);
    sub_2B80((__int64)"Release     : %u.%u.%u.%u", v125, v126, v127, v128, v32, a2, a3, a4, a5, v33, v34, a8, a9, v109);
    sub_2B80((__int64)"Protocol    : %u.%03u", v129, v130, v35, v36, v37, a2, a3, a4, a5, v38, v39, a8, a9, v109);
    sub_2B80((__int64)"Flags       : %04X", v124, v40, v41, v42, v43, a2, a3, a4, a5, v44, v45, a8, a9, v109);
    sub_2B80((__int64)"Password    : %.*s", 8, (__int64)v137, v46, v47, v48, a2, a3, a4, a5, v49, v50, a8, a9, v109);
    v55 = v138;
    v56 = v135;
    do
    {
      v57 = *v56++;
      if ( !v57 )
        break;
      if ( v57 < 0 )
        v57 = byte_6700[v57 & 0x7F];
      *v55++ = v57;
    }
    while ( v55 != v141 );
    *v55 = 0;
    sub_2B80(
      (__int64)"User info   : %s",
      (__int64)v138,
      (__int64)v55,
      (__int64)v56,
      v51,
      v52,
      a2,
      a3,
      a4,
      a5,
      v53,
      v54,
      a8,
      a9,
      v109);
    v62 = v138;
    v63 = v136;
    do
    {
      v64 = *v63++;
      if ( !v64 )
        break;
      if ( v64 < 0 )
        v64 = byte_6700[v64 & 0x7F];
      *v62++ = v64;
    }
    while ( v62 != v139 );
  }
  *v62 = 0;
  sub_2B80(
    (__int64)"Copyright   : %s",
    (__int64)v138,
    (__int64)v62,
    (__int64)v63,
    v58,
    v59,
    a2,
    a3,
    a4,
    a5,
    v60,
    v61,
    a8,
    a9,
    v109);
  v69 = getinf(58, v138, v65, v66, v67, v68);
  v70 = setinf(58, v69 | 6u);
  add_til("geos", 0, v70);
  return v142 - __readfsqword(0x28u);
}
