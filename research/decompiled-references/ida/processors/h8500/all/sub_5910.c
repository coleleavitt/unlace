void __fastcall sub_5910(_QWORD *a1, int a2, int a3)
{
  int v3; // eax
  int v6; // r13d
  int v7; // ebp
  int v8; // ebx
  __int64 v9; // rsi
  void (__fastcall *v10)(_QWORD *, __int64, __int64); // rcx
  __int64 v11; // rsi

  if ( a3 < 0 )
    return;
  v3 = 1;
  v6 = -1;
  v7 = 1;
  v8 = 0;
  while ( (v7 & a2) == 0 )
  {
    if ( v6 < 0 )
    {
      while ( 1 )
      {
        ++v8;
        v7 *= 2;
        if ( a3 < v8 )
          return;
        if ( (v7 & a2) != 0 )
          goto LABEL_18;
      }
    }
LABEL_5:
    if ( !v3 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v9 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * v6);
    v10 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL);
    if ( v8 - 1 == v6 )
    {
      v10(a1, v9, 33);
    }
    else
    {
      v10(a1, v9, 33);
      if ( v8 - 2 == v6 )
        v11 = 44;
      else
        v11 = 45;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v11);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (v8 - 1)),
        33);
    }
    ++v8;
    v7 *= 2;
    if ( a3 < v8 )
      return;
    v6 = -1;
    v3 = a2 & v7;
    if ( (a2 & v7) != 0 )
    {
      v6 = v8;
      v3 = 0;
    }
LABEL_14:
    ++v8;
    v7 *= 2;
    if ( a3 < v8 )
      return;
  }
  if ( v6 < 0 )
  {
LABEL_18:
    v6 = v8;
    goto LABEL_14;
  }
  while ( 1 )
  {
    ++v8;
    v7 *= 2;
    if ( a3 < v8 )
      break;
    if ( (v7 & a2) == 0 )
      goto LABEL_5;
  }
}

