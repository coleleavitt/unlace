void __fastcall sub_1A0DE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  if ( a3 )
  {
    if ( a3[1] || a3[8] )
    {
      v8 = *(unsigned int *)(a3[4] + 72LL);
      v9 = a3[11];
      *(_DWORD *)(a1 + 40) = v8;
      v10 = *(_DWORD *)(v9 + 72);
      if ( v10 == (_DWORD)v8 )
        v10 = -1;
    }
    else
    {
      v8 = 0xFFFFFFFFLL;
      v10 = -1;
    }
    *(_DWORD *)(a1 + 44) = v10;
    sub_1A0C20((_QWORD *)a1, (__int64 *)(a1 + 48), v8, v8, a5, a6, 0.0, a8);
    sub_1A0C20((_QWORD *)a1, (__int64 *)(a1 + 88), *(_DWORD *)(a1 + 44), v11, v12, v13, 0.0, a8);
  }
}

