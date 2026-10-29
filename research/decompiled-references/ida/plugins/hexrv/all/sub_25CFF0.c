__int64 __fastcall sub_25CFF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v5; // r15
  char v9; // r14
  int str_type; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // r11d
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  __int64 item_end; // rax
  __int64 v18; // rsi
  __int128 v19; // kr00_16
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 max_strlit_length; // rax
  __int64 v26; // r10
  int v27; // ecx
  __int64 v28; // r13
  int flags; // eax
  __int64 v30; // r10
  int v31; // r11d
  __int64 v32; // rax
  __int64 strlit_contents; // rax
  __int64 v34; // [rsp+0h] [rbp-98h]
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+0h] [rbp-98h]
  int v37; // [rsp+0h] [rbp-98h]
  int v38; // [rsp+0h] [rbp-98h]
  unsigned __int64 v39; // [rsp+8h] [rbp-90h]
  int v40; // [rsp+8h] [rbp-90h]
  int v41; // [rsp+8h] [rbp-90h]
  int v42; // [rsp+8h] [rbp-90h]
  int v43; // [rsp+10h] [rbp-88h]
  int v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  unsigned int v46; // [rsp+18h] [rbp-80h]
  int v47; // [rsp+1Ch] [rbp-7Ch]
  __int64 v48; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-68h] BYREF
  __int64 v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h]
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v5 = a3;
  v53 = __readfsqword(0x28u);
  if ( a4 || (v9 = sub_25CC70(a1, a3, &v48, &v49)) == 0 )
  {
    v9 = 0;
  }
  else
  {
    ++v49;
    v5 = v48;
  }
  str_type = get_str_type();
  v11 = str_type;
  if ( str_type == -1 )
    return 0;
  v12 = str_type & 3;
  if ( v12 == 1 )
  {
    v23 = 1;
    v13 = 2;
  }
  else
  {
    v13 = 1;
    if ( v12 != 2 )
      goto LABEL_6;
    v23 = 3;
    v13 = 4;
  }
  if ( (v23 & a4) != 0 )
    return 0;
LABEL_6:
  v14 = v5 + a4;
  if ( v9 )
  {
    v15 = v49 * v13;
    v49 = v15;
    if ( !a5 || (v16 = *a5) == 0 )
    {
      v47 = v13;
      v39 = v15;
      v34 = v14;
      item_end = get_item_end();
      v13 = v47;
      v16 = v39;
      if ( v39 >= item_end - v34 )
        goto LABEL_10;
      return 0;
    }
LABEL_39:
    if ( v16 >= 0 )
    {
LABEL_35:
      v51 = 0;
      v52 = 0;
      goto LABEL_36;
    }
    return 0;
  }
  if ( a5 )
  {
    v16 = *a5;
    if ( *a5 )
      goto LABEL_39;
  }
  v43 = v13;
  v40 = v11;
  v35 = v14;
  v24 = get_item_end();
  v13 = v43;
  v16 = v24 - v35;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) )
  {
    max_strlit_length = get_max_strlit_length();
    v26 = v35;
    v27 = v40;
    v13 = v43;
    v28 = max_strlit_length;
    if ( v16 < max_strlit_length )
    {
      while ( 1 )
      {
        v44 = v13;
        v41 = v27;
        v36 = v26;
        flags = get_flags_ex();
        if ( (flags & 0xC000) == 0x4000 )
          return 0;
        v30 = v36;
        v31 = v44;
        if ( (flags & 0x600) != 0x400 )
          return 0;
        if ( (flags & 0xF0000000) != 0x50000000 )
          return 0;
        v37 = v41;
        v45 = v30;
        v42 = v31;
        if ( v37 != (unsigned int)get_str_type() )
          return 0;
        v32 = get_item_end();
        v26 = v45;
        v27 = v37;
        v13 = v42;
        v16 = v32 - v45;
        if ( v32 - v45 >= (unsigned __int64)v28 )
        {
          if ( v42 < (unsigned __int64)v16 )
            goto LABEL_39;
          LODWORD(v16) = v28;
          if ( v28 < 0 )
            return 0;
          goto LABEL_35;
        }
      }
    }
    if ( v43 < (unsigned __int64)v16 )
      goto LABEL_39;
    v16 = max_strlit_length;
  }
LABEL_10:
  if ( v16 < 0 )
    return 0;
  v51 = 0;
  v52 = 0;
  if ( !v16 )
  {
    v18 = 0;
    v19 = 0u;
LABEL_13:
    if ( a5 )
      *a5 = v16;
    v20 = a2[2];
    v21 = *a2;
    *a2 = v18;
    a2[1] = v19;
    *((_QWORD *)&v52 + 1) = v20;
    result = 3;
    a2[2] = *((_QWORD *)&v19 + 1);
    if ( !v9 )
      result = (unsigned int)v13;
    v51 = v21;
    goto LABEL_18;
  }
LABEL_36:
  v38 = v13;
  v50 = *(int *)(*(_QWORD *)(a1 + 96) + 648LL);
  strlit_contents = get_strlit_contents();
  v21 = v51;
  if ( strlit_contents > 0 && v50 )
  {
    v19 = v52;
    v18 = v51;
    v13 = v38;
    goto LABEL_13;
  }
  result = 0;
LABEL_18:
  if ( v21 )
  {
    v46 = result;
    *(_QWORD *)&v52 = 0;
    qfree();
    return v46;
  }
  return result;
}

