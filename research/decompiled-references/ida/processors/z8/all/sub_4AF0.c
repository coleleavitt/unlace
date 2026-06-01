__int64 __fastcall sub_4AF0(__int64 a1, _QWORD *a2, unsigned __int8 *a3, double a4)
{
  unsigned __int8 v6; // dl
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v10; // rsi
  __int64 v11; // rax

  v6 = a3[1];
  v7 = a2[77];
  switch ( v6 )
  {
    case 0u:
      return 0;
    case 1u:
      goto LABEL_6;
    case 2u:
    case 7u:
      goto LABEL_3;
    case 3u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(
        a2,
        *((_QWORD *)&off_A720 + *((unsigned __int16 *)a3 + 3)),
        32);
      return 1;
    case 4u:
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a2 + 24LL))(a2, a3, 160);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 40);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *((unsigned __int16 *)a3 + 3)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 41);
      return 1;
    case 5u:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 35);
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(*a2 + 24LL))(a2, a3, 0);
      return 1;
    case 8u:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 64);
      v6 = a3[1];
LABEL_3:
      v8 = sub_4070(v7, (__int64)(a2 + 28), *((_QWORD *)a3 + 2), *a3, v6 != 7);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, _QWORD))(*a2 + 120LL))(
              a2,
              a3,
              v8,
              *((_QWORD *)a3 + 2)) )
      {
        v10 = sub_61C0(v7, v8);
        v11 = *a2;
        if ( v10 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v11 + 56))(a2, v10, 34);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(v11 + 24))(a2, a3, 169);
          remember_problem();
        }
      }
      break;
    case 9u:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 64);
LABEL_6:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *((unsigned __int16 *)a3 + 3)),
        33);
      break;
    default:
      sub_4640((__int64)"out: %a: bad optype %d", a4, a2[30]);
      break;
  }
  return 1;
}

