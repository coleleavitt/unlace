bool __fastcall sub_199BE0(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
