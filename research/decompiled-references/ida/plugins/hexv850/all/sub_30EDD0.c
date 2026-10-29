__int64 __fastcall sub_30EDD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v6 = 0;
  v23 = __readfsqword(0x28u);
  if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    v10 = *(unsigned int *)(a1 + 4);
    v11 = -1;
    v12 = *v9 + a2;
    if ( (_DWORD)v10 != 8 )
    {
      v10 = (unsigned int)(8 * v10);
      v11 = (1LL << v10) - 1;
      v12 &= v11;
    }
    v13 = v9[1] + *v9 + a2 - 1;
    *(_QWORD *)(a1 + 16) = 0;
    v14 = v11 & v13;
    v15 = v14 + 1;
    if ( v14 >= v12 )
    {
      v21 = v12;
      v22 = v15 - v12;
      sub_3112F0(a1 + 8, &v21, v15 - v12, v10, a5, a6);
    }
    else
    {
      v22 = v14 + 1;
      v21 = 0;
      sub_3112F0(a1 + 8, &v21, v15, v10, a5, a6);
      v19 = *(unsigned int *)(a1 + 4);
      v20 = -1;
      if ( (_DWORD)v19 != 8 )
      {
        v19 = (unsigned int)(8 * v19);
        v20 = (1LL << v19) - 1;
      }
      v21 = v12;
      v22 = v20 - v12 + 1;
      sub_3112F0(a1 + 8, &v21, v16, v19, v17, v18);
    }
    return 1;
  }
  return v6;
}

