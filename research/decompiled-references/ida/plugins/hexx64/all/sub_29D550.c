__int64 *__fastcall sub_29D550(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4, double a5)
{
  __int64 v8; // rdi
  char tinfo_property; // r14
  char v10; // al
  __int64 v11; // rdi
  char v12; // r15
  __int64 v13; // rdi
  char v14; // r15
  char v16; // r15
  char v17; // r15
  char v18; // r14
  char v19; // [rsp+Dh] [rbp-5Bh]
  bool v20; // [rsp+Fh] [rbp-59h]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  if ( !(unsigned int)lexcompare_tinfo() )
    goto LABEL_14;
  if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
  {
    v8 = *a3;
    if ( (unsigned __int8)*a3 && ((v8 & 0xE) != 0 || (v8 & 0x30) == 0) )
    {
      v22[0] = get_tinfo_property();
      tinfo_property = get_tinfo_property();
      clear_tinfo_t();
      if ( (tinfo_property & 0x3F) != 0x30 || (v10 = *a4) == 0 )
      {
LABEL_7:
        v11 = *a3;
        if ( (unsigned __int8)*a3 && ((v11 & 0xE) != 0 || (v11 & 0x30) == 0) )
        {
          v22[0] = get_tinfo_property();
          v12 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v12 != 48 )
          {
            v13 = *a4;
            if ( !(unsigned __int8)*a4 || (v13 & 0xE) == 0 && (v13 & 0x30) != 0 )
              goto LABEL_14;
            v22[0] = get_tinfo_property();
            v14 = get_tinfo_property();
            clear_tinfo_t();
            if ( (v14 & 0x3F) == 0x30 )
              goto LABEL_14;
          }
        }
LABEL_29:
        sub_242920(a1, a2, (__int64)a3, (__int64)a4, 0);
        return a1;
      }
    }
    else
    {
      v10 = *a4;
      if ( !v10 )
        goto LABEL_29;
    }
    if ( (v10 & 0xE) != 0 || (v10 & 0x30) == 0 )
    {
      v22[0] = get_tinfo_property();
      v18 = get_tinfo_property();
      clear_tinfo_t();
      if ( (v18 & 0x3F) != 0x30 )
        goto LABEL_28;
    }
    goto LABEL_7;
  }
  v22[0] = get_tinfo_property();
  v16 = get_tinfo_property() & 0x3F;
  clear_tinfo_t();
  if ( v16 == 1 || !sub_29D2B0(a2, 0, 0, a5) )
  {
    v22[0] = get_tinfo_property();
    v17 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v17 & 0x3F) == 1 || !sub_29D2B0(a2, 0, 0, a5) )
    {
      v21 = 0;
      copy_tinfo_t();
      sub_299470(v22, &v21);
      v20 = (get_tinfo_property() & 0xF) == 12;
      clear_tinfo_t();
      clear_tinfo_t();
      v21 = 0;
      copy_tinfo_t();
      sub_299470(v22, &v21);
      v19 = get_tinfo_property() & 0xF;
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v19 == 12 || !v20 )
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

