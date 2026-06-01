__int64 __fastcall sub_3EBE00(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 (*v7)(void); // rdx
  int v8; // eax
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // r13
  __int64 (*v12)(void); // rdx
  int v13; // eax

  v4 = *(_DWORD *)(*(_QWORD *)(a1[35] + 1504LL) + 80LL);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)a3;
  v5 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 32) = v5;
  if ( v5 != -1 )
  {
    v6 = a1[3];
    v7 = *(__int64 (**)(void))(*a1 + 24LL);
    v8 = 8;
    if ( (char *)v7 != (char *)sub_3EA140 )
      v8 = *(char *)(v7() + 12);
    v5 += (int)v6 * v8;
  }
  *(_QWORD *)(a2 + 56) = v5;
  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result != -1 )
    result = (unsigned int)((int)result / v4);
  *(_DWORD *)(a2 + 40) = result;
  v10 = *(_DWORD *)(a3 + 28);
  if ( v10 != -1 )
  {
    v11 = a1[3];
    v12 = *(__int64 (**)(void))(*a1 + 24LL);
    v13 = 8;
    if ( (char *)v12 != (char *)sub_3EA140 )
      v13 = *(char *)(v12() + 12);
    result = (unsigned int)((v10 - (int)v11 * v13) / (2 * v4));
    v10 = result;
  }
  *(_DWORD *)(a2 + 64) = v10;
  return result;
}

