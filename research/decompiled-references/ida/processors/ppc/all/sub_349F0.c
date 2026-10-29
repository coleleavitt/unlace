unsigned __int64 __fastcall sub_349F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // kr08_8
  unsigned __int64 *v10; // r9

  result = get_func(*(_QWORD *)(a2 + 16));
  if ( result )
  {
    v7 = result;
    if ( *(_BYTE *)(a3 + 1) == 5 )
      v8 = *(_QWORD *)(a3 + 8);
    else
      v8 = *(_QWORD *)(a3 + 16);
    v9 = sub_4E2D0(a1);
    switch ( v9 )
    {
      case 1LL:
      case 5LL:
      case 7LL:
        v10 = (unsigned __int64 *)&off_85260;
        goto LABEL_8;
      case 2LL:
      case 6LL:
        v10 = (unsigned __int64 *)&off_85140;
        goto LABEL_8;
      case 3LL:
        v10 = (unsigned __int64 *)&off_850E0;
        goto LABEL_8;
      case 4LL:
      case 8LL:
        v10 = (unsigned __int64 *)&off_85020;
        goto LABEL_8;
      case 9LL:
        v10 = (unsigned __int64 *)&off_84FC0;
LABEL_8:
        result = sub_315A0(a2, (unsigned __int8 *)a3, v7, v8, a4, v10);
        break;
      default:
        result = v9;
        break;
    }
  }
  return result;
}

