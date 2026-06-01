__int64 __fastcall sub_3280(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
    case 4:
    case 6:
      goto LABEL_3;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      result = 1;
      break;
    case 2:
      sub_31E0((__int64)a1, a2);
      result = 1;
      break;
    case 3:
      sub_3110((__int64)a1, *(unsigned __int16 *)(a2 + 6));
      result = 1;
      break;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      result = 1;
      break;
    case 7:
      sub_3180(a1, a2);
LABEL_3:
      result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

