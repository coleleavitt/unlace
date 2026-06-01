__int64 __fastcall sub_E3970(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // r9
  _QWORD *v12; // r9
  unsigned __int64 v13; // rbx
  const void *v14; // rbp
  void *v15; // rax
  int tinfo_size; // [rsp+0h] [rbp-58h]
  _QWORD *v17; // [rsp+0h] [rbp-58h]
  _QWORD *v18; // [rsp+0h] [rbp-58h]
  _QWORD *v19; // [rsp+0h] [rbp-58h]

  tinfo_size = get_tinfo_size();
  v7 = *(int *)(a1 + 348);
  v8 = *(_DWORD *)(a1 + 348);
  if ( v7 >= a4[1] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v9 = 80 * v7;
    if ( !(unsigned int)compare_arglocs() )
      break;
    v7 = ++v8;
    if ( (unsigned __int64)v8 >= a4[1] )
      return 0xFFFFFFFFLL;
  }
  v10 = v9 + *a4;
  if ( *(_DWORD *)(v10 + 4) > tinfo_size )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v10 + 4) != tinfo_size )
  {
    if ( (unsigned __int8)sub_E3600((__int64 *)a1, a2, tinfo_size, a4, v8, a6) )
    {
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*a4 + v9 + 16);
      copy_argloc();
      copy_tinfo_t();
      *(_DWORD *)(a2 + 4) = tinfo_size;
      return 1;
    }
    return 0xFFFFFFFFLL;
  }
  v17 = (_QWORD *)(v9 + *a4);
  sub_120F80(a2);
  *(_QWORD *)(a2 + 16) = v17[2];
  copy_tinfo_t();
  v12 = v17;
  if ( (_QWORD *)(a2 + 32) != v17 + 4 )
  {
    v13 = v17[5];
    if ( v13 < 2 )
    {
      *(_QWORD *)(a2 + 40) = 0;
    }
    else
    {
      v14 = (const void *)v17[4];
      v15 = *(void **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 48) < v13 )
      {
        v15 = (void *)qvector_reserve();
        v12 = v17;
        *(_QWORD *)(a2 + 32) = v15;
      }
      *(_QWORD *)(a2 + 40) = v13;
      v18 = v12;
      memmove(v15, v14, v13 - 1);
      v12 = v18;
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v13 - 1) = 0;
    }
  }
  v19 = v12;
  copy_argloc();
  *(_DWORD *)(a2 + 72) = *((_DWORD *)v19 + 18);
  return v8 != a3;
}

