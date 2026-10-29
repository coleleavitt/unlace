unsigned __int64 __fastcall sub_133D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  const char *v9; // rsi
  char v10; // [rsp-8h] [rbp-18h]

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result )
  {
    v7 = *(unsigned __int16 *)(a2 + 24);
    LOWORD(v7) = (unsigned __int16)result >> 15;
    if ( (_BYTE)a3 == ((result & 0x8000u) != 0LL) )
    {
      LOWORD(result) = result & 0x7FFF;
      switch ( result )
      {
        case 1uLL:
          v8 = *a1;
          v9 = " << ";
          goto LABEL_6;
        case 2uLL:
          (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, " << ", 9);
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
                   a1,
                   *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 26)),
                   33);
        case 3uLL:
          v8 = *a1;
          v9 = " >> ";
          goto LABEL_6;
        case 4uLL:
          v8 = *a1;
          v9 = " == ";
          goto LABEL_6;
        case 5uLL:
          v8 = *a1;
          v9 = " != ";
LABEL_6:
          (*(void (__fastcall **)(__int64 *, const char *, __int64))(v8 + 56))(a1, v9, 9);
          result = sub_13360(a1);
          break;
        default:
          sub_10CA0((__int64)"interr: out: out_symbol_shift", a2, a3, v7, a5, a6, v10);
      }
    }
  }
  return result;
}

