int __fastcall sub_C73F0(pthread_mutex_t *a1)
{
  int result; // eax

  result = pthread_mutex_trylock(a1);
  if ( result )
    return 5;
  return result;
}
