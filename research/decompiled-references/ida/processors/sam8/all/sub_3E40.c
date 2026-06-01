__int64 __fastcall sub_3E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int16 v7; // ax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char v10; // r8

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
    case 6:
    case 8:
      return 1;
    case 1:
      v3 = *(unsigned __int16 *)(a2 + 6);
      goto LABEL_6;
    case 2:
    case 7:
      goto LABEL_3;
    case 3:
      v4 = *(_WORD *)(a2 + 6);
      if ( !v4 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 64);
        v3 = *(unsigned __int16 *)(a2 + 24);
LABEL_6:
        sub_3C90(a1, *(_BYTE *)(a2 + 32) != 0, *(_BYTE *)(a2 + 33) != 0, v3, -1);
        return 1;
      }
      if ( v4 != 1 )
        return 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      sub_3C90(a1, 0, 0, *(unsigned __int16 *)(a2 + 24), -1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      v5 = *(unsigned __int16 *)(a2 + 26);
      v6 = 0;
      goto LABEL_14;
    case 4:
      v7 = *(_WORD *)(a2 + 6);
      if ( v7 == 2 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        v9 = *(_QWORD *)(a2 + 16);
        v8 = v9 + 0x800000;
        v10 = v9 > 0xFFFF;
      }
      else
      {
        if ( v7 != 3 )
          return 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        v8 = *(_QWORD *)(a2 + 16);
        v9 = v8;
        v10 = v8 > 0xFFFF;
      }
      sub_3DE0(a1, a2, v8, v9, v10);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      v5 = *(unsigned __int16 *)(a2 + 26);
      v6 = 1;
LABEL_14:
      sub_3C90(a1, 1, v6, v5, -1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      return 1;
    case 5:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
      return 1;
    case 9:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
LABEL_3:
      sub_3DE0(a1, a2, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16), 0);
      return 1;
    case 0xA:
      sub_3DE0(a1, a2, *(_QWORD *)(a2 + 16) + 0x800000LL, *(_QWORD *)(a2 + 16), 0);
      return 1;
    case 0xB:
      sub_3C90(
        a1,
        *(_BYTE *)(a2 + 32) != 0,
        *(_BYTE *)(a2 + 33) != 0,
        *(unsigned __int16 *)(a2 + 6),
        *(_DWORD *)(a2 + 24));
      return 1;
    default:
      return 1;
  }
}

