__int64 __fastcall sub_19A060(__int64 a1, int a2)
{
  sem_t *v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // r12d
  __time_t v5; // rdx
  __syscall_slong_t v6; // rbp
  struct timespec v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v2 = (sem_t *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) > 1u )
    v2 = *(sem_t **)(a1 + 24);
  if ( a2 != -1 )
  {
    LOBYTE(v3) = sub_199120(&v8);
    v4 = v3;
    if ( (_BYTE)v3 )
    {
      v5 = v8.tv_sec + a2 / 1000;
      v8.tv_sec = v5;
      v6 = v8.tv_nsec + 1000000 * (a2 % 1000);
      if ( v6 > 999999999 )
      {
        v8.tv_nsec = v6 - 1000000000;
        v8.tv_sec = v5 + 1;
      }
      else
      {
        v8.tv_nsec += 1000000 * (a2 % 1000);
      }
      while ( sem_timedwait(v2, &v8) )
      {
        if ( *__errno_location() != 4 )
          return 0;
      }
      return v4;
    }
    return 0;
  }
  while ( sem_wait(v2) )
  {
    if ( *__errno_location() != 4 )
      return 0;
  }
  return 1;
}
