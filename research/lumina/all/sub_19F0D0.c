char __fastcall sub_19F0D0(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  pthread_mutex_t *v4; // rdi

  sub_19ED80(a1);
  v2 = *(_DWORD *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 5728) = --v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(a1 + 5712);
      if ( v3 == -1 )
      {
        LOBYTE(v2) = sub_19A570(*(pthread_mutex_t **)a1);
      }
      else
      {
        sub_1979E0(v3);
        v4 = *(pthread_mutex_t **)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        LOBYTE(v2) = sub_19A570(v4);
      }
    }
  }
  return v2;
}
