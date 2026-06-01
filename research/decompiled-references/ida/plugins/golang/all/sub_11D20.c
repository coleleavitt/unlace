__int64 __fastcall sub_11D20(__int64 a1, double a2)
{
  int dword; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // rdx
  _DWORD *v6; // rdi
  int v7; // ecx
  unsigned int v8; // esi
  __int64 v10; // rax
  bool v11; // cc
  int v12; // r14d
  __int64 v13; // r15
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // r14
  char v20; // dl
  __int64 v21; // rax
  __int64 v22; // r14
  char v23; // dl
  __int64 v24; // rax
  __int64 v25; // r13
  char v26; // dl
  __int64 v27; // rax
  char data_value; // dl
  __int64 v29; // rax
  __int16 v30; // [rsp+34h] [rbp-44h]
  char v31; // [rsp+36h] [rbp-42h]
  unsigned __int8 v32; // [rsp+37h] [rbp-41h]

  dword = get_dword();
  if ( dword == *(_DWORD *)(a1 + 400) && *(_DWORD *)(a1 + 404) > 0x65u )
    goto LABEL_19;
  *(_DWORD *)(a1 + 400) = dword;
  v4 = &unk_27600;
  v5 = nullptr;
  while ( 1 )
  {
    v6 = v4;
    if ( dword == *v4 )
      break;
LABEL_5:
    v4 += 6;
    if ( v4 == dword_27678 )
      goto LABEL_6;
  }
  if ( !v5 )
  {
    v5 = v4;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v6 = v5;
    v5 = v4;
LABEL_15:
    if ( v4[1] )
    {
      v5 = v6;
      goto LABEL_7;
    }
    v4 += 6;
    if ( v4 == dword_27678 )
      break;
    if ( dword != *v4 )
      goto LABEL_5;
  }
LABEL_6:
  if ( v5 )
  {
LABEL_7:
    v7 = v5[1];
    do
    {
      v5 += 6;
      if ( v5 >= dword_27678 )
      {
        v8 = 200;
        goto LABEL_11;
      }
    }
    while ( dword == *v5 );
    v8 = v5[1];
  }
  else
  {
    v7 = 0;
    v8 = 200;
  }
LABEL_11:
  *(_DWORD *)(a1 + 404) = v7;
  sub_B160(a1, v8);
  if ( !*(_DWORD *)(a1 + 404) )
    return 0;
LABEL_19:
  get_bytes();
  if ( *(_BYTE *)(a1 + 565) != v32 )
  {
    sub_5050(
      (__int64)"%a: .gopclntab pointer size %d does not match database pointer size %d\n",
      a2,
      *(_QWORD *)(a1 + 392),
      v32);
    return 0;
  }
  *(_BYTE *)(a1 + 566) = v31;
  if ( v30 || (unsigned __int8)(v31 - 1) > 1u && v31 != 4 )
    return 0;
  sub_5050((__int64)"%a: found pclntab\n", a2);
  if ( !*(_BYTE *)(a1 + 556) )
  {
    getinf_buf();
    getinf_flag();
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      if ( (unsigned int)netnode_altval() > 0x74 )
        get_ph();
    }
    set_compiler();
  }
  if ( !byte_284D0 )
  {
    v12 = *(_DWORD *)(a1 + 404);
    netnode_check();
    netnode_supset();
    netnode_check();
    netnode_supset();
    if ( !v12 )
      byte_284D0 = 1;
    *(_BYTE *)(a1 + 556) = 1;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      if ( (unsigned int)netnode_altval() > 0x74 )
        get_ph();
    }
    setinf();
  }
  create_data();
  if ( (get_flags_ex() & 0x4000) == 0 )
    set_name();
  *(_BYTE *)(a1 + 563) = 1;
  sub_57B0(*(_DWORD *)(a1 + 404));
  create_data();
  create_data();
  create_data();
  set_cmt();
  set_cmt();
  create_data();
  set_cmt();
  if ( *(_QWORD *)(a1 + 472) == -1 )
    sub_114E0(a1);
  v10 = *(_QWORD *)(a1 + 392);
  v11 = *(_DWORD *)(a1 + 404) <= 0x73u;
  *(_QWORD *)(a1 + 512) = v10;
  *(_QWORD *)(a1 + 488) = v10;
  if ( !v11 )
  {
    create_data();
    set_cmt();
    if ( !(unsigned __int8)get_data_value() )
      return 0;
    if ( *(_DWORD *)(a1 + 404) > 0x75u )
    {
      data_value = get_data_value();
      v29 = -1;
      if ( data_value )
      {
        get_flags_by_size();
        create_data();
        op_offset_ex();
        create_xrefs_from();
        set_name();
        v29 = 0;
      }
      *(_QWORD *)(a1 + 480) = v29;
    }
    v13 = *(_QWORD *)(a1 + 392);
    v14 = get_data_value();
    v15 = -1;
    if ( v14 )
    {
      get_flags_by_size();
      create_data();
      op_offset_ex();
      create_xrefs_from();
      set_name();
      v15 = v13;
    }
    *(_QWORD *)(a1 + 488) = v15;
    v16 = *(_QWORD *)(a1 + 392);
    v17 = get_data_value();
    v18 = -1;
    if ( v17 )
    {
      get_flags_by_size();
      create_data();
      op_offset_ex();
      create_xrefs_from();
      set_name();
      v18 = v16;
    }
    *(_QWORD *)(a1 + 496) = v18;
    v19 = *(_QWORD *)(a1 + 392);
    v20 = get_data_value();
    v21 = -1;
    if ( v20 )
    {
      get_flags_by_size();
      create_data();
      op_offset_ex();
      create_xrefs_from();
      set_name();
      v21 = v19;
    }
    *(_QWORD *)(a1 + 504) = v21;
    v22 = *(_QWORD *)(a1 + 392);
    v23 = get_data_value();
    v24 = -1;
    if ( v23 )
    {
      get_flags_by_size();
      create_data();
      op_offset_ex();
      create_xrefs_from();
      set_name();
      v24 = v22;
    }
    *(_QWORD *)(a1 + 512) = v24;
    v25 = *(_QWORD *)(a1 + 392);
    v26 = get_data_value();
    v27 = -1;
    if ( v26 )
    {
      get_flags_by_size();
      create_data();
      op_offset_ex();
      create_xrefs_from();
      set_name();
      v27 = v25;
    }
    *(_QWORD *)(a1 + 520) = v27;
  }
  return 1;
}
