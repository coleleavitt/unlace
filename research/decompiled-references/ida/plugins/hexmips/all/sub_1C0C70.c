__int64 __fastcall sub_1C0C70(char *a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rax
  int v5; // eax

  cleanup_argloc();
  v2 = *a1;
  if ( *a1 == 5 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v4;
  }
  else if ( v2 == 15 )
  {
    copy_argloc();
  }
  else
  {
    if ( v2 != 1 )
      return 0;
    v5 = *((_DWORD *)a1 + 2);
    *(_DWORD *)a2 = 3;
    *(_DWORD *)(a2 + 8) = v5;
  }
  return 1;
}

