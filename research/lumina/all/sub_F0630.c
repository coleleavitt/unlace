int *__fastcall sub_F0630(__int64 *a1, int *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r14
  _BYTE *v5; // r13
  int *v7; // r15
  char v8; // al
  __int32 v9; // edx
  int v10; // ecx
  int v12; // ebx
  __m128i *v13; // rax
  __int64 *v14; // rax
  int v15; // esi
  _QWORD *v16; // rax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // [rsp+8h] [rbp-40h]

  v4 = 0;
  v5 = (_BYTE *)a4;
  if ( a2 )
    v4 = *a2;
  if ( !a3 )
  {
    v7 = a2;
    sub_D7E20((__int64)a1, a4);
    return v7;
  }
  v7 = a2;
  v19 = *a1;
  if ( a4 )
  {
    v8 = *(_BYTE *)a4;
    v9 = *(_DWORD *)a3;
    if ( *(_BYTE *)a4 == 0x8A )
      goto LABEL_16;
    if ( v8 == -80 )
    {
      v18 = *(_BYTE *)(a4 + 2);
      if ( v18 != -79 )
      {
        if ( v18 != -118 )
        {
LABEL_8:
          if ( v9 != 1 )
          {
            v10 = 1;
LABEL_10:
            v7 = a2;
            sub_DBD10((__int64)a1, "%d columns assigned %d values", v9, v10);
            goto LABEL_11;
          }
          goto LABEL_17;
        }
        v10 = **(_DWORD **)(*(_QWORD *)(a4 + 32) + 32LL);
        goto LABEL_15;
      }
    }
    else if ( v8 != -79 )
    {
      goto LABEL_8;
    }
    v10 = **(_DWORD **)(a4 + 32);
LABEL_15:
    if ( v10 != v9 )
      goto LABEL_10;
LABEL_16:
    v7 = a2;
    if ( v9 <= 0 )
    {
LABEL_22:
      if ( !*(_BYTE *)(v19 + 103) && *v5 == 0x8A && v7 )
      {
        v17 = *(_QWORD *)&v7[6 * v4 + 2];
        *(_QWORD *)(v17 + 24) = v5;
        v5 = nullptr;
        *(_DWORD *)(v17 + 44) = *(_DWORD *)a3;
      }
      goto LABEL_11;
    }
LABEL_17:
    v7 = a2;
    v12 = 0;
    do
    {
      v13 = sub_F0590((__int64)a1, (__int64)v5, v12, v9);
      if ( v13 )
      {
        v14 = sub_E0F20(a1, v7, (__int64)v13);
        v7 = (int *)v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)v14;
          v16 = &a3[2 * v12];
          *(_QWORD *)&v7[6 * v15 - 2] = v16[1];
          v16[1] = 0;
        }
      }
      v9 = *(_DWORD *)a3;
      ++v12;
    }
    while ( *(_DWORD *)a3 > v12 );
    goto LABEL_22;
  }
LABEL_11:
  sub_D7E20((__int64)a1, (__int64)v5);
  sub_CF6E0(v19, a3);
  return v7;
}
