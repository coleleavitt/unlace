__int64 __fastcall sub_135D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  const char *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *, const char *, __int64); // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(_QWORD *, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  const char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  char v24; // [rsp+0h] [rbp-18h]

  v6 = *(unsigned __int16 *)(a2 + 6);
  v7 = *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 8 * v6);
  switch ( *(_BYTE *)(a2 + 33) )
  {
    case 0:
      goto LABEL_4;
    case 1:
      v8 = *a1;
      v9 = 42;
      goto LABEL_3;
    case 2:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v14 = 43;
      v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
      return v15(a1, v14);
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v14 = 45;
      v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
      return v15(a1, v14);
    case 4:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v16 = *a1;
      v17 = 43;
      goto LABEL_13;
    case 5:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = 43;
      goto LABEL_17;
    case 6:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v16 = *a1;
      v17 = 45;
      goto LABEL_13;
    case 7:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = 45;
      goto LABEL_17;
    case 8:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v16 = *a1;
      v17 = 40;
LABEL_13:
      (*(void (__fastcall **)(_QWORD *, __int64))(v16 + 32))(a1, v17);
      v18 = *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 32LL);
      v19 = *a1;
      goto LABEL_14;
    case 9:
    case 0xA:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      if ( *(_BYTE *)(a2 + 33) == 10 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "(#", 9);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 12);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    case 0xB:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "(short(#", 9);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 12);
      v10 = 9;
      v11 = "))";
      v12 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL);
      return v12(a1, v11, v10);
    case 0xC:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = 40;
LABEL_17:
      (*(void (__fastcall **)(_QWORD *, __int64))(v20 + 32))(a1, v21);
      v18 = *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 40LL);
      v19 = *a1;
      goto LABEL_14;
    case 0xD:
      v8 = *a1;
      v9 = 43;
      goto LABEL_3;
    case 0xE:
      v8 = *a1;
      v9 = 45;
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, __int64))(v8 + 32))(a1, v9);
LABEL_4:
      v10 = 33;
      v11 = v7;
      v12 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL);
      return v12(a1, v11, v10);
    case 0xF:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v22 = *a1;
      v23 = 43;
      goto LABEL_26;
    case 0x10:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*(", 9);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v7, 33);
      v22 = *a1;
      v23 = 45;
LABEL_26:
      (*(void (__fastcall **)(_QWORD *, __int64))(v22 + 32))(a1, v23);
      v19 = *a1;
      v18 = "T0B";
LABEL_14:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v19 + 56))(a1, v18, 33);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    default:
      sub_10CA0((__int64)"interr: out: o_reg: modifier", a2, v6, a4, a5, a6, v24);
  }
}

