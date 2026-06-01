__int64 __fastcall sub_3F10(__int64 a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  unsigned __int16 v7; // ax
  __int16 v8; // ax
  char *v9; // rsi

  v3 = *(_BYTE *)(a2 + 1);
  switch ( v3 )
  {
    case 4:
      v7 = *(_WORD *)(a2 + 6);
      if ( v7 == 6 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 161);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "Y", 33);
        return 1;
      }
      if ( v7 > 6u )
      {
        if ( (unsigned __int16)(v7 - 7) > 1u )
          goto LABEL_6;
      }
      else
      {
        if ( v7 > 2u )
        {
          if ( v7 == 5 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 161);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
            (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "X", 33);
LABEL_14:
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
            return 1;
          }
LABEL_6:
          sub_3810((__int64)"out: %a: bad optype %d", a3, *(_QWORD *)(a1 + 240));
          return 1;
        }
        if ( !v7 )
          goto LABEL_6;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 161);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v8 = *(_WORD *)(a2 + 6);
      if ( v8 == 7 || (v9 = "Y", v8 == 1) )
        v9 = "X";
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v9, 33);
      return 1;
    case 7:
      if ( !*(_DWORD *)(a1 + 252) )
        goto LABEL_10;
      goto LABEL_18;
    case 2:
      if ( !*(_DWORD *)(a1 + 252) )
      {
        v6 = *(_QWORD *)(a2 + 16);
        goto LABEL_19;
      }
LABEL_18:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
      v6 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 1) != 7 )
      {
LABEL_19:
        v5 = 16 * calc_dataseg() + v6;
LABEL_11:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                v5,
                *(_QWORD *)(a2 + 16)) )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 681);
        if ( !*(_DWORD *)(a1 + 252) )
          return 1;
        goto LABEL_14;
      }
LABEL_10:
      v5 = map_code_ea();
      goto LABEL_11;
  }
  switch ( v3 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "A", 33);
      return 1;
    case 5:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
      return 1;
    default:
      goto LABEL_6;
  }
  return result;
}

