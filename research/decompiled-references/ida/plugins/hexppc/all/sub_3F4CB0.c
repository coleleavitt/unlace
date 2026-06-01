void __fastcall sub_3F4CB0(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // r14d
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(_DWORD *, unsigned int); // rdx
  __int64 v10; // rax

  if ( a1[10] )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v7 = (_DWORD *)a1[7];
      v8 = *(unsigned __int16 *)(a1[9] + 2 * v1);
      v9 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v7 + 168LL);
      if ( v9 == sub_3E59C0 )
        v4 = sub_3E59C0(v7, v8);
      else
        v4 = v9(v7, v8);
      if ( v4 != -1 )
      {
        v5 = a1[2];
        v6 = a1[1];
        if ( a1[3] < (unsigned __int64)(v5 + 1) )
        {
          v10 = qvector_reserve();
          a1[1] = v10;
          v6 = v10;
          v5 = a1[2];
        }
        *(_DWORD *)(v6 + 4 * v5) = v4;
        ++a1[2];
      }
      v1 = ++v2;
    }
    while ( (unsigned __int64)v2 < a1[10] );
  }
}

