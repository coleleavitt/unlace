__int64 __fastcall sub_32F920(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  if ( *((_BYTE *)a1 + 8) != *((_BYTE *)a2 + 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCAAAu, a3);
    BUG();
  }
  v3 = *a1;
  v4 = *a1;
  v5 = *a1 + *((int *)a1 + 3);
  v6 = *a2 + *((int *)a2 + 3);
  if ( *a2 < (unsigned __int64)*a1 )
  {
    v3 = *a2;
    v4 = *a2;
    if ( v6 < v5 )
      v6 = *a1 + *((int *)a1 + 3);
    goto LABEL_5;
  }
  if ( v5 < v6 )
  {
LABEL_5:
    *a1 = v3;
    *((_DWORD *)a1 + 3) = v6 - v4;
    return 1;
  }
  return 0;
}

