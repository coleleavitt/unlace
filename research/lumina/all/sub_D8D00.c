void __fastcall sub_D8D00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi

  LOWORD(a2) = a2 - 204;
  v3 = *(__int64 **)(a1 + 8);
  switch ( a2 )
  {
    case 0LL:
    case 35LL:
    case 36LL:
    case 48LL:
      if ( *a3 )
        sub_D75C0(*v3, (_QWORD *)*a3, 1);
      break;
    case 12LL:
    case 13LL:
    case 42LL:
    case 44LL:
    case 63LL:
    case 74LL:
    case 76LL:
    case 79LL:
    case 86LL:
    case 91LL:
    case 107LL:
      v4 = *a3;
      if ( *a3 )
        goto LABEL_5;
      break;
    case 17LL:
    case 27LL:
    case 28LL:
    case 40LL:
    case 43LL:
    case 45LL:
    case 49LL:
    case 50LL:
    case 57LL:
    case 64LL:
    case 73LL:
    case 75LL:
    case 106LL:
      if ( *a3 )
        sub_D7810(*v3, (_QWORD *)*a3);
      break;
    case 34LL:
    case 41LL:
    case 52LL:
    case 53LL:
    case 58LL:
      sub_D8260(*v3, (_QWORD *)*a3);
      break;
    case 37LL:
      if ( *a3 )
        sub_D7ED0(*v3, (_QWORD *)*a3);
      break;
    case 47LL:
    case 102LL:
      v5 = (_QWORD *)*a3;
      v6 = *v3;
      if ( *a3 )
      {
        do
        {
          v7 = (_QWORD *)v5[8];
          sub_D7AF0(v6, v5);
          v5 = v7;
        }
        while ( v7 );
      }
      break;
    case 59LL:
    case 66LL:
      v8 = (_QWORD *)*a3;
      if ( *a3 )
        goto LABEL_17;
      break;
    case 69LL:
    case 103LL:
    case 104LL:
    case 105LL:
    case 108LL:
      sub_D7AF0(*v3, (_QWORD *)*a3);
      break;
    case 82LL:
    case 87LL:
      sub_D8390(*v3, *a3);
      break;
    case 84LL:
      v8 = (_QWORD *)a3[1];
      if ( v8 )
LABEL_17:
        sub_CF6E0(*v3, v8);
      break;
    case 110LL:
    case 111LL:
    case 112LL:
      v4 = a3[1];
      if ( v4 )
LABEL_5:
        sub_D7720(*v3, v4);
      break;
    default:
      return;
  }
}
