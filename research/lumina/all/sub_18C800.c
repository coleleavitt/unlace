void sub_18C800()
{
  _QWORD *v0; // rbx
  char *v1; // rbp
  void *v2; // rdi

  j__free(qword_2428D8);
  qword_2428D8 = nullptr;
  v0 = qword_2428C0;
  if ( byte_2428B8 )
  {
    v1 = (char *)qword_2428C0 + 16 * xmmword_2428C8;
    if ( qword_2428C0 != v1 )
    {
      do
      {
        v2 = (void *)v0[1];
        v0 += 2;
        j__free(v2);
      }
      while ( v0 != (_QWORD *)v1 );
      v0 = qword_2428C0;
    }
  }
  if ( v0 )
  {
    *(_QWORD *)&xmmword_2428C8 = 0;
    j__free(v0);
    qword_2428C0 = nullptr;
    *((_QWORD *)&xmmword_2428C8 + 1) = 0;
  }
}
