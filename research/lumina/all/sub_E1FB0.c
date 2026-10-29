__int64 *__fastcall sub_E1FB0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax

  v1 = *a1;
  v2 = sub_DBF10(*a1, 304);
  v3 = v2;
  if ( v2 )
  {
    v2[17] = 0;
    v2[37] = 0;
    memset(
      (void *)((unsigned __int64)(v2 + 18) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v2 - (((_DWORD)v2 + 144) & 0xFFFFFFF8) + 304) >> 3));
    *v2 = v1;
    v4 = *(_QWORD *)(v1 + 8);
    if ( v4 )
    {
      *(_QWORD *)(v4 + 8) = v3;
      v4 = *(_QWORD *)(v1 + 8);
    }
    v3[2] = v4;
    v3[1] = 0;
    *(_QWORD *)(v1 + 8) = v3;
    v3[3] = (__int64)a1;
    a1[2] = (__int64)v3;
    sub_E1710((__int64)v3, 64, 0, 1u, 0);
  }
  return v3;
}
