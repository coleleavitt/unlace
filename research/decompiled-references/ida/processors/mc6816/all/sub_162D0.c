__int64 __fastcall sub_162D0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD *, __int64, __int64); // rax
  char v12; // [rsp+0h] [rbp-18h]

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 2:
      v8 = sub_152B0((__int64)(a1 + 28), *(_QWORD *)(a2 + 16));
      sub_16030(a1, v8, a2);
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      if ( *(_WORD *)(a1[79] + 4LL) == 1 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
      v9 = a1[78];
      v10 = *(int *)(a2 + 8);
      goto LABEL_9;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 164);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      if ( *(_WORD *)(a1[79] + 4LL) == 1 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
      v9 = a1[78];
      v10 = *(unsigned __int16 *)(a2 + 6);
LABEL_9:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8 * v10),
        33);
      break;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      v11 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL);
      if ( *(_BYTE *)(a2 + 32) )
        v11(a1, a2, 4);
      else
        v11(a1, a2, 0);
      break;
    case 6:
    case 7:
      v6 = sub_152A0(a1 + 28, *(_QWORD *)(a2 + 16));
      sub_16030(a1, v6, a2);
      break;
    case 8:
      sub_16180(a1, a2, a3);
      break;
    default:
      sub_14F40((__int64)"interr: out", a2, a3, a4, a5, a6, v12);
  }
  return 1;
}

