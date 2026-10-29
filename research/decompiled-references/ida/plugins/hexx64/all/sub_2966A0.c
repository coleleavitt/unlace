__int64 __fastcall sub_2966A0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  int v5; // r12d
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v6[1] = __readfsqword(0x28u);
  switch ( v3 )
  {
    case '#':
    case '$':
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
        v5 = *(_DWORD *)(a2 + 8);
        if ( v5 == ((unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u) + 35 )
          sub_246B40(*(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 64), (_QWORD *)(*(_QWORD *)(a1 + 64) + 288LL), a3);
      }
      goto LABEL_3;
    case '3':
      sub_32C540(v6, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL), (_QWORD *)(a2 + 48));
      if ( !(unsigned __int8)compare_tinfo() )
        sub_246B40(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 64), v6, a3);
      clear_tinfo_t();
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_7;
      goto LABEL_3;
    case ':':
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
        goto LABEL_3;
      return 0xFFFFFFFFLL;
    case ';':
LABEL_7:
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        return 0xFFFFFFFFLL;
      goto LABEL_3;
    case '<':
      v6[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        clear_tinfo_t();
LABEL_3:
        sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL), 0, a3);
        return 0;
      }
      else
      {
        clear_tinfo_t();
        return 0xFFFFFFFFLL;
      }
    default:
      goto LABEL_3;
  }
}

