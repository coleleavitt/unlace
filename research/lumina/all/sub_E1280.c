__int64 *__fastcall sub_E1280(__int64 *a1, __int64 *a2, int *a3, int a4)
{
  __int64 *v4; // r15
  int v6; // r13d
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 i; // r14
  int v12; // eax
  __int32 v14; // eax
  int v16; // [rsp+Ch] [rbp-5Ch]
  __int64 v17; // [rsp+10h] [rbp-58h]
  int v18; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v19 = __readfsqword(0x28u);
  if ( a3 )
  {
    v16 = 0;
    if ( a2 )
      v16 = *(_DWORD *)a2;
    if ( *a3 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v9 = *a1;
        v10 = *(_QWORD *)&a3[6 * v6 + 2];
        if ( !v10 )
          break;
        v7 = sub_DD6E0(*a1, v10, 0, nullptr);
        v8 = (__int64)v7;
        if ( *(_BYTE *)(v9 + 103) )
        {
          if ( v7 )
            sub_D7720(v9, (__int64)v7);
          return v4;
        }
        if ( a4 )
        {
          if ( v7 )
          {
            v14 = v7->m128i_i32[1];
            for ( i = v8; (v14 & 0x41000) != 0; v14 = *(_DWORD *)(i + 4) )
            {
              if ( (v14 & 0x40000) != 0 )
                i = *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL);
              else
                i = *(_QWORD *)(i + 16);
              if ( !i )
                break;
            }
            goto LABEL_15;
          }
LABEL_14:
          i = 0;
LABEL_15:
          v17 = v8;
          v12 = sub_CE930(i, &v18);
          v8 = v17;
          if ( v12 )
          {
            *(_BYTE *)i = 121;
            *(_DWORD *)(i + 4) &= 0xCFFFFBFF;
            *(_QWORD *)(i + 8) = 0;
          }
        }
LABEL_8:
        v4 = sub_E0F20(a1, (int *)v4, v8);
        if ( v4 )
          LOBYTE(v4[3 * v6 + 3 + 3 * v16]) = a3[6 * v6 + 6];
        if ( *a3 <= ++v6 )
          return v4;
      }
      if ( *(_BYTE *)(v9 + 103) )
        return v4;
      v8 = 0;
      if ( !a4 )
        goto LABEL_8;
      goto LABEL_14;
    }
  }
  return v4;
}
