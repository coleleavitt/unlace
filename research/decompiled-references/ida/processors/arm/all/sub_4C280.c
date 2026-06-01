void __fastcall sub_4C280(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (void *)v3[1];
      if ( v4 )
        operator delete(v4, v3[3] - (_QWORD)v4);
      v3 += 4;
    }
    while ( v2 != v3 );
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
}
