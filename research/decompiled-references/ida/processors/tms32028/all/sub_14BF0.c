__int64 __fastcall sub_14BF0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char v3; // al
  char v4; // al
  __int64 result; // rax
  bool v6; // al
  __int64 v7; // rcx
  __int64 v8; // rsi

  v2 = a1;
  v3 = *(_BYTE *)(a2 + 33);
  if ( v3 == 2 )
  {
    switch ( *(_BYTE *)(a2 + 34) )
    {
      case 0:
        result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
        goto LABEL_23;
      case 1:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*--", 9);
        goto LABEL_23;
      case 2:
        goto LABEL_22;
      case 5:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*0++", 9);
        goto LABEL_23;
      case 7:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*0--", 9);
        goto LABEL_23;
      case 8:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*BR0++", 9);
        goto LABEL_23;
      case 9:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*BR0--", 9);
        goto LABEL_23;
      default:
        if ( under_debugger )
          goto LABEL_36;
        a1 = (_QWORD *)(&stru_27A8 + 8);
        interr();
LABEL_22:
        result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "*++", 9);
LABEL_23:
        if ( !*(_WORD *)(a2 + 6) )
          return result;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 32LL))(v2, 44);
        break;
    }
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v2 + 56LL))(
             v2,
             *(_QWORD *)(*(_QWORD *)(v2[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
             33);
  }
  if ( v3 <= 2 )
  {
    if ( (unsigned __int8)v3 <= 1u )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      v4 = *(_BYTE *)(a2 + 34);
      if ( v4 == 5 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
        v8 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 88LL);
      }
      else
      {
        if ( v4 <= 5 )
        {
          if ( v4 != 1 )
          {
            if ( v4 == 2 )
            {
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                a1,
                *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
                33);
              return (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "++", 9);
            }
            goto LABEL_34;
          }
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "--", 9);
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v2 + 56LL))(
                   v2,
                   *(_QWORD *)(*(_QWORD *)(v2[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
                   33);
        }
        if ( v4 != 6 )
          goto LABEL_34;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
        v8 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 96LL);
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v8, 33);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
    }
LABEL_32:
    if ( under_debugger )
      goto LABEL_36;
    interr();
LABEL_34:
    if ( !under_debugger )
    {
      interr();
      return sub_14FD0(10159);
    }
LABEL_36:
    BUG();
  }
  if ( v3 != 3 )
    goto LABEL_32;
  v6 = sub_12250();
  v7 = *a1;
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v7 + 56))(a1, "*+", 9);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 72LL),
      33);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 96LL),
      33);
    return (*(__int64 (**)(_QWORD *, const char *, ...))(*a1 + 56LL))(a1, "%++]", 9);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(v7 + 32))(a1, 42);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 136LL),
      33);
    return (*(__int64 (**)(_QWORD *, const char *, ...))(*a1 + 56LL))(a1, "%++", 9);
  }
}

