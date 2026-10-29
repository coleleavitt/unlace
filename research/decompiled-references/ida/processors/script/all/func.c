void __fastcall func(void *a1)
{
  if ( *(_QWORD *)a1 )
    --*(_DWORD *)(*(_QWORD *)a1 + 12LL);
}

