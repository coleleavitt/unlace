__int64 __fastcall sub_3DF760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  _DWORD *v8; // r15
  char *v10; // r13
  __int64 v12; // rdx
  int v14; // r8d
  __int64 v15; // r11
  int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // r11
  __m128i v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdx
  __int64 result; // rax
  int v25; // eax
  __int64 v26; // rax
  unsigned __int8 v28; // [rsp+0h] [rbp-78h]
  int v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-70h]
  __m128i v32; // [rsp+10h] [rbp-68h] BYREF
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int128 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v8 = nullptr;
  v10 = (char *)&unk_42C8A0;
  v12 = 0;
  v35 = __readfsqword(0x28u);
  v34 = 0;
  v33 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)v10;
      if ( *(_DWORD *)(a2 + 64) <= *(_DWORD *)v10 )
        break;
      if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v12 + 1) )
      {
        v30 = *(_DWORD *)v10;
        v33 = qvector_reserve();
        v12 = v34;
        v8 = (_DWORD *)v33;
        v14 = v30;
      }
      v8[v12] = v14;
      v10 += 4;
      v8 = (_DWORD *)v33;
      v12 = v34 + 1;
      *(_QWORD *)&v34 = v34 + 1;
      if ( "$ mbui.view_id" == v10 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(a2 + 64) < v14 )
    {
      if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v12 + 1) )
      {
        v31 = *(_DWORD *)v10;
        v33 = qvector_reserve();
        v12 = v34;
        v8 = (_DWORD *)v33;
        v14 = v31;
      }
      v29 = v14;
      memmove(v8 + 1, v8, 4 * v12);
      *v8 = v29;
      v8 = (_DWORD *)v33;
      v12 = v34 + 1;
      *(_QWORD *)&v34 = v34 + 1;
    }
    v10 += 4;
  }
  while ( "$ mbui.view_id" != v10 );
LABEL_8:
  while ( 2 )
  {
    if ( v12 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 48);
        v16 = v8[v12 - 1];
        v17 = a4;
        *(_QWORD *)&v34 = v12 - 1;
        v18 = sub_3D4980(v15, a4);
        if ( v19 == v18 )
          break;
        while ( 1 )
        {
          v17 = *(_QWORD *)v18;
          if ( v16 == *(_DWORD *)(*(_QWORD *)v18 + 56LL) )
            break;
          v18 += 8;
          if ( v19 == v18 )
            goto LABEL_28;
        }
        sub_3DF370(&v32, v17, *v20, 0.0, a6, a7, a8);
        v21 = v32;
        v22 = *(volatile signed __int32 **)(a2 + 48);
        *(__m128i *)(a2 + 40) = v32;
        if ( v22 )
          goto LABEL_14;
LABEL_18:
        *(_DWORD *)(a2 + 64) = v16;
        if ( !v21.m128i_i64[0] )
          goto LABEL_30;
        result = sub_3D91C0(a1, a2, a3);
        v8 = (_DWORD *)v33;
        if ( (_BYTE)result )
          goto LABEL_22;
        v12 = v34;
        if ( !(_QWORD)v34 )
          goto LABEL_21;
      }
LABEL_28:
      v22 = *(volatile signed __int32 **)(a2 + 48);
      *(_QWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      if ( !v22 )
      {
        *(_DWORD *)(a2 + 64) = v16;
LABEL_30:
        v8 = (_DWORD *)v33;
        v12 = v34;
        continue;
      }
LABEL_14:
      v23 = v22 + 2;
      if ( *((_QWORD *)v22 + 1) == 0x100000001LL )
      {
        v26 = *(_QWORD *)v22;
        *((_QWORD *)v22 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v26 + 16))(
          v22,
          v17,
          v23);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
        goto LABEL_17;
      }
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) != 1 )
        {
LABEL_17:
          v21.m128i_i64[0] = *(_QWORD *)(a2 + 40);
          goto LABEL_18;
        }
      }
      else
      {
        v25 = *((_DWORD *)v22 + 2);
        *((_DWORD *)v22 + 2) = v25 - 1;
        if ( v25 != 1 )
          goto LABEL_17;
      }
      sub_3D5BD0(v22);
      goto LABEL_17;
    }
    break;
  }
LABEL_21:
  result = 0;
LABEL_22:
  if ( v8 )
  {
    v28 = result;
    *(_QWORD *)&v34 = 0;
    qfree();
    return v28;
  }
  return result;
}

