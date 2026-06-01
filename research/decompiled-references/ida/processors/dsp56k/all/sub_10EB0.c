__int64 __fastcall sub_10EB0(_QWORD *a1, __int64 a2, double a3)
{
  bool v3; // zf
  _QWORD *v4; // r12
  char v5; // al
  __int64 v6; // r13
  __int64 v8; // rax
  _QWORD v9[135]; // [rsp+0h] [rbp-438h] BYREF

  v3 = *(_BYTE *)(a2 + 1) == 5;
  v4 = (_QWORD *)a1[77];
  v9[129] = __readfsqword(0x28u);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
    v5 = *(_BYTE *)(a2 + 33);
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 33);
    if ( (v5 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "x", 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      v5 = *(_BYTE *)(a2 + 33);
    }
    if ( (v5 & 0x20) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "y", 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      v5 = *(_BYTE *)(a2 + 33);
    }
    if ( (v5 & 0x40) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "p", 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      v5 = *(_BYTE *)(a2 + 33);
    }
    if ( v5 < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "l", 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      v5 = *(_BYTE *)(a2 + 33);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 60);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 60);
    v5 = *(_BYTE *)(a2 + 33);
  }
  if ( (v5 & 2) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 60);
    v5 = *(_BYTE *)(a2 + 33);
  }
  if ( (v5 & 4) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 62);
    v5 = *(_BYTE *)(a2 + 33);
  }
  if ( (v5 & 8) != 0 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
  switch ( *(_BYTE *)(a2 + 1) )
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
    case 7:
      v6 = sub_10430(v4, a1 + 28, a2);
      if ( (*(_BYTE *)(a2 + 33) & 0x90) != 0 && (v8 = sub_12E90(a1[77])) != 0 && *(_QWORD *)(v8 + 16) > 1u )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(v8 + 8), 34);
        if ( sub_12E90(v4) && (get_flags_ex() & 0xC000) != 0x4000 )
          set_name();
      }
      else if ( a1[30] + *((unsigned __int16 *)a1 + 125) == v6 )
      {
        sub_10CB0((__int64)a1, (__int64)&word_16E0E, *(_QWORD *)(a1[79] + 184LL));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 120LL))(
                   a1,
                   a2,
                   v6,
                   *(_QWORD *)(a2 + 16)) )
      {
        sub_10E20(a1, *(_QWORD *)(a2 + 16));
      }
      return 1;
    case 3:
    case 4:
      sub_10C00();
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, v9);
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 8:
      qstrncpy();
      if ( *(_BYTE *)(a2 + 34) == 1 )
        sub_10CB0((__int64)a1, (__int64)&dword_16E1C, v9);
      else
        sub_10CB0((__int64)a1, (__int64)byte_16E25, v9);
      return 1;
    case 9:
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (*((_DWORD *)a1 + 63) & 1u) + 48);
      return 1;
    default:
      sub_10400((__int64)(a1 + 28), a3);
      return 1;
  }
}

