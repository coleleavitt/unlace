__int64 __fastcall sub_5810(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int16 v4; // dx
  char v5; // cl
  unsigned __int64 v6; // rsi

  v2 = *(_QWORD *)(a1 + 616);
  result = *(unsigned __int8 *)(v2 + 155);
  if ( (_BYTE)result == 0xFF )
  {
    result = (unsigned int)qgetenv() ^ 1;
    *(_BYTE *)(v2 + 155) = result;
  }
  if ( (_BYTE)result && (*(_BYTE *)(a1 + 252) & 0x1C) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 58);
    v4 = *(_WORD *)(a1 + 248);
    v5 = *(_BYTE *)(a2 + 1);
    if ( v4 == 1 )
    {
      if ( v5 == 5 )
      {
        v6 = (-(__int64)((*(_DWORD *)(a1 + 252) & 0x200) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
        return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v6, 10);
      }
    }
    else if ( v5 == 5 && v4 == 24 )
    {
      v6 = (-(__int64)((*(_DWORD *)(a1 + 252) & 2) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
      return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v6, 10);
    }
    v6 = 24;
    if ( (*(_DWORD *)(a1 + 252) & 0x10) == 0 )
      v6 = (-(__int64)((*(_DWORD *)(a1 + 252) & 8) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
    return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v6, 10);
  }
  return result;
}

