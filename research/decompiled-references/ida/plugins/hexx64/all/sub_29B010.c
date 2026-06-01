bool __fastcall sub_29B010(__int64 a1, _DWORD a2, __int64 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  bool v13; // al
  int v14; // ebx
  int v15; // eax
  char tinfo_property; // bl
  char v17; // al
  char v18; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  bool v27; // [rsp+Fh] [rbp-79h]
  __int64 v28; // [rsp+10h] [rbp-78h] BYREF
  __int128 v29; // [rsp+18h] [rbp-70h]
  __int128 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+40h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v28 = 0;
    v32 = 1;
    v31 = 0;
    v29 = 0;
    v30 = 0;
    if ( (unsigned __int8)get_tinfo_details() && sub_29ACE0(a1, (__int64)&v28, a3, a4) )
    {
      v21 = v28;
      if ( v28 )
      {
        v22 = v29;
        if ( (_QWORD)v29 )
        {
          v23 = 0;
          do
          {
            v24 = (_QWORD *)(v21 + 144 * v23);
            clear_tinfo_t();
            v25 = v24[5];
            if ( v25 )
            {
              v24[6] = 0;
              qfree(v25);
            }
            v26 = v24[2];
            if ( v26 )
            {
              v24[3] = 0;
              qfree(v26);
            }
            ++v23;
            v21 = v28;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v29 = 0;
        qfree(v21);
      }
      return 1;
    }
    v7 = v28;
    if ( v28 )
    {
      v8 = v29;
      if ( (_QWORD)v29 )
      {
        v9 = 0;
        do
        {
          v10 = (_QWORD *)(v7 + 144 * v9);
          clear_tinfo_t();
          v11 = v10[5];
          if ( v11 )
          {
            v10[6] = 0;
            qfree(v11);
          }
          v12 = v10[2];
          if ( v12 )
          {
            v10[3] = 0;
            qfree(v12);
          }
          ++v9;
          v7 = v28;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v29 = 0;
      qfree(v7);
    }
    goto LABEL_15;
  }
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v28 = 0;
    *(_QWORD *)&v29 = 0;
    if ( (unsigned __int8)get_tinfo_details()
      && (tinfo_size = get_tinfo_size()) != 0
      && tinfo_size * (unsigned int)(DWORD1(v29) - 1) >= a3 )
    {
      v20 = -1;
      if ( a3 != -1 )
        v20 = a3 % tinfo_size;
      v13 = sub_29B010(a1, (unsigned int)&v28, v20, a4);
      if ( !v13 )
      {
        clear_tinfo_t();
        goto LABEL_15;
      }
    }
    else
    {
      v13 = 0;
    }
    v27 = v13;
    clear_tinfo_t();
    return v27;
  }
LABEL_15:
  if ( a3 > 0 )
    return 0;
  v14 = get_tinfo_size();
  if ( v14 < 0 )
    return 0;
  v15 = get_tinfo_size();
  if ( v15 < 0 )
    return 0;
  if ( v14 != v15 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  if ( (unsigned __int8)compare_tinfo() )
    return 1;
  v17 = get_tinfo_property();
  if ( (v17 & 0x3E) != 0 && (v17 & 0xFu) <= 8 && (v18 = get_tinfo_property(), (v18 & 0x3E) != 0) )
    return (v18 & 0xFu) <= 8;
  else
    return 0;
}

