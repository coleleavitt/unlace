__int64 __fastcall sub_23E790(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  __int64 *v8; // rsi
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // r14
  int v12; // eax
  bool v13; // r15
  int v14; // eax
  __int64 v15; // rdi
  int v16; // r12d
  char v17; // bp
  unsigned __int8 v18; // [rsp+18h] [rbp-B0h]
  unsigned int v19; // [rsp+18h] [rbp-B0h]
  char v20; // [rsp+20h] [rbp-A8h]
  unsigned __int8 v21; // [rsp+2Fh] [rbp-99h]
  __int64 v22; // [rsp+30h] [rbp-98h] BYREF
  __int64 v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  __int64 tinfo_property; // [rsp+48h] [rbp-80h] BYREF
  __int64 v26; // [rsp+50h] [rbp-78h] BYREF
  __int64 v27; // [rsp+58h] [rbp-70h]
  __int128 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+70h] [rbp-58h]
  int v30; // [rsp+78h] [rbp-50h]
  __int16 v31; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v8 = (_QWORD *)&word_2;
  v9 = (get_tinfo_property() & 0xF) - 10;
  v10 = (get_tinfo_property() & 0xF) - 10;
  if ( v10 <= 2u == v9 <= 2u )
  {
    if ( v9 > 2u )
      goto LABEL_20;
    v22 = 0;
    copy_tinfo_t();
    v23 = 0;
    copy_tinfo_t();
    v26 = 0;
    v27 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      tinfo_property = 0;
      v24 = 0;
      v28 = 0;
      copy_tinfo_t();
      v29 = 0;
      copy_tinfo_t();
      v30 = 0;
      v31 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v28 = v26;
      v26 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v26 = 0;
    v27 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      tinfo_property = 0;
      v24 = 0;
      v28 = 0;
      copy_tinfo_t();
      v29 = 0;
      copy_tinfo_t();
      v30 = 0;
      v31 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v28 = v26;
      v26 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    tinfo_property = get_tinfo_property();
    v26 = get_tinfo_property();
    if ( a4 - 22 > 1 )
    {
      if ( (get_tinfo_property() & 0xF) == 0xC || (get_tinfo_property() & 0xF) == 0xC )
        goto LABEL_28;
      if ( a4 == 36 )
      {
        if ( (get_tinfo_property() & 0x3F) == 1 )
          goto LABEL_28;
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v12 = 0;
          goto LABEL_13;
        }
      }
    }
    v18 = sub_325700(a1, &v22, &v23);
    v21 = sub_325700(a1, &v23, &v22);
    v12 = 1;
    v20 = v21 & v18;
    if ( (v21 & v18) != 0 )
    {
LABEL_13:
      v19 = v12;
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      return v19;
    }
    set_tinfo_property();
    set_tinfo_property();
    sub_327610(&v28, *(_QWORD *)(a1 + 112), &tinfo_property);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_327610(&v28, *(_QWORD *)(a1 + 112), &v26);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v18 )
    {
      v13 = a4 == 36;
    }
    else
    {
      v8 = &v22;
      v13 = a4 == 36;
      v20 = sub_325700(a1, &v22, &v23) ^ 1;
      if ( v20 && a4 == 36 )
        goto LABEL_28;
      if ( v21 )
      {
LABEL_19:
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_20:
        v14 = sub_250780(a4, v8);
        v15 = *a2;
        v16 = v14;
        if ( v14 && ((v15 & 0xE) != 0 || (v15 & 0x30) == 0) && ((*a3 & 0xE) != 0 || (*a3 & 0x30) == 0) )
        {
          sub_23E0A0((__int64 *)&v28, a1, (__int64)a2, (__int64)a3, 0);
          if ( v16 != (unsigned int)get_tinfo_property() )
          {
            clear_tinfo_t();
            return 0;
          }
          clear_tinfo_t();
        }
        v17 = get_tinfo_property();
        return ((get_tinfo_property() & 0xF) == 9) == ((v17 & 0xF) == 9);
      }
    }
    v8 = &v23;
    if ( (unsigned __int8)sub_325700(a1, &v23, &v22) || !v13 && !v20 )
      goto LABEL_19;
LABEL_28:
    v12 = 0;
    goto LABEL_13;
  }
  if ( a4 - 22 <= 1 || (unsigned int)sub_250780(a4, 2) == 2 )
    return (unsigned int)(v10 < 3u) - 2;
  else
    return 0;
}

