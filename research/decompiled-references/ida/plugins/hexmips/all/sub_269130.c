__int64 __fastcall sub_269130(_QWORD *a1)
{
  __int64 tinfo_property; // rax
  char v2; // r15
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  copy_tinfo_t();
  tinfo_property = get_tinfo_property();
  v11 = tinfo_property;
  v2 = 0;
  if ( (_BYTE)tinfo_property )
  {
    v3 = v7;
    v7 = tinfo_property;
    v2 = 1;
    v11 = v3;
  }
  clear_tinfo_t();
  if ( (unsigned __int8)sub_325700(*a1, a1 + 17, &v7) )
  {
LABEL_4:
    v4 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        goto LABEL_15;
      v4 = sub_3289D0(&v8, &v9, 0, 0);
      if ( !(_BYTE)v4 )
        goto LABEL_15;
      v10 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        v11 = 0;
        v11 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      else if ( !v2 )
      {
        clear_tinfo_t();
LABEL_15:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_4;
      }
      if ( (unsigned __int8)sub_325700(*a1, &v10, &v7)
        || a1[8] && *(_QWORD *)(a1[7] + 24LL) == (int)get_tinfo_size() && (unsigned int)lexcompare_tinfo() )
      {
        break;
      }
      v6 = v9;
      v9 = v8;
      v8 = v6;
      clear_tinfo_t();
    }
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v4;
}

