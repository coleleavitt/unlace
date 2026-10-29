__int64 __fastcall sub_19C460(__int64 a1, int a2, double a3)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r13d
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // eax
  int *v13; // rax
  int v14; // edx
  int v15; // eax

  v3 = *(_QWORD **)(a1 + 16);
  v4 = (_QWORD *)v3[35];
  v5 = v4[58];
  if ( !v5 )
  {
    if ( !under_debugger )
      sub_383060(0xCB58u, a3);
    BUG();
  }
  v6 = *(_DWORD *)(a1 + 184) - 1;
  if ( v6 < 0 || (unsigned __int64)v6 >= v3[13] )
    v7 = -1;
  else
    v7 = *(_DWORD *)(v3[12] + 4LL * v6);
  v8 = *(_DWORD *)(a1 + 208) - 1;
  if ( v8 < 0 || (unsigned __int64)v8 >= v3[16] )
    v9 = -1;
  else
    v9 = *(_DWORD *)(v3[15] + 4LL * v8);
  v10 = v5 - 1;
  if ( (int)v5 - 1 >= 0 )
  {
    do
    {
      v13 = (int *)sub_13D280(v4, v10, a3);
      v14 = *v13;
      if ( (unsigned int)(*v13 - 3) <= 1 )
      {
        v11 = v13[2];
        if ( v14 == 4 )
        {
          if ( v7 == (unsigned __int16)v11 || v9 == (unsigned __int16)v11 )
            return v10;
          v11 >>= 16;
        }
        if ( v9 == v11 || v7 == v11 )
          return v10;
      }
      else
      {
        v15 = sub_1C3500(v13);
        if ( a2 > v15 && v15 != -1 )
          return v10;
      }
    }
    while ( v10-- != 0 );
    v5 = v4[58];
  }
  return *(unsigned int *)(v4[57] + 4 * v5 - 4);
}

