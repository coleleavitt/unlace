_QWORD *__fastcall sub_35E10(_QWORD *a1, _DWORD **a2, __int64 a3, double a4, __m128 a5)
{
  _DWORD *v7; // rsi
  _DWORD *v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  void *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  void *v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-50h]
  char v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v7 = *a2;
  v19 = a3;
  if ( !v7 )
  {
    v20 = nullptr;
    goto LABEL_12;
  }
  if ( *v7 > 1u )
  {
    v20 = v7;
    if ( *v7 != -1 )
      _InterlockedAdd(v7, 1u);
    v8 = *a2;
    if ( *a2 )
    {
      if ( *v8 <= 1u )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_12:
    v8 = nullptr;
LABEL_13:
    v12 = sub_35220(v8, a4, a5);
    *a2 = v12;
    v8 = v12;
LABEL_14:
    sub_35AA0((__int64)&v21, v8, &v19);
    v9 = v21;
    v10 = v22;
    if ( !v23 )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 144 * (v22 >> 7) + 128)
                + 8LL * *(unsigned __int8 *)(*(_QWORD *)(v21 + 32) + 144 * (v22 >> 7) + (v22 & 0x7F))) = v19;
    if ( v20 )
    {
      if ( *(_DWORD *)v20 != -1 && !_InterlockedSub((volatile signed __int32 *)v20, 1u) )
      {
        v13 = v20;
        if ( v20 )
        {
          v14 = *((_QWORD *)v20 + 4);
          if ( v14 )
          {
            v15 = v14 + 144LL * *(_QWORD *)(v14 - 8);
            if ( v14 == v15 )
            {
              v18 = 0;
            }
            else
            {
              do
              {
                v16 = v15;
                v17 = *(void **)(v15 - 16);
                v15 -= 144;
                if ( v17 )
                  operator delete[](v17);
              }
              while ( v13[4] != v15 );
              v18 = 144LL * *(_QWORD *)(v16 - 152);
            }
            operator delete[]((void *)(v15 - 8), v18 + 8);
          }
          operator delete(v13, 0x28u);
        }
      }
    }
    goto LABEL_10;
  }
  sub_35AA0((__int64)&v21, v7, &v19);
  v9 = v21;
  v10 = v22;
  if ( !v23 )
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 144 * (v22 >> 7) + 128)
              + 8LL * *(unsigned __int8 *)(*(_QWORD *)(v21 + 32) + 144 * (v22 >> 7) + (v22 & 0x7F))) = v19;
LABEL_10:
  *a1 = v9;
  a1[1] = v10;
  return a1;
}
