__int64 __fastcall sub_45C0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v5; // r12
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      v11 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6));
LABEL_20:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, v11, 33);
      return 1;
    case 2:
    case 6:
    case 7:
      if ( *((_BYTE *)a1 + 256) )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      v5 = *(_QWORD *)(a2 + 16);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64))(*a1 + 120))(a1, a2, v5, -1) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 18);
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 104))(a1, v5, 16);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 18);
        remember_problem();
      }
      if ( *((_BYTE *)a1 + 256) )
        goto LABEL_10;
      return 1;
    case 3:
      v6 = *(_WORD *)(a2 + 6);
      if ( v6 > 0x65u )
      {
        if ( v6 == 102 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL),
            33);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          return 1;
        }
LABEL_3:
        sub_37F0((__int64)"out: %a: bad optype %d", a3, a1[30]);
        return 1;
      }
      if ( v6 <= 0x63u )
        goto LABEL_3;
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      v7 = *(_QWORD *)(a1[78] + 56);
      if ( *(_WORD *)(a2 + 6) == 100 )
LABEL_39:
        v8 = *(_QWORD *)(v7 + 8);
      else
        v8 = *(_QWORD *)(v7 + 16);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, v8, 33);
LABEL_10:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      return 1;
    case 4:
      switch ( *(_WORD *)(a2 + 6) )
      {
        case 'd':
          sub_4510(a1, a2);
          return 1;
        case 'e':
        case 'f':
          sub_4510(a1, a2);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          v12 = *(_QWORD *)(a1[78] + 56);
          if ( *(_WORD *)(a2 + 6) != 101 )
            goto LABEL_24;
          goto LABEL_28;
        case 'g':
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
          sub_4510(a1, a2);
          goto LABEL_38;
        case 'h':
        case 'i':
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 120))(
                  a1,
                  a2,
                  *(_QWORD *)(a2 + 16),
                  -1) )
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 161);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          v12 = *(_QWORD *)(a1[78] + 56);
          if ( *(_WORD *)(a2 + 6) != 104 )
            goto LABEL_24;
LABEL_28:
          v11 = *(_QWORD *)(v12 + 8);
          goto LABEL_20;
        case 'j':
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 120))(
                  a1,
                  a2,
                  *(_QWORD *)(a2 + 16),
                  -1) )
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 161);
LABEL_38:
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          v7 = *(_QWORD *)(a1[78] + 56);
          goto LABEL_39;
        case 'k':
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
          sub_4510(a1, a2);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
          v12 = *(_QWORD *)(a1[78] + 56);
LABEL_24:
          v11 = *(_QWORD *)(v12 + 16);
          goto LABEL_20;
        case 'l':
          goto LABEL_30;
        case 'm':
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 47);
LABEL_30:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 120))(
                  a1,
                  a2,
                  *(_QWORD *)(a2 + 16),
                  -1) )
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 161);
          v9 = *a1;
          v10 = 46;
          goto LABEL_18;
        case 'n':
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 104))(a1, *(_QWORD *)(a2 + 8), 10);
          return 1;
        case 'o':
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 104))(a1, *(_QWORD *)(a2 + 8), 16);
          return 1;
        default:
          goto LABEL_3;
      }
    case 5:
      v9 = *a1;
      v10 = 35;
LABEL_18:
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 32))(a1, v10);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 24))(a1, a2, 0);
      return 1;
    default:
      goto LABEL_3;
  }
}

