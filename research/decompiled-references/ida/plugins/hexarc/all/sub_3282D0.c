__int64 __fastcall sub_3282D0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  if ( *((_BYTE *)a1 + 8) != *((_BYTE *)a2 + 8) )
  {
    if ( !under_debugger )
      sub_37B760(51882);
    BUG();
  }
  v2 = *a1;
  v3 = *a1;
  v4 = *a1 + *((int *)a1 + 3);
  v5 = *a2 + *((int *)a2 + 3);
  if ( *a2 < (unsigned __int64)*a1 )
  {
    v2 = *a2;
    v3 = *a2;
    if ( v5 < v4 )
      v5 = *a1 + *((int *)a1 + 3);
    goto LABEL_5;
  }
  if ( v4 < v5 )
  {
LABEL_5:
    *a1 = v2;
    *((_DWORD *)a1 + 3) = v5 - v3;
    return 1;
  }
  return 0;
}

