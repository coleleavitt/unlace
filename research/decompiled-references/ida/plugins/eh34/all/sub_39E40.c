__int64 __fastcall sub_39E40(_DWORD *a1, _DWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned int v6; // ebx
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  int i; // r12d
  __int64 (__fastcall *v9)(__int64); // rax
  int v10; // r14d
  __int64 v11; // r13
  __int64 (__fastcall *v12)(__int64, int); // rax
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 result; // rax
  int v29; // [rsp+0h] [rbp-44h]

  v3 = (__int64)a1;
  *(_QWORD *)a1 = off_8B6D8;
  *((_QWORD *)a1 + 1) = 0;
  *((_BYTE *)a1 + 32) = 0;
  *(_QWORD *)(a1 + 9) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)a1 + 6) = 0;
  *((_QWORD *)a1 + 9) = 0;
  *((_QWORD *)a1 + 12) = 0;
  *((_QWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 19) = 0;
  *((_OWORD *)a1 + 1) = 0;
  *(_OWORD *)(a1 + 14) = 0;
  *((_OWORD *)a1 + 5) = 0;
  *(_OWORD *)(a1 + 26) = 0;
  *((_OWORD *)a1 + 8) = 0;
  *((_OWORD *)a1 + 10) = 0;
  v4 = *(_QWORD *)a2;
  a1[36] = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(v4 + 56);
  if ( v5 == sub_B9F0 )
  {
    v6 = a2[14];
  }
  else
  {
    a1 = a2;
    v6 = v5((__int64)a2);
  }
  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, sub_B9F0);
  hexdsp(264, v3, v6);
  v29 = 0;
  for ( i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, 0);
        ;
        i = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, (unsigned int)(i + 1)) )
  {
    v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v9 == sub_B9F0 )
    {
      if ( a2[14] == i )
        break;
      goto LABEL_6;
    }
    if ( (unsigned int)v9((__int64)a2) == i )
      break;
LABEL_6:
    v10 = 0;
    v11 = 24LL * i;
    while ( 1 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
      if ( v12 == sub_BA40 )
        break;
      if ( v10 >= (int)v12((__int64)a2, i) )
        goto LABEL_25;
LABEL_11:
      v14 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
      if ( v14 == sub_BA80 )
        v15 = *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 24LL * i) + 4LL * v10);
      else
        v15 = (int)v14((__int64)a2, i, v10);
      v16 = (__int64 *)(v11 + *(_QWORD *)(v3 + 48));
      v17 = v16[1];
      v18 = (_DWORD *)(*v16 + 4 * v17);
      if ( (_DWORD *)*v16 == v18 )
        goto LABEL_19;
      v19 = (_DWORD *)*v16;
      while ( (_DWORD)v15 != *v19 )
      {
        if ( v18 == ++v19 )
          goto LABEL_19;
      }
      if ( v19 == v18 )
      {
LABEL_19:
        v20 = v17 + 1;
        if ( v16[2] < v20 )
        {
          v26 = qvector_reserve(v16, *v16, v20, 4);
          v27 = v16[1];
          *v16 = v26;
          v18 = (_DWORD *)(v26 + 4 * v27);
        }
        *v18 = v15;
        ++v16[1];
        v21 = (__int64 *)(*(_QWORD *)(v3 + 72) + 24 * v15);
        v22 = v21[1];
        v23 = *v21;
        if ( v21[2] < (unsigned __int64)(v22 + 1) )
        {
          v25 = qvector_reserve(v21, v23, v22 + 1, 4);
          *v21 = v25;
          v23 = v25;
          v22 = v21[1];
        }
        *(_DWORD *)(v23 + 4 * v22) = i;
        ++v21[1];
      }
      ++v10;
    }
    v13 = 0;
    if ( *((_QWORD *)a2 + 7) )
      v13 = *(_DWORD *)(*((_QWORD *)a2 + 6) + v11 + 8);
    if ( v10 < v13 )
      goto LABEL_11;
LABEL_25:
    if ( v29 < i )
    {
      v24 = 4LL * v29;
      do
      {
        *(_DWORD *)(*(_QWORD *)(v3 + 96) + v24) = -2;
        v24 += 4;
      }
      while ( 4 * (v29 + (unsigned __int64)(unsigned int)(i - v29)) != v24 );
      v29 = i;
    }
    ++v29;
  }
  sub_38FC0(v3);
  *(_DWORD *)(v3 + 36) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 80LL))(a2);
  result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 88LL))(a2);
  *(_DWORD *)(v3 + 40) = result;
  return result;
}

