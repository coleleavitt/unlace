void __fastcall sub_40140(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // rbx
  void (__fastcall **v4)(__int64 *); // rax
  void (__fastcall *v5)(__int64 *); // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *a1;
      v4 = (void (__fastcall **)(__int64 *))**a1;
      if ( (char *)*v4 == (char *)sub_387B0 )
      {
        if ( v3 )
        {
          v5 = v4[2];
          if ( v5 == sub_38540 )
          {
            *v3 = (__int64)&off_A0628;
            qregfree();
            operator delete(v3, 0x30u);
          }
          else
          {
            v5(*a1);
          }
        }
      }
      else
      {
        (*v4)(*a1);
      }
    }
  }
}

