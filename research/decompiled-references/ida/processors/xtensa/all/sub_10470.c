__int64 __fastcall sub_10470(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  char v6; // al

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, double))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33,
        a3);
      return 1;
    case 2:
    case 7:
      v3 = map_code_ea();
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, double))(*a1 + 120LL))(
              a1,
              a2,
              v3,
              *(_QWORD *)(a2 + 16),
              a3) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
        remember_problem();
      }
      return 1;
    case 4:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, double))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33,
        a3);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
      v5 = 172;
      v6 = *(_BYTE *)(a2 + 1);
      if ( v6 != 4 )
      {
        v5 = 12;
        if ( v6 != 5 )
          v5 = 0;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v5);
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, double))(*a1 + 24LL))(a1, a2, 12, a3);
      return 1;
    default:
      sub_102C0((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
}

