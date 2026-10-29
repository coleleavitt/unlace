__int64 __fastcall sub_4E10(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __int16 v3; // ax
  __int64 v4; // rcx
  void (__fastcall *v6)(_QWORD *, __int64); // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  char *v9; // r12
  char v10; // dl
  __int64 v11; // rax
  char v12; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-20h]

  v2 = *(unsigned __int8 *)(a2 + 1);
  v13 = __readfsqword(0x28u);
  switch ( (char)v2 )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 6:
    case 7:
      v3 = *(_WORD *)(a2 + 6);
      if ( v3 )
      {
        if ( (v3 & 0xFFDF) == 0x1F )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
          if ( *(_WORD *)(a2 + 6) == 31 )
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
        }
        v4 = *(unsigned __int16 *)(a2 + 16);
        if ( (unsigned __int16)v4 < *(_WORD *)(a1[77] + 136LL) )
        {
          if ( !(unsigned __int8)is_off() )
          {
LABEL_30:
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 169);
            return 1;
          }
          LOBYTE(v2) = *(_BYTE *)(a2 + 1);
          v4 = *(unsigned __int16 *)(a2 + 16);
        }
        else
        {
          LOBYTE(v2) = *(_BYTE *)(a2 + 1);
        }
      }
      else
      {
        v4 = *(unsigned __int16 *)(a2 + 16);
      }
      if ( (_BYTE)v2 == 6 )
        v8 = v4 + 16LL * *(unsigned __int16 *)(a2 + 24);
      else
        v8 = map_code_ea();
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 120LL))(a1, a2, v8) )
      {
        if ( *(_BYTE *)(a2 + 1) == 6 || *(_WORD *)(a2 + 16) <= 0xDFFFu )
          remember_problem();
        goto LABEL_30;
      }
      return 1;
    case 3:
      if ( *(_WORD *)(a2 + 6) > 0x2Fu )
        return 1;
      switch ( *(_WORD *)(a2 + 6) >> 3 )
      {
        case 0:
          return 1;
        case 1:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (*(_WORD *)(a2 + 6) & 7)),
            33);
          return 1;
        case 2:
          goto LABEL_34;
        case 3:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
LABEL_34:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          v7 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (*(_WORD *)(a2 + 6) & 7));
          goto LABEL_18;
        case 4:
          goto LABEL_36;
        case 5:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
LABEL_36:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          break;
      }
LABEL_13:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (*(_WORD *)(a2 + 6) & 7)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      return 1;
    case 4:
      if ( *(_WORD *)(a2 + 6) > 0x37u )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 164);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      goto LABEL_13;
    case 5:
      v6 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
      if ( *(_BYTE *)(a2 + 32) )
      {
        v6(a1, 40);
        v7 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 56LL);
LABEL_18:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v7, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      }
      else
      {
        v6(a1, 35);
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 5) - 3) <= 1u )
        {
          v9 = &v12;
          v10 = print_fpval();
          v11 = *a1;
          if ( v10 )
          {
            if ( v12 == 32 )
            {
              do
                ++v9;
              while ( *v9 == 32 );
            }
            (*(void (__fastcall **)(_QWORD *, __int64))(v11 + 32))(a1, 94);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 70);
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v9, 12);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v11 + 112))(a1, *(_QWORD *)(a2 + 8), 8);
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
        }
      }
      return 1;
    case 8:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6) + 64),
        33);
      return 1;
    case 9:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 25);
      return 1;
    default:
      sub_40F0((__int64)"out: %llo: bad optype %d", a1[29], v2);
      return 1;
  }
}

