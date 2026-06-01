__int64 __fastcall sub_33B10(__int64 a1, _BYTE *a2)
{
  unsigned int tinfo; // ebp
  unsigned int type_ordinal; // ebp
  unsigned int v5; // r15d
  int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-88h] BYREF
  __int128 v9; // [rsp+38h] [rbp-80h]
  __int128 v10; // [rsp+50h] [rbp-68h]
  __int64 v11; // [rsp+60h] [rbp-58h]
  int v12; // [rsp+68h] [rbp-50h]
  __int16 v13; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v14; // [rsp+78h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  switch ( *a2 )
  {
    case 'B':
      type_ordinal = get_type_ordinal();
      if ( type_ordinal )
        goto LABEL_9;
      *(_QWORD *)&v10 = 18;
      type_ordinal = alloc_type_ordinals();
      if ( (unsigned int)save_tinfo() )
        goto LABEL_2;
      goto LABEL_7;
    case 'C':
      v5 = get_type_ordinal();
      if ( v5 )
        goto LABEL_15;
      alloc_type_ordinals();
      if ( (unsigned int)save_tinfo() )
        goto LABEL_2;
      v8 = 0;
      v10 = 0;
      copy_tinfo_t();
      v11 = 0;
      copy_tinfo_t();
      v12 = 0;
      v13 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      v5 = alloc_type_ordinals();
      v6 = save_tinfo();
      clear_tinfo_t();
      if ( v6 )
        goto LABEL_2;
      clear_tinfo_t();
LABEL_15:
      LOWORD(v11) = 1;
      *((_QWORD *)&v10 + 1) = v5;
      goto LABEL_10;
    case 'D':
    case 'F':
    case 'I':
    case 'J':
    case 'S':
    case 'V':
      return create_tinfo();
    case 'L':
      v8 = 0;
      v9 = 0;
      tinfo = sub_32350((__int64)&v8, (__int64)a2);
      if ( !(_BYTE)tinfo )
        goto LABEL_22;
      v7 = get_type_ordinal();
      if ( v7 )
      {
        LOWORD(v11) = 1;
        *((_QWORD *)&v10 + 1) = v7;
        *(_QWORD *)&v10 = get_idati();
        create_tinfo();
      }
      else
      {
        LOWORD(v11) = 0;
        *((_QWORD *)&v10 + 1) = "";
        *(_QWORD *)&v10 = get_idati();
        create_tinfo();
        if ( (unsigned int)save_tinfo() )
        {
          tinfo = 0;
          goto LABEL_21;
        }
      }
      v10 = 0;
      copy_tinfo_t();
      v11 = 0;
      copy_tinfo_t();
      v12 = 0;
      v13 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
LABEL_21:
      clear_tinfo_t();
LABEL_22:
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
      return tinfo;
    case 'Z':
      type_ordinal = get_type_ordinal();
      if ( type_ordinal )
        goto LABEL_9;
      *(_QWORD *)&v10 = 24;
      type_ordinal = alloc_type_ordinals();
      if ( (unsigned int)save_tinfo() )
      {
LABEL_2:
        clear_tinfo_t();
        return 0;
      }
      else
      {
LABEL_7:
        clear_tinfo_t();
LABEL_9:
        LOWORD(v11) = 1;
        *((_QWORD *)&v10 + 1) = type_ordinal;
LABEL_10:
        *(_QWORD *)&v10 = get_idati();
        tinfo = 1;
        create_tinfo();
      }
      return tinfo;
    case '[':
      v8 = 0;
      tinfo = sub_33B10(&v8, a2 + 1);
      if ( (_BYTE)tinfo )
      {
        v10 = 0u;
        copy_tinfo_t();
        tinfo = create_tinfo();
        clear_tinfo_t();
      }
      clear_tinfo_t();
      return tinfo;
    default:
      return 0;
  }
}

