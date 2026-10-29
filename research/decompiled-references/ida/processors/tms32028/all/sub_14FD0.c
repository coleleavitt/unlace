unsigned __int64 __fastcall sub_14FD0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbx
  char v5; // dl
  bool v6; // cf
  unsigned __int64 v7; // rbx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char *v11; // rsi

  result = *(unsigned __int8 *)(a2 + 33);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      v7 = 10;
      v8 = 1;
      do
      {
        v9 = *(_QWORD *)(a2 + 8);
        result = (unsigned int)(v7 + 16);
        if ( _bittest64(&v9, result) )
        {
          if ( !v8 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, *(&off_291C0 + v7), 32);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 61);
          v10 = *(_QWORD *)(a2 + 8);
          v11 = "1";
          if ( !_bittest64(&v10, v7) )
            v11 = "0";
          result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v11, 12);
          v8 = 0;
        }
        v6 = v7-- == 0;
      }
      while ( !v6 );
    }
  }
  else
  {
    v4 = 7;
    v5 = 1;
    do
    {
      result = *(_QWORD *)(a2 + 8);
      if ( _bittest64((const __int64 *)&result, v4) )
      {
        if ( !v5 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
                   a1,
                   *(&off_29220 + v4),
                   32);
        v5 = 0;
      }
      v6 = v4-- == 0;
    }
    while ( !v6 );
  }
  return result;
}

