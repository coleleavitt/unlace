void __fastcall sub_320E0(void *a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rsi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_320E0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 7);
      v1 = *((void **)v1 + 2);
      v2[5] = &off_4D850;
      if ( v3 )
        Z3_dec_ref(*(_QWORD *)(v2[6] + 8LL));
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}
