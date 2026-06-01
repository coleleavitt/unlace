__int64 __fastcall sub_3DF220(
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
  __int64 v20; // rcx
  __int64 *v21; // r11
  __m128i v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdx
  __int64 result; // rax
  int v26; // eax
  __int64 v27; // rax
  unsigned __int8 v29; // [rsp+0h] [rbp-78h]
  int v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+8h] [rbp-70h]
  int v32; // [rsp+8h] [rbp-70h]
  __m128i v33; // [rsp+10h] [rbp-68h] BYREF
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v8 = nullptr;
  v10 = (char *)&unk_4317E0;
  v12 = 0;
  v36 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)v10;
      if ( *(_DWORD *)(a2 + 64) <= *(_DWORD *)v10 )
        break;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v12 + 1) )
      {
        v31 = *(_DWORD *)v10;
        v34 = qvector_reserve((__int64)&v34, (__int64)v8, v12 + 1, 4);
        v12 = v35;
        v8 = (_DWORD *)v34;
        v14 = v31;
      }
      v8[v12] = v14;
      v10 += 4;
      v8 = (_DWORD *)v34;
      v12 = v35 + 1;
      *(_QWORD *)&v35 = v35 + 1;
      if ( "$ mbui.view_id" == v10 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(a2 + 64) < v14 )
    {
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v12 + 1) )
      {
        v32 = *(_DWORD *)v10;
        v34 = qvector_reserve((__int64)&v34, (__int64)v8, v12 + 1, 4);
        v12 = v35;
        v8 = (_DWORD *)v34;
        v14 = v32;
      }
      v30 = v14;
      memmove(v8 + 1, v8, 4 * v12);
      *v8 = v30;
      v8 = (_DWORD *)v34;
      v12 = v35 + 1;
      *(_QWORD *)&v35 = v35 + 1;
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
        *(_QWORD *)&v35 = v12 - 1;
        v18 = sub_3D4440(v15, a4);
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
        sub_3DEE30(&v33, v17, *v21, v20, 0.0, a6, a7, a8);
        v22 = v33;
        v23 = *(volatile signed __int32 **)(a2 + 48);
        *(__m128i *)(a2 + 40) = v33;
        if ( v23 )
          goto LABEL_14;
LABEL_18:
        *(_DWORD *)(a2 + 64) = v16;
        if ( !v22.m128i_i64[0] )
          goto LABEL_30;
        result = sub_3D8C80(a1, (__int64 (__fastcall ***)())a2, a3);
        v8 = (_DWORD *)v34;
        if ( (_BYTE)result )
          goto LABEL_22;
        v12 = v35;
        if ( !(_QWORD)v35 )
          goto LABEL_21;
      }
LABEL_28:
      v23 = *(volatile signed __int32 **)(a2 + 48);
      *(_QWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 48) = 0;
      if ( !v23 )
      {
        *(_DWORD *)(a2 + 64) = v16;
LABEL_30:
        v8 = (_DWORD *)v34;
        v12 = v35;
        continue;
      }
LABEL_14:
      v24 = v23 + 2;
      if ( *((_QWORD *)v23 + 1) == 0x100000001LL )
      {
        v27 = *(_QWORD *)v23;
        *((_QWORD *)v23 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v27 + 16))(
          v23,
          v17,
          v24);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 24LL))(v23);
        goto LABEL_17;
      }
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) != 1 )
        {
LABEL_17:
          v22.m128i_i64[0] = *(_QWORD *)(a2 + 40);
          goto LABEL_18;
        }
      }
      else
      {
        v26 = *((_DWORD *)v23 + 2);
        *((_DWORD *)v23 + 2) = v26 - 1;
        if ( v26 != 1 )
          goto LABEL_17;
      }
      sub_3D5690(v23);
      goto LABEL_17;
    }
    break;
  }
LABEL_21:
  result = 0;
LABEL_22:
  if ( v8 )
  {
    v29 = result;
    *(_QWORD *)&v35 = 0;
    qfree((__int64)v8);
    return v29;
  }
  return result;
}

