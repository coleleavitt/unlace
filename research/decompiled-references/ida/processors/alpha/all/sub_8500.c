__int64 __fastcall sub_8500(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 3:
      goto LABEL_3;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 196);
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      break;
    case 5:
      if ( *((_WORD *)a1 + 124) == 23 && (v6 = sub_96E0(a1[77], *(unsigned int *)(a2 + 8))) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v6, 12);
      else
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
      break;
    case 7:
      v5 = sub_6790(*(_QWORD *)(a2 + 16));
      if ( a1[30] + 4LL == v5 )
      {
        sub_8310((__int64)a1, (__int64)byte_C86B, *(_QWORD *)(a1[79] + 184LL), 4);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v5, v5) )
      {
        sub_84B0((__int64)a1, *(_QWORD *)(a2 + 16));
      }
      break;
    default:
      sub_6470((__int64)(a1 + 28), a3);
      break;
  }
  return 1;
}

