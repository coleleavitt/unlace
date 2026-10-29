__int64 __fastcall sub_2BEF90(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 j; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v19[1] = __readfsqword(0x28u);
  v3 = *a2;
  v19[0] = v3;
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 104);
    v4 = sub_2ADC10((int *)(a1 + 8), v19);
    v5 = (*(_DWORD *)(v3 + 104))-- == 1;
    v6 = v4;
    if ( v5 )
    {
      sub_258970((__int64 *)v3);
      v7 = *(_QWORD *)(v3 + 184);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v3 + 192);
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v10 = (__int64 *)(v7 + 24 * i);
            v11 = *v10;
            if ( *v10 )
            {
              v10[1] = 0;
              qfree(v11);
              v7 = *(_QWORD *)(v3 + 184);
            }
          }
        }
        *(_QWORD *)(v3 + 192) = 0;
        qfree(v7);
      }
      v12 = *(_QWORD *)(v3 + 160);
      if ( v12 )
      {
        *(_QWORD *)(v3 + 168) = 0;
        qfree(v12);
      }
      v13 = *(_QWORD *)(v3 + 128);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v3 + 136);
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = (__int64 *)(v13 + 32 * j);
            v17 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v17);
              v13 = *(_QWORD *)(v3 + 128);
            }
          }
        }
        *(_QWORD *)(v3 + 136) = 0;
        qfree(v13);
      }
      sub_255050(v3 + 16, a3);
      j__qfree(v3);
    }
  }
  else
  {
    return (unsigned int)sub_2ADC10((int *)(a1 + 8), v19);
  }
  return v6;
}

