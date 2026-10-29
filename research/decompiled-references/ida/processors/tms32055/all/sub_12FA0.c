__int64 __fastcall sub_12FA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 result; // rax
  _BYTE *v12; // rax
  char v13; // [rsp+0h] [rbp-28h]

  v6 = a2;
  v7 = *(_BYTE *)(a2 + 1);
  v8 = a1[77];
  if ( v7 == 7 )
  {
    v9 = *(_QWORD *)(a2 + 16) + 16LL * a1[28];
    goto LABEL_4;
  }
  if ( v7 == 2 )
  {
    v9 = sub_11E40((__int64)(a1 + 28), a2);
  }
  else
  {
    v9 = -1;
    if ( v7 != 11 )
    {
LABEL_4:
      switch ( *(_BYTE *)(a2 + 33) )
      {
        case 0:
          goto LABEL_16;
        case 1:
          goto LABEL_15;
        case 2:
        case 3:
          goto LABEL_5;
        case 4:
          goto LABEL_26;
        case 5:
          goto LABEL_28;
        case 6:
          goto LABEL_21;
        default:
          goto LABEL_44;
      }
    }
    v9 = sub_11EE0(a1 + 28, a2);
  }
  if ( *(_BYTE *)(a2 + 1) == 2 )
  {
    a2 = v9;
    v10 = (int)sub_11F40(v8, v9);
    switch ( *(_BYTE *)(v6 + 33) )
    {
      case 0:
        goto LABEL_23;
      case 1:
        if ( (_DWORD)v10 == -1 )
          goto LABEL_15;
        if ( *(_BYTE *)(v6 + 1) == 11 )
          goto LABEL_9;
        goto LABEL_25;
      case 2:
      case 3:
        goto LABEL_6;
      case 4:
        goto LABEL_27;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_22;
      default:
        goto LABEL_44;
    }
  }
  switch ( *(_BYTE *)(a2 + 33) )
  {
    case 0:
      if ( *(_BYTE *)(a2 + 1) != 11 )
        goto LABEL_16;
      goto LABEL_9;
    case 1:
LABEL_15:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      if ( *(_BYTE *)(v6 + 1) != 11 )
        goto LABEL_16;
      goto LABEL_9;
    case 2:
    case 3:
LABEL_5:
      v10 = -1;
LABEL_6:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      if ( *(_BYTE *)(v6 + 33) == 2 )
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "abs16", 9);
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "(#", 9);
      if ( *(_BYTE *)(v6 + 1) == 11 )
        goto LABEL_9;
      goto LABEL_24;
    case 4:
LABEL_26:
      v10 = -1;
LABEL_27:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "mmap(@", 9);
      goto LABEL_23;
    case 5:
LABEL_28:
      v10 = -1;
LABEL_29:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "port(#", 9);
      goto LABEL_23;
    case 6:
LABEL_21:
      v10 = -1;
LABEL_22:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "port(@", 9);
LABEL_23:
      if ( *(_BYTE *)(v6 + 1) == 11 )
      {
LABEL_9:
        if ( v9 == -1 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(v6 + 16), 16);
          a2 = 18;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
        }
        else if ( (*(_BYTE *)(v8 + 256) & 1) != 0 && (v12 = (_BYTE *)sub_159F0(v8, v9)) != nullptr && *v12 )
        {
          a2 = (__int64)v12;
          (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v12, 34);
        }
        else
        {
          a2 = v9;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*a1 + 104LL))(a1, v9, 16);
        }
LABEL_12:
        result = *(unsigned __int8 *)(v6 + 33);
        if ( (char)result <= 1 )
          goto LABEL_13;
LABEL_18:
        if ( (unsigned __int8)(result - 2) <= 4u )
          return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
LABEL_44:
        sub_10CA0((__int64)"interr: out: o_address: modifier_begin", a2, a3, a4, a5, a6, v13);
      }
LABEL_24:
      if ( (_DWORD)v10 != -1 )
      {
LABEL_25:
        a2 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v10);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, a2, 33);
        goto LABEL_12;
      }
LABEL_16:
      a2 = v6;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, unsigned __int64, unsigned __int64))(*a1 + 120LL))(
             a1,
             v6,
             v9,
             v9) )
      {
        goto LABEL_12;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(v6 + 16), 16);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      a2 = a1[30];
      remember_problem();
      result = *(unsigned __int8 *)(v6 + 33);
      if ( (char)result > 1 )
        goto LABEL_18;
LABEL_13:
      if ( (result & 0x80u) != 0LL )
        goto LABEL_44;
      return result;
    default:
      goto LABEL_44;
  }
}

