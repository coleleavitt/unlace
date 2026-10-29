void __fastcall sub_33F40(__int64 a1)
{
  _QWORD *v2; // r14
  void (__fastcall *v3)(_QWORD *); // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rdi

  v2 = *(_QWORD **)(a1 + 520);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(_QWORD *))(*v2 + 104LL);
    if ( v3 == sub_27C30 )
    {
      v4 = v2[12];
      *v2 = off_AA180;
      if ( v4 )
      {
        v2[13] = 0;
        qfree(v4);
      }
      v5 = v2[8];
      while ( v5 )
      {
        v6 = (_QWORD *)v5;
        sub_27840(*(void **)(v5 + 24));
        v7 = *(_QWORD *)(v5 + 152);
        v5 = *(_QWORD *)(v5 + 16);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = v6[18];
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = v6[12];
        if ( v9 )
        {
          v6[13] = 0;
          qfree(v9);
        }
        v10 = v6[8];
        while ( v10 )
        {
          v11 = (_QWORD *)v10;
          sub_27580(*(_QWORD **)(v10 + 24));
          v12 = *(_QWORD *)(v10 + 32);
          v10 = *(_QWORD *)(v10 + 16);
          if ( v12 )
          {
            v11[5] = 0;
            qfree(v12);
          }
          operator delete(v11, 0x40u);
        }
        operator delete(v6, 0xA8u);
      }
      operator delete(v2, 0x78u);
    }
    else
    {
      v3(*(_QWORD **)(a1 + 520));
    }
  }
  *(_QWORD *)(a1 + 520) = 0;
}
