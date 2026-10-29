__int64 __fastcall sub_4660(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      goto LABEL_5;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      result = 1;
      break;
    case 2:
    case 7:
      sub_40E0(a1, a2, 1);
      result = 1;
      break;
    case 4:
      sub_4210(a1);
      result = 1;
      break;
    case 5:
      if ( (*(_BYTE *)(a2 + 32) & 4) == 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
LABEL_5:
      result = 1;
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
      result = sub_4740(10024);
      break;
  }
  return result;
}

