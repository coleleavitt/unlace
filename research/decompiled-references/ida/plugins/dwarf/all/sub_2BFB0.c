void __fastcall sub_2BFB0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // r13
  void (__fastcall *v8)(_QWORD *); // rdx
  void (__fastcall *v9)(_QWORD *); // rax
  _QWORD *v10; // r12
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // rbp
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi

  v2 = a1[19];
  *a1 = &off_C79C8;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
    {
      v7 = (_QWORD *)a1[19];
      v8 = *(void (__fastcall **)(_QWORD *))*v7;
      if ( v8 == sub_15E30 )
      {
        if ( v7 )
        {
          v9 = *(void (__fastcall **)(_QWORD *))(*v7 + 16LL);
          if ( v9 == sub_15D70 )
          {
            v10 = (_QWORD *)v7[16];
            *v7 = &off_C71D8;
            if ( v10 )
            {
              v11 = v10[2];
              while ( v11 )
              {
                sub_293E0(*(_QWORD **)(v11 + 24));
                v12 = (void *)v11;
                v11 = *(_QWORD *)(v11 + 16);
                operator delete(v12, 0x30u);
              }
              operator delete(v10, 0x30u);
            }
            v13 = v7[19];
            while ( v13 )
            {
              v14 = (_QWORD *)v13;
              sub_29E10(*(_QWORD **)(v13 + 24));
              v15 = *(_QWORD *)(v13 + 32);
              v13 = *(_QWORD *)(v13 + 16);
              if ( v15 )
              {
                v14[5] = 0;
                qfree(v15);
              }
              operator delete(v14, 0x48u);
            }
            v16 = v7[12];
            if ( v16 )
            {
              v7[13] = 0;
              qfree(v16);
            }
            operator delete(v7, 0xC0u);
          }
          else
          {
            v9((_QWORD *)a1[19]);
          }
        }
      }
      else
      {
        v8((_QWORD *)a1[19]);
      }
    }
  }
  *a1 = &off_C7980;
  clear_tinfo_t(a1 + 1);
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
    a1[2] = 0;
    a1[4] = 0;
  }
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    qfree(v6);
  }
  clear_tinfo_t(a1 + 1);
  operator delete(a1, 0xA8u);
}

