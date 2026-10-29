__int64 __fastcall sub_B9B0(_QWORD *a1, __int64 a2)
{
  char v4; // al
  unsigned __int16 v5; // si
  __int64 v6; // rax
  char *v7; // rsi

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 1;
    case 1:
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      sub_B6E0((__int64)a1, *(_WORD *)(a2 + 6));
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      if ( *(_BYTE *)(a2 + 1) == 1 && (*(_BYTE *)(a2 + 32) & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 46);
        if ( (*(_BYTE *)(a2 + 32) & 8) != 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
        sub_B750((__int64)a1, a2, 1);
      }
      return 1;
    case 2:
    case 6:
    case 7:
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      sub_B7A0(a1, a2, 1);
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        goto LABEL_5;
      return 1;
    case 3:
      v4 = *(_BYTE *)(a2 + 33);
      switch ( v4 )
      {
        case 1:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
LABEL_12:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          v5 = *(_WORD *)(a2 + 6);
          goto LABEL_13;
        case 2:
          sub_B6E0((__int64)a1, *(_WORD *)(a2 + 6));
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          v5 = *(char *)(a2 + 34) | (unsigned __int16)(*(char *)(a2 + 33) << 8);
LABEL_13:
          sub_B6E0((__int64)a1, v5);
LABEL_5:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          return 1;
        case 0:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          sub_B6E0((__int64)a1, *(_WORD *)(a2 + 6));
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          return 1;
      }
LABEL_36:
      if ( under_debugger )
LABEL_38:
        BUG();
      interr();
      return sub_BC20(10077);
    case 4:
      sub_B7A0(a1, a2, 0);
      goto LABEL_12;
    case 5:
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v6 = sub_D760(a1[77], *(_QWORD *)(a2 + 8));
      if ( v6 )
      {
        v7 = byte_127AB;
        if ( *(_QWORD *)(v6 + 16) )
          v7 = *(char **)(v6 + 8);
        (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v7, 34);
      }
      else
      {
        sub_B750((__int64)a1, a2, 0);
      }
      if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
        goto LABEL_5;
      return 1;
    default:
      if ( under_debugger )
        goto LABEL_38;
      interr();
      goto LABEL_36;
  }
}

