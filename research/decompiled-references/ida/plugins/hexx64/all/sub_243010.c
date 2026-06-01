__int64 __fastcall sub_243010(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int8 v7; // r15
  unsigned __int8 v8; // r14
  int v10; // eax
  bool v11; // r15
  int v12; // eax
  __int64 v13; // rdi
  int v14; // r12d
  char v15; // bp
  unsigned __int8 v16; // [rsp+18h] [rbp-B0h]
  unsigned int v17; // [rsp+18h] [rbp-B0h]
  char v18; // [rsp+20h] [rbp-A8h]
  unsigned __int8 v19; // [rsp+2Fh] [rbp-99h]
  __int64 tinfo_property; // [rsp+48h] [rbp-80h] BYREF
  __int64 v21; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h]
  __int128 v23; // [rsp+60h] [rbp-68h] BYREF
  __int64 v24; // [rsp+70h] [rbp-58h]
  int v25; // [rsp+78h] [rbp-50h]
  __int16 v26; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v7 = (get_tinfo_property() & 0xF) - 10;
  v8 = (get_tinfo_property() & 0xF) - 10;
  if ( v8 <= 2u == v7 <= 2u )
  {
    if ( v7 > 2u )
      goto LABEL_20;
    copy_tinfo_t();
    copy_tinfo_t();
    v21 = 0;
    v22 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      tinfo_property = 0;
      v23 = 0;
      copy_tinfo_t();
      v24 = 0;
      copy_tinfo_t();
      v25 = 0;
      v26 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v23 = v21;
      v21 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v21 = 0;
    v22 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      tinfo_property = 0;
      v23 = 0;
      copy_tinfo_t();
      v24 = 0;
      copy_tinfo_t();
      v25 = 0;
      v26 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v23 = v21;
      v21 = 0;
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    tinfo_property = get_tinfo_property();
    v21 = get_tinfo_property();
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
          v10 = 0;
          goto LABEL_13;
        }
      }
    }
    v16 = sub_32A510(a1);
    v19 = sub_32A510(a1);
    v10 = 1;
    v18 = v19 & v16;
    if ( (v19 & v16) != 0 )
    {
LABEL_13:
      v17 = v10;
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      return v17;
    }
    set_tinfo_property();
    set_tinfo_property();
    sub_32C540(&v23, *(_QWORD *)(a1 + 112), &tinfo_property);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32C540(&v23, *(_QWORD *)(a1 + 112), &v21);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v16 )
    {
      v11 = a4 == 36;
    }
    else
    {
      v11 = a4 == 36;
      v18 = sub_32A510(a1) ^ 1;
      if ( v18 && a4 == 36 )
        goto LABEL_28;
      if ( v19 )
      {
LABEL_19:
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_20:
        v12 = sub_255000(a4);
        v13 = *a2;
        v14 = v12;
        if ( v12 && ((v13 & 0xE) != 0 || (v13 & 0x30) == 0) && ((*a3 & 0xE) != 0 || (*a3 & 0x30) == 0) )
        {
          sub_242920((__int64 *)&v23, a1, (__int64)a2, (__int64)a3, 0);
          if ( v14 != (unsigned int)get_tinfo_property() )
          {
            clear_tinfo_t();
            return 0;
          }
          clear_tinfo_t();
        }
        v15 = get_tinfo_property();
        return ((get_tinfo_property() & 0xF) == 9) == ((v15 & 0xF) == 9);
      }
    }
    if ( (unsigned __int8)sub_32A510(a1) || !v11 && !v18 )
      goto LABEL_19;
LABEL_28:
    v10 = 0;
    goto LABEL_13;
  }
  if ( a4 - 22 <= 1 || (unsigned int)sub_255000(a4) == 2 )
    return (unsigned int)(v8 < 3u) - 2;
  else
    return 0;
}

