void __fastcall sub_3D2720(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      v1[1] = 0;
      qfree();
    }
    operator delete(v1, 0x38u);
  }
}

