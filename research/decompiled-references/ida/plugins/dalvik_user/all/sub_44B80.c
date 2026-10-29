void __fastcall sub_44B80(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
      qfree();
    operator delete(v1, 0x20u);
  }
}

