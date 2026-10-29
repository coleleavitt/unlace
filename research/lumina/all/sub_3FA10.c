_QWORD *__fastcall sub_3FA10(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int8 v13; // dl
  _QWORD *result; // rax
  _QWORD *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // si
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // si
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax

  v5 = (__int64 *)a3;
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v25 = a1[4];
      v26 = *(_QWORD *)(a3 + 8);
      v27 = *(_QWORD *)(v25 + 40);
      v28 = v26;
      if ( v27 <= v26 )
        v28 = *(_QWORD *)(v25 + 40);
      if ( v28 )
      {
        a5 = *(_QWORD *)(v25 + 32);
        v29 = *(_QWORD *)a3;
        v30 = 0;
        while ( 1 )
        {
          a3 = *(unsigned __int8 *)(a5 + v30);
          a4 = *(unsigned __int8 *)(v29 + v30);
          if ( (unsigned __int8)a3 < (unsigned __int8)a4 )
            break;
          if ( (unsigned __int8)a4 < (unsigned __int8)a3 )
            return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
          if ( v28 == ++v30 )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        if ( v27 >= v26 )
          return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
      }
      return nullptr;
    }
    return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
  }
  v7 = *(_QWORD *)(a3 + 8);
  v10 = a2[5];
  v8 = v10;
  if ( v7 <= v10 )
    v10 = *(_QWORD *)(a3 + 8);
  if ( v10 )
  {
    v11 = *(_QWORD *)a3;
    a5 = a2[4];
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_BYTE *)(v11 + v12);
      a4 = *(unsigned __int8 *)(a5 + v12);
      if ( v13 < (unsigned __int8)a4 )
        break;
      if ( (unsigned __int8)a4 < v13 )
        goto LABEL_23;
      if ( v10 == ++v12 )
      {
        if ( v7 < v8 )
          break;
LABEL_23:
        v19 = 0;
        while ( 1 )
        {
          v20 = *(_BYTE *)(a5 + v19);
          v21 = *(_BYTE *)(v11 + v19);
          if ( v20 < v21 )
            goto LABEL_27;
          if ( v21 < v20 )
            return a2;
          if ( v10 == ++v19 )
            goto LABEL_46;
        }
      }
    }
  }
  else if ( v7 >= v8 )
  {
LABEL_46:
    if ( v8 >= v7 )
      return a2;
LABEL_27:
    if ( (_QWORD *)a1[4] != a2 )
    {
      result = (_QWORD *)std::_Rb_tree_increment(a2);
      v22 = result[5];
      v23 = v22;
      if ( v7 <= v22 )
        v23 = v7;
      if ( v23 )
      {
        a5 = result[4];
        a3 = 0;
        while ( 1 )
        {
          a4 = *(unsigned __int8 *)(*v5 + a3);
          v24 = *(_BYTE *)(a5 + a3);
          if ( (unsigned __int8)a4 < v24 )
            break;
          if ( v24 < (unsigned __int8)a4 )
            return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
          if ( v23 == ++a3 )
            goto LABEL_52;
        }
      }
      else
      {
LABEL_52:
        if ( v7 >= v22 )
          return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
      }
      if ( a2[3] )
        return result;
    }
    return nullptr;
  }
  result = a2;
  if ( (_QWORD *)a1[3] == a2 )
    return result;
  v15 = (_QWORD *)std::_Rb_tree_decrement(a2, v10, a2, a4, a5);
  v16 = v15[5];
  v17 = v16;
  if ( v7 <= v16 )
    v17 = v7;
  if ( v17 )
  {
    a5 = *v5;
    a3 = 0;
    do
    {
      a4 = *(unsigned __int8 *)(v15[4] + a3);
      v18 = *(_BYTE *)(a5 + a3);
      if ( (unsigned __int8)a4 < v18 )
        goto LABEL_17;
      if ( v18 < (unsigned __int8)a4 )
        return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
    }
    while ( v17 != ++a3 );
  }
  if ( v16 >= v7 )
    return sub_3F8F0((__int64)a1, v5, a3, a4, a5);
LABEL_17:
  result = a2;
  if ( !v15[3] )
    return nullptr;
  return result;
}
