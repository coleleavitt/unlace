__int64 __fastcall sub_D63C0(__int64 a1, void **a2)
{
  _BOOL4 v2; // ebp

  if ( !a1 )
    return 7;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v2 = 0;
    *a2 = *(void **)(a1 + 16);
  }
  else
  {
    v2 = pthread_join(*(_QWORD *)a1, a2) != 0;
  }
  sub_C91C0(a1, (__int64)a2);
  return v2;
}
