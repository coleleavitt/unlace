__int64 __fastcall sub_11730(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi

  while ( 1 )
  {
    *(_QWORD *)a1 = &off_238D8;
    v1 = qword_24798 == a1;
    *(_QWORD *)(a1 + 104) = &off_23908;
    if ( v1 )
      break;
    if ( under_debugger )
      BUG();
    interr();
    a1 = 30512;
  }
  v2 = a1;
  if ( *(_BYTE *)(a1 + 1152) && (*(unsigned int (**)(void))(a1 + 1024))() )
  {
    if ( *(_BYTE *)(a1 + 1153) && (*(__int64 (**)(void))(qword_24798 + 544))() )
      (*(void (**)(void))(qword_24798 + 536))();
    sub_8000(1);
    enable_python_cli(0);
    if ( dword_2446C > 0 )
      remove_extlang();
    if ( byte_24768 )
    {
      v3 = qword_24778;
      byte_24768 = 0;
      qword_24778 = 0;
      if ( v3 )
        (*(void (**)(void))(qword_24798 + 984))();
      del_idc_func();
    }
    del_idc_func();
    del_idc_func();
    del_idc_func();
    del_idc_func();
    if ( *(_BYTE *)(v2 + 1153) )
      (*(void (__fastcall **)(const char *))(qword_24798 + 992))("exec_python");
    v4 = xmmword_24658;
    *(_BYTE *)(v2 + 1152) = 0;
    while ( v4 )
    {
      --v4;
      idapython_unhook_from_notification_point(
        *((unsigned int *)qword_24650 + 8 * v4),
        *((_QWORD *)qword_24650 + 4 * v4 + 1),
        *((_QWORD *)qword_24650 + 4 * v4 + 2));
    }
  }
  v5 = *(void **)(v2 + 288);
  qword_24798 = 0;
  if ( v5 )
  {
    dlclose(v5);
    *(_QWORD *)(v2 + 288) = 0;
  }
  if ( *(_QWORD *)(v2 + 264) )
  {
    *(_QWORD *)(v2 + 272) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 240) )
  {
    *(_QWORD *)(v2 + 248) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 216) )
  {
    *(_QWORD *)(v2 + 224) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 192) )
  {
    *(_QWORD *)(v2 + 200) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v2 + 144) )
  {
    *(_QWORD *)(v2 + 152) = 0;
    qfree();
  }
  *(_QWORD *)(v2 + 120) = &off_23CF8;
  remove_event_listener();
  *(_QWORD *)(v2 + 104) = &off_23CF8;
  return remove_event_listener();
}

