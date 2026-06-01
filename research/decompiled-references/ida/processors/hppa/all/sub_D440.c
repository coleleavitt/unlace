__int64 __fastcall sub_D440(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdx

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      sub_D330((_QWORD *)a1, *(unsigned __int16 *)(a2 + 6));
      return 1;
    case 3:
      sub_D330((_QWORD *)a1, *(char *)(a2 + 33));
      goto LABEL_3;
    case 4:
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 196);
      goto LABEL_3;
    case 5:
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 4);
      return 1;
    case 7:
      v4 = sub_A060(*(_QWORD *)(a2 + 16));
      if ( *(_QWORD *)(a1 + 240) + 4LL == v4 )
      {
        sub_B8E0(a1, (__int64)byte_107C9, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 184LL), 4);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                   a1,
                   a2,
                   v4,
                   v4) )
      {
        sub_D2E0(a1, *(_QWORD *)(a2 + 16));
      }
      return 1;
    case 0xA:
LABEL_3:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
      if ( (*(_BYTE *)(a1 + 252) & 0x20) != 0 )
      {
        sub_D330((_QWORD *)a1, *(char *)(a2 + 32));
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      }
      sub_D330((_QWORD *)a1, *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
      break;
    default:
      sub_9040(a1 + 224, a3);
      break;
  }
  return 1;
}

