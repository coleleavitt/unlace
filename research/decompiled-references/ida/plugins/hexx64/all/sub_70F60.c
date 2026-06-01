__int64 __fastcall sub_70F60(__int64 a1, __int64 a2)
{
  double v4; // xmm0_8
  int v5; // eax
  unsigned int i; // ebp
  int j; // ebx
  __int64 v8; // r15
  __int64 *v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax
  int v22; // [rsp+0h] [rbp-44h]

  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_4EBC98;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 36) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v4 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  sub_673C0(a1, v5, v4);
  v22 = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, 0);
        (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != i;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i + 1) )
  {
    for ( j = 0; j < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, i); ++j )
    {
      v8 = (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, i, (unsigned int)j);
      v9 = (__int64 *)(24LL * (int)i + *(_QWORD *)(a1 + 48));
      v10 = v9[1];
      v11 = (_DWORD *)(*v9 + 4 * v10);
      if ( (_DWORD *)*v9 == v11 )
        goto LABEL_11;
      v12 = (_DWORD *)*v9;
      while ( (_DWORD)v8 != *v12 )
      {
        if ( v11 == ++v12 )
          goto LABEL_11;
      }
      if ( v12 == v11 )
      {
LABEL_11:
        v13 = v10 + 1;
        if ( v9[2] < v13 )
        {
          v19 = qvector_reserve((__int64)v9, *v9, v13, 4);
          v20 = v9[1];
          *v9 = v19;
          v11 = (_DWORD *)(v19 + 4 * v20);
        }
        *v11 = v8;
        ++v9[1];
        v14 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v8);
        v15 = v14[1];
        v16 = *v14;
        if ( v14[2] < (unsigned __int64)(v15 + 1) )
        {
          v18 = qvector_reserve((__int64)v14, v16, v15 + 1, 4);
          *v14 = v18;
          v16 = v18;
          v15 = v14[1];
        }
        *(_DWORD *)(v16 + 4 * v15) = i;
        ++v14[1];
      }
    }
    if ( v22 < (int)i )
    {
      v17 = 4LL * v22;
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 96) + v17) = -2;
        v17 += 4;
      }
      while ( 4 * (v22 + (unsigned __int64)(i - v22)) != v17 );
      v22 = i;
    }
    ++v22;
  }
  sub_67240(a1);
  *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}

