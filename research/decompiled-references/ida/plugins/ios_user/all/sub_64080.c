__int64 __fastcall sub_64080(_QWORD *a1, int a2)
{
  __int64 (*v2)(void); // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rdx

  v2 = *(__int64 (**)(void))(*a1 + 56LL);
  if ( (char *)v2 == (char *)sub_63A80 )
  {
    v3 = (_DWORD *)a1[6];
    v4 = &v3[14 * a1[7]];
    if ( !(56LL * a1[7]) )
      goto LABEL_8;
    while ( *v3 != a2 )
    {
      v3 += 14;
      if ( v4 == v3 )
        goto LABEL_8;
    }
  }
  else
  {
    v3 = (_DWORD *)v2();
  }
  if ( v3 )
  {
    qstrncpy();
    return 1;
  }
LABEL_8:
  qsnprintf();
  return 0;
}

