__int64 __fastcall sub_117AA0(char *a1)
{
  char v1; // al
  __int64 v3; // rbp
  __int64 v4; // rax

  v1 = *a1;
  if ( *a1 == 4 )
    return sub_117A00(*((_QWORD *)a1 + 1));
  if ( v1 == 14 )
  {
    v3 = sub_117AA0(*((_QWORD *)a1 + 1));
    v4 = v3 | (sub_117AA0(*((_QWORD *)a1 + 1) + 16LL) << (4 * a1[4]));
    if ( (unsigned __int64)(4 * *((_DWORD *)a1 + 1)) < 0x40 )
      return v4;
    return v3;
  }
  else if ( v1 == 2 )
  {
    return sub_323690(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), *((unsigned int *)a1 + 1), 0);
  }
  else
  {
    return 0;
  }
}

