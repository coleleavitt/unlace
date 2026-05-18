bool __fastcall sub_19A520(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_lock(a1) == 0;
}
