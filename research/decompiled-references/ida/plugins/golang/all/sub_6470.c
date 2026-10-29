unsigned __int64 __fastcall sub_6470(__int64 a1, __int64 a2, __int64 a3)
{
  int flags; // eax
  bool v5; // r15
  int v6; // eax
  __int64 v7; // r14
  int v8; // r13d
  __int64 v9; // rbx
  char v11; // al
  char v12; // cl
  unsigned __int8 v13; // dl
  __int64 v14; // r13
  char v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r15
  int v18; // r13d
  __int64 v19; // rbx
  char v20; // al
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  int byte; // ebx
  __int16 v24; // bx
  unsigned __int8 v25; // [rsp+10h] [rbp-78h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  flags = get_flags_ex();
  v5 = (flags & 0xF0000000) == 0;
  if ( (flags & 0x600) != 0x400 )
    v5 = 0;
  v6 = *(_DWORD *)(a1 + 572);
  v7 = a3 + 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_5;
    v14 = a3 + 2;
LABEL_27:
    byte = (unsigned __int8)get_byte();
    v9 = (unsigned __int8)get_byte() | (byte << 8);
    goto LABEL_11;
  }
  v14 = a3 + 2;
  v24 = get_byte();
  v25 = get_byte();
  if ( get_max_strlit_length() - (unsigned __int64)(unsigned __int16)(v25 | (unsigned __int16)(v24 << 8)) <= 1 )
  {
    *(_DWORD *)(a1 + 572) = 1;
    goto LABEL_27;
  }
  *(_DWORD *)(a1 + 572) = 2;
LABEL_5:
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)is_loaded() )
    return v26 - __readfsqword(0x28u);
  do
  {
    v11 = get_byte();
    v12 = v7++;
    v9 |= (unsigned __int64)(v11 & 0x7F) << v8;
    v13 = v8 + 7;
    v8 += 7;
  }
  while ( v11 < 0 && v13 <= 0x3Fu );
  if ( v13 > 0x40u )
    return v26 - __readfsqword(0x28u);
  v14 = a3 + (unsigned __int8)(v12 - a3);
LABEL_11:
  if ( a2 )
    get_strlit_contents();
  if ( !v5 )
  {
    v15 = get_byte();
    create_data();
    create_strlit();
    if ( (v15 & 1) != 0 )
      set_cmt();
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (v9 + v14 + 1);
    if ( (v15 & 2) == 0 )
      goto LABEL_24;
    if ( *(_DWORD *)(a1 + 572) == 1 )
    {
      get_byte();
      get_byte();
LABEL_23:
      create_data();
      set_cmt();
      create_strlit();
LABEL_24:
      if ( (v15 & 4) != 0 )
      {
        set_cmt();
        create_data();
        op_offset_ex();
        create_xrefs_from();
      }
      return v26 - __readfsqword(0x28u);
    }
    if ( (unsigned __int8)is_loaded() )
    {
      v17 = v16;
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = get_byte();
        v21 = (unsigned __int64)(v20 & 0x7F) << v18;
        v22 = v18 + 7;
        v18 += 7;
        v19 |= v21;
        ++v17;
      }
      while ( v20 < 0 && v22 <= 0x3Fu );
      if ( v22 <= 0x40u )
        goto LABEL_23;
    }
  }
  return v26 - __readfsqword(0x28u);
}
