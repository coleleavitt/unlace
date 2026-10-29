_QWORD *__fastcall sub_28A40(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v6; // rsi
  __int64 *v7; // rdi
  int i; // ebx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD *, _QWORD); // rax
  char v16; // al
  int **v17; // rax
  int *v18; // rbx
  __int64 v19; // r14
  int v20; // r15d
  __int64 (__fastcall *v21)(__int64); // rax
  unsigned int v22; // ebx
  void (__fastcall *v23)(__int64, _QWORD *, _QWORD); // rax
  void (__fastcall *v24)(__int64, _QWORD *, _QWORD *); // rax
  _QWORD v25[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  *a1 = 0;
  a1[1] = 0;
  if ( *(_DWORD *)(a2 + 464) )
  {
    v26 = 0;
    v27 = 0;
    v26 = qvector_reserve(&v26, 0, 1, 4);
    *(_DWORD *)(v26 + 4 * v27) = 1;
    *(_QWORD *)&v27 = v27 + 1;
    hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(&v26, 0);
    v6 = (_QWORD *)(a2 + 448);
    v7 = &qword_E0 + 3;
    for ( i = hexdsp(227, v6, 0); *(_DWORD *)(a2 + 456) != i; i = v9(227, a2 + 448, (unsigned int)(i + 1)) )
    {
      v10 = v27;
      LODWORD(v25[0]) = i;
      v11 = v26;
      v12 = (__int64 *)(v27 + 1);
      if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
      {
        v12 = &v26;
        v26 = qvector_reserve(&v26, v26, v27 + 1, 4);
        v11 = v26;
        v10 = v27;
      }
      *(_DWORD *)(v11 + 4 * v10) = i;
      *(_QWORD *)&v27 = v27 + 1;
      v9 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v12, v11);
      v6 = (_QWORD *)(a2 + 448);
      v7 = &qword_E0 + 3;
    }
    v13 = v27;
    v25[0] = 0;
    v25[1] = 0;
    while ( v13 )
    {
      v14 = *(int *)(v26 + 4 * v13 - 4);
      *(_QWORD *)&v27 = v13 - 1;
      v15 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v7, v6);
      v6 = v25;
      v7 = &qword_C8 + 5;
      v16 = v15(205, v25, (unsigned int)v14);
      v13 = v27;
      if ( v16 )
      {
        v17 = (int **)(*(_QWORD *)(a2 + 48) + 24 * v14);
        v18 = *v17;
        v19 = (__int64)&(*v17)[(_QWORD)v17[1]];
        if ( (int *)v19 != *v17 )
        {
          do
          {
            v20 = *v18;
            v6 = (_QWORD *)v26;
            if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v13 + 1) )
            {
              v7 = &v26;
              v26 = qvector_reserve(&v26, v26, v13 + 1, 4);
              v13 = v27;
              v6 = (_QWORD *)v26;
            }
            *((_DWORD *)v6 + v13) = v20;
            ++v18;
            v13 = v27 + 1;
            *(_QWORD *)&v27 = v27 + 1;
          }
          while ( (int *)v19 != v18 );
        }
      }
    }
    v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v21 == sub_B9F0 )
    {
      v22 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = (__int64 *)a2;
      v22 = v21(a2);
    }
    v23 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v7, v6);
    v23(221, a1, v22);
    v24 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(221, a1);
    v24(210, a1, v25);
    qfree(v25[0]);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  return a1;
}

