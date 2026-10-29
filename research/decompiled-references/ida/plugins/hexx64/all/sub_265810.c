__int64 __fastcall sub_265810(__int64 *a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned int tinfo; // ebp
  int tinfo_size; // eax
  __int64 v8; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-C8h]
  __int128 v11; // [rsp+28h] [rbp-C0h]
  __int64 v12; // [rsp+38h] [rbp-B0h]
  __int128 v13; // [rsp+40h] [rbp-A8h]
  __int128 v14; // [rsp+50h] [rbp-98h]
  __int64 v15; // [rsp+80h] [rbp-68h]
  int v16; // [rsp+88h] [rbp-60h]
  __int64 v17; // [rsp+90h] [rbp-58h]
  char v18; // [rsp+98h] [rbp-50h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v8 = 0;
  if ( !a2 )
    goto LABEL_7;
  *((_QWORD *)&v9 + 1) = a2;
  LOWORD(v10) = 256;
  *(_QWORD *)&v9 = get_idati();
  tinfo = create_tinfo();
  if ( !(_BYTE)tinfo )
    goto LABEL_7;
  if ( (unsigned __int8)is_ordinal_name() && !get_numbered_type_name() )
  {
    if ( !under_debugger )
      sub_383060(0xC706u, a4);
    BUG();
  }
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == a3 )
  {
    if ( a1 )
      sub_FAAD0(a1);
  }
  else
  {
    if ( a3 >= tinfo_size )
    {
LABEL_7:
      tinfo = 0;
      goto LABEL_8;
    }
    v10 = 0;
    v12 = 0;
    v15 = 1;
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    if ( (unsigned int)sub_32D810(&v9, (__int64)&v8, a3) == -1 || (unsigned __int64)v11 <= 1 || (_QWORD)v9 != 8 * a3 )
    {
      clear_tinfo_t();
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v10);
      }
      goto LABEL_7;
    }
    if ( a1 )
      sub_FAAD0(a1);
    clear_tinfo_t();
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
  }
LABEL_8:
  clear_tinfo_t();
  return tinfo;
}

