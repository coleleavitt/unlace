__int64 __fastcall sub_26C6D0(__int64 a1, __int64 *a2, double a3)
{
  unsigned int v3; // r12d
  __int64 tinfo_property; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v3 = 0;
  v14 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = get_tinfo_property();
    v11 = tinfo_property;
    if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v13 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xC )
        goto LABEL_6;
      v13 = get_tinfo_property();
      v12 = get_tinfo_property();
      clear_tinfo_t();
      if ( (unsigned int)verify_tinfo() || (v7 = sub_26C5A0(a1)) == 0 )
      {
        clear_tinfo_t();
        goto LABEL_6;
      }
      clear_tinfo_t();
    }
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v13 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v9 = *(_DWORD *)(v8 + 8);
      if ( v9 == 51 )
      {
        if ( !sub_26C510((__int64)&v11, v8) )
          goto LABEL_6;
      }
      else if ( v9 == 36 && (get_tinfo_property() & 0x3F) == 1 )
      {
        goto LABEL_6;
      }
      v10 = *a2;
      sub_255850(a2, a2[3], a3);
      if ( *a2 == -1 )
        *a2 = v10;
      if ( v7 )
      {
        v12 = 0;
        v12 = get_tinfo_property();
        v13 = 0;
        v13 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v3 = 1;
      goto LABEL_7;
    }
LABEL_6:
    v3 = 0;
LABEL_7:
    clear_tinfo_t();
  }
  return v3;
}

