void __fastcall sub_15E30(_QWORD *a1)
{
  void (*v2)(void); // rax
  _QWORD *v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v2 == (char *)sub_15D70 )
    {
      v3 = (_QWORD *)a1[16];
      *a1 = &off_C71D8;
      if ( v3 )
      {
        v4 = v3[2];
        while ( v4 )
        {
          sub_15270(*(_QWORD **)(v4 + 24));
          v5 = (void *)v4;
          v4 = *(_QWORD *)(v4 + 16);
          operator delete(v5, 0x30u);
        }
        operator delete(v3, 0x30u);
      }
      v6 = a1[19];
      while ( v6 )
      {
        v7 = (_QWORD *)v6;
        sub_159F0(*(_QWORD **)(v6 + 24));
        v8 = *(_QWORD *)(v6 + 32);
        v6 = *(_QWORD *)(v6 + 16);
        if ( v8 )
        {
          v7[5] = 0;
          qfree(v8);
        }
        operator delete(v7, 0x48u);
      }
      v9 = a1[12];
      if ( v9 )
      {
        a1[13] = 0;
        qfree(v9);
      }
      operator delete(a1, 0xC0u);
    }
    else
    {
      v2();
    }
  }
}

