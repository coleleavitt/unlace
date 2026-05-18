void __fastcall sub_BA760(_DWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  _QWORD *v4; // rbp
  void (__fastcall *v5)(_QWORD *); // rdx
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v7; // rdi

  v1 = a1[6] == 1;
  *(_QWORD *)a1 = &off_239CB8;
  if ( !v1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1611);
    BUG();
  }
  v2 = *((_QWORD *)a1 + 2);
  if ( v2 )
  {
    v1 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v1 )
    {
      v4 = *((_QWORD **)a1 + 2);
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
            v6(*((_QWORD **)a1 + 2));
          }
        }
      }
      else
      {
        v5(*((_QWORD **)a1 + 2));
      }
    }
  }
  operator delete(a1, 0x20u);
}
