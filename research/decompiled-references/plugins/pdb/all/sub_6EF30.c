void __fastcall sub_6EF30(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = v1[2];
    if ( v2 )
    {
      v1[3] = 0;
      qfree(v2);
    }
    operator delete(v1, 0x28u);
  }
}
