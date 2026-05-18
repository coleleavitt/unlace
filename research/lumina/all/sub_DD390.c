__int64 *__fastcall sub_DD390(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r13
  int v4; // ebp
  __int64 v5; // rbx
  char *v6; // r14
  _QWORD *v7; // rbx

  if ( !a2 )
    return nullptr;
  v2 = sub_DC1C0(a1, 48LL * (*a2 - 1) + 64);
  v3 = v2;
  if ( !v2 )
    return nullptr;
  *(_DWORD *)v2 = *a2;
  if ( (int)*a2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = 3LL * v4++;
      v5 *= 16;
      v6 = (char *)a2 + v5;
      v7 = (__int64 *)((char *)v3 + v5);
      v7[4] = sub_DD450(a1, *((_QWORD *)v6 + 4), 0);
      v7[3] = sub_DD150(a1, *((_DWORD **)v6 + 3), 0);
      v7[2] = sub_DC720(a1, *((const char **)v6 + 2));
    }
    while ( *a2 > v4 );
  }
  return v3;
}
