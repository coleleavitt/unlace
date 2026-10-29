unsigned __int64 __fastcall sub_1087E0(__int64 a1, unsigned __int64 **a2, int a3, __m128i a4)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 *v6; // rdx
  unsigned __int64 *v7; // rbx
  int v8; // r8d
  _QWORD *v9; // r11
  unsigned __int8 v10; // r10
  int v11; // ecx
  __int64 v12; // r13
  unsigned __int8 v14; // al
  int v15; // eax
  unsigned __int64 *v16; // rdx
  unsigned __int64 *i; // rax
  signed __int64 v19; // rsi
  _QWORD *v20; // rdi
  char v21; // al
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // [rsp+8h] [rbp-70h]
  unsigned __int8 v29; // [rsp+10h] [rbp-68h]
  int v30; // [rsp+10h] [rbp-68h]
  int v31; // [rsp+10h] [rbp-68h]
  _QWORD *v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+28h] [rbp-50h]
  _QWORD *v35; // [rsp+28h] [rbp-50h]
  unsigned __int8 v36; // [rsp+33h] [rbp-45h]
  _DWORD *v38; // [rsp+38h] [rbp-40h]

  v5 = (unsigned __int64 *)a2;
  v6 = *a2;
  v38 = *(_DWORD **)(*(_QWORD *)(a1 + 320) + 1504LL);
  if ( !*a2 )
    return sub_1045E0(v5, (__int64)v38);
  if ( !a2[1] )
    return sub_1045E0(v5, (__int64)v38);
  v7 = (unsigned __int64 *)v6[1];
  if ( v7 == v6 )
    return sub_1045E0(v5, (__int64)v38);
  v28 = a1;
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  do
  {
    if ( *((_BYTE *)v7 + 56) != 5 )
      goto LABEL_6;
    v19 = v7[6];
    v32 = v9;
    v30 = v8;
    v20 = *(_QWORD **)(v28 + 320);
    if ( v20[18] <= v19 )
      break;
    v36 = v10;
    v34 = v11;
    v21 = sub_1026C0(v20, v19, 1u);
    v11 = v34;
    v10 = v36;
    v8 = v30;
    v9 = v32;
    if ( v21 )
    {
LABEL_6:
      if ( !v9 )
      {
        if ( v8 >= v11 + *((_DWORD *)v7 + 16) )
          goto LABEL_56;
LABEL_15:
        if ( v10 )
        {
LABEL_16:
          if ( v11 > 1 )
            goto LABEL_37;
        }
        goto LABEL_17;
      }
      if ( v11 + *((_DWORD *)v7 + 16) > v8 )
        goto LABEL_15;
      if ( !v10 )
        goto LABEL_17;
      if ( v10 == 1 )
      {
        v35 = v9;
        v33 = v8;
        v31 = v11;
        v27 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v38 + 88LL))(v38, (unsigned int)v12);
        v11 = v31;
        v8 = v33;
        v9 = v35;
        v10 = 1;
        if ( !v27 )
          goto LABEL_16;
        v14 = *((_BYTE *)v7 + 56);
        if ( v14 != 1 )
        {
LABEL_11:
          if ( v11 <= 1 )
          {
            v10 = v14;
            v12 = v7[6];
            v8 = 0x7FFFFFFF;
            if ( v14 != 1 )
              goto LABEL_19;
            goto LABEL_13;
          }
LABEL_37:
          sub_108180(a2, v12, v10, v11, (__int64 *)(*(_QWORD *)(v28 + 80) + 24LL * a3), a4);
LABEL_17:
          v10 = *((_BYTE *)v7 + 56);
          v12 = v7[6];
          goto LABEL_18;
        }
      }
      else
      {
        v14 = *((_BYTE *)v7 + 56);
        if ( v14 != v10 )
          goto LABEL_11;
      }
      if ( v12 + v11 != v7[6] )
        goto LABEL_11;
      v25 = v7[4];
      if ( v25 != v9[1] )
        goto LABEL_50;
      if ( v25 )
      {
        v26 = 0;
        while ( *(_DWORD *)(v7[3] + 4 * v26) == *(_DWORD *)(*v9 + 4 * v26) )
        {
          if ( v25 == ++v26 )
            goto LABEL_58;
        }
LABEL_50:
        if ( v11 <= 1 )
        {
          v12 = v7[6];
LABEL_18:
          v8 = 0x7FFFFFFF;
          if ( v10 != 1 )
          {
LABEL_19:
            v11 = *((_DWORD *)v7 + 16);
            v9 = v7 + 3;
            goto LABEL_20;
          }
LABEL_13:
          v29 = v10;
          v15 = sub_1338F0(v38, nullptr, v12, 0x7FFFFFFFu);
          v10 = v29;
          v8 = v15;
          goto LABEL_19;
        }
        goto LABEL_37;
      }
LABEL_58:
      v11 += *((_DWORD *)v7 + 16);
    }
    else
    {
      if ( !v32 && v30 >= v34 + *((_DWORD *)v7 + 16) )
      {
LABEL_56:
        if ( !under_debugger )
          sub_383060(0xC9F0u, *(double *)a4.m128i_i64);
        BUG();
      }
      if ( v36 && v34 > 1 )
        sub_108180(a2, v12, v36, v34, (__int64 *)(*(_QWORD *)(v28 + 80) + 24LL * a3), a4);
      v10 = 0;
      v12 = -1;
      v9 = nullptr;
      v8 = 0;
      v11 = 0;
    }
LABEL_20:
    if ( (*v7 & 2) == 0 )
    {
      v16 = (unsigned __int64 *)v7[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        v22 = (unsigned __int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v23 = *v22;
        if ( (*v22 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v22[2] == v7 )
          {
            v7 = v22;
            v24 = v23 & 0xFFFFFFFFFFFFFFFCLL;
            v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v23 & 2) != 0 )
            {
              v7 = (unsigned __int64 *)v24;
              goto LABEL_25;
            }
            v22 = (unsigned __int64 *)v24;
          }
        }
        v7 = v22;
      }
      else
      {
        for ( i = (unsigned __int64 *)v16[1]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[1] )
          v16 = i;
        v7 = v16;
      }
    }
LABEL_25:
    ;
  }
  while ( *a2 != v7 );
  v5 = (unsigned __int64 *)a2;
  if ( v10 && v11 > 1 )
  {
    sub_108180(a2, v12, v10, v11, (__int64 *)(*(_QWORD *)(v28 + 80) + 24LL * a3), a4);
    v5 = (unsigned __int64 *)a2;
  }
  return sub_1045E0(v5, (__int64)v38);
}

