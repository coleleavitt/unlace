__int64 __fastcall sub_23B8C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // edx
  _QWORD **v8; // r14
  char v9; // al
  char v10; // si
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // rax
  __int64 flags; // rbp
  const void *v16; // r13
  void *v17; // rax
  __int64 v18; // [rsp+28h] [rbp-1E0h]
  __int64 v19; // [rsp+30h] [rbp-1D8h] BYREF
  int v20; // [rsp+38h] [rbp-1D0h]
  void *src; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-1C0h]
  __int128 v23; // [rsp+60h] [rbp-1A8h]
  __int64 v24; // [rsp+70h] [rbp-198h]
  __int64 v25; // [rsp+78h] [rbp-190h]
  __int64 v26; // [rsp+80h] [rbp-188h]
  _BYTE v27[320]; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v28; // [rsp+1C8h] [rbp-40h] BYREF

  v28 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v7 = *(char *)(a1 + 4);
  v8 = *(_QWORD ***)(a2 + 80);
  v19 = a3;
  v20 = v7;
  v9 = v7;
  v10 = v7;
  if ( *v8 )
  {
    v12 = (_QWORD *)(**v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v12 )
      goto LABEL_11;
    if ( (*(_BYTE *)v12 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_2533C0(&v19) >= 0 )
        {
          if ( (int)sub_2533C0(v12 + 3) >= 0 )
            goto LABEL_10;
          v12 = (_QWORD *)v12[2];
        }
        else
        {
          v12 = (_QWORD *)v12[1];
        }
      }
      while ( (*(_BYTE *)v12 & 2) == 0 );
      v12 = *v8;
LABEL_10:
      if ( **(_QWORD ***)(a2 + 80) != v12 )
      {
LABEL_11:
        if ( (*((_BYTE *)v12 + 45) & 0x18) == 0
          && a4 <= 9
          && (unsigned __int8)is_numop()
          && (unsigned int)get_radix() == 16 )
        {
          goto LABEL_21;
        }
        if ( v12[7] > 1u )
        {
          sub_325D80(&src, v12[6]);
          if ( (unsigned int)verify_tinfo() )
          {
            clear_tinfo_t();
LABEL_21:
            v10 = *(_BYTE *)(a1 + 4);
            goto LABEL_22;
          }
          clear_tinfo_t();
        }
        sub_324F00(a1, v12[9] & 0xFFFFFFFFFFFDFFFFLL);
        *(_BYTE *)(a1 + 5) = *((_BYTE *)v12 + 45) & 0xF9;
        *(_BYTE *)(a1 + 6) = *((_BYTE *)v12 + 46);
        if ( (_QWORD *)(a1 + 8) != v12 + 6 )
        {
          v13 = v12[7];
          if ( v13 > 1 )
          {
            v16 = (const void *)v12[6];
            v17 = *(void **)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) < v13 )
            {
              v17 = (void *)qvector_reserve();
              *(_QWORD *)(a1 + 8) = v17;
            }
            *(_QWORD *)(a1 + 16) = v13;
            memmove(v17, v16, v13 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + v13 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 16) = 0;
          }
        }
        return 1;
      }
      v9 = *(_BYTE *)(a1 + 4);
    }
    v10 = v9;
  }
LABEL_22:
  if ( v10 > 1 )
  {
    if ( v10 > 7 )
      return 0;
    v24 = -1;
    v14 = (unsigned __int64 *)v27;
    v25 = 0;
    v26 = 0;
    v23 = -1;
    do
    {
      *(_WORD *)v14 = 0;
      v14 += 5;
      *((_WORD *)v14 - 19) = 0;
      *((_WORD *)v14 - 18) = 0;
      *((_DWORD *)v14 - 2) = 0;
      *((_WORD *)v14 - 17) = 0;
      *((_OWORD *)v14 - 2) = 0;
      *(v14 - 2) = 0;
    }
    while ( v14 != &v28 );
    if ( !(unsigned int)decode_insn() || !v27[40 * *(char *)(a1 + 4) + 1] )
      return 0;
  }
  src = nullptr;
  v22 = 0;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  flags = get_flags_ex();
  if ( (unsigned __int8)is_bnot() )
    *(_BYTE *)(a1 + 5) |= 0x10u;
  if ( !(unsigned __int8)is_char() )
  {
    if ( (unsigned __int8)is_enum() )
    {
      if ( get_enum_id() != -1 && (unsigned __int8)get_type_by_tid() )
LABEL_48:
        get_tinfo_property();
    }
    else if ( (unsigned __int8)is_stroff()
           && (unsigned int)get_stroff_path()
           && !v18
           && (unsigned __int8)get_type_by_tid() )
    {
      goto LABEL_48;
    }
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    return 0;
  }
  sub_324F00(a1, flags & 0xFFFFFF0FF60000LL);
  *(_BYTE *)(a1 + 5) |= 1u;
  if ( src )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return 1;
}

