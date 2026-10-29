__int64 __fastcall sub_139A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  const char *v21; // rsi
  char v22; // [rsp+0h] [rbp-18h]

  v6 = *(_QWORD **)(a1[78] + 56LL);
  v7 = v6[*(unsigned __int16 *)(a2 + 6)];
  switch ( *(_QWORD *)(a2 + 8) )
  {
    case 0LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " == #";
      goto LABEL_34;
    case 0x10LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " != #";
      goto LABEL_34;
    case 0x20LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " < #";
      goto LABEL_34;
    case 0x30LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " <= #";
      goto LABEL_34;
    case 0x40LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " > #";
      goto LABEL_34;
    case 0x50LL:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      v20 = *a1;
      v21 = " >= #";
LABEL_34:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v20 + 56))(a1, v21, 9);
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, 0, 10);
    case 0x60LL:
      v16 = *a1;
      v17 = "overflow(";
      goto LABEL_22;
    case 0x64LL:
      v11 = v6[96];
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
    case 0x65LL:
      v11 = v6[97];
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
    case 0x66LL:
      v11 = v6[98];
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
    case 0x68LL:
      v19 = v6[96];
      goto LABEL_26;
    case 0x69LL:
      v18 = v6[96];
      goto LABEL_24;
    case 0x6ALL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v19 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_26:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v19, 33);
      v9 = *a1;
      v10 = " & ";
      break;
    case 0x6BLL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v18 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_24:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v18, 33);
      v9 = *a1;
      v10 = " & !";
      break;
    case 0x70LL:
      v16 = *a1;
      v17 = "!overflow(";
LABEL_22:
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(v16 + 56))(a1, v17, 9);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    case 0x74LL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v11 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
    case 0x75LL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      goto LABEL_6;
    case 0x76LL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v11 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 784LL);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
    case 0x78LL:
      v15 = v6[96];
      goto LABEL_15;
    case 0x79LL:
      v14 = v6[96];
      goto LABEL_13;
    case 0x7ALL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v15 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_15:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v15, 33);
      v9 = *a1;
      v10 = " | ";
      break;
    case 0x7BLL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v14 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_13:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v14, 33);
      v9 = *a1;
      v10 = " | !";
      break;
    case 0x7CLL:
      v13 = v6[96];
      goto LABEL_9;
    case 0x7DLL:
      v8 = v6[96];
      goto LABEL_4;
    case 0x7ELL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v13 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_9:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v13, 33);
      v9 = *a1;
      v10 = " ^ ";
      break;
    case 0x7FLL:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      v8 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 768LL);
LABEL_4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v8, 33);
      v9 = *a1;
      v10 = " ^ !";
      break;
    default:
      sub_10CA0((__int64)"interr: out: o_cond", a2, (__int64)v6, a4, a5, a6, v22);
  }
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v9 + 56))(a1, v10, 9);
LABEL_6:
  v11 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 776LL);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v11, 33);
}

