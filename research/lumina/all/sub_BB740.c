void __fastcall sub_BB740(_QWORD *a1)
{
  __int64 v1; // rdx
  bool v3; // zf
  _QWORD *v4; // rbp
  void (__fastcall *v5)(_QWORD *); // rdx
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // r12
  void (__fastcall *v10)(_QWORD *); // rdx
  void (__fastcall *v11)(_QWORD *); // rax
  __int64 v12; // rdi

  v1 = a1[2];
  *a1 = &off_239C68;
  if ( v1 )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v3 )
    {
      v4 = (_QWORD *)a1[2];
      v5 = *(void (__fastcall **)(_QWORD *))*v4;
      if ( v5 == sub_BA820 )
      {
        if ( v4 )
        {
          v6 = *(void (__fastcall **)(_QWORD *))(*v4 + 16LL);
          if ( v6 == sub_BA600 )
          {
            v7 = v4[3];
            *v4 = &off_239C90;
            if ( v7 )
            {
              sub_11E660();
              v4[3] = 0;
            }
            v8 = v4[2];
            if ( v8 )
            {
              v3 = (*(_DWORD *)(v8 + 8))-- == 1;
              if ( v3 )
              {
                v9 = (_QWORD *)v4[2];
                v10 = *(void (__fastcall **)(_QWORD *))*v9;
                if ( v10 == sub_BA500 )
                {
                  if ( v9 )
                  {
                    v11 = *(void (__fastcall **)(_QWORD *))(*v9 + 16LL);
                    if ( v11 == sub_BA4D0 )
                    {
                      v12 = v9[2];
                      *v9 = &off_239C40;
                      if ( v12 )
                        sub_11D2D0();
                      operator delete(v9, 0x18u);
                    }
                    else
                    {
                      v11((_QWORD *)v4[2]);
                    }
                  }
                }
                else
                {
                  v10((_QWORD *)v4[2]);
                }
              }
            }
            operator delete(v4, 0x20u);
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
  operator delete(a1, 0x18u);
}
