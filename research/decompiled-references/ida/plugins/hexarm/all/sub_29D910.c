__int64 *__fastcall sub_29D910(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rdi
  char tinfo_property; // r14
  char v9; // al
  __int64 v10; // rdi
  char v11; // r15
  __int64 v12; // rdi
  char v13; // r15
  char v15; // r15
  char v16; // r15
  char v17; // r14
  char v18; // [rsp+Dh] [rbp-5Bh]
  bool v19; // [rsp+Fh] [rbp-59h]
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo() )
    goto LABEL_14;
  if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
  {
    v7 = *a3;
    if ( (unsigned __int8)*a3 && ((v7 & 0xE) != 0 || (v7 & 0x30) == 0) )
    {
      v21[0] = get_tinfo_property();
      tinfo_property = get_tinfo_property();
      clear_tinfo_t();
      if ( (tinfo_property & 0x3F) != 0x30 || (v9 = *a4) == 0 )
      {
LABEL_7:
        v10 = *a3;
        if ( (unsigned __int8)*a3 && ((v10 & 0xE) != 0 || (v10 & 0x30) == 0) )
        {
          v21[0] = get_tinfo_property();
          v11 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v11 != 48 )
          {
            v12 = *a4;
            if ( !(unsigned __int8)*a4 || (v12 & 0xE) == 0 && (v12 & 0x30) != 0 )
              goto LABEL_14;
            v21[0] = get_tinfo_property();
            v13 = get_tinfo_property();
            clear_tinfo_t();
            if ( (v13 & 0x3F) == 0x30 )
              goto LABEL_14;
          }
        }
LABEL_29:
        sub_242CE0(a1, a2, (__int64)a3, (__int64)a4, 0);
        return a1;
      }
    }
    else
    {
      v9 = *a4;
      if ( !v9 )
        goto LABEL_29;
    }
    if ( (v9 & 0xE) != 0 || (v9 & 0x30) == 0 )
    {
      v21[0] = get_tinfo_property();
      v17 = get_tinfo_property();
      clear_tinfo_t();
      if ( (v17 & 0x3F) != 0x30 )
        goto LABEL_28;
    }
    goto LABEL_7;
  }
  v21[0] = get_tinfo_property();
  v15 = get_tinfo_property() & 0x3F;
  clear_tinfo_t();
  if ( v15 == 1 || !(unsigned __int8)sub_29D670(a2, 0, 0) )
  {
    v21[0] = get_tinfo_property();
    v16 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v16 & 0x3F) == 1 || !(unsigned __int8)sub_29D670(a2, 0, 0) )
    {
      v20 = 0;
      copy_tinfo_t();
      sub_299830(v21, &v20);
      v19 = (get_tinfo_property() & 0xF) == 12;
      clear_tinfo_t();
      clear_tinfo_t();
      v20 = 0;
      copy_tinfo_t();
      sub_299830(v21, &v20);
      v18 = get_tinfo_property() & 0xF;
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v18 == 12 || !v19 )
      {
        *a1 = 0;
        goto LABEL_15;
      }
    }
LABEL_28:
    *a1 = 0;
    copy_tinfo_t();
    return a1;
  }
LABEL_14:
  *a1 = 0;
LABEL_15:
  copy_tinfo_t();
  return a1;
}

