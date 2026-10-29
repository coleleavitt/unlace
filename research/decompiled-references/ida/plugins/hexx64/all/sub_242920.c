__int64 *__fastcall sub_242920(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char tinfo_property; // r12
  char v6; // bp
  char v7; // al
  char v8; // r15
  char v9; // cl
  char v10; // r8
  char v11; // r12
  char v12; // al
  unsigned int v13; // eax
  char v14; // r8
  __int64 v15; // rax
  char v17; // al
  char v18; // cl
  char v19; // al
  int v20; // [rsp+0h] [rbp-C8h]
  signed int tinfo_size; // [rsp+8h] [rbp-C0h]
  int v22; // [rsp+18h] [rbp-B0h]
  char v24; // [rsp+26h] [rbp-A2h]
  char v25; // [rsp+27h] [rbp-A1h]
  unsigned int v26; // [rsp+2Ch] [rbp-9Ch]
  __int64 v27; // [rsp+30h] [rbp-98h] BYREF
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  __int128 v33; // [rsp+60h] [rbp-68h] BYREF
  __int64 v34; // [rsp+70h] [rbp-58h]
  int v35; // [rsp+78h] [rbp-50h]
  __int16 v36; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v27 = 0;
  copy_tinfo_t();
  v28 = 0;
  copy_tinfo_t();
  v31 = 0;
  v32 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v30 = 0;
    v29 = 0;
    v33 = 0;
    copy_tinfo_t();
    v34 = 0;
    copy_tinfo_t();
    v35 = 0;
    v36 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v33 = v31;
    v31 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  v31 = 0;
  v32 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v30 = 0;
    v29 = 0;
    v33 = 0;
    copy_tinfo_t();
    v34 = 0;
    copy_tinfo_t();
    v35 = 0;
    v36 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v33 = v31;
    v31 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_23E880() )
    goto LABEL_36;
  if ( !(unsigned __int8)sub_23E880() )
    goto LABEL_36;
  tinfo_property = get_tinfo_property();
  v6 = tinfo_property;
  v7 = get_tinfo_property();
  v8 = v7;
  v9 = tinfo_property & 0x3F;
  if ( (tinfo_property & 0x3F) == 0x29 )
    goto LABEL_36;
  v10 = v7 & 0x3F;
  if ( (v7 & 0x3F) == 0x29 )
    goto LABEL_36;
  if ( v9 == 25 )
    goto LABEL_36;
  if ( v10 == 25 )
    goto LABEL_36;
  if ( v9 == 9 )
    goto LABEL_36;
  if ( v10 == 9 )
    goto LABEL_36;
  if ( v9 == 38 )
    goto LABEL_36;
  if ( v10 == 38 )
    goto LABEL_36;
  v11 = tinfo_property & 0x2F;
  if ( v11 == 6 )
    goto LABEL_36;
  v12 = v7 & 0x2F;
  if ( v12 == 6 )
    goto LABEL_36;
  v20 = *(unsigned __int8 *)(a2 + 130);
  if ( (unsigned int)v20 <= 7 && (v9 == 37 || v10 == 37 || v11 == 5 || v12 == 5) )
    goto LABEL_36;
  v25 = v9;
  v24 = v10;
  tinfo_size = get_tinfo_size();
  v13 = get_tinfo_size();
  v14 = v24;
  v26 = v13;
  v22 = v13;
  if ( v25 == 13 )
  {
    sub_32C430((__int64 *)&v33, *(_QWORD *)(a2 + 112), tinfo_size, 0);
    copy_tinfo_t();
    clear_tinfo_t();
    v19 = get_tinfo_property();
    v14 = v24;
    v6 = v19;
  }
  if ( v14 == 13 )
  {
    sub_32C430((__int64 *)&v33, *(_QWORD *)(a2 + 112), v26, 0);
    copy_tinfo_t();
    clear_tinfo_t();
    v8 = get_tinfo_property();
  }
  if ( tinfo_size > 7 || v22 > 7 )
  {
    if ( tinfo_size <= v22 && tinfo_size >= v22 )
      get_tinfo_property();
    goto LABEL_36;
  }
  if ( v20 <= 7 )
  {
    if ( (v6 & 0x3F) == 0x24 || (v8 & 0x3F) == 0x24 )
      goto LABEL_36;
    if ( !a5 )
    {
      if ( tinfo_size < v20 && v22 < v20 )
        goto LABEL_30;
      sub_242860((__int64)&v27, v6);
      sub_242860((__int64)&v28, v8);
      if ( tinfo_size > v22 || tinfo_size < v22 )
        goto LABEL_36;
      v6 = get_tinfo_property();
      v8 = get_tinfo_property();
    }
LABEL_45:
    v17 = v6 & 0x3F;
    v18 = v8 & 0x3F;
    if ( (v6 & 0x2F) != 4 )
    {
      if ( (v8 & 0x2F) != 4 )
      {
        if ( v17 != 39
          && (unsigned __int8)((v6 & 0xF) - 10) > 2u
          && v18 != 39
          && (unsigned __int8)((v8 & 0xF) - 10) > 2u )
        {
          *a1 = 7;
          goto LABEL_37;
        }
        goto LABEL_36;
      }
      goto LABEL_48;
    }
    if ( v18 == 39 )
      goto LABEL_50;
    if ( (v8 & 0x2F) == 4 )
    {
LABEL_48:
      if ( v17 != 39 )
        goto LABEL_36;
LABEL_50:
      *a1 = 36;
      goto LABEL_37;
    }
LABEL_36:
    set_tinfo_property();
    *a1 = 0;
    copy_tinfo_t();
    goto LABEL_37;
  }
  if ( a5 )
    goto LABEL_45;
LABEL_30:
  if ( (unsigned int)get_tinfo_property() == 2 && (unsigned int)get_tinfo_property() == 2 )
    v15 = 39;
  else
    v15 = 7;
  *a1 = v15;
LABEL_37:
  clear_tinfo_t();
  clear_tinfo_t();
  return a1;
}

