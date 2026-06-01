__int64 __fastcall sub_9610(__int64 a1, __int64 a2)
{
  int *v2; // rcx

  v2 = &dword_D944;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(int **)(a1 + 136);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)a2 + 368LL))(a2, 31, 0, v2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}

