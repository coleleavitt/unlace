__int64 __fastcall sub_7ED0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rdi
  _BYTE *v14; // r12
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64 *, __int64, __int64); // rax
  char v17[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v6 = *(unsigned __int8 *)(a2 + 1);
  v18 = __readfsqword(0x28u);
  switch ( (char)v6 )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 12:
    case 13:
      if ( *(_BYTE *)(a2 + 32) == 15 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 42);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
        LOBYTE(v6) = *(_BYTE *)(a2 + 1);
      }
      v8 = sub_6E00(a1[77], (__int64)(a1 + 28), *(_QWORD *)(a2 + 16), (_BYTE)v6 == 2);
      if ( v8 == -1 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 192);
      else
        sub_7C30(a1, v8, a2, 1, *(_BYTE *)(a2 + 32) != 15);
      if ( *(_BYTE *)(a2 + 32) == 15 )
LABEL_7:
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      return 1;
    case 4:
      switch ( *(_BYTE *)(a2 + 32) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          qsnprintf();
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v17, 33);
          return 1;
        case 0xC:
        case 0xD:
          qsnprintf();
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v17, 33);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 164);
          goto LABEL_7;
        case 0xE:
          qsnprintf();
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v17, 33);
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 164);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 37);
          return 1;
        default:
          sub_4E00(
            (__int64)"interr: out: o_displ",
            a2,
            *(unsigned __int16 *)(a2 + 6),
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            a5,
            a6,
            v17[0]);
      }
    case 5:
      v13 = a1[77];
      if ( (*(_BYTE *)(v13 + 232) & 1) != 0 && *(_BYTE *)(a2 + 34) )
      {
        v14 = (_BYTE *)sub_9C30(v13, *(_QWORD *)(a2 + 8));
        if ( !*(_BYTE *)(a2 + 33) )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
        v15 = *a1;
        if ( v14 && *v14 )
        {
          (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(v15 + 56))(a1, v14, 34);
          return 1;
        }
      }
      else
      {
        if ( !*(_BYTE *)(a2 + 33) )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
        v15 = *a1;
      }
      v16 = *(void (__fastcall **)(__int64 *, __int64, __int64))(v15 + 24);
      if ( *(_BYTE *)(a2 + 32) )
        v16(a1, a2, 12);
      else
        v16(a1, a2, 0);
      return 1;
    case 6:
    case 7:
      v9 = sub_6DA0((__int64)(a1 + 28), *(_QWORD *)(a2 + 16), (_BYTE)v6 == 7);
      sub_7C30(a1, v9, a2, 0, 0);
      return 1;
    case 8:
      if ( !*(_BYTE *)(a2 + 33) )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
      qsnprintf();
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v17, 33);
      return 1;
    case 9:
      sub_7E80((__int64)a1, *(_BYTE *)(a2 + 8));
      return 1;
    case 10:
      v11 = *(_QWORD *)(a2 + 8);
      v12 = "gt";
      if ( v11 != 2 )
      {
        if ( v11 > 2 )
        {
          v12 = "neq";
          if ( v11 != 3 )
          {
            sub_6CD0((__int64)"interr: out 2-bit condition", "neq");
            v12 = &byte_C417;
          }
        }
        else
        {
          v12 = "eq";
          if ( v11 )
            v12 = "lt";
        }
      }
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, v12, 33);
      return 1;
    case 11:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 192);
      return 1;
    default:
      sub_4E00((__int64)"interr: out", a2, v6, a4, a5, a6, v17[0]);
  }
}

