__int64 __fastcall sub_38F320(__int64 a1, double a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi

  if ( (get_merge_state() & 3) == 0 && (get_merge_state() & 4) == 0 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( v22 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(68, v22, &callui, v19, v20, v21);
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 104))-- == 1 )
    {
      v5 = *(_QWORD **)(a1 + 32);
      if ( v5 )
      {
        sub_258970(*(__int64 **)(a1 + 32));
        v6 = v5[23];
        if ( v6 )
        {
          v7 = v5[24];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = (__int64 *)(v6 + 24 * i);
              v10 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v10);
                v6 = v5[23];
              }
            }
          }
          v5[24] = 0;
          qfree(v6);
        }
        v11 = v5[20];
        if ( v11 )
        {
          v5[21] = 0;
          qfree(v11);
        }
        v12 = v5[16];
        if ( v12 )
        {
          v13 = v5[17];
          if ( v13 )
          {
            for ( j = 0; j != v13; ++j )
            {
              v15 = (__int64 *)(v12 + 32 * j);
              v16 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v16);
                v12 = v5[16];
              }
            }
          }
          v5[17] = 0;
          qfree(v12);
        }
        sub_255050((__int64)(v5 + 2), a2);
        j__qfree((__int64)v5);
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)a1 &= ~2u;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(v17 + 1352) = 0;
  result = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(result + 1344) = 0;
  return result;
}

