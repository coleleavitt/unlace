bool sub_19F7A0()
{
  pthread_mutex_t *v0; // rbp
  void *v2; // rbx

  v0 = (pthread_mutex_t *)qword_243A00;
  sub_19A520((pthread_mutex_t *)qword_243A00);
  while ( (_QWORD)xmmword_2439E8 )
  {
    v2 = *(void **)(qword_2439E0 + 8 * xmmword_2439E8 - 8);
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    sub_19F620(*(_QWORD *)(qword_2439E0 + 8 * xmmword_2439E8 - 8));
    operator delete(v2, 0x1668u);
  }
  return sub_19A570(v0);
}
