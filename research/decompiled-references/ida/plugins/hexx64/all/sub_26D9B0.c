__int64 __fastcall sub_26D9B0(__int64 *a1)
{
  char v1; // r15
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+40h] [rbp-48h]
  unsigned __int64 v8; // [rsp+48h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  copy_tinfo_t();
  tinfo_property = get_tinfo_property();
  v1 = 0;
  if ( (_BYTE)tinfo_property )
  {
    v1 = 1;
    tinfo_property = 0;
  }
  clear_tinfo_t();
  if ( (unsigned __int8)sub_32A510(*a1) )
  {
LABEL_4:
    v2 = 0;
  }
  else
  {
    v5 = 0;
    v6[0] = 0;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        goto LABEL_15;
      v2 = sub_32D910(&v5, (__int64)v6, 0);
      if ( !(_BYTE)v2 )
        goto LABEL_15;
      v6[1] = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        tinfo_property = 0;
        tinfo_property = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      else if ( !v1 )
      {
        clear_tinfo_t();
LABEL_15:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_4;
      }
      if ( (unsigned __int8)sub_32A510(*a1)
        || a1[8] && *(_QWORD *)(a1[7] + 24) == (int)get_tinfo_size() && (unsigned int)lexcompare_tinfo() )
      {
        break;
      }
      v4 = v6[0];
      v6[0] = v5;
      v5 = v4;
      clear_tinfo_t();
    }
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v2;
}

