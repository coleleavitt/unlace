_QWORD *__fastcall sub_24AA50(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5, double a6)
{
  bool v8; // zf
  __int64 v10; // r13
  _QWORD *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD **v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v56; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v57[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_BYTE *)a3 == 14;
  v57[1] = __readfsqword(0x28u);
  if ( v8 )
  {
    sub_32C430(&v56, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a3 + 4) / 2, 2);
    v13 = *(_QWORD *)(a3 + 8);
    v57[0] = 0;
    v14 = sub_249AF0(a1, a2, v13, v57, &v56, 0, a6);
    clear_tinfo_t();
    v15 = *(_QWORD *)(a3 + 8);
    v57[0] = 0;
    v16 = sub_249AF0(a1, a2, v15 + 16, v57, &v56, 0, a6);
    clear_tinfo_t();
    v17 = *(_QWORD *)(a1 + 328);
    sub_246B40(a5, v17, a4, a6);
    v20 = (_QWORD **)qalloc_or_throw(40, v17, v18, v19);
    *v20 = nullptr;
    v20[3] = nullptr;
    *((_DWORD *)v20 + 8) = 0;
    *(_OWORD *)(v20 + 1) = 0;
    sub_246200((__int64 *)v20, 3u);
    v21 = (__int64)*v20;
    v22 = *(_QWORD *)v16;
    *(_QWORD *)v16 = **v20;
    LODWORD(v17) = *(_DWORD *)(v21 + 8);
    *(_QWORD *)v21 = v22;
    LODWORD(v22) = *(_DWORD *)(v16 + 8);
    *(_DWORD *)(v16 + 8) = v17;
    LODWORD(v17) = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v21 + 8) = v22;
    LODWORD(v22) = *(_DWORD *)(v16 + 12);
    *(_DWORD *)(v16 + 12) = v17;
    v23 = *(_QWORD *)(v21 + 24);
    *(_DWORD *)(v21 + 12) = v22;
    v24 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 24) = v23;
    v25 = *(_QWORD *)(v21 + 32);
    *(_QWORD *)(v21 + 24) = v24;
    v26 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 32) = v25;
    v27 = *(_QWORD *)(v21 + 40);
    *(_QWORD *)(v21 + 32) = v26;
    v28 = *(_QWORD *)(v16 + 40);
    *(_QWORD *)(v16 + 40) = v27;
    v29 = *(_QWORD *)(v21 + 48);
    *(_QWORD *)(v21 + 40) = v28;
    v30 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v29;
    LODWORD(v29) = *(_DWORD *)(v21 + 56);
    *(_QWORD *)(v21 + 48) = v30;
    LODWORD(v30) = *(_DWORD *)(v16 + 56);
    *(_DWORD *)(v16 + 56) = v29;
    *(_DWORD *)(v21 + 56) = v30;
    if ( v16 )
    {
      sub_255630(v16);
      clear_tinfo_t();
      j__qfree(v16);
    }
    v31 = (__int64)*v20;
    v32 = *(_QWORD *)v14;
    *(_QWORD *)v14 = (*v20)[9];
    v33 = *(_DWORD *)(v31 + 80);
    *(_QWORD *)(v31 + 72) = v32;
    LODWORD(v32) = *(_DWORD *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = v33;
    v34 = *(_DWORD *)(v31 + 84);
    *(_DWORD *)(v31 + 80) = v32;
    LODWORD(v32) = *(_DWORD *)(v14 + 12);
    *(_DWORD *)(v14 + 12) = v34;
    v35 = *(_QWORD *)(v31 + 96);
    *(_DWORD *)(v31 + 84) = v32;
    v36 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 24) = v35;
    v37 = *(_QWORD *)(v31 + 104);
    *(_QWORD *)(v31 + 96) = v36;
    v38 = *(_QWORD *)(v14 + 32);
    *(_QWORD *)(v14 + 32) = v37;
    v39 = *(_QWORD *)(v31 + 112);
    *(_QWORD *)(v31 + 104) = v38;
    v40 = *(_QWORD *)(v14 + 40);
    *(_QWORD *)(v14 + 40) = v39;
    v41 = *(_QWORD *)(v31 + 120);
    *(_QWORD *)(v31 + 112) = v40;
    v42 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(v14 + 48) = v41;
    LODWORD(v41) = *(_DWORD *)(v31 + 128);
    *(_QWORD *)(v31 + 120) = v42;
    LODWORD(v42) = *(_DWORD *)(v14 + 56);
    *(_DWORD *)(v14 + 56) = v41;
    *(_DWORD *)(v31 + 128) = v42;
    if ( v14 )
    {
      sub_255630(v14);
      clear_tinfo_t();
      j__qfree(v14);
    }
    v43 = (__int64)*v20;
    v44 = *(_QWORD *)a5;
    *(_QWORD *)a5 = (*v20)[18];
    v45 = *(_DWORD *)(v43 + 152);
    *(_QWORD *)(v43 + 144) = v44;
    LODWORD(v44) = *(_DWORD *)(a5 + 8);
    *(_DWORD *)(a5 + 8) = v45;
    v46 = *(_DWORD *)(v43 + 156);
    *(_DWORD *)(v43 + 152) = v44;
    LODWORD(v44) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(a5 + 12) = v46;
    v47 = *(_QWORD *)(v43 + 168);
    *(_DWORD *)(v43 + 156) = v44;
    v48 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 24) = v47;
    v49 = *(_QWORD *)(v43 + 176);
    *(_QWORD *)(v43 + 168) = v48;
    v50 = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(a5 + 32) = v49;
    v51 = *(_QWORD *)(v43 + 184);
    *(_QWORD *)(v43 + 176) = v50;
    v52 = *(_QWORD *)(a5 + 40);
    *(_QWORD *)(a5 + 40) = v51;
    v53 = *(_QWORD *)(v43 + 192);
    *(_QWORD *)(v43 + 184) = v52;
    v54 = *(_QWORD *)(a5 + 48);
    *(_QWORD *)(a5 + 48) = v53;
    LODWORD(v53) = *(_DWORD *)(v43 + 200);
    *(_QWORD *)(v43 + 192) = v54;
    LODWORD(v54) = *(_DWORD *)(a5 + 56);
    *(_DWORD *)(a5 + 56) = v53;
    *(_DWORD *)(v43 + 200) = v54;
    if ( a5 )
    {
      sub_255630(a5);
      clear_tinfo_t();
      j__qfree(a5);
    }
    v11 = (_QWORD *)sub_F1640((__int64)a4, (__int64)v20);
    clear_tinfo_t();
  }
  else
  {
    v57[0] = 0;
    v10 = sub_249AF0(a1, a2, a3, v57, a4, 1, a6);
    clear_tinfo_t();
    v11 = (_QWORD *)sub_249120(*(_QWORD *)(a1 + 328), v10, a5, a6);
  }
  *v11 = a2;
  return v11;
}

