__int64 __fastcall sub_3B9220(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax

  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  switch ( *(_DWORD *)(v15 + 8) )
  {
    case 1:
      result = (unsigned __int8)sub_393F10(
                                  a2,
                                  *(_QWORD *)(v15 + 16),
                                  *(double *)a7.m128_u64,
                                  a8,
                                  a9,
                                  a10,
                                  a11,
                                  a12,
                                  a13,
                                  a14,
                                  a3,
                                  a4,
                                  a5);
      break;
    case 2:
      result = (unsigned __int8)sub_392080(a2);
      break;
    case 3:
      result = (unsigned __int8)sub_392300(
                                  a2,
                                  *(_QWORD *)(v15 + 16),
                                  a7,
                                  a8,
                                  a9,
                                  a10,
                                  a11,
                                  a12,
                                  a13,
                                  a14,
                                  a3,
                                  a4,
                                  a5,
                                  a6);
      break;
    case 4:
      result = (unsigned __int8)sub_3967D0(a2);
      break;
    case 5:
      sub_387230(a2);
      v16 = sub_3C0A30(*(_QWORD *)(a2 + 24) + 1312LL);
      result = 0;
      if ( v16 )
        result = (unsigned __int8)sub_3B8C80(*(_QWORD *)(a1 + 16), a2, 1u, v17, v18, v19);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

