__int64 __fastcall sub_14830(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx

  v3 = *(_WORD *)(a3 + 12);
  switch ( v3 )
  {
    case 0u:
      goto LABEL_4;
    case 1u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v4 = a1[7];
      v5 = a1[4];
      goto LABEL_3;
    case 2u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 12;
      v8 = a1[7];
      v7 = a1[4];
      goto LABEL_6;
    case 3u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v4 = a1[5];
      v5 = a1[4];
      goto LABEL_3;
    case 4u:
      *(_DWORD *)(a2 + 4) = 4;
      *(_WORD *)a2 = 4;
      goto LABEL_4;
    case 7u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        (unsigned __int64)(a1[5] - 4LL - a1[4]) >> 2,
        20,
        1,
        1);
      goto LABEL_4;
    case 8u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5] >> 2,
        13,
        1,
        1);
      goto LABEL_4;
    case 0xAu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v5 = a1[4];
      v4 = a1[7] - v5;
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, v5, v4, 31, 0, 1);
      goto LABEL_4;
    case 0xBu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 12;
      v7 = a1[4];
      v8 = a1[7] - v7;
LABEL_6:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, v7, v8, 63, 0, 1);
LABEL_4:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))*a1)(a1, v3, a3);
      result = 0;
      break;
  }
  return result;
}
