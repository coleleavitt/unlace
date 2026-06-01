__int64 __fastcall sub_12A000(__int128 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned __int8 v6; // cl
  __int64 v8; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v6 = **((_BYTE **)&a1 + 1);
  v24 = __readfsqword(0x28u);
  v19[0] = 0xFFFFFFFF00000000LL;
  v19[1] = 0;
  if ( v6 == 10 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v13 = *(_DWORD *)(v12 + 20);
    if ( (a4 & 2) == 0 )
      v13 = *(_DWORD *)(v12 + 16);
    if ( v13 <= 0 )
      goto LABEL_16;
    if ( (_QWORD *)v12 == v19 )
    {
      HIDWORD(v19[0]) = v13;
      goto LABEL_16;
    }
    sub_11C7E0((__int64)v19);
    sub_123480((__int64)v19, (unsigned __int8 *)v12);
    HIDWORD(v19[0]) = v13;
    v6 = v19[0];
    *((_QWORD *)&a1 + 1) = v19;
  }
  if ( v6 > 0xFu )
  {
    if ( !under_debugger )
      sub_3835A0(50298);
    BUG();
  }
  if ( ((1LL << v6) & 0x3F8D) != 0 )
    goto LABEL_16;
  if ( ((1LL << v6) & 0xC062) != 0 )
  {
    v10 = (a4 & 4) == 0;
    if ( (a4 & 2) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v20 = *a2;
        v11 = sub_128E80(a1, (__int64)&v20, 0);
        v8 = v11;
        if ( !v11 )
          goto LABEL_6;
        if ( !a3 || *a2 == v11 )
        {
LABEL_44:
          *a2 = v20;
          goto LABEL_6;
        }
        while ( a3 != v11 )
        {
          v11 = *(_QWORD *)(v11 + 8);
          if ( *a2 == v11 || !v11 )
            goto LABEL_44;
        }
LABEL_16:
        v8 = 0;
        goto LABEL_6;
      }
      v14 = *((_QWORD *)&a1 + 1);
      *((_QWORD *)&a1 + 1) = &v20;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      sub_1238E0(a1, v14, 0, 0xFFFF0000);
      v15 = sub_A94E0(a1, &v20, *(_QWORD *)(*a2 + 8), a3, v10);
      v8 = v15;
      if ( v15 )
        *a2 = v15;
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
LABEL_26:
      qfree();
      goto LABEL_6;
    }
    v16 = *((_QWORD *)&a1 + 1);
    *((_QWORD *)&a1 + 1) = &v20;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    sub_1238E0(a1, v16, 0, 0xFFFF0000);
    v17 = *a2;
    if ( (a4 & 1) != 0 )
    {
      v8 = sub_A97D0(a1, &v20, *(_QWORD *)(v17 + 8), a3, v10);
    }
    else
    {
      v18 = sub_124700(a1, &v20, v17, 0, nullptr, v10);
      v8 = v18;
      if ( !v18 )
        goto LABEL_41;
      if ( a3 && *a2 != v18 )
      {
        while ( a3 != v18 )
        {
          v18 = *(_QWORD *)(v18 + 8);
          if ( *a2 == v18 || !v18 )
            goto LABEL_40;
        }
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree();
        }
        qfree();
        goto LABEL_16;
      }
    }
LABEL_40:
    *a2 = v8;
LABEL_41:
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
    goto LABEL_26;
  }
  v8 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
LABEL_6:
  sub_11C7E0((__int64)v19);
  return v8;
}

