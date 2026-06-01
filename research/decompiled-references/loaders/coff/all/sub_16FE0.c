__int64 __fastcall sub_16FE0(_QWORD *a1, __int64 a2, __int64 a3, double a4, double a5)
{
  unsigned __int16 v7; // di
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  void (*v12)(); // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  unsigned __int64 v16; // rsi
  __int64 result; // rax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 wide_byte; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  void (*v22)(); // rcx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  __int64 v25; // rax
  void (*v26)(); // rcx
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  __int64 v28; // rax
  void (*v29)(); // rcx

  v7 = *(_WORD *)(a3 + 12);
  switch ( v7 )
  {
    case 1u:
    case 7u:
      goto LABEL_9;
    case 2u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 24LL);
      if ( v18 == sub_14A60 )
        wide_byte = get_wide_byte(a1[4]);
      else
        wide_byte = v18((__int64)a1, a1[4]);
      v20 = *a1;
      v21 = wide_byte & 0xFFFFFFFFFF000000LL;
      v22 = *(void (**)())(*a1 + 16LL);
      if ( v22 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v22)(a1, wide_byte & 0xFFFFFF);
        v20 = *a1;
      }
      v23 = a1[5] & 0xFFFFFFLL;
      goto LABEL_15;
    case 3u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v24 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 24LL);
      if ( v24 == sub_14A60 )
        v25 = get_wide_byte(a1[4]);
      else
        v25 = v24((__int64)a1, a1[4]);
      v20 = *a1;
      v21 = v25 & 0xFFFFFFFF00000000LL;
      v26 = *(void (**)())(*a1 + 16LL);
      if ( v26 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v26)(a1, (unsigned int)v25);
        v20 = *a1;
      }
      v23 = *((unsigned int *)a1 + 10);
LABEL_15:
      v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v20 + 64);
      v13 = a1[4];
      v16 = v21 | v23;
      if ( v15 != sub_14A70 )
        goto LABEL_16;
      goto LABEL_8;
    case 5u:
      *(_DWORD *)(a2 + 4) &= ~4u;
      *(_WORD *)a2 = 4;
      v27 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 24LL);
      if ( v27 == sub_14A60 )
        v28 = get_wide_byte(a1[4]);
      else
        v28 = v27((__int64)a1, a1[4]);
      v10 = *a1;
      v11 = v28 & 0xFFFFFFFE07FFFFFFLL;
      v29 = *(void (**)())(*a1 + 16LL);
      if ( v29 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v29)(a1, v28 & 0x1F8000000LL);
        v10 = *a1;
      }
      v13 = a1[4];
      v14 = ((a1[5] - v13) << 27) & 0x1F8000000LL;
      goto LABEL_7;
    case 6u:
      *(_DWORD *)(a2 + 4) &= ~4u;
      *(_WORD *)a2 = 4;
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 24LL);
      if ( v8 == sub_14A60 )
        v9 = get_wide_byte(a1[4]);
      else
        v9 = v8((__int64)a1, a1[4]);
      v10 = *a1;
      v11 = v9 & 0xFFFFFFFFFF000000LL;
      v12 = *(void (**)())(*a1 + 16LL);
      if ( v12 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v12)(a1, v9 & 0xFFFFFF);
        v10 = *a1;
      }
      v13 = a1[4];
      v14 = ((unsigned int)a1[5] - (_DWORD)v13) & 0xFFFFFF;
LABEL_7:
      v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 64);
      v16 = v11 | v14;
      if ( v15 == sub_14A70 )
LABEL_8:
        put_byte(v13, v16);
      else
LABEL_16:
        v15((__int64)a1, v13, v16);
LABEL_9:
      result = 1;
      break;
    default:
      sub_5CC0((__int64)"warning: unhandled ADI21k COFF relocation %d: source:%a target:%a\n", v7, a4, a5);
      (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, *(unsigned __int16 *)(a3 + 12));
      result = 0;
      break;
  }
  return result;
}
