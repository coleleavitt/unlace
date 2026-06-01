__int64 __fastcall sub_6EA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 *v4; // r10
  unsigned __int64 v5; // r11
  __int64 *v6; // rax
  __int64 v7; // rax

  v3 = (unsigned int)a2;
  if ( (_BYTE)a3 )
  {
    if ( qword_E2D8 )
    {
      a3 = (unsigned __int16)a2 % (unsigned __int64)qword_E2C8;
      v4 = *(__int64 **)(qword_E2C0 + 8 * a3);
      v5 = a3;
      if ( v4 )
      {
        v6 = (__int64 *)*v4;
        a2 = *(unsigned __int16 *)(*v4 + 8);
        if ( (_WORD)v3 != (_WORD)a2 )
        {
          while ( *v6 )
          {
            a2 = *(unsigned __int16 *)(*v6 + 8);
            v4 = v6;
            a3 = (unsigned __int16)a2 % (unsigned __int64)qword_E2C8;
            if ( v5 != a3 )
              break;
            v6 = (__int64 *)*v6;
            if ( (_WORD)v3 == (_WORD)a2 )
              goto LABEL_8;
          }
          return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 296LL))(
                   a1,
                   a2,
                   a3,
                   v3);
        }
LABEL_8:
        if ( v4 )
        {
          v7 = *v4;
          if ( *v4 )
            return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                     a1,
                     *(_QWORD *)(v7 + 16),
                     8,
                     0);
        }
      }
    }
    else
    {
      v7 = qword_E2D0;
      if ( qword_E2D0 )
      {
        while ( *(_WORD *)(v7 + 8) != (_WORD)a2 )
        {
          v7 = *(_QWORD *)v7;
          if ( !v7 )
            return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 296LL))(
                     a1,
                     a2,
                     a3,
                     v3);
        }
        return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                 a1,
                 *(_QWORD *)(v7 + 16),
                 8,
                 0);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 296LL))(
           a1,
           a2,
           a3,
           v3);
}

