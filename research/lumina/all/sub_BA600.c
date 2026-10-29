void __fastcall sub_BA600(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v4; // rbp
  void (__fastcall *v5)(_QWORD *); // rdx
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v7; // rdi

  *a1 = &off_239C90;
  if ( a1[3] )
  {
    sub_11E660();
    a1[3] = 0;
  }
  v2 = a1[2];
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
    {
      v4 = (_QWORD *)a1[2];
      v5 = *(void (__fastcall **)(_QWORD *))*v4;
      if ( v5 == sub_BA500 )
      {
        if ( v4 )
        {
          v6 = *(void (__fastcall **)(_QWORD *))(*v4 + 16LL);
          if ( v6 == sub_BA4D0 )
          {
            v7 = v4[2];
            *v4 = &off_239C40;
            if ( v7 )
              sub_11D2D0();
            operator delete(v4, 0x18u);
          }
          else
          {
            v6((_QWORD *)a1[2]);
          }
        }
      }
      else
      {
        v5((_QWORD *)a1[2]);
      }
    }
  }
  operator delete(a1, 0x20u);
}
