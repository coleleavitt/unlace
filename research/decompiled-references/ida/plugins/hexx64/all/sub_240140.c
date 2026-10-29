__int64 __fastcall sub_240140(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // edx
  _QWORD **v9; // r14
  char v10; // al
  char v11; // si
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rax
  __int64 flags; // rbp
  const void *v18; // r13
  void *v19; // rax
  __int64 v20; // [rsp+28h] [rbp-1E0h]
  __int64 v21; // [rsp+30h] [rbp-1D8h] BYREF
  int v22; // [rsp+38h] [rbp-1D0h]
  void *src; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-1C0h]
  __int128 v25; // [rsp+60h] [rbp-1A8h]
  __int64 v26; // [rsp+70h] [rbp-198h]
  __int64 v27; // [rsp+78h] [rbp-190h]
  __int64 v28; // [rsp+80h] [rbp-188h]
  _BYTE v29[320]; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v30; // [rsp+1C8h] [rbp-40h] BYREF

  v30 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v7 = *(char *)(a1 + 4);
  v9 = *(_QWORD ***)(a2 + 80);
  v21 = a3;
  v22 = v7;
  v10 = v7;
  v11 = v7;
  if ( *v9 )
  {
    v13 = (_QWORD *)(**v9 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v13 )
      goto LABEL_11;
    if ( (*(_BYTE *)v13 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_257C40((__int64)&v21, (__int64)(v13 + 3)) >= 0 )
        {
          if ( (int)sub_257C40((__int64)(v13 + 3), (__int64)&v21) >= 0 )
            goto LABEL_10;
          v13 = (_QWORD *)v13[2];
        }
        else
        {
          v13 = (_QWORD *)v13[1];
        }
      }
      while ( (*(_BYTE *)v13 & 2) == 0 );
      v13 = *v9;
LABEL_10:
      if ( **(_QWORD ***)(a2 + 80) != v13 )
      {
LABEL_11:
        if ( (*((_BYTE *)v13 + 45) & 0x18) == 0
          && a4 <= 9
          && (unsigned __int8)is_numop()
          && (unsigned int)get_radix() == 16 )
        {
          goto LABEL_21;
        }
        if ( v13[7] > 1u )
        {
          sub_32ACB0(&src, v13[6]);
          if ( (unsigned int)verify_tinfo() )
          {
            clear_tinfo_t();
LABEL_21:
            v11 = *(_BYTE *)(a1 + 4);
            goto LABEL_22;
          }
          clear_tinfo_t();
        }
        sub_329C80(a1, v13[9] & 0xFFFFFFFFFFFDFFFFLL);
        v14 = a1 + 8;
        *(_BYTE *)(a1 + 5) = *((_BYTE *)v13 + 45) & 0xF9;
        *(_BYTE *)(a1 + 6) = *((_BYTE *)v13 + 46);
        if ( (_QWORD *)(a1 + 8) != v13 + 6 )
        {
          v15 = v13[7];
          if ( v15 > 1 )
          {
            v18 = (const void *)v13[6];
            v19 = *(void **)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) < v15 )
            {
              v19 = (void *)qvector_reserve(v14, *(_QWORD *)(a1 + 8), v15, 1);
              *(_QWORD *)(a1 + 8) = v19;
            }
            *(_QWORD *)(a1 + 16) = v15;
            memmove(v19, v18, v15 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + v15 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 16) = 0;
          }
        }
        return 1;
      }
      v10 = *(_BYTE *)(a1 + 4);
    }
    v11 = v10;
  }
LABEL_22:
  if ( v11 > 1 )
  {
    if ( v11 > 7 )
      return 0;
    v26 = -1;
    v16 = (unsigned __int64 *)v29;
    v27 = 0;
    v28 = 0;
    v25 = -1;
    do
    {
      *(_WORD *)v16 = 0;
      v16 += 5;
      *((_WORD *)v16 - 19) = 0;
      *((_WORD *)v16 - 18) = 0;
      *((_DWORD *)v16 - 2) = 0;
      *((_WORD *)v16 - 17) = 0;
      *((_OWORD *)v16 - 2) = 0;
      *(v16 - 2) = 0;
    }
    while ( v16 != &v30 );
    if ( !(unsigned int)decode_insn() || !v29[40 * *(char *)(a1 + 4) + 1] )
      return 0;
  }
  src = nullptr;
  v24 = 0;
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
           && !v20
           && (unsigned __int8)get_type_by_tid() )
    {
      goto LABEL_48;
    }
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v24 = 0;
      qfree((__int64)src);
    }
    return 0;
  }
  sub_329C80(a1, flags & 0xFFFFFF0FF60000LL);
  *(_BYTE *)(a1 + 5) |= 1u;
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree((__int64)src);
  }
  return 1;
}

