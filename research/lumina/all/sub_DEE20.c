__int64 *__fastcall sub_DEE20(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 *result; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int16 v10; // cx
  __int64 v11; // rsi
  char v12; // cl

  result = sub_DEC00(a1, 167, 0, 0);
  if ( result )
  {
    v8 = a2 + 104LL * a3;
    v9 = *(_QWORD *)(v8 + 40);
    result[8] = v9;
    *((_DWORD *)result + 11) = *(_DWORD *)(v8 + 72);
    if ( *(__int16 *)(v9 + 52) == a4 )
    {
      *((_WORD *)result + 24) = -1;
    }
    else
    {
      *((_WORD *)result + 24) = a4;
      if ( (*(_BYTE *)(v9 + 48) & 0x60) != 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 8) + 16LL * a4 + 14) & 0x60) != 0 )
      {
        v10 = *(_WORD *)(v9 + 54);
        v11 = -1;
        if ( v10 <= 63 )
          v11 = (1LL << v10) - 1;
        *(_QWORD *)(a2 + 104LL * a3 + 88) = v11;
      }
      else
      {
        v12 = 63;
        if ( a4 <= 63 )
          v12 = a4;
        *(_QWORD *)(a2 + 104LL * a3 + 88) |= 1LL << v12;
      }
    }
  }
  return result;
}
