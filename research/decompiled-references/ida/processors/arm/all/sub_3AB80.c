void __fastcall sub_3AB80(void (__fastcall ****a1)(void *a1))
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(void *); // rdx
  void (__fastcall ***v5)(void *); // rbx
  void (__fastcall *v6)(void *); // rdx
  void (__fastcall *v7)(void *); // rax

  v2 = (__int64)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      v5 = *a1;
      v6 = **v5;
      if ( v6 == sub_387B0 )
      {
        if ( v5 )
        {
          v7 = (*v5)[2];
          if ( (char *)v7 == (char *)sub_38540 )
          {
            *v5 = (void (__fastcall **)(void *))&off_A0628;
            qregfree();
            operator delete(v5, 0x30u);
          }
          else
          {
            v7(v5);
          }
        }
      }
      else
      {
        v6(v5);
      }
    }
  }
}
