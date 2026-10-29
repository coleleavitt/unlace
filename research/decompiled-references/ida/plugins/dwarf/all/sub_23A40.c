void __fastcall sub_23A40(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // r12
  void (__fastcall **v4)(__int64 *); // rax
  void (__fastcall *v5)(__int64 *); // rax
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *a1;
      v4 = (void (__fastcall **)(__int64 *))**a1;
      if ( *v4 == sub_15E30 )
      {
        if ( v3 )
        {
          v5 = v4[2];
          if ( v5 == sub_15D70 )
          {
            v6 = (_QWORD *)v3[16];
            *v3 = (__int64)&off_C71D8;
            if ( v6 )
            {
              v7 = v6[2];
              while ( v7 )
              {
                sub_15270(*(_QWORD **)(v7 + 24));
                v8 = (void *)v7;
                v7 = *(_QWORD *)(v7 + 16);
                operator delete(v8, 0x30u);
              }
              operator delete(v6, 0x30u);
            }
            v9 = v3[19];
            while ( v9 )
            {
              v10 = (_QWORD *)v9;
              sub_159F0(*(_QWORD **)(v9 + 24));
              v11 = *(_QWORD *)(v9 + 32);
              v9 = *(_QWORD *)(v9 + 16);
              if ( v11 )
              {
                v10[5] = 0;
                qfree(v11);
              }
              operator delete(v10, 0x48u);
            }
            v12 = v3[12];
            if ( v12 )
            {
              v3[13] = 0;
              qfree(v12);
            }
            operator delete(v3, 0xC0u);
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

