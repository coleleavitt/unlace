void __fastcall python_timer_del(_QWORD *a1, int a2)
{
  void **v3; // rdi
  void **v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  char v10; // [rsp+0h] [rbp-8h]

  v3 = (void **)qword_24690;
  v4 = (void **)(qword_24690 + 8 * xmmword_24698);
  if ( (void **)qword_24690 == v4 )
    goto LABEL_12;
  while ( *v3 != a1 )
  {
    if ( v4 == ++v3 )
      goto LABEL_12;
  }
  if ( v4 == v3 )
  {
LABEL_12:
    if ( under_debugger )
      goto LABEL_15;
    v9 = (_QWORD *)&loc_771B;
    interr();
LABEL_14:
    sub_6C20((__int64)v9, a2, v5, v6, v7, v8, v10);
LABEL_15:
    BUG();
  }
  a2 = (_DWORD)v3 + 8;
  memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
  *(_QWORD *)&xmmword_24698 = xmmword_24698 - 1;
  if ( a1 )
  {
    v9 = (__int64 *)a1[1];
    if ( !v9 )
    {
LABEL_10:
      operator delete(a1, 0x10u);
      return;
    }
    if ( *v9 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_10;
    }
    goto LABEL_14;
  }
}

