__int64 __fastcall sub_4A20(__int64 *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rsi

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
      v4 = *((_DWORD *)a1 + 63);
      if ( (v4 & 4) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
        v4 = *((_DWORD *)a1 + 63);
      }
      if ( (v4 & 2) != 0 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      sub_40C0(a1 + 28, *(_QWORD *)(a2 + 16));
      sub_4870(a1, a2);
      v5 = *((_DWORD *)a1 + 63);
      if ( (v5 & 1) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 46);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 119);
        v5 = *((_DWORD *)a1 + 63);
      }
      if ( (v5 & 2) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
        v5 = *((_DWORD *)a1 + 63);
      }
      if ( (v5 & 4) == 0 )
        return 1;
      v6 = *a1;
      v7 = 44;
LABEL_15:
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 32))(a1, v7);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      return 1;
    case 3:
      v6 = *a1;
      v7 = 40;
      goto LABEL_15;
    case 4:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 24))(
        a1,
        a2,
        (*((_DWORD *)a1 + 63) & 8) == 0 ? 144 : 160);
      v6 = *a1;
      v7 = 44;
      goto LABEL_15;
    case 5:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 24))(a1, a2, 0);
      return 1;
    case 7:
      sub_40C0(a1 + 28, *(_QWORD *)(a2 + 16));
      sub_4870(a1, a2);
      return 1;
    default:
      if ( under_debugger )
        BUG();
      interr();
      return sub_4C20(10379);
  }
}

