__int64 __fastcall sub_C950(__int64 (__fastcall ***a1)(_QWORD), __int64 a2)
{
  unsigned int v2; // r14d
  const char *v3; // rdx
  __int64 v4; // r13
  unsigned __int8 v5; // al
  unsigned __int8 v6; // bp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64, _QWORD); // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rdx
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rdx
  void (__fastcall *v23)(__int64, __int64); // rax
  __int64 v24; // rbp
  __int64 v25; // rdx
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rdx
  void (__fastcall *v32)(__int64, __int64); // rax
  __int64 v33; // rdx
  void (__fastcall *v34)(__int64, __int64); // rax
  __int64 v35; // rdx
  void (__fastcall *v36)(__int64, __int64); // rax
  void (__fastcall *v38)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax
  int v39; // eax
  __int64 (__fastcall *v40)(__int64, __int64); // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdx
  void (__fastcall *v44)(__int64, __int64, __int64); // rax
  __int64 v45; // rdx
  void (__fastcall *v46)(__int64, __int64); // rax
  __int64 v47; // rdx
  void (__fastcall *v48)(__int64, __int64); // rax
  __int64 v49; // rdx
  void (__fastcall *v50)(__int64, __int64); // rax
  __int64 v51; // rdx
  void (__fastcall *v52)(__int64, __int64); // rax
  __int64 v53; // rbp
  __int64 v54; // rdx
  void (__fastcall *v55)(__int64, __int64, __int64); // rax
  __int64 v56; // rdx
  void (__fastcall *v57)(__int64, __int64); // rax
  __int64 v58; // rdx
  void (__fastcall *v59)(__int64, __int64); // rax
  __int64 v60; // rdx
  void (__fastcall *v61)(__int64, __int64); // rax
  __int64 v62; // rdx
  void (__fastcall *v63)(__int64, __int64); // rax
  void (__fastcall *v64)(__int64, __int64, __int64, __int64); // rax
  struct _Unwind_Exception *v65; // rbp
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  void (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // [rsp+8h] [rbp-40h]

  v2 = 0;
  v4 = (**a1)(a1);
  v5 = (_BYTE)v3 - 11;
  v6 = (unsigned __int8)v3;
  if ( (unsigned __int8)((_BYTE)v3 - 11) <= 0xAu )
  {
    v3 = "\b";
    v2 = *(int *)&asc_44940[4 * v5] >> 3;
  }
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, v3);
  v8 = hexdsp(129, 80);
  v9 = v8 + 32;
  v71 = v8 + 48;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  v11 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(129, 80, v10);
  v11(333, v8, 0);
  switch ( v6 )
  {
    case 1u:
    case 2u:
      *(_DWORD *)v8 = dword_449A0[v6];
      v53 = sub_C950(a1, (unsigned int)v4);
      v55 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, (unsigned int)v4, v54);
      v55(283, v9, v53);
      *(_DWORD *)(v8 + 68) = *(_DWORD *)(v8 + 36);
      if ( v53 )
      {
        v57 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v9, v56);
        v57(276, v53 + 64);
        v59 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v53 + 64, v58);
        v59(276, v53 + 48);
        v61 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v53 + 48, v60);
        v61(276, v53 + 32);
        v63 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v53 + 32, v62);
        v63(130, v53);
      }
      break;
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
      *(_DWORD *)v8 = dword_449A0[v6];
      v13 = sub_C950(a1, (unsigned int)v4);
      v15 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, (unsigned int)v4, v14);
      v15(283, v9, v13);
      if ( v13 )
      {
        v17 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v9, v16);
        v17(276, v13 + 64);
        v19 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 64, v18);
        v19(276, v13 + 48);
        v21 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 48, v20);
        v21(276, v13 + 32);
        v23 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v13 + 32, v22);
        v23(130, v13);
      }
      v24 = sub_C950(a1, HIDWORD(v4));
      v26 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, HIDWORD(v4), v25);
      v27 = v8 + 48;
      v28 = 283;
      v26(283, v71, v24);
      if ( *(_DWORD *)v8 == 22 )
      {
        v64 = (void (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(283, v71, v29);
        v27 = v8 + 48;
        v28 = 306;
        v64(306, v8 + 48, 1, 1);
      }
      if ( v24 )
      {
        v30 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v28, v27, v29);
        v30(276, v24 + 64);
        v32 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v24 + 64, v31);
        v32(276, v24 + 48);
        v34 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v24 + 48, v33);
        v34(276, v24 + 32);
        v36 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v24 + 32, v35);
        v36(130, v24);
      }
      *(_DWORD *)(v8 + 68) = *(_DWORD *)(v8 + 36);
      break;
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
      *(_DWORD *)v8 = 4;
      v38 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(333, v8, v12);
      v38(284, v9, v4, v2, -1, 0);
      *(_DWORD *)(v8 + 68) = v2;
      break;
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      v39 = 10;
      *(_BYTE *)(v8 + 32) = 9;
      if ( v2 == 8 )
        v39 = 4;
      *(_DWORD *)v8 = v39;
      v40 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(333, v8, 4);
      v41 = v40(129, 24);
      *(_QWORD *)v41 = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_DWORD *)(v41 + 16) = v4;
      *(_QWORD *)(v8 + 40) = v41;
      *(_DWORD *)(v8 + 36) = 8;
      *(_DWORD *)(v8 + 68) = v2;
      break;
    case 0x13u:
    case 0x14u:
    case 0x15u:
      *(_DWORD *)v8 = 10;
      v42 = sub_C950(a1, (unsigned int)v4);
      v44 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, (unsigned int)v4, v43);
      v44(283, v9, v42);
      if ( v42 )
      {
        v46 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v9, v45);
        v46(276, v42 + 64);
        v48 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v42 + 64, v47);
        v48(276, v42 + 48);
        v50 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v42 + 48, v49);
        v50(276, v42 + 32);
        v52 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v42 + 32, v51);
        v52(130, v42);
      }
      *(_DWORD *)(v8 + 68) = v2;
      break;
    default:
      if ( !under_debugger )
      {
        v65 = (struct _Unwind_Exception *)interr(30836);
        sub_C930(v8 + 64, v8, v66);
        sub_C930(v71, v8, v67);
        sub_C930(v9, v8, v68);
        v70 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v9, v8, v69);
        v70(130, v8);
        _Unwind_Resume(v65);
      }
      BUG();
  }
  return v8;
}
