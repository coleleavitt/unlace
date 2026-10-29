__int64 __fastcall sub_91B0(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax

  v4 = v2;
  v5 = v3;
  v6 = a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 7:
      v8 = *((_QWORD *)a1 + 77);
      v9 = sub_87F0(v8, (__int64)(a1 + 224), a2);
      v10 = sub_B850(*((_QWORD *)a1 + 77));
      if ( v10 && *(_QWORD *)(v10 + 16) > 1u )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, *(_QWORD *)(v10 + 8), 34);
        if ( sub_B850(v8) )
        {
          if ( (get_flags_ex() & 0xC000) != 0x4000 )
            set_name();
        }
      }
      else if ( *((_QWORD *)a1 + 30) + *((unsigned __int16 *)a1 + 125) == v9 )
      {
        sub_8EF0((__int64)a1, (__int64)byte_EFB3, *(_QWORD *)(*((_QWORD *)a1 + 79) + 184LL));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 120LL))(
                   a1,
                   a2,
                   v9,
                   *(_QWORD *)(a2 + 16)) )
      {
LABEL_16:
        sub_9120(v6, *(_QWORD *)(v7 + 16));
      }
      return 1;
    case 5:
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
      return 1;
    case 8:
      (*(void (__fastcall **)(_BYTE *, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, (&off_124C0)[a1[254] & 0x1F], 9);
      return 1;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_16;
  }
}

