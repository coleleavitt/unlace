__int64 __fastcall sub_613A0(int *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  bool (__fastcall *v4)(__int64, int); // rdx
  __int64 (*v5)(void); // rax
  int v6; // eax

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)a1 + 7) )
    return v2;
  v3 = *(_QWORD *)a1;
  v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
  if ( v4 == sub_60D00 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a1 + 12) + 4LL * a2) != -1 )
      goto LABEL_4;
    return v2;
  }
  if ( v4((__int64)a1, a2) )
    return v2;
  v3 = *(_QWORD *)a1;
LABEL_4:
  v5 = *(__int64 (**)(void))(v3 + 56);
  if ( (unsigned __int64)a2 < *((_QWORD *)a1 + 16) )
  {
    v2 = *(_DWORD *)(*((_QWORD *)a1 + 15) + 4LL * a2);
    if ( (char *)v5 == (char *)sub_60CC0 )
      v6 = a1[14];
    else
      v6 = v5();
    if ( (int)v2 >= v6 )
    {
      if ( !under_debugger )
        sub_37DDE0(50653);
      BUG();
    }
    return v2;
  }
  if ( (char *)v5 == (char *)sub_60CC0 )
    return (unsigned int)a1[14];
  else
    return v5();
}

