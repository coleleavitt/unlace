void __fastcall sub_BC3D0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *); // rdx
  void (__fastcall *v5)(_QWORD *); // rax
  __int64 v6; // rdi

  v1 = *(_DWORD *)(a1 + 24) == 1;
  *(_QWORD *)a1 = &off_239E00;
  if ( !v1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1585);
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
      if ( v4 == sub_BC370 )
      {
        if ( v3 )
        {
          v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 16LL);
          if ( v5 == sub_BC2F0 )
          {
            v6 = v3[2];
            *v3 = &off_239D88;
            if ( v6 )
              mysql_close();
            operator delete(v3, 0x20u);
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
