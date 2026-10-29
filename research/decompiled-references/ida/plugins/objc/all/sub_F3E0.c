void __fastcall sub_F3E0(_DWORD *a1)
{
  *(_QWORD *)a1 = &off_3C348;
  if ( a1[188] != -1 )
    unregister_custom_refinfo();
  operator delete(a1, 0x2F8u);
}
