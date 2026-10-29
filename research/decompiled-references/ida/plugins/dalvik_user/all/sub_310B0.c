char __fastcall sub_310B0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  bool v3; // zf

  v1 = *a1;
  *((_DWORD *)a1 + 10) = -1;
  v2 = *(__int64 (**)(void))(v1 + 16);
  if ( (char *)v2 != (char *)sub_30770 )
    return v2();
  v3 = a1[3] == 0;
  *((_DWORD *)a1 + 10) = 0;
  return !v3;
}

