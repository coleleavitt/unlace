__int64 __fastcall sub_8D20(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // r12
  void (__fastcall *v11)(_QWORD *, __int64, __int64); // rax
  __int64 v12; // rsi
  __int16 v13; // ax
  __int64 v14; // rax
  __int16 v15; // ax
  __int16 v16; // ax
  _BYTE v17[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v18; // [rsp+438h] [rbp-40h]

  v3 = *(unsigned __int8 *)(a2 + 1);
  v18 = __readfsqword(0x28u);
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
      v6 = *(unsigned __int16 *)(a2 + 6);
      v7 = *(char ***)(a1[78] + 56LL);
LABEL_11:
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v7[v6], 33);
      return 1;
    case 2LL:
      v8 = sub_7B50(a1[77], a1 + 28, a2);
      if ( v8 == -1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 160);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      }
      else
      {
        sub_8C90((__int64)a1, v8, a2, a3);
      }
      return 1;
    case 3LL:
      v9 = *(_BYTE *)(a2 + 32);
      if ( v9 <= 3 )
      {
        sub_8920();
        (*(void (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 88LL))(a1, v17);
        v9 = *(_BYTE *)(a2 + 32);
      }
      if ( v9 == 4 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      }
      return 1;
    case 5LL:
      v11 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL);
      if ( (*(_BYTE *)(a2 + 33) & 0x10) != 0 )
        v11(a1, a2, 4);
      else
        v11(a1, a2, 0);
      return 1;
    case 7LL:
      v10 = sub_7B50(a1[77], a1 + 28, a2);
      if ( (*(_BYTE *)(a2 + 33) & 4) != 0 && (v14 = sub_AE60(a1[77])) != 0 && *(_QWORD *)(v14 + 16) > 1u )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(v14 + 8), 34);
        if ( sub_AE60(a1[77]) && (get_flags_ex() & 0xC000) != 0x4000 )
          set_name();
      }
      else if ( a1[30] + *((unsigned __int16 *)a1 + 125) == v10 )
      {
        sub_89D0((__int64)a1, (__int64)byte_D9F1, *(_QWORD *)(a1[79] + 184LL));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 120LL))(
                   a1,
                   a2,
                   v10,
                   *(_QWORD *)(a2 + 16)) )
      {
        sub_8C00(a1, *(_QWORD *)(a2 + 16));
      }
      return 1;
    case 8LL:
      switch ( *(_BYTE *)(a2 + 32) )
      {
        case 1:
          v6 = *(unsigned __int16 *)(a2 + 6);
          v7 = &off_11480;
          goto LABEL_11;
        case 2:
          v13 = *(_WORD *)(a2 + 6);
          if ( (v13 & 1) != 0 )
          {
            qsnprintf();
            v15 = *(_WORD *)(a2 + 6);
            if ( (v15 & 2) == 0 )
            {
              if ( (v15 & 4) == 0 )
              {
                if ( (v15 & 8) == 0 )
                  goto LABEL_28;
LABEL_36:
                qsnprintf();
                goto LABEL_28;
              }
LABEL_35:
              qsnprintf();
              if ( (*(_BYTE *)(a2 + 6) & 8) == 0 )
                goto LABEL_28;
              goto LABEL_36;
            }
LABEL_47:
            qsnprintf();
            v16 = *(_WORD *)(a2 + 6);
            if ( (v16 & 4) == 0 )
            {
              if ( (v16 & 8) == 0 )
                goto LABEL_28;
              goto LABEL_36;
            }
            goto LABEL_35;
          }
          if ( (v13 & 2) != 0 )
            goto LABEL_47;
          if ( (v13 & 4) != 0 )
            goto LABEL_35;
          if ( (v13 & 8) != 0 )
            goto LABEL_36;
LABEL_28:
          qsnprintf();
          (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v17, 33);
          return 1;
        case 3:
          v12 = 115;
          if ( *(_WORD *)(a2 + 6) )
            v12 = 114;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v12);
          return 1;
        case 4:
        case 5:
          goto LABEL_28;
        default:
          return 1;
      }
    case 9LL:
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 88LL))(a1, *(&off_114F0 + *(unsigned __int8 *)(a2 + 32)));
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 164);
      if ( !*(_BYTE *)(a2 + 32) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      return 1;
    default:
      sub_7B20((__int64)(a1 + 28), a3);
      return 1;
  }
}

