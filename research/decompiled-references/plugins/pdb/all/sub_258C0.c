void __fastcall sub_258C0(_BYTE *a1)
{
  bool v1; // zf
  void *v3; // rdi
  void (*v4)(void); // rax
  __int64 v5; // rdi

  v1 = a1[68] == 0;
  *(_QWORD *)a1 = off_AA010;
  if ( !v1 )
  {
    v3 = *((void **)a1 + 3);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 296LL);
      if ( (char *)v4 == (char *)sub_243F0 )
        operator delete(v3, 0x18u);
      else
        v4();
    }
  }
  v5 = *((_QWORD *)a1 + 4);
  if ( v5 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v5);
  }
  operator delete(a1, 0x48u);
}
