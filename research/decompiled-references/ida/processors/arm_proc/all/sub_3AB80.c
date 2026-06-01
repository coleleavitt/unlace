void __fastcall sub_3AB80(__int64 a1)
{
  void (__fastcall ***v1)(void *); // rdx
  void (__fastcall ***v3)(void *); // rbx
  void (__fastcall *v4)(void *); // rdx
  void (__fastcall *v5)(void *); // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree();
  }
  v1 = *(void (__fastcall ****)(void *))a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *(void (__fastcall ****)(void *))a1;
      v4 = ***(void (__fastcall ****)(void *))a1;
      if ( v4 == sub_387B0 )
      {
        if ( v3 )
        {
          v5 = (*v3)[2];
          if ( (char *)v5 == (char *)sub_38540 )
          {
            *v3 = (void (__fastcall **)(void *))&off_A0628;
            qregfree();
            operator delete(v3, 0x30u);
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

