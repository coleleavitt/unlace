__int64 __fastcall sub_46E0(_QWORD *a1, __int64 a2, double a3)
{
  __int16 v4; // r12
  unsigned __int8 v5; // al

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
    case 2:
    case 7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 16),
              *(_QWORD *)(a2 + 16)) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
        remember_problem();
      }
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(int *)(a2 + 16)),
        33);
      goto LABEL_6;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 192);
LABEL_6:
      v4 = *(_WORD *)(a2 + 6);
      if ( (_BYTE)v4 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
        v5 = -(char)v4;
        if ( (char)v4 > 0 )
          v5 = v4;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * v5),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
        if ( *(char *)(a2 + 6) < 0 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        }
      }
      break;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 68);
      break;
    default:
      sub_3FD0((__int64)"out: %a: bad optype %d", a3, a1[30]);
      break;
  }
  return 1;
}

