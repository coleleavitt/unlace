__int64 __fastcall sub_48760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ioport; // rax
  __int64 v5; // rbp
  const char *v6; // rsi
  __int64 result; // rax

  ioport = find_ioport(a2, a3);
  if ( ioport )
  {
    v5 = ioport;
    v6 = s1;
    if ( *(_QWORD *)(ioport + 16) )
      v6 = *(const char **)(ioport + 8);
    result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 33);
    if ( *(_QWORD *)(v5 + 40) > 1u && (*(_BYTE *)(a1 + 721) & 8) == 0 )
    {
      result = *(_QWORD *)(v5 + 32);
      *(_QWORD *)(a1 + 80) = result;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 33);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, a3, 16);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 33);
  }
  return result;
}

