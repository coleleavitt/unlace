bool __fastcall sub_199120(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
