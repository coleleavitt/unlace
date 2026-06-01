__int64 __fastcall sub_38A0A0(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 j; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi

  if ( (get_merge_state() & 3) == 0 && (get_merge_state() & 4) == 0 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(68, v17, &callui, v14, v15, v16);
  }
  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 104))-- == 1 )
    {
      v3 = *(_QWORD **)(a1 + 32);
      if ( v3 )
      {
        sub_253D70(*(__int64 **)(a1 + 32));
        v4 = v3[23];
        if ( v4 )
        {
          v5 = v3[24];
          if ( v5 )
          {
            for ( i = 0; i != v5; ++i )
            {
              v7 = (_QWORD *)(v4 + 24 * i);
              if ( *v7 )
              {
                v7[1] = 0;
                qfree();
                v4 = v3[23];
              }
            }
          }
          v3[24] = 0;
          qfree();
        }
        if ( v3[20] )
        {
          v3[21] = 0;
          qfree();
        }
        v8 = v3[16];
        if ( v8 )
        {
          v9 = v3[17];
          if ( v9 )
          {
            for ( j = 0; j != v9; ++j )
            {
              v11 = (_QWORD *)(v8 + 32 * j);
              if ( *v11 )
              {
                v11[1] = 0;
                qfree();
                v8 = v3[16];
              }
            }
          }
          v3[17] = 0;
          qfree();
        }
        sub_250450((__int64)(v3 + 2));
        j__qfree();
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)a1 &= ~2u;
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(v12 + 1352) = 0;
  result = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(result + 1344) = 0;
  return result;
}

