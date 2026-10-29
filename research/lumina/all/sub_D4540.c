pthread_mutex_t *__fastcall sub_D4540(int a1, __int64 a2)
{
  pthread_mutex_t *v2; // rbx
  pthread_mutex_t *v4; // rax
  pthread_mutexattr_t attr; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = (pthread_mutex_t *)sub_D2260(0x28u, a2);
      if ( v2 )
      {
        pthread_mutexattr_init(&attr);
        pthread_mutexattr_settype(&attr, 1);
        pthread_mutex_init(v2, &attr);
        pthread_mutexattr_destroy(&attr);
      }
    }
    else
    {
      return (pthread_mutex_t *)((char *)&unk_241F80 + 40 * a1 - 80);
    }
  }
  else
  {
    v4 = (pthread_mutex_t *)sub_D2260(0x28u, a2);
    v2 = v4;
    if ( v4 )
      pthread_mutex_init(v4, nullptr);
  }
  return v2;
}
