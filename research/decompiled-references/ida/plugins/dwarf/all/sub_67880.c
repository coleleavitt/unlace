char __fastcall sub_67880(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  int v3; // eax

  v1 = *a1;
  *((_DWORD *)a1 + 22) = -1;
  v2 = *(__int64 (**)(void))(v1 + 16);
  if ( (char *)v2 != (char *)sub_67390 )
    return v2();
  v3 = *((_DWORD *)a1 + 16);
  *((_DWORD *)a1 + 22) = 0;
  return v3 > 0;
}

