__int64 __fastcall sub_3DD70(unsigned __int64 *a1, __int64 *a2, int a3)
{
  int v4; // r12d
  int *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( !a2 )
    return 0;
  v4 = 0;
  a2[1] = 0;
  if ( a3 <= 0 )
    return 1;
  while ( 1 )
  {
    v6 = (int *)*a1;
    v7 = *a1 + 4;
    *a1 = v7;
    if ( a1[1] < v7 )
      break;
    v9 = a2[1];
    v10 = *v6;
    v11 = *a2;
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v12 = qvector_reserve();
      *a2 = v12;
      v11 = v12;
      v9 = a2[1];
    }
    ++v4;
    *(_DWORD *)(v11 + 4 * v9) = v10;
    ++a2[1];
    if ( a3 == v4 )
      return 1;
  }
  return 0;
}

