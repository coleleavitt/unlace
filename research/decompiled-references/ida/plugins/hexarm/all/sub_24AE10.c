_QWORD *__fastcall sub_24AE10(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  bool v7; // zf
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r15
  _QWORD **v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // esi
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  _BYTE v54[8]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v55[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(_BYTE *)a3 == 14;
  v55[1] = __readfsqword(0x28u);
  if ( v7 )
  {
    sub_32C760(v54, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), (unsigned int)(*(_DWORD *)(a3 + 4) / 2), 2);
    v12 = *(_QWORD *)(a3 + 8);
    v55[0] = 0;
    v13 = sub_249EB0(a1, a2, v12, v55, v54, 0);
    clear_tinfo_t();
    v14 = *(_QWORD *)(a3 + 8);
    v55[0] = 0;
    v15 = sub_249EB0(a1, a2, v14 + 16, v55, v54, 0);
    clear_tinfo_t();
    sub_246F00(a5, *(_QWORD *)(a1 + 328), a4);
    v16 = (_QWORD **)qalloc_or_throw();
    *v16 = nullptr;
    v16[3] = nullptr;
    *((_DWORD *)v16 + 8) = 0;
    *(_OWORD *)(v16 + 1) = 0;
    sub_2465C0((__int64 *)v16, 3u);
    v17 = (__int64)*v16;
    v18 = *(_QWORD *)v15;
    *(_QWORD *)v15 = **v16;
    v19 = *(_DWORD *)(v17 + 8);
    *(_QWORD *)v17 = v18;
    LODWORD(v18) = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v19;
    v20 = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v17 + 8) = v18;
    LODWORD(v18) = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = v20;
    v21 = *(_QWORD *)(v17 + 24);
    *(_DWORD *)(v17 + 12) = v18;
    v22 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v21;
    v23 = *(_QWORD *)(v17 + 32);
    *(_QWORD *)(v17 + 24) = v22;
    v24 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v23;
    v25 = *(_QWORD *)(v17 + 40);
    *(_QWORD *)(v17 + 32) = v24;
    v26 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 40) = v25;
    v27 = *(_QWORD *)(v17 + 48);
    *(_QWORD *)(v17 + 40) = v26;
    v28 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v27;
    LODWORD(v27) = *(_DWORD *)(v17 + 56);
    *(_QWORD *)(v17 + 48) = v28;
    LODWORD(v28) = *(_DWORD *)(v15 + 56);
    *(_DWORD *)(v15 + 56) = v27;
    *(_DWORD *)(v17 + 56) = v28;
    if ( v15 )
    {
      sub_2559F0(v15);
      clear_tinfo_t();
      j__qfree();
    }
    v29 = (__int64)*v16;
    v30 = *(_QWORD *)v13;
    *(_QWORD *)v13 = (*v16)[9];
    v31 = *(_DWORD *)(v29 + 80);
    *(_QWORD *)(v29 + 72) = v30;
    LODWORD(v30) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v31;
    v32 = *(_DWORD *)(v29 + 84);
    *(_DWORD *)(v29 + 80) = v30;
    LODWORD(v30) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v32;
    v33 = *(_QWORD *)(v29 + 96);
    *(_DWORD *)(v29 + 84) = v30;
    v34 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 24) = v33;
    v35 = *(_QWORD *)(v29 + 104);
    *(_QWORD *)(v29 + 96) = v34;
    v36 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v35;
    v37 = *(_QWORD *)(v29 + 112);
    *(_QWORD *)(v29 + 104) = v36;
    v38 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 40) = v37;
    v39 = *(_QWORD *)(v29 + 120);
    *(_QWORD *)(v29 + 112) = v38;
    v40 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 48) = v39;
    LODWORD(v39) = *(_DWORD *)(v29 + 128);
    *(_QWORD *)(v29 + 120) = v40;
    LODWORD(v40) = *(_DWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 56) = v39;
    *(_DWORD *)(v29 + 128) = v40;
    if ( v13 )
    {
      sub_2559F0(v13);
      clear_tinfo_t();
      j__qfree();
    }
    v41 = (__int64)*v16;
    v42 = *(_QWORD *)a5;
    *(_QWORD *)a5 = (*v16)[18];
    v43 = *(_DWORD *)(v41 + 152);
    *(_QWORD *)(v41 + 144) = v42;
    LODWORD(v42) = *(_DWORD *)(a5 + 8);
    *(_DWORD *)(a5 + 8) = v43;
    v44 = *(_DWORD *)(v41 + 156);
    *(_DWORD *)(v41 + 152) = v42;
    LODWORD(v42) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(a5 + 12) = v44;
    v45 = *(_QWORD *)(v41 + 168);
    *(_DWORD *)(v41 + 156) = v42;
    v46 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 24) = v45;
    v47 = *(_QWORD *)(v41 + 176);
    *(_QWORD *)(v41 + 168) = v46;
    v48 = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(a5 + 32) = v47;
    v49 = *(_QWORD *)(v41 + 184);
    *(_QWORD *)(v41 + 176) = v48;
    v50 = *(_QWORD *)(a5 + 40);
    *(_QWORD *)(a5 + 40) = v49;
    v51 = *(_QWORD *)(v41 + 192);
    *(_QWORD *)(v41 + 184) = v50;
    v52 = *(_QWORD *)(a5 + 48);
    *(_QWORD *)(a5 + 48) = v51;
    LODWORD(v51) = *(_DWORD *)(v41 + 200);
    *(_QWORD *)(v41 + 192) = v52;
    LODWORD(v52) = *(_DWORD *)(a5 + 56);
    *(_DWORD *)(a5 + 56) = v51;
    *(_DWORD *)(v41 + 200) = v52;
    if ( a5 )
    {
      sub_2559F0(a5);
      clear_tinfo_t();
      j__qfree();
    }
    v10 = (_QWORD *)sub_F1080((__int64)a4, (__int64)v16, (__int64)"__SET_PAIR__");
    clear_tinfo_t();
  }
  else
  {
    v55[0] = 0;
    v9 = sub_249EB0(a1, a2, a3, v55, a4, 1);
    clear_tinfo_t();
    v10 = (_QWORD *)sub_2494E0(*(_QWORD *)(a1 + 328), v9, a5);
  }
  *v10 = a2;
  return v10;
}

