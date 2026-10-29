const char *__fastcall sub_7600(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax

  if ( (*(_BYTE *)(a3 + 32) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 56))(
      a2,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 144LL),
      33);
    (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 58);
  }
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
      return nullptr;
    case 1:
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 56))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *(unsigned __int16 *)(a3 + 6)),
        33);
      goto LABEL_6;
    case 2:
      v7 = sub_5A70(a1, (__int64)(a2 + 28), a3);
      v8 = sub_5A60(a1, v7);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64))(*a2 + 120))(a2, a3, v8, v8) )
      {
        v9 = sub_8EE0(a1, v8);
        v10 = *a2;
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v10 + 56))(a2, v9, 34);
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, __int64))(v10 + 64))(a2, 18);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 104))(a2, v8, 16);
          (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 72))(a2, 18);
          remember_problem();
        }
      }
      goto LABEL_6;
    case 3:
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 91);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 56))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *(unsigned __int16 *)(a3 + 6)),
        33);
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 43);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 56))(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * *(unsigned __int8 *)(a3 + 33)),
        33);
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 93);
      goto LABEL_6;
    case 4:
      sub_7570(a1, (__int64)a2, a3);
      goto LABEL_6;
    case 5:
      if ( (*(_BYTE *)(a3 + 32) & 4) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 112))(a2, *(_QWORD *)(a3 + 8), 10);
      }
      else
      {
        v14 = sub_7520((__int64)(a2 + 28), a3);
        (*(void (__fastcall **)(__int64 *, __int64))(v15 + 32))(a2, 35);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 24))(a2, a3, v14);
      }
      goto LABEL_6;
    case 7:
      sub_7220(a1, (__int64)a2, a3);
      goto LABEL_6;
    case 8:
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*a2 + 56))(a2, off_D860[*(_QWORD *)(a3 + 8)], 32);
      goto LABEL_6;
    case 9:
      v11 = *(int *)(a3 + 8);
      if ( v11 > 2 )
      {
        if ( under_debugger )
          BUG();
        interr();
        return "EEPROM";
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 56))(a2, *(&off_D840 + v11), 32);
LABEL_6:
        if ( (*(_BYTE *)(a3 + 32) & 2) != 0 )
          sub_72A0(a1, a2, a3);
        return (_BYTE *)(&dword_0 + 1);
      }
    case 0xA:
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 91);
      v12 = sub_5A70(a1, (__int64)(a2 + 28), a3);
      v13 = sub_5A60(a1, v12);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64))(*a2 + 120))(a2, a3, v13, v13) )
      {
        v16 = sub_8EE0(a1, v13);
        v17 = *a2;
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v17 + 56))(a2, v16, 34);
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, __int64))(v17 + 64))(a2, 18);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 104))(a2, v13, 16);
          (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 72))(a2, 18);
          remember_problem();
        }
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 32))(a2, 93);
      goto LABEL_6;
    default:
      sub_7050((__int64)"out: %a: bad optype %d", a4, a2[30]);
      goto LABEL_6;
  }
}

