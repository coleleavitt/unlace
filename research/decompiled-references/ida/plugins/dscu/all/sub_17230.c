__int64 __fastcall sub_17230(__int64 (__fastcall **a1)(_QWORD, _BYTE *), __int64 a2)
{
  unsigned int v2; // ebp

  switch ( a2 )
  {
    case 0LL:
      v2 = sub_CBB0(a1);
      break;
    case 1LL:
      v2 = sub_CF20((__int64)a1);
      break;
    case 2LL:
      v2 = sub_CCE0((__int64)a1);
      break;
    case 3LL:
      v2 = sub_13B20((__int64)a1);
      break;
    case 4LL:
      v2 = sub_ADC0((__int64)a1);
      break;
    case 5LL:
      v2 = sub_16DF0((__int64)a1);
      break;
    case 6LL:
      v2 = sub_BD40((__int64)a1);
      break;
    case 7LL:
      v2 = sub_B180((__int64)a1);
      break;
    case 8LL:
      v2 = sub_B940((__int64)a1);
      break;
    case 9LL:
      v2 = sub_B550((__int64)a1);
      break;
    default:
      v2 = 0;
      sub_CA10((__int64)"Error: invalid run code: %d\n", a2);
      break;
  }
  sub_BE10((__int64)a1);
  return v2;
}

