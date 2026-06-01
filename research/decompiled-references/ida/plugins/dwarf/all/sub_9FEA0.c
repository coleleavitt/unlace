void __fastcall sub_9FEA0(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // rbx
  void (__fastcall **v4)(__int64 *); // rax
  void (__fastcall *v5)(__int64 *); // rax
  __int64 v6; // rax
  __int64 v7; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *a1;
      v4 = (void (__fastcall **)(__int64 *))**a1;
      if ( (char *)*v4 == (char *)sub_12F10 )
      {
        if ( v3 )
        {
          v5 = v4[2];
          if ( v5 == sub_80130 )
          {
            *v3 = (__int64)off_C9528;
            v6 = v3[2];
            if ( v6 )
            {
              v7 = v3[3];
              if ( v7 )
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v6 + 88) + 480LL))(
                  *(_QWORD *)(v6 + 160),
                  v7,
                  8);
            }
            operator delete(v3, 0x20u);
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

