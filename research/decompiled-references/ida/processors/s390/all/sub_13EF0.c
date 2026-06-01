__int64 __fastcall sub_13EF0(_QWORD *a1, unsigned __int8 *a2, double a3)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD *, unsigned __int8 *, __int64); // rax
  __int64 v8; // r12
  __int64 v9; // rax

  switch ( a2[1] )
  {
    case 0u:
      return 0;
    case 1u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      return 1;
    case 2u:
      v8 = *((_QWORD *)a2 + 2);
      v9 = calc_dataseg(a1 + 28, *a2, 0xFFFFFFFFLL);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              16 * v9 + v8,
              *((_QWORD *)a2 + 2)) )
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL))(a1, a2, 681);
      return 1;
    case 3u:
    case 4u:
      v3 = *((_QWORD *)a2 + 2);
      if ( a2[33] || *((_QWORD *)a2 + 1) )
      {
        if ( v3 )
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL))(a1, a2, 212);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
        if ( (a2[32] & 1) != 0 )
          sub_13E30((__int64)a1, (__int64)&unk_23B18, *((_QWORD *)a2 + 1));
        else
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (char)a2[33]),
            33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        goto LABEL_8;
      }
      if ( *((_WORD *)a2 + 3) )
      {
        v4 = v3 == 0;
        v5 = *a1;
        if ( !v4 )
        {
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(v5 + 24))(a1, a2, 212);
          v5 = *a1;
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(v5 + 32))(a1, 40);
LABEL_8:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
        return 1;
      }
      if ( v3 )
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL))(a1, a2, 212);
      return 1;
    case 5u:
      v6 = *(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL);
      if ( (a2[32] & 4) != 0 )
        v6(a1, a2, 68);
      else
        v6(a1, a2, 0);
      return 1;
    case 7u:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 2)) )
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL))(a1, a2, 201);
        remember_problem(2, a1[30], 0);
      }
      return 1;
    default:
      sub_13D60((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
}

