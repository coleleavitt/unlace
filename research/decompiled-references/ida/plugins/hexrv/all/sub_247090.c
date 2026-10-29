_QWORD *__fastcall sub_247090(__int64 a1, __int64 a2, _QWORD *a3, const char *a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _QWORD **v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
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
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 v49; // [rsp+30h] [rbp-58h] BYREF
  __int64 v50; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v51[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(unsigned int *)(a2 + 36);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v51[1] = __readfsqword(0x28u);
  sub_326FC0(v51, v8, v7);
  v9 = *(__int64 **)(a2 + 24);
  v50 = 0;
  v10 = sub_244EF0(a1, v9, a2 + 32, &v50, v51, 0);
  clear_tinfo_t();
  clear_tinfo_t();
  sub_327180(&v49, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 0);
  sub_326FC0(v51, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
  v11 = sub_244EF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v49, v51, 0);
  clear_tinfo_t();
  sub_327180(&v50, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), 0);
  v12 = *(_QWORD *)(a1 + 328);
  v51[0] = 0;
  sub_297E60(v12, (unsigned int)v51, 1, v13, v14, v15);
  v16 = (_QWORD **)qalloc_or_throw();
  *v16 = nullptr;
  v16[3] = nullptr;
  *((_DWORD *)v16 + 8) = 0;
  *(_OWORD *)(v16 + 1) = 0;
  sub_241600((__int64 *)v16, 2u);
  v17 = (__int64)*v16;
  v18 = *(_QWORD *)v10;
  *(_QWORD *)v10 = **v16;
  v19 = *(_DWORD *)(v17 + 8);
  *(_QWORD *)v17 = v18;
  LODWORD(v18) = *(_DWORD *)(v10 + 8);
  *(_DWORD *)(v10 + 8) = v19;
  v20 = *(_DWORD *)(v17 + 12);
  *(_DWORD *)(v17 + 8) = v18;
  LODWORD(v18) = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 12) = v20;
  v21 = *(_QWORD *)(v17 + 24);
  *(_DWORD *)(v17 + 12) = v18;
  v22 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v21;
  v23 = *(_QWORD *)(v17 + 32);
  *(_QWORD *)(v17 + 24) = v22;
  v24 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v23;
  v25 = *(_QWORD *)(v17 + 40);
  *(_QWORD *)(v17 + 32) = v24;
  v26 = *(_QWORD *)(v10 + 40);
  *(_QWORD *)(v10 + 40) = v25;
  v27 = *(_QWORD *)(v17 + 48);
  *(_QWORD *)(v17 + 40) = v26;
  v28 = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(v10 + 48) = v27;
  LODWORD(v27) = *(_DWORD *)(v17 + 56);
  *(_QWORD *)(v17 + 48) = v28;
  LODWORD(v28) = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(v10 + 56) = v27;
  *(_DWORD *)(v17 + 56) = v28;
  if ( v10 )
  {
    sub_250A30(v10);
    clear_tinfo_t();
    j__qfree();
  }
  v29 = (__int64)*v16;
  v30 = *(_QWORD *)v11;
  *(_QWORD *)v11 = (*v16)[9];
  v31 = *(_DWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v30;
  LODWORD(v30) = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v11 + 8) = v31;
  v32 = *(_DWORD *)(v29 + 84);
  *(_DWORD *)(v29 + 80) = v30;
  LODWORD(v30) = *(_DWORD *)(v11 + 12);
  *(_DWORD *)(v11 + 12) = v32;
  v33 = *(_QWORD *)(v29 + 96);
  *(_DWORD *)(v29 + 84) = v30;
  v34 = *(_QWORD *)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v33;
  v35 = *(_QWORD *)(v29 + 104);
  *(_QWORD *)(v29 + 96) = v34;
  v36 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(v11 + 32) = v35;
  v37 = *(_QWORD *)(v29 + 112);
  *(_QWORD *)(v29 + 104) = v36;
  v38 = *(_QWORD *)(v11 + 40);
  *(_QWORD *)(v11 + 40) = v37;
  v39 = *(_QWORD *)(v29 + 120);
  *(_QWORD *)(v29 + 112) = v38;
  v40 = *(_QWORD *)(v11 + 48);
  *(_QWORD *)(v11 + 48) = v39;
  LODWORD(v39) = *(_DWORD *)(v29 + 128);
  *(_QWORD *)(v29 + 120) = v40;
  LODWORD(v40) = *(_DWORD *)(v11 + 56);
  *(_DWORD *)(v11 + 56) = v39;
  *(_DWORD *)(v29 + 128) = v40;
  if ( v11 )
  {
    sub_250A30(v11);
    clear_tinfo_t();
    j__qfree();
  }
  v41 = (*v16)[8];
  (*v16)[8] = v50;
  v50 = v41;
  v42 = (*v16)[17];
  (*v16)[17] = v49;
  v49 = v42;
  v43 = sub_ED180((__int64)v51, (__int64)v16, (__int64)"__%s__", a4);
  v44 = sub_246220(a1, a2, v43, a3, a5);
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v44;
}

