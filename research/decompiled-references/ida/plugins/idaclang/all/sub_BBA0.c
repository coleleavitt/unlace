__int64 __fastcall sub_BBA0(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rsi

  v2 = sub_BB20();
  switch ( sub_AD40(v2) )
  {
    case 1LL:
      v4 = a2 == 0 ? 34 : 2;
      goto LABEL_4;
    case 2LL:
      v4 = a2 == 0 ? 35 : 3;
      goto LABEL_4;
    case 4LL:
      v4 = a2 == 0 ? 36 : 4;
      goto LABEL_4;
    case 8LL:
      v4 = a2 == 0 ? 37 : 5;
      goto LABEL_4;
    case 16LL:
      v4 = a2 == 0 ? 38 : 6;
LABEL_4:
      result = create_tinfo(a1, v4, 7, 0);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

