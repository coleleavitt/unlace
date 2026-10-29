__int64 __fastcall sub_6E40(_QWORD *a1, __int64 a2)
{
  char v3; // al
  _QWORD *v4; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 1;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 7:
      sub_6680(a1, a2, 1);
      return 1;
    case 4:
      sub_67B0(a1, a2);
      return 1;
    case 5:
      if ( (*(_BYTE *)(a1[79] + 4LL) & 0x10) != 0 && (unsigned __int8)sub_6C60(a1, a2) )
        return 1;
      if ( (*(_BYTE *)(a2 + 32) & 1) == 0 )
LABEL_4:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      break;
    case 8:
      if ( *(_BYTE *)a2 )
        goto LABEL_4;
      v3 = *((_BYTE *)a1 + 305);
      if ( v3 != 7 && v3 != 2 )
        goto LABEL_4;
      v4 = (_QWORD *)sub_9480(a1[77], a1[40], *(_QWORD *)(a2 + 8));
      if ( !v4 || v4[1] <= 1u )
        goto LABEL_4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *v4, 34);
      break;
    default:
      if ( under_debugger )
        BUG();
      interr();
      return sub_6FA0(10030);
  }
  return 1;
}

