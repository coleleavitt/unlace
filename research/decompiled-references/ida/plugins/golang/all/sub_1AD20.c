__int64 __fastcall sub_1AD20(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v9; // rsi
  __int64 tinfo_size; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  int v13; // eax
  char v14; // r15
  char v15; // al
  __int64 *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  int flags; // eax
  char v23; // r15
  char v24; // al
  __int64 v25; // rcx

  if ( !a4
    || (v9 = (_QWORD *)a1[2], a4 >= (unsigned __int64)*((unsigned int *)a1 + 10) + ((a1[4] - (__int64)v9) >> 3 << 6))
    || (v9[(__int64)a4 >> 6] & (1LL << a4)) == 0 )
  {
    get_idati();
    create_tinfo();
    tinfo_size = get_tinfo_size();
    if ( (unsigned __int64)(tinfo_size - 1) > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_19;
    v11 = *a1;
    v12 = a2 + a3;
    if ( *((_DWORD *)a1 + 2) != a4 )
    {
      if ( *(_BYTE *)(v11 + 559) && (v13 = *((_DWORD *)a1 + 3)) != 0 && v13 == a4 )
      {
        sub_114E0(*a1);
        v23 = 0;
        if ( a2 >= v12 )
          goto LABEL_12;
        do
        {
          v24 = sub_15CE0((_QWORD *)*a1, a2, 0);
          a2 += tinfo_size;
          v23 |= v24;
        }
        while ( a2 < v12 );
        if ( !v23 )
          goto LABEL_12;
      }
      else
      {
        v14 = 0;
        if ( a2 >= v12 )
          goto LABEL_11;
        do
        {
          v15 = sub_1AA20(a1, a2, a4, a5);
          a2 += tinfo_size;
          v14 |= v15;
        }
        while ( a2 < v12 );
        if ( !v14 )
        {
LABEL_11:
          if ( !a4 )
          {
LABEL_14:
            v20 = 0;
LABEL_20:
            clear_tinfo_t();
            return v20;
          }
LABEL_12:
          v16 = (__int64 *)a1[4];
          v17 = (_QWORD *)a1[2];
          v18 = *((unsigned int *)a1 + 10);
          v19 = v18 + ((a1[4] - (__int64)v17) >> 3 << 6);
          if ( a4 >= v19 )
          {
            v25 = a4 + 1;
            if ( v25 >= v19 )
            {
              sub_14F40((__int64)(a1 + 2), v16, v18, v25 - v19, 0);
              v17 = (_QWORD *)a1[2];
            }
            else
            {
              a1[4] = (__int64)&v17[v25 >> 6];
              *((_DWORD *)a1 + 10) = ((_BYTE)a4 + 1) & 0x3F;
            }
          }
          v17[(__int64)a4 >> 6] |= 1LL << a4;
          goto LABEL_14;
        }
      }
LABEL_19:
      v20 = 1;
      goto LABEL_20;
    }
    if ( *(_QWORD *)(v11 + 360) != tinfo_size || a2 >= v12 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_BYTE *)(v11 + 565) == 4 )
        get_dword();
      else
        get_qword();
      if ( *(_BYTE *)(v11 + 565) == 4 )
        get_dword();
      else
        get_qword();
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      flags = get_flags_ex();
      if ( (flags & 0x600) != 0 )
      {
        if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
          goto LABEL_33;
        del_items();
      }
      if ( *(_BYTE *)(v11 + 556) && *(_QWORD *)(v11 + 392) == -1 && (unsigned __int8)is_mapped() )
        get_byte();
      create_strlit();
LABEL_33:
      a2 += tinfo_size;
      if ( a2 >= v12 )
        goto LABEL_19;
      v11 = *a1;
    }
  }
  return 0;
}
