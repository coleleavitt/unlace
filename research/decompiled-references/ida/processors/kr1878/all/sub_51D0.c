__int64 __fastcall sub_51D0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // r12
  double v7; // xmm0_8
  _QWORD v8[135]; // [rsp+0h] [rbp-438h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 1);
  v8[129] = __readfsqword(0x28u);
  if ( (_BYTE)v3 == 5 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
    v3 = *(unsigned __int8 *)(a2 + 1);
  }
  switch ( v3 )
  {
    case 0LL:
      return 0;
    case 1LL:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2LL:
    case 7LL:
      v4 = sub_4820(a1 + 28, a2);
      if ( a1[30] + *((unsigned __int16 *)a1 + 125) == v4 )
      {
        sub_4E80((__int64)a1, (__int64)byte_746B, *(_QWORD *)(a1[79] + 184LL));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 120LL))(
                   a1,
                   a2,
                   v4,
                   *(_QWORD *)(a2 + 16)) )
      {
        sub_50B0(a1, *(_QWORD *)(a2 + 16));
      }
      return 1;
    case 3LL:
      qsnprintf();
      v6 = sub_4830(a1[77], (__int64)(a1 + 28), a2);
      if ( v6 == -1 || *(_WORD *)(a2 + 6) == 3 && *(_QWORD *)(a2 + 8) > 5u )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 56LL))(a1, v8, 33);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 56LL))(a1, v8, 4);
        v7 = (*(double (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
        sub_5140((__int64)a1, v6, a2, v7);
      }
      return 1;
    case 5LL:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    default:
      sub_47F0((__int64)(a1 + 28), a3);
      return 1;
  }
}

