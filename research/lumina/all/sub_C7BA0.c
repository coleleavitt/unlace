__int64 __fastcall sub_C7BA0(__int64 a1, double *a2)
{
  struct timeval v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  gettimeofday(&v3, nullptr);
  *a2 = (double)(int)(v3.tv_usec / 1000 + 1000 * LODWORD(v3.tv_sec) + 1045635584) / 86400000.0;
  return 0;
}
