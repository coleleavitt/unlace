__int64 __fastcall sub_2B720(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 func; // rax
  unsigned __int64 *v4; // r12
  __int64 i; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+18h] [rbp-80h]
  _QWORD *v15; // [rsp+20h] [rbp-78h]
  __int128 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned int)callui(7) != 14598366 )
    goto LABEL_8;
  sub_283D0(a1, 0xDEC0DE00000004LL);
  if ( netnode_supfirst() == -1 )
    goto LABEL_8;
  v2 = sub_27D30((__int64)a1);
  if ( !(_BYTE)v2 )
    return 0;
  if ( a2 != -1 )
  {
    func = get_func();
    v4 = (unsigned __int64 *)func;
    if ( func )
    {
      v2 = sub_29D80(a1, func);
      if ( (_BYTE)v2 )
      {
        sub_28830((__int64)a1, v4);
        return v2;
      }
      return 0;
    }
LABEL_8:
    sub_EC40();
    return 0;
  }
  sub_FAA0();
  v15 = 0;
  v16 = 0;
  for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
  {
    node2ea();
    if ( *(_BYTE *)(*a1 + 2216) )
    {
      memset(v17, 0, sizeof(v17));
      get_ea_name();
      sub_EC40();
    }
    if ( get_first_dref_to() != -1 )
    {
      while ( !(unsigned __int8)callui(27) )
      {
        if ( *(_BYTE *)(*a1 + 2216) )
        {
          memset(v17, 0, sizeof(v17));
          get_ea_name();
          sub_EC40();
        }
        v7 = (__int64 *)get_func();
        if ( v7 )
        {
          v8 = *v7;
          v9 = &v15[v16];
          if ( v15 == v9 )
            goto LABEL_29;
          v10 = v15;
          while ( v8 != *v10 )
          {
            if ( v9 == ++v10 )
              goto LABEL_29;
          }
          if ( v10 == v9 )
          {
LABEL_29:
            if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
            {
              v14 = v8;
              v11 = qvector_reserve();
              v8 = v14;
              v15 = (_QWORD *)v11;
              v9 = (_QWORD *)(v11 + 8 * v16);
            }
            *v9 = v8;
            *(_QWORD *)&v16 = v16 + 1;
          }
        }
        if ( get_next_dref_to() == -1 )
          goto LABEL_28;
      }
LABEL_37:
      callui(24);
      v2 = 0;
      goto LABEL_38;
    }
LABEL_28:
    ;
  }
  if ( (_QWORD)v16 )
  {
    v12 = v15;
    if ( 8LL * (_QWORD)v16 )
    {
      while ( !(unsigned __int8)callui(27) )
      {
        sub_F9D0();
        v13 = get_func();
        sub_29D80(a1, v13);
        if ( ++v12 == &v15[(_QWORD)v16] )
          goto LABEL_40;
      }
      goto LABEL_37;
    }
  }
LABEL_40:
  callui(24);
  *(_OWORD *)v17 = 0;
  sub_28830((__int64)a1, (unsigned __int64 *)v17);
LABEL_38:
  if ( v15 )
    qfree();
  return v2;
}
