_QWORD *__fastcall sub_62C60(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const char *v6; // r15
  unsigned int v8; // ebx
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64, unsigned __int64); // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v20; // [rsp+18h] [rbp-50h]
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v20 = a1;
  v21[1] = __readfsqword(0x28u);
  *((_DWORD *)a1 + 2) = 0;
  a1[2] = 0;
  a1[3] = a1 + 1;
  a1[4] = a1 + 1;
  a1[5] = 0;
  if ( a5 < a6 )
  {
    v6 = a2;
    v8 = a5;
    v9 = 8LL * a5;
    do
    {
      while ( 1 )
      {
        if ( v8 >= *(_DWORD *)(a3 + 64) )
        {
          if ( !under_debugger )
            interr(52719);
          BUG();
        }
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v8) + 32LL);
        hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64, unsigned __int64))get_hexdsp(a1, a2);
        hexdsp(418, v21, a3, v10);
        v12 = v21[0];
        if ( v21[0] == -1 || v10 == v21[0] )
          v12 = v10;
        v13 = sub_265C0(a4, v12);
        a2 = (const char *)v21;
        a1 = (_QWORD *)a4;
        v21[0] = v13;
        sub_26310(a4, (int *)v21);
        v16 = v21[0];
        *(_QWORD *)(*((_QWORD *)v6 + 24) + v9) = v21[0];
        if ( BYTE4(v21[0]) )
          break;
        ++v8;
        v9 += 8;
        if ( a6 == v8 )
          return v20;
      }
      a1 = v20;
      a2 = (const char *)v21;
      sub_FDC0(v20, (int *)v21, v16, v14, v15);
      ++v8;
      v9 += 8;
    }
    while ( a6 != v8 );
  }
  return v20;
}

