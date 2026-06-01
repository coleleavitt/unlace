__int64 __fastcall sub_119B30(int **a1)
{
  char v1; // al
  __int64 v3; // rbp
  int v4; // ecx
  __int64 v5; // rax

  v1 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 4 )
    return sub_1197B0(a1[1]);
  if ( v1 == 14 )
  {
    v3 = sub_119B30(a1[1]);
    v4 = 4 * *((_DWORD *)a1 + 1);
    if ( (unsigned __int64)v4 <= 0x3F )
      v3 &= ~(-1LL << v4);
    v5 = v3 | (sub_119B30(a1[1] + 4) << (4 * *((_BYTE *)a1 + 4)));
    if ( (unsigned __int64)(4 * *((_DWORD *)a1 + 1)) < 0x40 )
      return v5;
    return v3;
  }
  else if ( v1 == 2 )
  {
    return sub_325910(~*((_QWORD *)a1[1] + 2), *((unsigned int *)a1 + 1), 0);
  }
  else
  {
    return 0;
  }
}

