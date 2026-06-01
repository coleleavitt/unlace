__int64 __fastcall sub_6E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  char v8; // al
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rcx

  v4 = v2;
  v5 = v3;
  v6 = (_QWORD *)a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v8 = *(_BYTE *)(a2 + 32);
      if ( (v8 & 4) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
        v8 = *(_BYTE *)(a2 + 32);
      }
      if ( (v8 & 8) != 0 )
      {
        if ( (unsigned __int8)is_off() )
          sub_6DF0(a1, a2);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
        v8 = *(_BYTE *)(a2 + 32);
      }
      if ( (v8 & 0x10) != 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *(unsigned __int8 *)(a2 + 33)),
          32);
        v8 = *(_BYTE *)(a2 + 32);
      }
      if ( (v8 & 2) == 0 )
        return 1;
      goto LABEL_10;
    case 2:
      v10 = *(_BYTE *)(a2 + 32);
      if ( (v10 & 1) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 33);
        v10 = *(_BYTE *)(a2 + 32);
      }
      if ( (v10 & 2) != 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      sub_6D90(a1, a2);
      if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
        goto LABEL_10;
      return 1;
    case 5:
      v11 = *(_QWORD *)a1;
      v12 = 35;
      goto LABEL_19;
    case 7:
      v13 = *(_BYTE *)(a2 + 32);
      if ( (v13 & 1) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 33);
        v13 = *(_BYTE *)(a2 + 32);
      }
      if ( (v13 & 2) != 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      v14 = map_code_ea();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              v14,
              *(_QWORD *)(a2 + 16)) )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 168);
        remember_problem();
      }
      if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
LABEL_10:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      return 1;
    case 8:
      v15 = *(_BYTE *)(a2 + 32);
      if ( v15 == 16 )
      {
        (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, "A.", 0);
        goto LABEL_20;
      }
      if ( v15 > 16 )
      {
        if ( ((v15 - 32) & 0xDF) == 0 )
        {
          sub_6D90(a1, a2);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 46);
          if ( !(unsigned __int8)sub_8240(
                                   *(_QWORD *)(a1 + 616),
                                   a1,
                                   *(unsigned int *)(a2 + 16),
                                   *(unsigned int *)(a2 + 8)) )
            goto LABEL_20;
        }
      }
      else
      {
        if ( v15 != 4 )
        {
          if ( v15 == 8 )
          {
            (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, "PSW.", 0);
            v16 = *(_QWORD *)a1;
            switch ( *(_QWORD *)(a2 + 8) )
            {
              case 0LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "CY", 0);
                break;
              case 1LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "ISP", 0);
                break;
              case 3LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "RBS0", 0);
                break;
              case 4LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "AC", 0);
                break;
              case 5LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "RBS1", 0);
                break;
              case 6LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "Z", 0);
                break;
              case 7LL:
                (*(void (__fastcall **)(__int64, const char *, _QWORD))(v16 + 56))(a1, "IE", 0);
                break;
              default:
                (*(void (__fastcall **)(__int64, __int64, _QWORD))(v16 + 24))(a1, a2, 0);
                break;
            }
          }
          return 1;
        }
LABEL_41:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v6 + 56LL))(
          v6,
          *(_QWORD *)(*(_QWORD *)(v6[78] + 56LL) + 88LL),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, 93);
        v11 = *v6;
        v12 = 46;
LABEL_19:
        (*(void (__fastcall **)(_QWORD *, __int64))(v11 + 32))(v6, v12);
        if ( !(unsigned __int8)is_off() )
        {
LABEL_20:
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v6 + 24LL))(v6, v7, 0);
          return 1;
        }
        sub_6DF0((__int64)v6, v7);
      }
      return 1;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        BUG();
      a1 = 10130;
      interr();
      goto LABEL_41;
  }
}

