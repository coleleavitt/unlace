void *__fastcall sub_1B110(int a1, signed __int64 *a2)
{
  signed __int64 v2; // r14
  void *v4; // [rsp+10h] [rbp-1058h]

  if ( !getsysfile() || !open_linput() )
    goto LABEL_8;
  v2 = qlsize();
  if ( v2 <= 0 )
  {
LABEL_7:
    close_linput();
LABEL_8:
    sub_CA20((__int64)"AUTOHIDE NONE\nCould not find/read debugger stub %s", "ida_kdstub.dll");
    return nullptr;
  }
  v4 = (void *)qvector_reserve();
  memset(v4, 0, v2);
  if ( v2 != qlread() )
  {
    if ( v4 )
      qfree();
    goto LABEL_7;
  }
  if ( (unsigned int)calc_crc32() == a1 )
  {
    sub_CAF0((__int64)"Kernel debugger stub is up to date...\n", v4);
    *a2 = 1;
    if ( v4 )
      qfree();
    close_linput();
    return nullptr;
  }
  *a2 = v2;
  close_linput();
  return v4;
}

