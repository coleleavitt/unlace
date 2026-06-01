void __fastcall sub_5D80(__int64 a1, double a2)
{
  if ( *(_QWORD *)(a1 + 48) == -1 )
    goto LABEL_7;
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
  {
    sub_56E0(a1);
    return;
  }
  if ( !qthread_create() )
  {
    sub_5470(
      (__int64)"failed to create thread for picture request (start: 0x%a, format: %s)\n",
      a2,
      *(const char **)(a1 + 32));
LABEL_7:
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
}

