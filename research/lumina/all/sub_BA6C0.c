void __fastcall sub_BA6C0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *); // rdx
  void (__fastcall *v5)(_QWORD *); // rax
  __int64 v6; // rdi

  v1 = *(_DWORD *)(a1 + 24) == 1;
  *(_QWORD *)a1 = &off_239CB8;
  if ( !v1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1611);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v1 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v1 )
    {
      v3 = *(_QWORD **)(a1 + 16);
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
            v5(*(_QWORD **)(a1 + 16));
          }
        }
      }
      else
      {
        v4(*(_QWORD **)(a1 + 16));
      }
    }
  }
}
