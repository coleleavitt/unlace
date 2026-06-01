__int64 __fastcall sub_65720(int *a1, int a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  bool (__fastcall *v5)(__int64, int); // rdx
  __int64 (*v6)(void); // rax
  int v7; // eax

  v3 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)a1 + 7) )
    return v3;
  v4 = *(_QWORD *)a1;
  v5 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
  if ( v5 == sub_65080 )
  {
    if ( *(_DWORD *)(*((_QWORD *)a1 + 12) + 4LL * a2) != -1 )
      goto LABEL_4;
    return v3;
  }
  if ( v5((__int64)a1, a2) )
    return v3;
  v4 = *(_QWORD *)a1;
LABEL_4:
  v6 = *(__int64 (**)(void))(v4 + 56);
  if ( (unsigned __int64)a2 < *((_QWORD *)a1 + 16) )
  {
    v3 = *(_DWORD *)(*((_QWORD *)a1 + 15) + 4LL * a2);
    if ( (char *)v6 == (char *)sub_65040 )
      v7 = a1[14];
    else
      v7 = v6();
    if ( (int)v3 >= v7 )
    {
      if ( !under_debugger )
        sub_383060(0xC5DDu, a3);
      BUG();
    }
    return v3;
  }
  if ( (char *)v6 == (char *)sub_65040 )
    return (unsigned int)a1[14];
  else
    return v6();
}

