void __fastcall sub_BA820(_QWORD *a1)
{
  void (*v2)(void); // rax
  __int64 v3; // rdx
  _QWORD *v5; // rbp
  void (__fastcall *v6)(_QWORD *); // rdx
  void (__fastcall *v7)(_QWORD *); // rax
  __int64 v8; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v2 == (char *)sub_BA600 )
    {
      *a1 = &off_239C90;
      if ( a1[3] )
      {
        sub_11E660();
        a1[3] = 0;
      }
      v3 = a1[2];
      if ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 8))-- == 1 )
        {
          v5 = (_QWORD *)a1[2];
          v6 = *(void (__fastcall **)(_QWORD *))*v5;
          if ( v6 == sub_BA500 )
          {
            if ( v5 )
            {
              v7 = *(void (__fastcall **)(_QWORD *))(*v5 + 16LL);
              if ( v7 == sub_BA4D0 )
              {
                v8 = v5[2];
                *v5 = &off_239C40;
                if ( v8 )
                  sub_11D2D0();
                operator delete(v5, 0x18u);
              }
              else
              {
                v7((_QWORD *)a1[2]);
              }
            }
          }
          else
          {
            v6((_QWORD *)a1[2]);
          }
        }
      }
      operator delete(a1, 0x20u);
    }
    else
    {
      v2();
    }
  }
}
