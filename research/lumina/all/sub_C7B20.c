__int64 __fastcall sub_C7B20(__int64 a1, _QWORD *a2)
{
  struct timeval v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  gettimeofday(&v3, nullptr);
  *a2 = 1000 * v3.tv_sec + v3.tv_usec / 1000 + 210866760000000LL;
  return 0;
}
