__int64 *__fastcall sub_E5750(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r13
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // rax

  v6 = (int)a2;
  v7 = *a1;
  if ( a2 )
  {
    v8 = sub_E5530(a1, a2, 1, *(_DWORD *)a2);
    v9 = v8;
    if ( !v8 )
    {
      sub_D8260(v7, a2);
      return v9;
    }
    v6 = *(_DWORD *)v8 - 1;
  }
  else
  {
    v14 = sub_DBF10(*a1, 112);
    v9 = v14;
    if ( !v14 )
      return v9;
    v14[1] = 0;
    *v14 = 0x100000001LL;
    v14[13] = 0;
    memset(
      (void *)((unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v14 - (((_DWORD)v14 + 16) & 0xFFFFFFF8) + 112) >> 3));
    *((_DWORD *)v14 + 18) = -1;
  }
  if ( a4 && *a4 )
  {
    v10 = &v9[13 * v6];
    v10[3] = sub_DCE50(v7, (__int64)a4);
    v10[2] = sub_DCE50(v7, a3);
    return v9;
  }
  v12 = sub_DCE50(v7, a3);
  v13 = &v9[13 * v6];
  v13[3] = v12;
  v13[2] = 0;
  return v9;
}
