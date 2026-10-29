__int64 __fastcall sub_5E40(_QWORD *a1, __int64 a2, double a3)
{
  __int16 v3; // ax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  char v5; // bp
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rsi
  void (__fastcall *v11)(_QWORD *, __int64); // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      if ( *(_BYTE *)(a2 + 33) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      if ( *(_BYTE *)(a2 + 32) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 152);
      }
      if ( !*(_BYTE *)(a2 + 33) )
        return 1;
      goto LABEL_20;
    case 2:
      if ( *(_BYTE *)(a2 + 34) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      if ( !(unsigned int)sub_5DE0((__int64)a1, a2, 0) )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 160);
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        0);
      return 1;
    case 5:
      v11 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
      if ( *(_BYTE *)(a2 + 32) )
      {
        v11(a1, 49);
      }
      else
      {
        v11(a1, 35);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      }
      return 1;
    case 7:
      if ( *(_BYTE *)(a2 + 34) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 33);
      if ( *(_BYTE *)(a2 + 32) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 120LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 16) + 16LL * a1[28]) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 168);
        remember_problem();
      }
      if ( *(_BYTE *)(a2 + 32) )
LABEL_20:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 8:
      v3 = *(_WORD *)(a2 + 6);
      if ( v3 == 1 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "A.", 0);
LABEL_7:
        v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        v5 = *(_QWORD *)(a2 + 8) + 48;
        if ( v4 == sub_5CA0 )
        {
          v6 = a1[4];
          if ( v6 )
          {
            v7 = v6 + 1;
            v8 = a1[4];
            --v6;
          }
          else
          {
            v8 = 1;
            v7 = 2;
          }
          v9 = a1[3];
          if ( a1[5] < v7 )
          {
            v14 = qvector_reserve();
            a1[3] = v14;
            v9 = v14;
          }
          a1[4] = v7;
          *(_BYTE *)(v9 + v6) = v5;
          *(_BYTE *)(a1[3] + v8) = 0;
        }
        else
        {
          v4(a1, v5);
        }
        return 1;
      }
      if ( v3 != 12 )
      {
        if ( !(unsigned int)sub_5DE0((__int64)a1, a2, 1) )
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 160);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 46);
        if ( (unsigned __int8)sub_79C0(a1[77], a1, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 8)) )
          return 1;
        goto LABEL_7;
      }
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "PSW.", 0);
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *a1;
      if ( v12 == 6 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v13 + 56))(a1, "Z", 0);
        return 1;
      }
      if ( v12 > 6 )
      {
        if ( v12 == 7 )
        {
          (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v13 + 56))(a1, "IE", 0);
          return 1;
        }
        goto LABEL_48;
      }
      if ( v12 )
      {
        if ( v12 == 4 )
        {
          (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v13 + 56))(a1, "AC", 0);
          return 1;
        }
LABEL_48:
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v13 + 24))(a1, a2, 0);
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v13 + 56))(a1, "CY", 0);
      return 1;
    default:
      sub_57D0((__int64)"out: %a: bad optype %d", a3, a1[29]);
      return 1;
  }
}

