void __noreturn sub_19F130()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // edi
  pthread_mutex_t *v4; // rdi

  v0 = qword_2439F8;
  sub_19ED80(qword_2439F8);
  v1 = *(_DWORD *)(v0 + 5728);
  *(_QWORD *)(v0 + 5720) = 0;
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 5728) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 5712);
      if ( v3 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v0);
      }
      else
      {
        sub_1979E0(v3);
        v4 = *(pthread_mutex_t **)v0;
        *(_DWORD *)(v0 + 5712) = -1;
        sub_19A570(v4);
      }
    }
  }
  sub_186030((const __m128i *)"registry");
}
