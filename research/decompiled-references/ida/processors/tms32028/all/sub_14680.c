__int64 __fastcall sub_14680(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13

  if ( !a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 48);
  if ( a2 == 255 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, 255, 16);
  }
  else
  {
    if ( a2 <= 0xFF )
    {
      result = 0;
      v4 = 0;
      while ( !_bittest64((const __int64 *)&a2, v4) )
      {
LABEL_13:
        if ( ++v4 == 8 )
          return result;
      }
      if ( !(_BYTE)result )
      {
        while ( 1 )
        {
          v5 = v4 + 1;
          result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(
                     a1,
                     (&off_29320)[v4],
                     32);
          if ( v4 == 7 )
            return result;
          if ( !_bittest64((const __int64 *)&a2, v5) )
          {
            v5 = v4 + 2;
            if ( v4 == 6 )
              return result;
            if ( !_bittest64((const __int64 *)&a2, v5) )
            {
              v4 += 2LL;
              result = 1;
              goto LABEL_13;
            }
          }
LABEL_16:
          v4 = v5;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        }
      }
      v5 = v4;
      goto LABEL_16;
    }
    if ( under_debugger )
      BUG();
    interr();
    return sub_147C0(10155);
  }
}

