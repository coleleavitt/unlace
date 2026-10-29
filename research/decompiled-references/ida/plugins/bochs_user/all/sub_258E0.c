__int64 __fastcall sub_258E0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  char v5; // r14
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v11; // rax
  __int64 *v12; // rdx

  v5 = a4;
  if ( (a4 & 2) != 0 || a4 == 8 )
  {
    if ( (unsigned int)sub_27280(a1, 1, a2, a5) )
      return 0;
    v11 = qalloc_or_throw();
    *(_DWORD *)(v11 + 16) = 8;
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = a3;
    *(_DWORD *)(v11 + 40) = a5;
    *(_QWORD *)v11 = a1 + 776;
    v12 = *(__int64 **)(a1 + 784);
    *(_QWORD *)(v11 + 8) = v12;
    *v12 = v11;
    ++*(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 784) = v11;
    if ( (v5 & 1) == 0 )
      goto LABEL_4;
  }
  else if ( (a4 & 1) == 0 )
  {
LABEL_4:
    v8 = qalloc_or_throw();
    *(_DWORD *)(v8 + 16) = 1;
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = a3;
    *(_DWORD *)(v8 + 40) = a5;
    *(_QWORD *)v8 = a1 + 776;
    v9 = *(__int64 **)(a1 + 784);
    *(_QWORD *)(v8 + 8) = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 784) = v8;
    ++*(_QWORD *)(a1 + 792);
    return 1;
  }
  if ( !(unsigned int)sub_27280(a1, 0, a2, a5) )
    goto LABEL_4;
  return 0;
}

