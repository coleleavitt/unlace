__int64 __fastcall sub_3BE120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax

  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  switch ( *(_DWORD *)(v11 + 8) )
  {
    case 1:
      result = (unsigned __int8)sub_398E10(a2, *(_QWORD *)(v11 + 16), a3, a4, a5, a7, a8, a9, a10);
      break;
    case 2:
      result = (unsigned __int8)sub_396F80(a2, a7, a8, a9, a10);
      break;
    case 3:
      result = (unsigned __int8)sub_397200(a2, *(_QWORD *)(v11 + 16), a7, a3, a4, a5, a6, a8, a9, a10);
      break;
    case 4:
      result = (unsigned __int8)sub_39B6D0(a2);
      break;
    case 5:
      v12 = sub_38C130(a2);
      v13 = sub_3C5930((_QWORD **)(*(_QWORD *)(a2 + 24) + 1312LL), v12);
      result = 0;
      if ( v13 )
        result = (unsigned __int8)sub_3BDB80(*(_QWORD *)(a1 + 16), a2, 1u, v14, v15, v16, a7, a8, a9, a10);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

