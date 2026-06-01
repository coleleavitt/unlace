__int64 sub_11EE0()
{
  unsigned int v0; // ebx
  __int64 idati; // [rsp+10h] [rbp-38h] BYREF
  const char *v3; // [rsp+18h] [rbp-30h]
  __int16 v4; // [rsp+20h] [rbp-28h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 256;
  v3 = "__objc2_prop";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_prop_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_meth";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_meth_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_ivar";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_ivar_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_prot_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_30;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_30;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc2_prot";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo()
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), v4 = 256, v3 = "__objc2_class_ro", idati = get_idati(), !(unsigned __int8)create_tinfo())
    || get_tinfo_tid() == -1 )
  {
LABEL_30:
    sub_EC40();
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  idati = 0;
  if ( !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc2_category") )
    goto LABEL_41;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_41;
  clear_tinfo_t();
  idati = 0;
  if ( !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc2_class")
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc2_class_rw"))
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc2_class_rw1"))
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, v0 = sub_11E30((__int64)&idati, 0, (__int64)"__objc2_class_rw1_ext"), !(_BYTE)v0)
    || get_tinfo_tid() == -1 )
  {
LABEL_41:
    sub_EC40();
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  return v0;
}
