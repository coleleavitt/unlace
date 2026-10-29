__int64 __fastcall sub_147C0(__int64 a1, char a2)
{
  __int64 result; // rax
  const char *v3; // rsi

  switch ( a2 )
  {
    case 0:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "+1", 9);
      break;
    case 1:
      result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "0", 9);
      break;
    case 2:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "-1", 9);
      break;
    case 3:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "-2", 9);
      break;
    case 4:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "-3", 9);
      break;
    case 5:
      v3 = "-4";
      if ( sub_12250() )
        v3 = "+4";
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v3, 9);
      break;
    case 6:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "-5", 9);
      break;
    case 7:
      result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "-6", 9);
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
      result = sub_14910(10156);
      break;
  }
  return result;
}

