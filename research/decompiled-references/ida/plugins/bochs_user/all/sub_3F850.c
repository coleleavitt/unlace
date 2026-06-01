void __fastcall sub_3F850(_QWORD *a1)
{
  _QWORD *v1; // r13
  void (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rbp
  void *v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi

  v1 = (_QWORD *)a1[1];
  *a1 = off_71D98;
  if ( v1 )
  {
    v2 = *(void (__fastcall **)(_QWORD *))(*v1 + 8LL);
    if ( v2 == sub_3F7B0 )
    {
      v3 = v1[519];
      *v1 = &off_71D78;
      while ( v3 )
      {
        v4 = (void *)v3;
        sub_3F6A0(*(void ***)(v3 + 24));
        v5 = *(_QWORD *)(v3 + 56);
        v3 = *(_QWORD *)(v3 + 16);
        while ( v5 )
        {
          sub_3F4D0(*(_QWORD **)(v5 + 24));
          v6 = (void *)v5;
          v5 = *(_QWORD *)(v5 + 16);
          operator delete(v6, 0x28u);
        }
        operator delete(v4, 0x58u);
      }
      if ( v1[2] )
      {
        v1[3] = 0;
        qfree();
      }
      operator delete(v1, 0x1068u);
    }
    else
    {
      v2(v1);
    }
  }
}

