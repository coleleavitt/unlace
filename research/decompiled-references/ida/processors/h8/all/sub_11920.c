char __fastcall sub_11920(_QWORD *a1, char a2)
{
  __int64 v2; // r12
  char v3; // al
  char result; // al
  unsigned __int64 v5; // r12

  v2 = a1[77];
  v3 = *(_BYTE *)(v2 + 226);
  if ( v3 == -1 )
  {
    result = qgetenv();
    *(_BYTE *)(v2 + 226) = result ^ 1;
  }
  else
  {
    result = v3 == 0;
  }
  if ( a2 >= 0 && !result )
  {
    v5 = 32;
    if ( (a2 & 0x40) == 0 )
    {
      v5 = 24;
      if ( (a2 & 0x20) == 0 )
        v5 = (-(__int64)((a2 & 0x10) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*a1 + 112LL))(a1, v5, 10);
  }
  return result;
}

