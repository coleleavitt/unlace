char __fastcall sub_119140(unsigned __int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v9; // rdi
  __int64 v11; // rax
  __int128 v12; // rdi
  __int64 v13; // r14
  int v14; // r9d
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // r13d
  int v20; // r9d
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rax
  unsigned __int8 *v24; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  char v27; // al
  __int64 v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+10h] [rbp-68h]
  int v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+10h] [rbp-68h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  int v34; // [rsp+1Ch] [rbp-5Ch]
  int v35; // [rsp+24h] [rbp-54h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF

  *((_QWORD *)&v9 + 1) = a4;
  *(_QWORD *)&v9 = a2;
  v37[1] = __readfsqword(0x28u);
  v36 = a3;
  v11 = sub_129440(v9, (__int64)&v36, 0);
  if ( !v11 )
    return 0;
  *((_QWORD *)&v12 + 1) = a5;
  *(_QWORD *)&v12 = a2;
  v13 = v11;
  if ( (unsigned __int8)sub_A9CB0(v12, v36, a3) )
    return 0;
  if ( (unsigned int)(*(_DWORD *)v13 - 9) <= 1 )
  {
    if ( *(_BYTE *)(v13 + 32) != 4 )
      return 0;
    v13 = *(_QWORD *)(v13 + 40);
  }
  v29 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
  if ( a6 != 2 || (v16 = sub_30D340(v29, (__int64)a2, &v36, (int *)v13)) == nullptr )
  {
    v14 = log2ceil();
    if ( *(_DWORD *)v13 == 23 )
    {
      v30 = v14;
      v19 = *(_DWORD *)(v13 + 36);
      if ( !(unsigned __int8)sub_152630(v13, &v35) )
        return 0;
      v20 = v30;
      if ( v35 != 8 * v19 - v30 || *(_BYTE *)(v13 + 32) != 4 )
        return 0;
      v21 = *(_DWORD **)(v13 + 40);
      if ( *v21 == 24 && v30 > 1 )
      {
        v34 = v30;
        v33 = *(_QWORD *)(v13 + 40);
        v27 = sub_152630(v33, v37);
        v21 = (_DWORD *)v33;
        v20 = v34;
        if ( v27 )
        {
          if ( v34 - 1 <= SLODWORD(v37[0]) )
          {
            v16 = (_DWORD *)(v33 + 32);
            goto LABEL_12;
          }
        }
      }
      v31 = v20;
      v22 = sub_30D5C0(v29, (__int64)a2, &v36, v21);
      v14 = v31;
      v16 = v22;
    }
    else
    {
      if ( *(_DWORD *)v13 != 20 )
        goto LABEL_7;
      v32 = v14;
      v23 = sub_11C8A0(v13, v37);
      if ( !v23 || a6 - 1 != sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL), *(_DWORD *)(v23 + 4), 0) )
        return 0;
      v24 = (unsigned __int8 *)v37[0];
      if ( *(_BYTE *)v37[0] == 4 )
      {
        v26 = *(_DWORD **)(v37[0] + 8LL);
        if ( *v26 == 9 && 8 * v26[9] >= v32 )
        {
          v24 = (unsigned __int8 *)(v26 + 8);
          v37[0] = v26 + 8;
        }
      }
      v25 = sub_30D610(v29, (__int64)a2, &v36, v24);
      v14 = v32;
      v16 = v25;
    }
    if ( v16 )
      goto LABEL_12;
LABEL_7:
    if ( 8 * *(_DWORD *)(v13 + 68) == v14 )
    {
      v16 = sub_30D5C0(v29, (__int64)a2, &v36, (_DWORD *)v13);
      if ( v16 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !a1 )
    return sub_152650(a5, v29, (__int64)v16, (__int64)v16);
  if ( *(_BYTE *)a5 == 4 )
  {
    v18 = *(_DWORD **)(a5 + 8);
    if ( *v18 == 8 )
      a5 = (__int64)(v18 + 8);
  }
  if ( *(_BYTE *)v16 == 4 )
  {
    v17 = *((_DWORD **)v16 + 1);
    if ( *v17 == 8 )
      v16 = v17 + 8;
  }
  return sub_152EE0(v29, a1, a5, (__int64)v16, *(_QWORD *)(v13 + 24), a2, a3);
}

