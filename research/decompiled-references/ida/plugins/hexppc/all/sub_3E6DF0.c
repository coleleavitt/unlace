__int64 __fastcall sub_3E6DF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 (*v6)(void); // rdx
  int v7; // eax
  __int64 result; // rax

  *(_QWORD *)(a2 + 80) = *(_QWORD *)a3;
  v4 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 32) = v4;
  if ( v4 != -1 )
  {
    if ( *(_BYTE *)(a1[45] + 4413LL) )
    {
      v5 = a1[3];
      v6 = *(__int64 (**)(void))(*a1 + 24LL);
      v7 = 4;
      if ( (char *)v6 != (char *)sub_3E5F90 )
        v7 = *(char *)(v6() + 12);
      v4 += (int)v5 * v7;
    }
    else
    {
      v4 = -1;
    }
  }
  *(_QWORD *)(a2 + 56) = v4;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 24);
  result = 0;
  if ( *(_BYTE *)(a1[45] + 4413LL) )
    result = *(unsigned int *)(a3 + 28);
  *(_DWORD *)(a2 + 64) = result;
  return result;
}

