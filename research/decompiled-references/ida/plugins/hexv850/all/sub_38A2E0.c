unsigned __int64 __fastcall sub_38A2E0(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 i; // r13
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 j; // r13
  _QWORD *v21; // rax
  _BYTE v22[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 &= ~2u;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      v13 = *(_QWORD **)(a1 + 32);
      if ( v13 )
      {
        sub_2535B0(*(__int64 **)(a1 + 32));
        v14 = v13[23];
        if ( v14 )
        {
          v15 = v13[24];
          if ( v15 )
          {
            for ( i = 0; i != v15; ++i )
            {
              v17 = (_QWORD *)(v14 + 24 * i);
              if ( *v17 )
              {
                v17[1] = 0;
                qfree();
                v14 = v13[23];
              }
            }
          }
          v13[24] = 0;
          qfree();
        }
        if ( v13[20] )
        {
          v13[21] = 0;
          qfree();
        }
        v18 = v13[16];
        if ( v18 )
        {
          v19 = v13[17];
          if ( v19 )
          {
            for ( j = 0; j != v19; ++j )
            {
              v21 = (_QWORD *)(v18 + 32 * j);
              if ( *v21 )
              {
                v21[1] = 0;
                qfree();
                v18 = v13[16];
              }
            }
          }
          v13[17] = 0;
          qfree();
        }
        sub_24FC90((__int64)(v13 + 2));
        j__qfree();
      }
    }
  }
  v6 = *a2;
  *(_QWORD *)(a1 + 32) = *a2;
  if ( v6 )
    ++*(_DWORD *)(v6 + 104);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = *(_QWORD *)(*a2 + 8);
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(v7 + 1344) = v8;
  v9 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(v7 + 1352) = v9;
  sub_3A0180(v22, 32, *v9);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    114,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 32) + 128LL,
    v22,
    &callui,
    v10);
  sub_3380C0(*(_QWORD *)(a1 + 128), 0x65u, a1);
  sub_3895A0(a1, a3, v11);
  return v23 - __readfsqword(0x28u);
}

