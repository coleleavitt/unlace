_QWORD *__fastcall sub_49BB0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  switch ( a2 )
  {
    case 0LL:
      *a1 = 8;
      result = a1;
      break;
    case 1LL:
      *a1 = 20;
      result = a1;
      break;
    case 2LL:
      *a1 = 36;
      result = a1;
      break;
    case 3LL:
      *a1 = 21;
      result = a1;
      break;
    case 4LL:
      *a1 = 37;
      result = a1;
      break;
    case 5LL:
      *a1 = 0;
      get_stock_tinfo(a1, 7);
      result = a1;
      break;
    case 6LL:
      *a1 = 0;
      get_stock_tinfo(a1, 2);
      result = a1;
      break;
    default:
      *a1 = 1;
      result = a1;
      break;
  }
  return result;
}

