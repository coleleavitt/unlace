unsigned __int64 __fastcall sub_1930(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rax
  __m128 si128; // xmm0
  unsigned int v16; // ebp
  char v17; // r14
  unsigned int v18; // r15d
  __int64 v19; // rsi
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v56; // r12d
  unsigned int v57; // ebx
  bool v58; // zf
  __int64 v59; // r12
  unsigned int dword; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // ecx
  __int64 v64; // rcx
  unsigned int v65; // esi
  char v66; // r14
  unsigned int v67; // r15d
  char v68; // [rsp+0h] [rbp-98h]
  char v69; // [rsp+0h] [rbp-98h]
  char v70; // [rsp+0h] [rbp-98h]
  char v71; // [rsp+0h] [rbp-98h]
  char v72; // [rsp+0h] [rbp-98h]
  unsigned int v73; // [rsp+Ch] [rbp-8Ch]
  unsigned int v74; // [rsp+Ch] [rbp-8Ch]
  unsigned int v75; // [rsp+Ch] [rbp-8Ch]
  unsigned __int16 v76; // [rsp+2Ah] [rbp-6Eh] BYREF
  __int16 v77; // [rsp+2Ch] [rbp-6Ch] BYREF
  unsigned __int16 v78; // [rsp+2Eh] [rbp-6Ah] BYREF
  __int64 v79; // [rsp+30h] [rbp-68h] BYREF
  __m128 v80; // [rsp+38h] [rbp-60h]
  __int64 v81; // [rsp+48h] [rbp-50h]
  __int64 v82; // [rsp+50h] [rbp-48h]
  unsigned __int64 v83; // [rsp+58h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  set_processor_type("metapc", 1);
  qword_40F8 = a1;
  qlseek(a1, 8, 0);
  lread(qword_40F8, &v76, 2);
  qlseek(qword_40F8, 16 * (unsigned int)v76, 0);
  lread(qword_40F8, &unk_4110, 24);
  setinf(12, 0);
  v13 = getinf(3, 0, v9, v10, v11, v12);
  setinf(3, v13 | 2u);
  dword_4104 = 0x100000;
  setinf(15, (unsigned int)(dword_4124 + 0x100000));
  setinf(14, 1);
  dword_4100 = dword_411C + dword_4104;
  v14 = qlsize(qword_40F8);
  if ( v14 < (unsigned int)dword_4114 || v14 - (unsigned int)dword_4114 < (unsigned int)(dword_4100 - dword_4104) )
    sub_1770((__int64)"Corrupted file");
  file2base(qword_40F8, (unsigned int)dword_4114, (unsigned int)dword_4104, (unsigned int)dword_4100, 1);
  sub_1820(1, (unsigned int)dword_4104, (unsigned int)dword_4100, (__int64)".text", (__int64)"CODE");
  sub_1820(2, (unsigned int)dword_4100, (unsigned int)(dword_4120 + dword_4104), (__int64)".bss", (__int64)"BSS");
  set_default_dataseg(1);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2350);
  v16 = dword_4118 - dword_411C;
  v79 = 4;
  v81 = 0;
  v82 = 0;
  v80 = si128;
  sub_15C0((__int64)"Reading relocation table...\n");
  if ( v16 <= 1 )
  {
LABEL_24:
    sub_14F0((__int64)"Truncated relocation table!");
    goto LABEL_7;
  }
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    if ( qlread(qword_40F8, &v77, 2) != 2 )
      goto LABEL_6;
    if ( !v77 )
      break;
    if ( v16 - 2 <= 3 )
      goto LABEL_24;
    v16 -= 6;
    if ( qlread(qword_40F8, &v78, 2) != 2 || (v56 = v78 << 16, qlread(qword_40F8, &v78, 2) != 2) )
    {
LABEL_6:
      if ( (int)sub_1690(0, (__int64)"HIDECANCEL\nRead error or bad file structure. Continue loading?") <= 0 )
        sub_1770(0);
      goto LABEL_7;
    }
    v57 = v56 | v78;
    if ( dword_411C - 4 < v57 )
    {
LABEL_13:
      if ( !v17 )
        sub_14F0((__int64)"Bad value(s) in relocation table!");
      v58 = v77-- == 1;
      v17 = 1;
      if ( v58 )
        goto LABEL_23;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v59 = v57 + dword_4104;
      v73 = v57 + dword_4104;
      show_auto(v59, 0);
      dword = get_dword(v59);
      v62 = v73;
      v63 = dword;
      if ( dword >= dword_4120 )
      {
        v65 = v73;
        v75 = dword;
        sub_15C0((__int64)"Doubtful value after relocation! (%x=>%x)\n", v65, dword_4104 + dword);
        remember_problem(12, v59, 0);
        v63 = v75;
      }
      else if ( v18 < dword )
      {
        v18 = dword;
      }
      v64 = dword_4104 + v63;
      v74 = v64;
      put_dword(v59, (unsigned int)v64, v61, v64, v62);
      v81 = v57;
      v80.m128_u64[1] = (v74 >= dword_4100) + 1LL;
      set_fixup(v59, &v79);
      if ( !--v77 )
        break;
LABEL_16:
      if ( v16 <= 1 )
        goto LABEL_24;
      v16 -= 2;
      if ( qlread(qword_40F8, &v78, 2) != 2 )
        goto LABEL_6;
      v57 += v78;
      if ( dword_411C - 4 < v57 )
        goto LABEL_13;
    }
LABEL_23:
    if ( v16 <= 1 )
      goto LABEL_24;
  }
  v66 = v17 ^ 1;
  if ( v16 == 2 )
  {
    if ( v66 )
    {
      if ( dword_4124 < v18 )
      {
        v67 = dword_4104 + v18;
        if ( v67 < dword_4100 )
          set_segm_end((unsigned int)dword_4100, v67, 1);
      }
    }
  }
  else if ( v66 )
  {
    sub_14F0((__int64)"Information after relocation table!");
  }
LABEL_7:
  *(double *)si128.m128_u64 = create_filename_cmt();
  v19 = (unsigned int)dword_4120;
  sub_1420(
    (__int64)"Full size of allocation memory: %08Xh",
    (unsigned int)dword_4120,
    v20,
    v21,
    v22,
    v23,
    si128,
    a3,
    a4,
    a5,
    v24,
    v25,
    a8,
    a9,
    v68);
  sub_1420(
    (__int64)"Calling convention for W32RUN\n"
             "\n"
             "  ah     - OS type\n"
             "  ecx    - low stack limit\n"
             "  bx:edx - int 21h interface\n"
             "  edi    - struct {",
    v19,
    v26,
    v27,
    v28,
    v29,
    si128,
    a3,
    a4,
    a5,
    v30,
    v31,
    a8,
    a9,
    v69);
  sub_1420(
    (__int64)"                    char * ModuleFileName;\n"
             "                    char * CommandLine;\n"
             "                    char * Environment;",
    v19,
    v32,
    v33,
    v34,
    v35,
    si128,
    a3,
    a4,
    a5,
    v36,
    v37,
    a8,
    a9,
    v70);
  sub_1420(
    (__int64)"                    char * ExeTrademarkString;\n"
             "                    long   SystemDepenced_1;\n"
             "                    long   SystemDepenced_2;",
    v19,
    v38,
    v39,
    v40,
    v41,
    si128,
    a3,
    a4,
    a5,
    v42,
    v43,
    a8,
    a9,
    v71);
  sub_1420((__int64)"                   }", v19, v44, v45, v46, v47, si128, a3, a4, a5, v48, v49, a8, a9, v72);
  v54 = getinf(15, v19, v50, v51, v52, v53);
  set_cmt(v54, "Calling convention declared in file header", 1);
  return v83 - __readfsqword(0x28u);
}
