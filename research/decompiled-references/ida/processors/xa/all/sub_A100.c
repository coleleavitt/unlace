__int64 __fastcall sub_A100(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // r12d
  int v6; // r13d
  __int64 name_expr; // rax
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  int v14; // ebp
  int v15; // r13d
  __int64 v16; // rbp

  switch ( *(_BYTE *)(a2 + 1) )
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
    case 6:
    case 7:
      name_expr = get_name_expr();
      v9 = *(_BYTE *)(a2 + 1);
      if ( name_expr <= 0 )
      {
        if ( v9 == 6 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, *(_QWORD *)(a2 + 24), 16);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        }
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
        remember_problem();
        return 1;
      }
      v10 = 0;
      if ( v9 != 2 || *(_QWORD *)(a2 + 16) <= 0x3FFu )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, 0, 0);
        return 1;
      }
      goto LABEL_29;
    case 3:
      v11 = *(unsigned __int16 *)(a2 + 6);
      switch ( (__int16)v11 )
      {
        case 0:
        case 1:
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 88LL))(a1, *(&off_106C0 + v11));
          return 1;
        case 2:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
            33);
          goto LABEL_22;
        case 3:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
            33);
          goto LABEL_42;
        case 4:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          goto LABEL_22;
        case 5:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
LABEL_42:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
          goto LABEL_22;
        case 8:
        case 9:
          v13 = *(char *)(a2 + 32);
          v14 = 16 * (*(_BYTE *)(a2 + 5) != 0);
          if ( (_WORD)v11 == 9 )
            v14 += 8;
          v15 = v14 + 8;
          do
          {
            if ( (v13 & 1) != 0 )
            {
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                a1,
                *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * v14),
                33);
              if ( (v13 & 0xFE) != 0 )
                (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            }
            ++v14;
            v13 >>= 1;
          }
          while ( v14 != v15 );
          return 1;
        default:
          return 1;
      }
    case 4:
      if ( *((_WORD *)a1 + 124) != 41 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(char *)(a2 + 32)),
        33);
      if ( *(_BYTE *)(a2 + 32) == 23 || *(_WORD *)(a2 + 6) != 2 )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 166);
      if ( *((_WORD *)a1 + 124) != 41 )
LABEL_22:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 8:
      goto LABEL_3;
    case 9:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 47);
LABEL_3:
      v3 = *(_QWORD *)(a2 + 16);
      v4 = v3 >> 3;
      v5 = v3 & 7;
      v6 = v3 >> 3;
      if ( ((v3 >> 3) & 0x40) != 0 )
      {
        v6 = v4 + 960;
      }
      else if ( (v4 & 0x20) == 0 )
      {
        v16 = *(_QWORD *)(a2 + 16) & 0xFLL;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (int)((v3 >> 4) + 16)),
          33);
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (*(_WORD *)(a1[79] + 4LL) & 8) == 0 ? 46 : 95);
        if ( (int)v16 > 9 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 49);
          LOBYTE(v16) = v16 - 10;
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)(char)(v16 + 48));
        return 1;
      }
      if ( (*(_BYTE *)(a1[79] + 5LL) & 4) != 0 && (v12 = sub_C020(a1[77], (unsigned int)v6, v3 & 7)) != 0 )
      {
        v10 = *(_QWORD *)(v12 + 8);
LABEL_29:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v10, 33);
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
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)(v5 + 48));
      }
      return 1;
    default:
      sub_7480((__int64)"out: %a: bad optype %d", 0.0, a1[30]);
      return 1;
  }
}

