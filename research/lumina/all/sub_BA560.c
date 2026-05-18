void __fastcall sub_BA560(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *); // rdx
  void (__fastcall *v5)(_QWORD *); // rax
  __int64 v6; // rdi

  *a1 = &off_239C90;
  if ( a1[3] )
  {
    sub_11E660();
    a1[3] = 0;
  }
  v1 = a1[2];
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
    {
      v3 = (_QWORD *)a1[2];
      v4 = *(void (__fastcall **)(_QWORD *))*v3;
      if ( v4 == sub_BA500 )
      {
        if ( v3 )
        {
          v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 16LL);
          if ( v5 == sub_BA4D0 )
          {
            v6 = v3[2];
            *v3 = &off_239C40;
            if ( v6 )
              sub_11D2D0();
            operator delete(v3, 0x18u);
          }
          else
          {
            v5(v3);
          }
        }
      }
      else
      {
        v4(v3);
      }
    }
  }
}
