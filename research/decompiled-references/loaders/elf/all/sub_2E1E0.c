void __fastcall sub_2E1E0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[19];
    if ( v2 )
    {
      v1[20] = 0;
      qfree(v2);
    }
    operator delete(v1, 0xC8u);
  }
}
