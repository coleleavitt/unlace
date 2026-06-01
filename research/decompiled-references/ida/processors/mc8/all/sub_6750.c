__int64 __fastcall sub_6750(char *a1)
{
  return (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(
           a1,
           ((a1[256] >> 31) & 0xFFFFFFF0) + 8,
           *(&off_F980 + a1[256] + 1));
}

