__int64 __fastcall sub_79310(int *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r13d
  __int64 v9; // rdx
  int v10; // ecx
  signed int v11; // ebp
  __int64 result; // rax
  int v13; // ebx
  char v14; // dl
  unsigned int v15; // eax
  __int64 v16; // [rsp+0h] [rbp-28h]
  __int64 v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+10h] [rbp-18h]

  if ( (unsigned int)getinf(5) == 25 )
    goto LABEL_13;
  if ( a3 == 16 )
  {
    v14 = getinf_flag(67, 4, v4, v5, v6, v7, v16, v17, v18);
    v15 = *a1;
    if ( v14 )
    {
      v15 = (v15 + 1) & 0xFFFFFFFE;
      *a1 = v15;
    }
    if ( (unsigned __int64)(int)(v15 + 2) <= 8 )
      return sub_79150(a1, a2, a3, 8, 0);
LABEL_13:
    v8 = a3 + 7;
    goto LABEL_4;
  }
  v8 = a3 + 7;
  v9 = *a1;
  v10 = (a3 + 7) >> 3;
  if ( (unsigned __int64)(v10 + (int)v9) > 8 )
  {
LABEL_4:
    v11 = (a1[2] + 7) & 0xFFFFFFF8;
    a1[2] = v11;
    cleanup_argloc();
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v11;
    a1[2] += v8 & 0xFFFFFFF8;
    return 1;
  }
  if ( v10 != 1 )
    return sub_79150(a1, a2, a3, 8, 0);
  result = 0;
  if ( (unsigned __int64)((int)v9 + 1) <= 8 )
  {
    *a1 = v9 + 1;
    v13 = dword_8FE20[v9];
    cleanup_argloc();
    *(_DWORD *)a2 = 3;
    *(_DWORD *)(a2 + 8) = v13;
    return 1;
  }
  return result;
}
