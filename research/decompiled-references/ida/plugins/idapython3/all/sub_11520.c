__int64 __fastcall sub_11520(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  const char *v4; // rdi
  char v6; // [rsp+7h] [rbp-41h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  const char *v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 == 3 )
  {
    enable_extlang_python(1);
  }
  else if ( a2 == 4 )
  {
    enable_extlang_python(0);
  }
  else if ( a2 )
  {
    sub_7D60((__int64)"IDAPython: unknown plugin argument %d", a2);
  }
  else
  {
    v8 = nullptr;
    v7 = -1;
    v9 = 0;
    netnode_check();
    netnode_qgetblob();
    if ( (unsigned __int8)sub_8420((__int64)&v8, 0, (__int64)src, (__int64)"ACCEPT TABS\nEnter Python expressions") )
    {
      v3 = (*(__int64 (**)(void))(qword_24798 + 536))();
      setup_new_execution(&v6, 1);
      v4 = src;
      if ( (_QWORD)v9 )
        v4 = v8;
      (*(void (__fastcall **)(const char *, _QWORD))(a1 + 816))(v4, 0);
      setup_new_execution(&v6, 0);
      (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v3);
      netnode_setblob();
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return 1;
}

