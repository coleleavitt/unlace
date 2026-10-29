__int64 __fastcall sub_7120(_QWORD *a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rbp
  __int16 v5; // dx
  int v6; // r14d
  __int64 v7; // rax
  __int64 v9; // rsi
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // [rsp+4h] [rbp-5Ch]

  v2 = *(_BYTE *)(a2 + 1);
  v3 = a1[77];
  switch ( v2 )
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
      v9 = *(_QWORD *)(a2 + 16);
      if ( v2 == 7 )
        map_code_ea();
      else
        sub_6880(v3, (__int64)(a1 + 28), v9);
      if ( get_name_expr() <= 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
        remember_problem();
        return 1;
      }
      v10 = nullptr;
      if ( *(_BYTE *)(a2 + 1) != 2 || *(_QWORD *)(a2 + 16) <= 0x7Fu )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, 0, 0);
        return 1;
      }
      goto LABEL_20;
    case 3:
      v12 = *(unsigned __int16 *)(a2 + 6);
      v13 = *a1;
      if ( (_WORD)v12 == 5 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v13 + 32))(a1, 64);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
          33);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(v13 + 88))(a1, *(&off_FDA0 + v12));
      }
      if ( !*(_BYTE *)(a2 + 32) )
        return 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
LABEL_29:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 160);
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      v14 = *((_DWORD *)a1 + 63);
      if ( (v14 & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 48);
        v14 = *((_DWORD *)a1 + 63);
      }
      if ( (v14 & 2) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 49);
      goto LABEL_29;
    case 8:
      goto LABEL_3;
    case 9:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 47);
LABEL_3:
      v5 = *(_WORD *)(a2 + 6);
      v6 = v5 & 0xF8;
      v15 = v5 & 7;
      if ( (v5 & 0x80) == 0 )
        v6 = ((v5 & 0xF8) >> 3) + 32;
      goto LABEL_5;
    case 10:
      if ( *(_BYTE *)(a2 + 33) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 47);
      v6 = *(_DWORD *)(a2 + 16);
      v15 = *(char *)(a2 + 32);
LABEL_5:
      v7 = sub_6880(v3, (__int64)(a1 + 28), v6);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, v7);
      if ( (*(_BYTE *)(a1[79] + 5LL) & 4) != 0 && (v11 = sub_9BC0(v3, v6, v15)) != 0 )
      {
        v10 = byte_CF28;
        if ( *(_QWORD *)(v11 + 8) )
          v10 = *(char **)v11;
LABEL_20:
        (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
      }
      else
      {
        if ( get_name_expr() <= 0 || strchr(nullptr, 43) )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, v6, 16);
        }
        else if ( v6 > 127 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, 0, 33);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, 0, 0);
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (*(_WORD *)(a1[79] + 4LL) & 8) == 0 ? 46 : 95);
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)(char)(v15 + 48));
      }
      return 1;
    default:
      sub_6740((__int64)"out: %a: bad optype %d", 0.0, a1[30]);
      return 1;
  }
}

