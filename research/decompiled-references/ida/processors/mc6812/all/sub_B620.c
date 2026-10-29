__int64 __fastcall sub_B620(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  char v12; // al
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  __int64 v16; // rax

  v4 = v3;
  v5 = v2;
  v6 = a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      goto LABEL_11;
    case 2:
      if ( (*(_BYTE *)(a2 + 32) & 0x20) != 0 )
      {
        v8 = *(_QWORD *)(a1[79] + 344LL);
        if ( v8 )
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v8, 32);
      }
      goto LABEL_5;
    case 3:
      if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 33)),
        33);
      goto LABEL_26;
    case 4:
      if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      if ( *(_QWORD *)(a2 + 16)
        || (unsigned __int8)is_off()
        || (unsigned __int8)is_stkvar()
        || (unsigned __int8)is_enum()
        || (unsigned __int8)is_stroff() )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 164);
      }
      else if ( !*(_QWORD *)(a2 + 16) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 160);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v14 = *(_BYTE *)(a2 + 32);
      if ( (v14 & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (v14 & 0x10) == 0 ? 43 : 45);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v15 = *(_BYTE *)(a2 + 32);
      if ( (v15 & 2) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (v15 & 0x10) == 0 ? 43 : 45);
        v15 = *(_BYTE *)(a2 + 32);
      }
      if ( (v15 & 4) != 0 )
        goto LABEL_22;
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 7:
LABEL_5:
      v9 = *((_WORD *)a1 + 124);
      if ( v9 == 39 || v9 == 112 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, v7, 160);
      }
      else
      {
        v10 = sub_9AA0(a1[77], (__int64)(a1 + 28), *(_QWORD *)(v7 + 16));
        sub_B5B0((__int64)a1, v7, v10);
      }
      return 1;
    case 8:
      if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
LABEL_25:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
        goto LABEL_26;
      }
      if ( *(_WORD *)(a2 + 6) != 6 )
        goto LABEL_25;
      v16 = sub_9AA0(a1[77], (__int64)(a1 + 28), *((_WORD *)a1 + 116) + *(_WORD *)(a2 + 16) + *((_WORD *)a1 + 125));
      sub_B5B0((__int64)a1, a2, v16);
LABEL_26:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      if ( (*(_BYTE *)(a2 + 32) & 4) != 0 )
LABEL_22:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 9:
      v12 = *(_BYTE *)(a2 + 34);
      v13 = *a1;
      if ( (v12 & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v13 + 32))(a1, 40);
LABEL_11:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
      }
      else if ( (v12 & 2) != 0 )
      {
LABEL_43:
        (*(void (__fastcall **)(_QWORD *, __int64))(v13 + 32))(a1, 35);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v6 + 24LL))(v6, v7, 0);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, 41);
      }
      else
      {
        if ( (v12 & 0x10) != 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(v13 + 32))(a1, 45);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      }
      return 1;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        BUG();
      a1 = (_QWORD *)(&stru_2870 + 21);
      interr();
      goto LABEL_43;
  }
}

