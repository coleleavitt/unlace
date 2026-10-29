__int64 __fastcall sub_260450(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int tinfo; // ebp
  int tinfo_size; // eax
  __int64 v7; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+20h] [rbp-C8h]
  __int128 v10; // [rsp+28h] [rbp-C0h]
  __int64 v11; // [rsp+38h] [rbp-B0h]
  __int128 v12; // [rsp+40h] [rbp-A8h]
  __int128 v13; // [rsp+50h] [rbp-98h]
  __int64 v14; // [rsp+80h] [rbp-68h]
  int v15; // [rsp+88h] [rbp-60h]
  __int64 v16; // [rsp+90h] [rbp-58h]
  char v17; // [rsp+98h] [rbp-50h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v7 = 0;
  if ( !a2 )
    goto LABEL_7;
  *((_QWORD *)&v8 + 1) = a2;
  LOWORD(v9) = 256;
  *(_QWORD *)&v8 = get_idati();
  tinfo = create_tinfo();
  if ( !(_BYTE)tinfo )
    goto LABEL_7;
  if ( (unsigned __int8)is_ordinal_name() && !get_numbered_type_name() )
  {
    if ( !under_debugger )
      sub_37CFE0(50950);
    BUG();
  }
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == a3 )
  {
    if ( a1 )
      sub_F5F10(a1);
  }
  else
  {
    if ( a3 >= tinfo_size )
    {
LABEL_7:
      tinfo = 0;
      goto LABEL_8;
    }
    v9 = 0;
    v11 = 0;
    v14 = 1;
    v15 = -1;
    v16 = 0;
    v17 = 0;
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v13 = 0;
    if ( (unsigned int)sub_327D90(&v8, &v7, a3, 0) == -1 || (unsigned __int64)v10 <= 1 || (_QWORD)v8 != 8 * a3 )
    {
      clear_tinfo_t();
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree();
      }
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree();
      }
      goto LABEL_7;
    }
    if ( a1 )
      sub_F5F10(a1);
    clear_tinfo_t();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
LABEL_8:
  clear_tinfo_t();
  return tinfo;
}

