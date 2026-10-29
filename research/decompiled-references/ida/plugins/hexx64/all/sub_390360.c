unsigned __int64 __fastcall sub_390360(__int64 a1, __int64 *a2, char a3, double a4)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  double v12; // xmm0_8
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 i; // r13
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 j; // r13
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 &= ~2u;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 104))-- == 1 )
    {
      v14 = *(_QWORD **)(a1 + 32);
      if ( v14 )
      {
        sub_258970(*(__int64 **)(a1 + 32));
        v15 = v14[23];
        if ( v15 )
        {
          v16 = v14[24];
          if ( v16 )
          {
            for ( i = 0; i != v16; ++i )
            {
              v18 = (__int64 *)(v15 + 24 * i);
              v19 = *v18;
              if ( *v18 )
              {
                v18[1] = 0;
                qfree(v19);
                v15 = v14[23];
              }
            }
          }
          v14[24] = 0;
          qfree(v15);
        }
        v20 = v14[20];
        if ( v20 )
        {
          v14[21] = 0;
          qfree(v20);
        }
        v21 = v14[16];
        if ( v21 )
        {
          v22 = v14[17];
          if ( v22 )
          {
            for ( j = 0; j != v22; ++j )
            {
              v24 = (__int64 *)(v21 + 32 * j);
              v25 = *v24;
              if ( *v24 )
              {
                v24[1] = 0;
                qfree(v25);
                v21 = v14[16];
              }
            }
          }
          v14[17] = 0;
          qfree(v21);
        }
        sub_255050((__int64)(v14 + 2), a4);
        j__qfree((__int64)v14);
      }
    }
  }
  v8 = *a2;
  *(_QWORD *)(a1 + 32) = *a2;
  if ( v8 )
    ++*(_DWORD *)(v8 + 104);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(_QWORD *)(*a2 + 8);
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(v9 + 1344) = v10;
  *(_QWORD *)(v9 + 1352) = *(_QWORD *)(a1 + 32);
  sub_3A6200();
  v12 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          114,
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 32) + 128LL,
          &v26,
          &callui,
          v11);
  sub_33E140(*(_QWORD *)(a1 + 128), 0x65u, a1, v12);
  sub_38F620(a1, a3);
  return v27 - __readfsqword(0x28u);
}

