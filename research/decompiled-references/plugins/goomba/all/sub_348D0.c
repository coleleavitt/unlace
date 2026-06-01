__int64 __fastcall sub_348D0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rbp
  void (__fastcall *v7)(__int64, __int64, _QWORD *, _QWORD, __int64, _QWORD); // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  struct _Unwind_Exception *v13; // rbx
  unsigned int v14; // eax
  void (__fastcall *v15)(__int64, _DWORD *, __int64); // rax
  void (__fastcall *v16)(__int64, _QWORD *, struct _Unwind_Exception *, _QWORD, __int64, _QWORD); // rax
  struct _Unwind_Exception *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r13
  signed int v20; // r12d
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  void (__fastcall *v22)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v23)(__int64, _QWORD *, struct _Unwind_Exception *); // rax
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  __int64 v25; // r13
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  int v27; // eax
  void (__fastcall *v28)(__int64, __int64, __int64); // rax
  void (__fastcall *v29)(__int64, _QWORD *, __int64); // rax
  _QWORD *v30; // rsi
  __int64 v31; // rdi
  void (__fastcall *v32)(__int64, __int64); // rax
  void (__fastcall *v33)(__int64, __int64); // rax
  void (__fastcall *v34)(__int64, __int64); // rax
  void (__fastcall *v35)(__int64, __int64); // rax
  void (__fastcall *v36)(__int64, struct _Unwind_Exception *); // rax
  void (__fastcall *v37)(__int64, _Unwind_Word *); // rax
  void (__fastcall *v38)(__int64, struct _Unwind_Exception *); // rax
  void (__fastcall *v39)(__int64, struct _Unwind_Exception *); // rax
  unsigned int v40; // eax
  __int64 v41; // r13
  __int64 (__fastcall *v42)(__int64, __int64); // rax
  _QWORD *v43; // rax
  void (__fastcall *v44)(__int64, struct _Unwind_Exception *, __int64); // rax
  int v45; // eax
  void (__fastcall *v46)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v47)(__int64, _QWORD *, struct _Unwind_Exception *); // rax
  __int64 v48; // rdi
  struct _Unwind_Exception *v49; // rsi
  void (__fastcall *v50)(__int64, struct _Unwind_Exception *); // rax
  void (__fastcall *v51)(__int64, _Unwind_Word *); // rax
  void (__fastcall *v52)(__int64, struct _Unwind_Exception *); // rax
  void (__fastcall *v53)(__int64, struct _Unwind_Exception *); // rax
  __int64 (__fastcall *v54)(__int64, __int64); // rax
  _QWORD *v55; // rax
  _DWORD *v56; // rbx
  _QWORD *v57; // r13
  _QWORD *v58; // r12
  void (__fastcall *v59)(__int64, _DWORD *, __int64); // rax
  void (__fastcall *v60)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v61)(__int64, _QWORD *, _DWORD *); // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  void (__fastcall *v64)(__int64, __int64); // rax
  void (__fastcall *v65)(__int64, __int64); // rax
  void (__fastcall *v66)(__int64, __int64); // rax
  void (__fastcall *v67)(__int64, __int64); // rax
  void (__fastcall *v68)(__int64, _QWORD *); // rax
  void (__fastcall *v69)(__int64, _QWORD *); // rax
  void (__fastcall *v70)(__int64, _QWORD *); // rax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  unsigned int v76; // [rsp+8h] [rbp-E0h]
  unsigned int v77; // [rsp+Ch] [rbp-DCh]
  __int64 v79; // [rsp+18h] [rbp-D0h]
  __int64 v80; // [rsp+20h] [rbp-C8h]
  __int64 v81; // [rsp+28h] [rbp-C0h]
  __int64 v82; // [rsp+30h] [rbp-B8h]
  _DWORD v83[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v84[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v85[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v86[11]; // [rsp+90h] [rbp-58h] BYREF

  v86[3] = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v82 = hexdsp(129, 80);
  sub_33DD0((_QWORD *)v82, a2);
  *(_DWORD *)v82 = 4;
  v4 = a1[4];
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_QWORD **)v4;
  v7 = (void (__fastcall *)(__int64, __int64, _QWORD *, _QWORD, __int64, _QWORD))get_hexdsp(v82, a2);
  v9 = (_QWORD *)(v82 + 32);
  v10 = 284;
  v7(284, v82 + 32, v6, v5, a2, 0);
  *(_QWORD *)(v82 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v82 + 56) = 0;
  *(_DWORD *)(v82 + 68) = *(_DWORD *)(a1[4] + 8LL);
  if ( a1[5] > 1u )
  {
    v76 = 1;
    v11 = 1;
    while ( 1 )
    {
      v12 = a1[4] + 16 * v11;
      v13 = *(struct _Unwind_Exception **)v12;
      if ( *(_QWORD *)v12 )
        break;
LABEL_24:
      v11 = ++v76;
      if ( (unsigned __int64)v76 >= a1[5] )
        return v82;
    }
    v14 = *(_DWORD *)(v12 + 8);
    v84[0] = 0xFFFFFFFF00000000LL;
    v84[1] = 0;
    v77 = v14;
    v85[0] = 0xFFFFFFFF00000000LL;
    v85[1] = 0;
    v86[0] = 0xFFFFFFFF00000000LL;
    v86[1] = 0;
    v15 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(v10, v9);
    v15(333, v83, a2);
    v83[0] = 14;
    v16 = (void (__fastcall *)(__int64, _QWORD *, struct _Unwind_Exception *, _QWORD, __int64, _QWORD))get_hexdsp(333, v83);
    v17 = (struct _Unwind_Exception *)v84;
    v18 = 284;
    v16(284, v84, v13, v77, -1, 0);
    if ( !v76 )
    {
      if ( under_debugger )
        goto LABEL_30;
      interr(30680);
LABEL_28:
      if ( !under_debugger )
      {
        interr(30681);
        sub_C930((__int64)(v6 + 8), (__int64)v17, v72);
        sub_C930(v80, (__int64)v17, v73);
        sub_C930(v79, (__int64)v17, v74);
        sub_19800((__int64)v6, (__int64)v17, v75);
        sub_34880((__int64)v83, (__int64)v17);
        _Unwind_Resume(v13);
      }
LABEL_30:
      BUG();
    }
    v19 = 0;
    v13 = nullptr;
    v20 = 0;
    if ( !a1[2] )
    {
LABEL_18:
      if ( v13->exception_class != 3 )
      {
        v47 = (void (__fastcall *)(__int64, _QWORD *, struct _Unwind_Exception *))get_hexdsp(v18, v17);
        v6 = v85;
        v48 = 283;
        v49 = (struct _Unwind_Exception *)v85;
        v47(283, v85, v13);
        if ( v13 )
        {
          v50 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(283, v85);
          v50(276, v13 + 2);
          v51 = (void (__fastcall *)(__int64, _Unwind_Word *))get_hexdsp(276, &v13[2]);
          v51(276, &v13[1].private_1);
          v52 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(276, &v13[1].private_1);
          v52(276, v13 + 1);
          v53 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(276, &v13[1]);
          v49 = v13;
          v48 = 130;
          v53(130, v13);
        }
        HIDWORD(v86[0]) = v77;
        v54 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v48, v49);
        v55 = (_QWORD *)v54(129, 80);
        v55[4] = 0xFFFFFFFF00000000LL;
        v56 = v55;
        v57 = v55 + 4;
        v58 = v55 + 6;
        v55[5] = 0;
        v55[6] = 0xFFFFFFFF00000000LL;
        v55[7] = 0;
        v55[8] = 0xFFFFFFFF00000000LL;
        v55[9] = 0;
        v59 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(129, 80);
        v59(333, v56, a2);
        *v56 = 12;
        v60 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(333, v56);
        v60(283, v57, v82);
        v61 = (void (__fastcall *)(__int64, _QWORD *, _DWORD *))get_hexdsp(283, v57);
        v62 = (__int64)v58;
        v63 = 283;
        v61(283, v58, v83);
        v56[17] = v77;
        if ( v82 )
        {
          v64 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v58);
          v64(276, v82 + 64);
          v65 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v82 + 64);
          v65(276, v82 + 48);
          v66 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v82 + 48);
          v66(276, v82 + 32);
          v67 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v82 + 32);
          v62 = v82;
          v63 = 130;
          v67(130, v82);
        }
        v68 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v63, v62);
        v68(276, v86);
        v69 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, v86);
        v69(276, v85);
        v70 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, v85);
        v9 = v84;
        v10 = 276;
        v70(276, v84);
        v82 = (__int64)v56;
        goto LABEL_24;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = v76;
        if ( _bittest((const int *)&v40, v20) )
          break;
LABEL_12:
        v19 = ++v20;
        if ( (unsigned __int64)v20 >= a1[2] )
          goto LABEL_18;
      }
      if ( v13 )
      {
        v21 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v18, v17);
        v6 = (_QWORD *)v21(129, 80);
        v6[4] = 0xFFFFFFFF00000000LL;
        v6[5] = 0;
        v6[6] = 0xFFFFFFFF00000000LL;
        v6[7] = 0;
        v6[8] = 0xFFFFFFFF00000000LL;
        v6[9] = 0;
        v22 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(129, 80);
        v22(333, v6, a2);
        *(_DWORD *)v6 = 20;
        v23 = (void (__fastcall *)(__int64, _QWORD *, struct _Unwind_Exception *))get_hexdsp(333, v6);
        v23(283, v6 + 4, v13);
        v79 = a1[1] + 16 * v19;
        v24 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(283, v6 + 4);
        v25 = v24(129, 80);
        *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v25 + 40) = 0;
        *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v25 + 56) = 0;
        *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v25 + 72) = 0;
        v80 = v25 + 32;
        v81 = v25 + 48;
        v26 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
        v26(333, v25, a2);
        v27 = 4;
        if ( v77 != *(_DWORD *)(v79 + 4) )
          v27 = ((int)v77 < *(_DWORD *)(v79 + 4)) + 9;
        *(_DWORD *)v25 = v27;
        v28 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v77, v25);
        v28(274, v80, v79);
        *(_DWORD *)(v25 + 68) = v77;
        v29 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(274, v80);
        v30 = v6 + 6;
        v31 = 283;
        v29(283, v6 + 6, v25);
        if ( v25 )
        {
          v32 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v30);
          v32(276, v25 + 64);
          v33 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v25 + 64);
          v33(276, v81);
          v34 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v81);
          v34(276, v80);
          v35 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v80);
          v30 = (_QWORD *)v25;
          v31 = 130;
          v35(130, v25);
        }
        *((_DWORD *)v6 + 17) = v77;
        v36 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(v31, v30);
        v36(276, v13 + 2);
        v37 = (void (__fastcall *)(__int64, _Unwind_Word *))get_hexdsp(276, &v13[2]);
        v37(276, &v13[1].private_1);
        v38 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(276, &v13[1].private_1);
        v38(276, v13 + 1);
        v39 = (void (__fastcall *)(__int64, struct _Unwind_Exception *))get_hexdsp(276, &v13[1]);
        v17 = v13;
        v18 = 130;
        v39(130, v13);
        v13 = (struct _Unwind_Exception *)v6;
        goto LABEL_12;
      }
      v41 = a1[1] + 16 * v19;
      v42 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v18, v17);
      v43 = (_QWORD *)v42(129, 80);
      v43[4] = 0xFFFFFFFF00000000LL;
      v13 = (struct _Unwind_Exception *)v43;
      v6 = v43 + 4;
      v43[5] = 0;
      v43[6] = 0xFFFFFFFF00000000LL;
      v43[7] = 0;
      v43[8] = 0xFFFFFFFF00000000LL;
      v43[9] = 0;
      v44 = (void (__fastcall *)(__int64, struct _Unwind_Exception *, __int64))get_hexdsp(129, 80);
      v44(333, v13, a2);
      v45 = 4;
      if ( v77 != *(_DWORD *)(v41 + 4) )
        v45 = ((int)v77 < *(_DWORD *)(v41 + 4)) + 9;
      v13->exception_class = v45;
      v46 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(333, v13);
      v17 = (struct _Unwind_Exception *)v6;
      v18 = 274;
      v46(274, v6, v41);
      v19 = ++v20;
      *(&v13[2].exception_class + 1) = v77;
      if ( (unsigned __int64)v20 >= a1[2] )
        goto LABEL_18;
    }
  }
  return v82;
}
