char __fastcall sub_39E350(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  __int64 v3; // rax

  v1 = *a1;
  *((_DWORD *)a1 + 8) = -1;
  v2 = *(__int64 (**)(void))(v1 + 16);
  if ( (char *)v2 != (char *)sub_39DBC0 )
    return v2();
  v3 = *(_QWORD *)(a1[3] + 8);
  *((_DWORD *)a1 + 8) = 0;
  return *(_QWORD *)(v3 + 440) != 0;
}

