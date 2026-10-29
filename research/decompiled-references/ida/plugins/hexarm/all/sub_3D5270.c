__int64 __fastcall sub_3D5270(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // r8d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r9
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8

  result = a2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a3 + 72);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a3 + 56);
  v5 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 40) = v5;
  v6 = *(_DWORD *)(a2 + 20);
  v7 = *(int *)(a2 + 24);
  if ( v6 < 0 )
  {
    *(_QWORD *)(result + 56) = v5;
    *(_QWORD *)(result + 64) = -1;
    *(_QWORD *)(result + 48) = -1;
    *(_DWORD *)(result + 32) = 73;
  }
  else
  {
    v8 = v6;
    if ( (unsigned __int64)v6 < *(_QWORD *)(a3 + 120)
      && (v7 & 0x80000000) == 0LL
      && (v9 = (_QWORD *)(*(_QWORD *)(a3 + 112) + 24LL * v6), (unsigned __int64)(int)v7 < v9[1])
      && (v10 = *(_QWORD *)(*v9 + 8LL * (int)v7)) != 0 )
    {
      v5 = *(_QWORD *)(v10 + 24);
    }
    else
    {
      v13 = *(_QWORD *)(a3 + 64);
      if ( v6 < *(_DWORD *)(v13 + 64) )
      {
        if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 64) )
          sub_3CF540(a4);
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8LL * v6);
        if ( v14 )
          v5 = *(_QWORD *)(v14 + 32);
      }
    }
    *(_QWORD *)(result + 56) = v5;
    *(_QWORD *)(result + 64) = -1;
    *(_QWORD *)(result + 48) = -1;
    *(_DWORD *)(result + 32) = 73;
    if ( v8 < *(_QWORD *)(a3 + 120) && (v7 & 0x80000000) == 0LL )
    {
      v11 = (_QWORD *)(*(_QWORD *)(a3 + 112) + 24 * v8);
      if ( v7 < v11[1] )
      {
        v12 = *(_QWORD *)(*v11 + 8 * v7);
        if ( v12 )
        {
          *(_QWORD *)(result + 48) = *(_QWORD *)(v12 + 24);
          *(_DWORD *)(result + 32) = *(_DWORD *)v12;
        }
      }
    }
  }
  return result;
}

