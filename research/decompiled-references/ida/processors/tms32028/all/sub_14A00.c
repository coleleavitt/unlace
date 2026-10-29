__int64 __fastcall sub_14A00(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rdi
  _BYTE *v6; // rax

  v3 = *(_BYTE *)(a2 + 33);
  if ( v3 == 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 42);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
    v5 = *(_QWORD *)(a1 + 616);
    if ( (*(_BYTE *)(v5 + 252) & 1) != 0 )
    {
      v6 = (_BYTE *)sub_17300(v5, *(_QWORD *)(a2 + 16));
      if ( v6 )
      {
        if ( *v6 )
        {
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 34);
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
        }
      }
    }
    goto LABEL_11;
  }
  if ( v3 > 3 )
  {
    if ( v3 != 4 )
    {
LABEL_20:
      if ( under_debugger )
        BUG();
      interr();
      return sub_14BF0(10158);
    }
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "*(0:", 9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
           a1,
           a2,
           *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 224)) )
    {
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
    }
LABEL_11:
    sub_149B0(a1, *(_QWORD *)(a2 + 16));
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 224)) )
      {
        sub_149B0(a1, *(unsigned __int16 *)(a2 + 16));
        if ( *(_QWORD *)(a2 + 16) != -1 && (*(_BYTE *)(a1 + 721) & 8) == 0 )
          sub_14260();
      }
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
    }
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 48);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 58);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
             a1,
             a2,
             *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 224));
  if ( !(_BYTE)result )
    return sub_149B0(a1, *(_QWORD *)(a2 + 16));
  return result;
}

