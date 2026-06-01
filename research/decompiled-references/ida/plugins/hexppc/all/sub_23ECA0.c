__int64 *__fastcall sub_23ECA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rsi
  char tinfo_property; // r12
  char v7; // bp
  char v8; // al
  char v9; // r15
  char v10; // cl
  char v11; // r8
  char v12; // r12
  char v13; // al
  int v14; // eax
  char v15; // r8
  __int64 v16; // rax
  char v18; // al
  char v19; // cl
  char v20; // al
  int v21; // [rsp+0h] [rbp-C8h]
  int tinfo_size; // [rsp+8h] [rbp-C0h]
  int v24; // [rsp+18h] [rbp-B0h]
  char v26; // [rsp+26h] [rbp-A2h]
  char v27; // [rsp+27h] [rbp-A1h]
  unsigned int v28; // [rsp+2Ch] [rbp-9Ch]
  __int64 v29; // [rsp+30h] [rbp-98h] BYREF
  __int64 v30; // [rsp+38h] [rbp-90h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h]
  __int64 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+70h] [rbp-58h]
  int v37; // [rsp+78h] [rbp-50h]
  __int16 v38; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v29 = 0;
  copy_tinfo_t();
  v30 = 0;
  copy_tinfo_t();
  v33 = 0;
  v34 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v32 = 0;
    v31 = 0;
    v35 = 0;
    copy_tinfo_t();
    v36 = 0;
    copy_tinfo_t();
    v37 = 0;
    v38 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v35 = v33;
    v33 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  v5 = 11;
  v33 = 0;
  v34 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v32 = 0;
    v31 = 0;
    v35 = 0;
    copy_tinfo_t();
    v36 = 0;
    copy_tinfo_t();
    v37 = 0;
    v38 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    v5 = 10;
    *(_QWORD *)&v35 = v33;
    v33 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_23AC00(&v29, v5) )
    goto LABEL_36;
  if ( !(unsigned __int8)sub_23AC00(&v30, v5) )
    goto LABEL_36;
  tinfo_property = get_tinfo_property();
  v7 = tinfo_property;
  v8 = get_tinfo_property();
  v9 = v8;
  v10 = tinfo_property & 0x3F;
  if ( (tinfo_property & 0x3F) == 0x29 )
    goto LABEL_36;
  v11 = v8 & 0x3F;
  if ( (v8 & 0x3F) == 0x29 )
    goto LABEL_36;
  if ( v10 == 25 )
    goto LABEL_36;
  if ( v11 == 25 )
    goto LABEL_36;
  if ( v10 == 9 )
    goto LABEL_36;
  if ( v11 == 9 )
    goto LABEL_36;
  if ( v10 == 38 )
    goto LABEL_36;
  if ( v11 == 38 )
    goto LABEL_36;
  v12 = tinfo_property & 0x2F;
  if ( v12 == 6 )
    goto LABEL_36;
  v13 = v8 & 0x2F;
  if ( v13 == 6 )
    goto LABEL_36;
  v21 = *(unsigned __int8 *)(a2 + 130);
  if ( (unsigned int)v21 <= 7 && (v10 == 37 || v11 == 37 || v12 == 5 || v13 == 5) )
    goto LABEL_36;
  v27 = v10;
  v26 = v11;
  tinfo_size = get_tinfo_size();
  v14 = get_tinfo_size();
  v15 = v26;
  v28 = v14;
  v24 = v14;
  if ( v27 == 13 )
  {
    sub_328100(&v35, *(_QWORD *)(a2 + 112), (unsigned int)tinfo_size, 0);
    copy_tinfo_t();
    clear_tinfo_t();
    v20 = get_tinfo_property();
    v15 = v26;
    v7 = v20;
  }
  if ( v15 == 13 )
  {
    sub_328100(&v35, *(_QWORD *)(a2 + 112), v28, 0);
    copy_tinfo_t();
    clear_tinfo_t();
    v9 = get_tinfo_property();
  }
  if ( tinfo_size > 7 || v24 > 7 )
  {
    if ( tinfo_size <= v24 && tinfo_size >= v24 )
      get_tinfo_property();
    goto LABEL_36;
  }
  if ( v21 <= 7 )
  {
    if ( (v7 & 0x3F) == 0x24 || (v9 & 0x3F) == 0x24 )
      goto LABEL_36;
    if ( !a5 )
    {
      if ( tinfo_size < v21 && v24 < v21 )
        goto LABEL_30;
      sub_23EBE0((__int64)&v29, v7);
      sub_23EBE0((__int64)&v30, v9);
      if ( tinfo_size > v24 || tinfo_size < v24 )
        goto LABEL_36;
      v7 = get_tinfo_property();
      v9 = get_tinfo_property();
    }
LABEL_45:
    v18 = v7 & 0x3F;
    v19 = v9 & 0x3F;
    if ( (v7 & 0x2F) != 4 )
    {
      if ( (v9 & 0x2F) != 4 )
      {
        if ( v18 != 39
          && (unsigned __int8)((v7 & 0xF) - 10) > 2u
          && v19 != 39
          && (unsigned __int8)((v9 & 0xF) - 10) > 2u )
        {
          *a1 = 7;
          goto LABEL_37;
        }
        goto LABEL_36;
      }
      goto LABEL_48;
    }
    if ( v19 == 39 )
      goto LABEL_50;
    if ( (v9 & 0x2F) == 4 )
    {
LABEL_48:
      if ( v18 != 39 )
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
    v16 = 39;
  else
    v16 = 7;
  *a1 = v16;
LABEL_37:
  clear_tinfo_t();
  clear_tinfo_t();
  return a1;
}

