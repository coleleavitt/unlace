__int64 __fastcall sub_5B140(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned int v7; // r15d
  unsigned int *v8; // rax
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64); // rax
  __int64 v18; // r14
  void (__fastcall *v19)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v20)(__int64, _QWORD *, _QWORD); // rax
  void (__fastcall *v21)(__int64, _QWORD *, _QWORD); // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  void (__fastcall *v24)(__int64, _QWORD *, _QWORD); // rax
  void (__fastcall *v25)(__int64, _QWORD *, __int64); // rax
  __int64 *v26; // rbx
  void (__fastcall *v27)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v28; // rdi
  _QWORD *v29; // rsi
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  void (__fastcall *v34)(__int64, __int64, _QWORD *); // rax
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  void (__fastcall *v38)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // r14
  char v44; // al
  void (__fastcall *v45)(__int64, __int64, _QWORD *); // rax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // r14
  char v51; // al
  void (__fastcall *v52)(__int64, __int64, __int64); // rax
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // r13
  char v58; // al
  void (__fastcall *v59)(__int64, __int64, __int64); // rax
  struct _Unwind_Exception *v60; // rbx
  __int64 v62; // [rsp+0h] [rbp-D8h]
  __int64 v63; // [rsp+0h] [rbp-D8h]
  unsigned int v64; // [rsp+14h] [rbp-C4h]
  __int64 v65; // [rsp+18h] [rbp-C0h]
  __int64 v67; // [rsp+28h] [rbp-B0h]
  __int64 v68; // [rsp+28h] [rbp-B0h]
  __int64 v69; // [rsp+28h] [rbp-B0h]
  __int64 v70; // [rsp+38h] [rbp-A0h]
  __int64 v71; // [rsp+38h] [rbp-A0h]
  _QWORD v72[2]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-88h] BYREF
  int v74; // [rsp+58h] [rbp-80h]
  char v75; // [rsp+5Ch] [rbp-7Ch]
  _QWORD v76[2]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v77; // [rsp+70h] [rbp-68h] BYREF
  __int64 v78; // [rsp+78h] [rbp-60h]
  _QWORD v79[11]; // [rsp+80h] [rbp-58h] BYREF

  v79[3] = __readfsqword(0x28u);
  v5 = a1[3];
  if ( (unsigned int)a2 >= *(_DWORD *)(v5 + 64) )
  {
    v60 = (struct _Unwind_Exception *)sub_56CE0(a1, a2, v5, a4, a5);
    qfree(v79[0]);
    qfree(v76[0]);
    qfree(v72[0]);
    _Unwind_Resume(v60);
  }
  v7 = a2;
  v8 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * (unsigned int)a2) + 368LL);
  v9 = *v8;
  v10 = v8[1];
  v64 = v10;
  if ( a3 )
  {
    v64 = v9;
    v9 = v10;
  }
  v65 = (int)a2;
  v11 = 16LL * (int)a2;
  sub_6E380(&v77, v11 + *(_QWORD *)a1[5], 0);
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
  sub_6E380(&v77, v11 + *(_QWORD *)a1[6], 0);
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
  v12 = (int)v9;
  v13 = 16LL * (int)v9;
  sub_6E380(&v77, v13 + *(_QWORD *)a1[5], 0);
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
  v14 = v13 + *(_QWORD *)a1[6];
  sub_6E380(&v77, v14, 0);
  v15 = v77;
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
  v16 = *(_QWORD *)a1[6];
  v72[0] = 0;
  v72[1] = 0;
  v67 = v11 + v16;
  hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(v15, v14);
  hexdsp(203, v72, v67);
  v18 = *(_QWORD *)a1[6] + v13;
  v19 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(203, v72);
  v19(210, v72, v18);
  v20 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(210, v72);
  v20(208, v72, v7);
  LODWORD(v18) = *(_DWORD *)(a1[4] + 56LL);
  v21 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(208, v72);
  v21(208, v72, (unsigned int)v18);
  sub_6E380(&v77, v72, 0);
  v22 = v77;
  if ( v77 )
  {
    v78 = 0;
    qfree(v77);
  }
  v23 = *(_QWORD *)(*a1 + 216LL);
  if ( (*(_BYTE *)(v23 + 4LL * (int)v9) & 2) != 0 )
  {
    do
    {
      v24 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v22, v72);
      v22 = 205;
      v24(205, v72, (unsigned int)v9);
      v12 = **(int **)(*(_QWORD *)(*a1 + 64LL) + 24 * v12);
      v23 = *(_QWORD *)(*a1 + 216LL);
      v9 = v12;
    }
    while ( (*(_BYTE *)(v23 + 4 * v12) & 2) != 0 );
  }
  *(_DWORD *)(v23 + 4 * v65) |= a3 == 0 ? 8 : 24;
  v25 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(v22, v72);
  v25(210, v72, a4);
  v26 = (__int64 *)a1[1];
  v73 = __PAIR64__(v64, v7);
  v74 = v9;
  v75 = a3;
  v76[0] = 0;
  v76[1] = 0;
  v27 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(210, v72);
  v28 = 203;
  v29 = v76;
  v27(203, v76, v72);
  v30 = v26[2];
  v68 = *v26;
  if ( (unsigned __int64)&v73 < *v26 || (unsigned __int64)&v73 >= *v26 + 32 * v30 )
  {
    v31 = v26[1];
    if ( v30 < v31 + 1 )
    {
      v29 = nullptr;
      v46 = v26;
      v47 = qvector_reserve(v26, 0, v31 + 1, 32);
      v48 = v26[2];
      v49 = *v26;
      v68 = v47;
      v26[2] = v30;
      v70 = v48;
      v62 = v26[1] - 1;
      if ( v62 >= 0 )
      {
        v50 = v47;
        do
        {
          *(_QWORD *)v50 = *(_QWORD *)v49;
          *(_DWORD *)(v50 + 8) = *(_DWORD *)(v49 + 8);
          v51 = *(_BYTE *)(v49 + 12);
          *(_QWORD *)(v50 + 16) = 0;
          *(_BYTE *)(v50 + 12) = v51;
          *(_QWORD *)(v50 + 24) = 0;
          v52 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v46, v50 + 16);
          v29 = (_QWORD *)(v50 + 16);
          v52(203, v50 + 16, v49 + 16);
          v46 = *(__int64 **)(v49 + 16);
          v50 += 32;
          v49 += 32;
          qfree(v46);
          --v62;
        }
        while ( v62 != -1 );
        v49 = *v26;
      }
      v28 = v49;
      qfree(v49);
      *v26 = v68;
      v26[2] = v70;
      v31 = v26[1];
    }
    v32 = 32 * v31 + v68;
    v33 = v73;
    *(_QWORD *)(v32 + 16) = 0;
    *(_QWORD *)v32 = v33;
    LODWORD(v33) = v74;
    *(_QWORD *)(v32 + 24) = 0;
    *(_DWORD *)(v32 + 8) = v33;
    *(_BYTE *)(v32 + 12) = v75;
    v34 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v28, v29);
    v34(203, v32 + 16, v76);
  }
  else
  {
    v79[0] = 0;
    v79[1] = 0;
    v77 = v73;
    LODWORD(v78) = v74;
    BYTE4(v78) = v75;
    v38 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(203, v76);
    v39 = 203;
    v40 = v79;
    v38(203, v79, v76);
    v41 = v26[1];
    v42 = v26[2];
    if ( v42 < v41 + 1 )
    {
      v40 = nullptr;
      v53 = v26;
      v54 = qvector_reserve(v26, 0, v41 + 1, 32);
      v55 = v26[2];
      v56 = *v26;
      v69 = v54;
      v26[2] = v42;
      v71 = v55;
      v63 = v26[1] - 1;
      if ( v63 >= 0 )
      {
        v57 = v54;
        do
        {
          *(_QWORD *)v57 = *(_QWORD *)v56;
          *(_DWORD *)(v57 + 8) = *(_DWORD *)(v56 + 8);
          v58 = *(_BYTE *)(v56 + 12);
          *(_QWORD *)(v57 + 16) = 0;
          *(_BYTE *)(v57 + 12) = v58;
          *(_QWORD *)(v57 + 24) = 0;
          v59 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v53, v57 + 16);
          v40 = (_QWORD *)(v57 + 16);
          v59(203, v57 + 16, v56 + 16);
          v53 = *(__int64 **)(v56 + 16);
          v57 += 32;
          v56 += 32;
          qfree(v53);
          --v63;
        }
        while ( v63 != -1 );
        v56 = *v26;
      }
      v39 = v56;
      qfree(v56);
      *v26 = v69;
      v26[2] = v71;
      v41 = v26[1];
    }
    else
    {
      v69 = *v26;
    }
    v43 = 32 * v41 + v69;
    *(_QWORD *)v43 = v77;
    *(_DWORD *)(v43 + 8) = v78;
    v44 = BYTE4(v78);
    *(_QWORD *)(v43 + 16) = 0;
    *(_BYTE *)(v43 + 12) = v44;
    *(_QWORD *)(v43 + 24) = 0;
    v45 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v39, v40);
    v45(203, v43 + 16, v79);
    qfree(v79[0]);
  }
  ++v26[1];
  qfree(v76[0]);
  v35 = (_QWORD *)a1[2];
  v77 = __PAIR64__(v9, v7);
  sub_5AFE0(v35, (int *)&v77);
  v36 = (_QWORD *)a1[2];
  v77 = __PAIR64__(v64, v7);
  sub_5AFE0(v36, (int *)&v77);
  qfree(v72[0]);
  return (v9 << 32) | v64;
}
