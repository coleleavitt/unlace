__int64 __fastcall sub_265350(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r12d
  __int64 tinfo_property; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v13 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = get_tinfo_property();
    v10 = tinfo_property;
    if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
    {
      v6 = 0;
    }
    else
    {
      v12 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (get_tinfo_property() & 0xF) != 0xC )
        goto LABEL_6;
      v12 = get_tinfo_property();
      v11 = get_tinfo_property();
      clear_tinfo_t();
      if ( (unsigned int)verify_tinfo() || (v6 = sub_265220(a1)) == 0 )
      {
        clear_tinfo_t();
        goto LABEL_6;
      }
      clear_tinfo_t();
    }
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v12 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v8 = *(_DWORD *)(v7 + 8);
      if ( v8 == 51 )
      {
        if ( !sub_265190((__int64)&v10, v7) )
          goto LABEL_6;
      }
      else if ( v8 == 36 && (get_tinfo_property() & 0x3F) == 1 )
      {
        goto LABEL_6;
      }
      v9 = *a2;
      sub_24E4D0(a2, a2[3]);
      if ( *a2 == -1 )
        *a2 = v9;
      if ( v6 )
      {
        v11 = 0;
        v11 = get_tinfo_property();
        v12 = 0;
        v12 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v2 = 1;
      goto LABEL_7;
    }
LABEL_6:
    v2 = 0;
LABEL_7:
    clear_tinfo_t();
  }
  return v2;
}

