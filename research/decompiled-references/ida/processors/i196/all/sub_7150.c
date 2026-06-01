__int64 __fastcall sub_7150(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 sreg; // rax
  char v5; // al
  __int64 v6; // rdx

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 2:
    case 7:
      goto LABEL_3;
    case 5:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 4);
      return 1;
    case 8:
    case 9:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
LABEL_3:
      v3 = *(_QWORD *)(a2 + 16);
      goto LABEL_4;
    case 0xA:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
        a1,
        a2,
        (unsigned int)*(unsigned __int16 *)(a1 + 248) - 113 < 8 ? 196 : 164);
      v3 = *(_QWORD *)(a2 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      if ( v3 )
      {
LABEL_4:
        sreg = get_sreg();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                16 * sreg + v3,
                v3) )
        {
          v5 = *(_BYTE *)(a2 + 1);
          v6 = 25;
          if ( v5 != 10 )
          {
            v6 = 153;
            if ( v5 == 7 )
              v6 = (unsigned int)*(unsigned __int16 *)(a1 + 248) - 113 < 8 ? 201 : 169;
          }
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, v6);
          remember_problem();
        }
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 1) - 8) <= 2u )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
          if ( *(_BYTE *)(a2 + 1) == 9 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      }
      break;
    case 0xB:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
        a1,
        (unsigned int)(char)(*(_WORD *)(a2 + 6) + 48));
      break;
    default:
      sub_6B40((__int64)"out: %a: bad optype %d", a3, *(_QWORD *)(a1 + 240));
      break;
  }
  return 1;
}

