bool __fastcall sub_19A570(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}
