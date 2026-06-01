unsigned __int64 __fastcall sub_1D50(__int64 a1)
{
  __int64 v1; // r13
  __int64 eah; // r14
  __int64 v3; // rax
  unsigned int i; // ebp
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned __int16 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // rdx
  char *v14; // rsi
  char *v15; // rdx
  char *v16; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-1E0h]
  unsigned __int16 v21; // [rsp+26h] [rbp-1C2h] BYREF
  __int64 v22; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-1B0h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int16 v26; // [rsp+60h] [rbp-188h] BYREF
  __int16 v27; // [rsp+62h] [rbp-186h]
  unsigned __int16 v28; // [rsp+64h] [rbp-184h]
  int v29; // [rsp+66h] [rbp-182h]
  unsigned int v30; // [rsp+6Ch] [rbp-17Ch]
  unsigned int v31; // [rsp+86h] [rbp-162h]
  unsigned int v32; // [rsp+8Ah] [rbp-15Eh]
  unsigned int v33; // [rsp+BEh] [rbp-12Ah]
  unsigned int v34; // [rsp+C2h] [rbp-126h]
  unsigned __int16 v35; // [rsp+C6h] [rbp-122h]
  unsigned int v36; // [rsp+C8h] [rbp-120h]
  unsigned __int16 v37; // [rsp+CCh] [rbp-11Ch]
  __int16 v38; // [rsp+D2h] [rbp-116h]
  int v39; // [rsp+D4h] [rbp-114h]
  _OWORD v40[2]; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v41; // [rsp+100h] [rbp-E8h]
  __int64 v42; // [rsp+108h] [rbp-E0h]
  __int64 selector; // [rsp+110h] [rbp-D8h]
  __int128 v44; // [rsp+118h] [rbp-D0h]
  __int128 v45; // [rsp+128h] [rbp-C0h]
  __int128 v46; // [rsp+138h] [rbp-B0h]
  __int128 v47; // [rsp+148h] [rbp-A0h]
  __int128 v48; // [rsp+158h] [rbp-90h]
  __int128 v49; // [rsp+168h] [rbp-80h]
  __int128 v50; // [rsp+178h] [rbp-70h]
  __int128 v51; // [rsp+188h] [rbp-60h]
  unsigned __int64 v52; // [rsp+198h] [rbp-50h]
  unsigned __int64 v53; // [rsp+1A8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  set_processor_type("80486p", 1);
  v1 = (int)sub_17B0(a1);
  eah = get_eah();
  qlseek(a1, v1, 0);
  lread(a1, &v26, 124);
  v3 = qlsize(a1);
  if ( v32 > v3 )
    sub_1700((__int64)"Wrong image size %u", v32);
  qlseek(a1, v1 + v30, 0);
  lread(a1, v25, 22);
  v22 = -1;
  netnode_check(&v22, "$ EXP header info", 0, 1);
  netnode_supset(v22, 0, &v26, 124, 83);
  v23 = -1;
  netnode_check(&v23, "$ EXP RTP info", 0, 1);
  netnode_supset(v23, 0, v25, 22, 83);
  if ( (v27 & 1) != 0 )
  {
    setinf_flag(3, 4, 0);
    setinf_flag(3, 2, 1);
  }
  else
  {
    setinf_flag(3, 2, 0);
  }
  v24 = v33;
  setinf(12, v33);
  if ( (v38 & 1) != 0 )
  {
    for ( i = 0; i < v32; i = sub_1A60(eah, a1, &v24, v21) + v8 )
    {
      while ( 1 )
      {
        v7 = i;
        v8 = i + 2;
        qlseek(a1, v7 + v1 + v31, 0);
        lread(a1, &v21, 2);
        v9 = v21;
        if ( (v21 & 0x8000u) != 0 )
          break;
        v20 = v24;
        v5 = *(_QWORD *)(eah + 16) & (v24 + v21);
        v6 = qlseek(a1, 0, 1);
        file2base(a1, v6, v20, v5, 1);
        v24 = v5;
        i = v9 + v8;
        if ( i >= v32 )
          goto LABEL_10;
      }
    }
  }
  else
  {
    v18 = *(_QWORD *)(eah + 16) & (getinf(12) + v32);
    v19 = getinf(12);
    file2base(a1, v1 + v31, v19, v18, 1);
    v24 = v18;
  }
LABEL_10:
  v41 = 0;
  memset(v40, 0, sizeof(v40));
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v42 = 0;
  selector = 0;
  v52 = 0xFFFFFFFF00000000LL;
  getinf(12);
  v40[0] = _mm_loadh_ps((const double *)&v24);
  selector = allocate_selector(0);
  if ( !(unsigned __int8)add_segm_ex(v40, ".text", "CODE", 33)
    || (v10 = getinf(12), v11 = getseg(v10), (v12 = v11) == 0) )
  {
    sub_1700((__int64)"Corrupted file");
  }
  set_segm_addressing(v11, 1);
  set_default_dataseg(*(_QWORD *)(v12 + 48));
  setinf(15, v36);
  setinf(17, v34);
  setinf(16, v36);
  setinf(14, *(_QWORD *)(v12 + 48));
  create_filename_cmt();
  sub_1560((__int64)"\n.EXP file header :");
  sub_1560((__int64)"   Signature word: %04hXh", v26);
  v13 = "LVL_MULTI";
  v14 = "LVL_FLAT ";
  if ( (v27 & 2) == 0 )
    v13 = "";
  if ( (v27 & 1) == 0 )
    v14 = "";
  sub_1560((__int64)"   Level         : %s%s", v14, v13);
  sub_1560((__int64)"   Header size   : %04hXh", v28);
  sub_1560((__int64)"   File size     : %04Xh", v29);
  sub_1560((__int64)"   Image offset  : %08Xh", v31);
  sub_1560((__int64)"   Image size    : %08Xh\n", v32);
  sub_1560((__int64)" Registers:");
  sub_1560((__int64)"   Initial ESP   : %08Xh", v34);
  sub_1560((__int64)"   Initial SS    : %08Xh", v35);
  sub_1560((__int64)"   Initial EIP   : %08Xh", v36);
  sub_1560((__int64)"   Initial CS    : %08Xh\n", v37);
  sub_1560((__int64)" New stuff");
  v15 = "EXP_XSUM";
  if ( (v38 & 2) == 0 )
    v15 = "";
  v16 = "EXP_PACKED ";
  if ( (v38 & 1) == 0 )
    v16 = "";
  sub_1560((__int64)"   Flags         : %s%s", v16, v15);
  sub_1560((__int64)"   Memory for the load: %08Xh", v39);
  return v53 - __readfsqword(0x28u);
}
