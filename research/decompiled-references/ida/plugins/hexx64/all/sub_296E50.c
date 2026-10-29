__int64 __fastcall sub_296E50(_QWORD *a1, __int64 a2, double a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r15
  bool v7; // zf
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  int v19; // esi
  int v20; // edx
  int v21; // esi
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // esi
  int v34; // ecx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // r12
  __int64 v58; // r15
  int v59; // [rsp+4h] [rbp-84h]
  __int64 v60; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  _QWORD *v63; // [rsp+18h] [rbp-70h]
  __int64 v64; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v65; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v66; // [rsp+38h] [rbp-50h]
  unsigned __int64 v67; // [rsp+48h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283C00(&v65, a1, a2, a3);
  if ( v66 == (_QWORD *)*v65 )
    return 0;
  v6 = v66[1];
  v7 = *(_DWORD *)(v6 + 24) == 72;
  v66 = (_QWORD *)v6;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285160(*(_QWORD *)(v6 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v8) )
    return 0;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL);
  if ( (unsigned __int8)sub_285230(v9) || !(unsigned __int8)sub_285090(v9, v10) && *(_DWORD *)(v9 + 8) != 61 )
    return 0;
  v11 = *(_QWORD *)(a2 + 24);
  v64 = 0;
  v12 = *(_QWORD *)(v11 + 64);
  v3 = sub_2968B0(&v64, v12, v10);
  if ( !(_BYTE)v3 )
    return 0;
  v14 = *(unsigned int *)(v6 + 28);
  v61 = v64;
  v15 = *(_DWORD *)(a2 + 12);
  v59 = v14;
  if ( (_DWORD)v14 == -1 )
  {
    *(_DWORD *)(a2 + 12) = -1;
    v59 = v15;
  }
  else
  {
    if ( v15 != -1 )
      goto LABEL_27;
    *(_DWORD *)(v6 + 28) = -1;
  }
  if ( v59 == -2 )
  {
LABEL_27:
    if ( !under_debugger )
      sub_383060(0xCDF6u, a3);
    BUG();
  }
  v60 = **(_QWORD **)(v6 + 40);
  if ( v60 == -1 )
    v60 = *(_QWORD *)(v6 + 16);
  v16 = j__qalloc_or_throw(200, v12, v13, v14);
  v17 = -1;
  *(_QWORD *)v16 = -1;
  v18 = v16;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 12) = -1;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_QWORD *)(v16 + 72) = -1;
  *(_DWORD *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 84) = -1;
  *(_QWORD *)(v16 + 112) = 0;
  *(_QWORD *)(v16 + 120) = 0;
  *(_DWORD *)(v16 + 128) = 0;
  *(_QWORD *)(v16 + 136) = -1;
  *(_OWORD *)(v16 + 24) = 0;
  *(_OWORD *)(v16 + 96) = 0;
  *(_QWORD *)(v16 + 144) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v16 + 152) = 0xFFFFFFFFLL;
  *(_QWORD *)(v16 + 176) = 0;
  *(_QWORD *)(v16 + 184) = 0;
  *(_DWORD *)(v16 + 192) = 0;
  *(_OWORD *)(v16 + 160) = 0;
  if ( *(_DWORD *)(v9 + 8) != 61 )
  {
    *(_QWORD *)v16 = *(_QWORD *)v9;
    v19 = *(_DWORD *)(v9 + 8);
    *(_QWORD *)v9 = -1;
    v20 = *(_DWORD *)(v16 + 8);
    *(_DWORD *)(v16 + 8) = v19;
    v21 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(v9 + 8) = v20;
    v22 = *(_DWORD *)(v16 + 12);
    *(_DWORD *)(v16 + 12) = v21;
    v23 = *(_QWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 12) = v22;
    v24 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 24) = v23;
    v25 = *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v24;
    v26 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 32) = v25;
    v27 = *(_QWORD *)(v9 + 40);
    *(_QWORD *)(v9 + 32) = v26;
    v28 = *(_QWORD *)(v16 + 40);
    *(_QWORD *)(v16 + 40) = v27;
    v29 = *(_QWORD *)(v9 + 48);
    *(_QWORD *)(v9 + 40) = v28;
    v30 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v29;
    LODWORD(v29) = *(_DWORD *)(v9 + 56);
    *(_QWORD *)(v9 + 48) = v30;
    LODWORD(v30) = *(_DWORD *)(v16 + 56);
    *(_DWORD *)(v16 + 56) = v29;
    *(_DWORD *)(v9 + 56) = v30;
    v17 = *(_QWORD *)(v16 + 72);
  }
  v31 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v16 + 72) = *(_QWORD *)v31;
  *(_QWORD *)v31 = v17;
  v32 = *(_DWORD *)(v16 + 80);
  *(_DWORD *)(v16 + 80) = *(_DWORD *)(v31 + 8);
  v33 = *(_DWORD *)(v31 + 12);
  *(_DWORD *)(v31 + 8) = v32;
  v34 = *(_DWORD *)(v16 + 84);
  *(_DWORD *)(v16 + 84) = v33;
  v35 = *(_QWORD *)(v31 + 24);
  *(_DWORD *)(v31 + 12) = v34;
  v36 = *(_QWORD *)(v16 + 96);
  *(_QWORD *)(v16 + 96) = v35;
  v37 = *(_QWORD *)(v31 + 32);
  *(_QWORD *)(v31 + 24) = v36;
  v38 = *(_QWORD *)(v16 + 104);
  *(_QWORD *)(v16 + 104) = v37;
  v39 = *(_QWORD *)(v31 + 40);
  *(_QWORD *)(v31 + 32) = v38;
  v40 = *(_QWORD *)(v16 + 112);
  *(_QWORD *)(v16 + 112) = v39;
  v41 = *(_QWORD *)(v31 + 48);
  *(_QWORD *)(v31 + 40) = v40;
  v42 = *(_QWORD *)(v16 + 120);
  *(_QWORD *)(v16 + 120) = v41;
  LODWORD(v41) = *(_DWORD *)(v31 + 56);
  *(_QWORD *)(v31 + 48) = v42;
  LODWORD(v42) = *(_DWORD *)(v16 + 128);
  *(_DWORD *)(v16 + 128) = v41;
  *(_DWORD *)(v31 + 56) = v42;
  v43 = v61;
  v44 = *(_QWORD *)(v16 + 136);
  v45 = *(_QWORD *)(v61 + 40);
  *(_QWORD *)(v16 + 136) = *(_QWORD *)v45;
  LODWORD(v41) = *(_DWORD *)(v45 + 8);
  *(_QWORD *)v45 = v44;
  LODWORD(v44) = *(_DWORD *)(v16 + 144);
  *(_DWORD *)(v16 + 144) = v41;
  LODWORD(v41) = *(_DWORD *)(v45 + 12);
  *(_DWORD *)(v45 + 8) = v44;
  LODWORD(v44) = *(_DWORD *)(v16 + 148);
  *(_DWORD *)(v16 + 148) = v41;
  v46 = *(_QWORD *)(v45 + 24);
  *(_DWORD *)(v45 + 12) = v44;
  v47 = *(_QWORD *)(v16 + 160);
  *(_QWORD *)(v16 + 160) = v46;
  v48 = *(_QWORD *)(v45 + 32);
  *(_QWORD *)(v45 + 24) = v47;
  v49 = *(_QWORD *)(v16 + 168);
  *(_QWORD *)(v16 + 168) = v48;
  v50 = *(_QWORD *)(v45 + 40);
  *(_QWORD *)(v45 + 32) = v49;
  v51 = *(_QWORD *)(v16 + 176);
  *(_QWORD *)(v16 + 176) = v50;
  v52 = *(_QWORD *)(v45 + 48);
  *(_QWORD *)(v45 + 40) = v51;
  v53 = *(_QWORD *)(v16 + 184);
  *(_QWORD *)(v16 + 184) = v52;
  LODWORD(v52) = *(_DWORD *)(v45 + 56);
  *(_QWORD *)(v45 + 48) = v53;
  LODWORD(v53) = *(_DWORD *)(v16 + 192);
  *(_DWORD *)(v16 + 192) = v52;
  *(_DWORD *)(v45 + 56) = v53;
  v54 = v65;
  *(_QWORD *)(v16 + 64) = v12;
  v63 = v54;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v55 = v66;
  v56 = *v66;
  v62 = (__int64)v66;
  *(_QWORD *)v66[1] = *v66;
  *(_QWORD *)(v56 + 8) = v55[1];
  sub_255050((__int64)(v55 + 2), 0.0);
  qfree(v62);
  --v63[2];
  sub_296C20(v12, v43, 0.0);
  v57 = *(_QWORD *)(a2 + 24);
  if ( v57 )
  {
    v58 = *(_QWORD *)(v57 + 64);
    if ( v58 )
    {
      sub_255050(*(_QWORD *)(v57 + 64), 0.0);
      j__qfree(v58);
    }
    sub_255630(v57, 0.0);
    clear_tinfo_t();
    j__qfree(v57);
  }
  *(_QWORD *)(a2 + 24) = v18;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v59;
  *(_QWORD *)a2 = v60;
  return v3;
}

