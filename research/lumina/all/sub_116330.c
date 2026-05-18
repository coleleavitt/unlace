__int64 __fastcall sub_116330(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // rbx
  __int64 i; // rax
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  int v11; // eax
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  unsigned __int8 v19; // [rsp+17h] [rbp-61h] BYREF
  unsigned __int32 v20; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  unsigned __int32 v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+24h] [rbp-54h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+30h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v6 + 33) )
  {
    v12 = (__int64)&v24;
    result = sub_110FD0(*(_QWORD *)(a1 + 8), (__int64)&v24, &v20, 1u, 0);
    v21 = result;
    if ( (_DWORD)result )
      goto LABEL_20;
LABEL_24:
    v12 = (a3 & 1) == 0 ? 10 : 13;
    sub_E8FB0(v24, v12);
    v15 = *(_QWORD *)(v24 + 112);
    if ( v15 )
      sub_C36A0(v15);
    *a2 = v20;
    result = 0;
    goto LABEL_20;
  }
  for ( i = *(_QWORD *)(v6 + 16); i; i = *(_QWORD *)(i + 40) )
    *(_BYTE *)(i + 1) &= ~4u;
  sub_D5B70(a1, 4, &v20);
  if ( *(_DWORD *)(v6 + 64) < v20 )
  {
    v12 = (__int64)"%s at line %d of [%.10s]";
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      76366,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    result = 11;
    goto LABEL_20;
  }
  v8 = v20 + 1;
  v9 = dword_241470;
  ++v20;
  v10 = *(_DWORD *)(v6 + 52);
  while ( 1 )
  {
    v11 = 0;
    if ( v8 > 1 )
      v11 = sub_CCA10((_DWORD *)(v6 + 52), (_DWORD *)(v6 + 56), v8);
    if ( v11 != v8 && v9 / v10 + 1 != v8 )
      break;
    v20 = ++v8;
  }
  v12 = (__int64)v25;
  result = sub_110FD0(v6, (__int64)v25, &v22, v8, 1);
  v21 = result;
  if ( !(_DWORD)result )
  {
    v12 = v22;
    if ( v22 == v20 )
    {
      v24 = v25[0];
LABEL_16:
      sub_111970(v6, v12, 1, 0, (int *)&v21);
      result = v21;
      if ( v21 || (v12 = 4, result = sub_110EB0(a1, 4, v20), (v21 = result) != 0) )
      {
        v14 = v24;
        if ( v24 )
        {
          sub_C36A0(*(_QWORD *)(v24 + 112));
          result = v21;
        }
        goto LABEL_20;
      }
      goto LABEL_24;
    }
    v16 = *(_QWORD *)(v6 + 16);
    v12 = 0;
    v19 = 0;
    v23 = 0;
    result = sub_115FA0(v16, 0, 0);
    v14 = v25[0];
    v21 = result;
    if ( v25[0] )
    {
      sub_C36A0(*(_QWORD *)(v25[0] + 112LL));
      result = v21;
    }
    if ( !(_DWORD)result )
    {
      v12 = v20;
      result = sub_C3B70((_QWORD *)v6, v20, &v24);
      v21 = result;
      if ( !(_DWORD)result )
      {
        v17 = sub_EBFF0(v6, v20, &v19, &v23);
        v14 = v19;
        v21 = v17;
        if ( (unsigned __int8)(v19 - 1) <= 1u )
        {
          sub_E8BB0(
            0xBu,
            "%s at line %d of [%.10s]",
            "database corruption",
            76414,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v21 = 11;
          v12 = v24;
LABEL_33:
          if ( v12 )
            sub_C36A0(*(_QWORD *)(v12 + 112));
          goto LABEL_35;
        }
        v12 = v24;
        if ( v17 )
          goto LABEL_33;
        result = sub_111DF0((_QWORD *)v6, v24, v19, v23, v22, 0);
        v14 = v24;
        v21 = result;
        if ( v24 )
        {
          sub_C36A0(*(_QWORD *)(v24 + 112));
          result = v21;
        }
        if ( !(_DWORD)result )
        {
          v12 = v20;
          result = sub_C3B70((_QWORD *)v6, v20, &v24);
          v21 = result;
          if ( !(_DWORD)result )
          {
            v21 = sub_10D290(*(_QWORD *)(v24 + 112), v12);
            if ( !v21 )
            {
              v12 = v20;
              goto LABEL_16;
            }
            if ( v24 )
              sub_C36A0(*(_QWORD *)(v24 + 112));
LABEL_35:
            result = v21;
          }
        }
      }
    }
  }
LABEL_20:
  if ( *(_BYTE *)(a1 + 17) )
  {
    v18 = result;
    sub_CCDE0(a1, v12, v14);
    return v18;
  }
  return result;
}
