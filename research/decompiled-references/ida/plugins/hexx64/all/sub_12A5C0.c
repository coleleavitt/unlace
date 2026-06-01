__int64 __fastcall sub_12A5C0(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, char a5, double a6, __m128 a7)
{
  unsigned __int8 v9; // cl
  __int64 v11; // r12
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 *v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v9 = *(_BYTE *)a2;
  v27 = __readfsqword(0x28u);
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  if ( v9 == 10 )
  {
    v15 = a2[1];
    v16 = *(_DWORD *)(v15 + 20);
    if ( (a5 & 2) == 0 )
      v16 = *(_DWORD *)(v15 + 16);
    if ( v16 <= 0 )
      goto LABEL_16;
    if ( (_QWORD *)v15 == v22 )
    {
      HIDWORD(v22[0]) = v16;
      goto LABEL_16;
    }
    sub_11CDA0((__int64)v22);
    sub_123A40((__int64)v22, (unsigned __int8 *)v15, v17, v18);
    HIDWORD(v22[0]) = v16;
    v9 = v22[0];
    a2 = v22;
  }
  if ( v9 > 0xFu )
  {
    if ( !under_debugger )
      sub_383060(0xC47Au, a6);
    BUG();
  }
  if ( ((1LL << v9) & 0x3F8D) != 0 )
    goto LABEL_16;
  if ( ((1LL << v9) & 0xC062) != 0 )
  {
    v13 = (a5 & 4) == 0;
    if ( (a5 & 2) != 0 )
    {
      if ( (a5 & 1) == 0 )
      {
        v23 = (unsigned __int64 *)*a3;
        v14 = sub_129440(a1, (__int64)a2, (__int64)&v23, 0, a6, a7);
        v11 = v14;
        if ( !v14 )
          goto LABEL_6;
        if ( !a4 || *a3 == v14 )
        {
LABEL_44:
          *a3 = (__int64)v23;
          goto LABEL_6;
        }
        while ( a4 != v14 )
        {
          v14 = *(_QWORD *)(v14 + 8);
          if ( *a3 == v14 || !v14 )
            goto LABEL_44;
        }
LABEL_16:
        v11 = 0;
        goto LABEL_6;
      }
      v23 = nullptr;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      sub_123EA0(a1, (__int64 *)&v23, (__int64)a2, 0, 0xFFFF0000, 0.0);
      v19 = sub_A9AA0(a1, &v23, *(_QWORD *)(*a3 + 8), a4, v13);
      v11 = v19;
      if ( v19 )
        *a3 = v19;
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
LABEL_26:
      qfree((__int64)v23);
      goto LABEL_6;
    }
    v23 = nullptr;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    sub_123EA0(a1, (__int64 *)&v23, (__int64)a2, 0, 0xFFFF0000, 0.0);
    v20 = *a3;
    if ( (a5 & 1) != 0 )
    {
      v11 = sub_A9D90(a1, &v23, *(_QWORD *)(v20 + 8), a4, v13);
    }
    else
    {
      v21 = sub_124CC0(a1, &v23, v20, 0, 0, v13, 0.0, a7);
      v11 = v21;
      if ( !v21 )
        goto LABEL_41;
      if ( a4 && *a3 != v21 )
      {
        while ( a4 != v21 )
        {
          v21 = *(_QWORD *)(v21 + 8);
          if ( *a3 == v21 || !v21 )
            goto LABEL_40;
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v25);
        }
        qfree((__int64)v23);
        goto LABEL_16;
      }
    }
LABEL_40:
    *a3 = v11;
LABEL_41:
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    goto LABEL_26;
  }
  v11 = a2[1];
LABEL_6:
  sub_11CDA0((__int64)v22);
  return v11;
}

