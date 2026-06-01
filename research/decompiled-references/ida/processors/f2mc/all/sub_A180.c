__int64 __fastcall sub_A180(_QWORD *a1, unsigned __int16 a2)
{
  int v2; // r14d
  int v3; // r13d
  char i; // si
  signed int v5; // ebx
  int v6; // eax
  __int64 v7; // r12
  int v8; // ebp

  v2 = a2;
  v3 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
  for ( i = 1; ; i = 0 )
  {
    while ( 1 )
    {
      v5 = v3 + 1;
      v6 = (v2 >> v3) & 1;
      if ( v6 )
        break;
      ++v3;
      if ( v5 > 7 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    }
    v7 = v3 + 13;
    if ( v3 != 7 )
    {
      v8 = 8 - v3;
      do
      {
        if ( !_bittest(&v2, v5) )
        {
          v3 += v6;
          v8 = v6;
          goto LABEL_9;
        }
        ++v6;
        ++v5;
      }
      while ( v6 != v8 );
      v3 = v5;
LABEL_9:
      if ( i )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( i )
      break;
    v3 = 8;
    v8 = v6;
LABEL_10:
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
LABEL_11:
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v7),
      33);
    if ( v8 > 1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (v5 + 12)),
        33);
    }
    if ( v3 > 7 )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
    a1,
    *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 160LL),
    33);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
}

