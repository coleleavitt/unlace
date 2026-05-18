void __fastcall sub_4C840(__int64 a1)
{
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD *); // rax
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(_QWORD **)(a1 + 432);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(_QWORD *))(*v2 + 8LL);
    if ( v3 == sub_4B5A0 )
    {
      v4 = (void *)v2[18];
      *v2 = &off_23D538;
      if ( v4 )
      {
        v2[19] = 0;
        j__free(v4);
      }
      v5 = (void *)v2[15];
      if ( v5 )
      {
        v2[16] = 0;
        j__free(v5);
      }
      *v2 = &off_23D410;
      sub_167940(v2);
      operator delete(v2, 0xA8u);
    }
    else
    {
      v3(*(_QWORD **)(a1 + 432));
    }
  }
  *(_QWORD *)(a1 + 432) = 0;
}
