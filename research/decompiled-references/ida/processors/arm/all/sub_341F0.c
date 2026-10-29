__int64 __fastcall sub_341F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 flags; // rax
  __int64 v14; // r8
  unsigned __int64 max_strlit_length; // rax
  __int64 v16; // r8
  __int64 head; // rax
  __int16 v18; // ax
  __int64 v20; // rdx
  _QWORD *func; // rax
  int v22; // ecx
  unsigned __int64 v23; // [rsp+8h] [rbp-70h]
  bool v24; // [rsp+8h] [rbp-70h]
  char v25; // [rsp+Ah] [rbp-6Eh]
  __int64 v26; // [rsp+10h] [rbp-68h]
  char v27; // [rsp+12h] [rbp-66h]
  int v28; // [rsp+18h] [rbp-60h]

  v6 = (unsigned __int8)sub_55C30(a2) == 0;
  v7 = 0xFFFFFFFFLL;
  if ( !v6 )
    v7 = -1;
  if ( !a3 || v7 == a3 || !getseg() )
    return 0;
  v8 = 16 * get_segm_para() + a3;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  if ( v9 != v8 )
  {
    if ( v8 == -1 )
    {
      v11 = getseg();
      if ( !v11 )
        return 0;
      goto LABEL_11;
    }
    v8 &= v9;
  }
  v10 = getseg();
  v11 = v10;
  if ( v8 <= 0x20 || !v10 )
    return 0;
LABEL_11:
  v12 = is_mapped();
  if ( (_BYTE)v12 )
  {
    flags = get_flags_ex(v8 & 0xFFFFFFFFFFFFFFFELL, 4);
    v14 = flags & 0x600;
    if ( v14 == 1536 )
    {
      if ( *(_DWORD *)(a1 + 212)
        && (v27 = BYTE2(flags), (unsigned __int64)(get_sreg(v8, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL) )
      {
        BYTE2(v20) = v27;
        if ( (v8 & 3) != 0 )
          return 0;
      }
      else
      {
        if ( (v8 & 1) == 0 )
          return 0;
        v20 = get_flags_ex(v8 & 0xFFFFFFFFFFFFFFFELL, 4);
        if ( (v20 & 0x400) == 0 )
          return 0;
        v8 &= ~1uLL;
      }
      v25 = BYTE2(v20);
      func = (_QWORD *)get_func(v8);
      if ( func )
      {
        if ( *func != v8 )
          return (int)get_func_chunknum() >= 0;
      }
      else
      {
        return !(v25 & 1);
      }
      return v12;
    }
    if ( v14 == 1024 )
      goto LABEL_33;
    if ( *(_BYTE *)(v11 + 184) == 3 )
      goto LABEL_33;
    if ( *(_QWORD *)v11 == v8 )
      goto LABEL_33;
    v26 = flags & 0x600;
    v23 = (-(__int64)((unsigned __int8)get_byte(v8 - 1) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
    max_strlit_length = get_max_strlit_length();
    v16 = v26;
    if ( max_strlit_length >= v23
      || (v8 & 3) == 0
      && (head = prev_head(), v16 = v26, head != -1)
      && (v18 = get_flags_ex(head, 4), v16 = v26, (v18 & 0x600) == 0x400) )
    {
LABEL_33:
      v22 = getinf(5);
      if ( v22 == 18 || v22 == 25 )
      {
        v24 = v22 == 18 || v22 == 25;
        v28 = v22;
        if ( get_segm_name() > 0 && v28 == 25 )
          return v24;
        else
          return v24;
      }
      return v12;
    }
    if ( !v16 && a4 && *(_BYTE *)(v11 + 184) == 2 )
      return sub_33E80(a1, a2, v8, 1);
  }
  return 0;
}
