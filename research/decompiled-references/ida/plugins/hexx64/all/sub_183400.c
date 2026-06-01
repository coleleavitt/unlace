__int64 __fastcall sub_183400(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  bool v6; // zf
  char v7; // al
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD *v13; // r13
  _DWORD *v14; // rsi
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 *v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v6 = *(_BYTE *)a3 == 4;
  v7 = *(_BYTE *)a2;
  v20 = __readfsqword(0x28u);
  if ( !v6 )
  {
    if ( v7 == 4 )
    {
      if ( **(_DWORD **)(a2 + 8) != 2 )
      {
        v15 = -1;
        goto LABEL_15;
      }
      return 0xFFFFFFFFLL;
    }
    v15 = -1;
    goto LABEL_4;
  }
  v13 = *(_DWORD **)(a3 + 8);
  if ( *v13 == 2 )
  {
    if ( v7 == 4 )
    {
      v14 = *(_DWORD **)(a2 + 8);
      if ( *v14 == 2 )
      {
LABEL_28:
        v15 = -1;
        if ( *v13 != 2 )
          goto LABEL_15;
        goto LABEL_23;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( v7 == 4 )
  {
    v14 = *(_DWORD **)(a2 + 8);
    if ( *v14 != 2 )
      goto LABEL_28;
    return 0xFFFFFFFFLL;
  }
  v15 = -1;
  if ( *v13 == 2 )
  {
    v14 = *(_DWORD **)(a2 + 8);
LABEL_23:
    v16 = 0;
    v17 = nullptr;
    v18 = 0;
    v19 = 0;
    if ( (unsigned __int8)sub_122DC0(&v16, (__int64)(v14 + 12))
      && (unsigned __int8)sub_122DC0(&v18, (__int64)(v13 + 12))
      && sub_1255D0(v17, a1, v19, 0, *(double *)a4.m128i_i64) )
    {
      result = v16 - v18;
    }
    else
    {
      result = v15;
    }
    goto LABEL_6;
  }
LABEL_4:
  if ( (unsigned __int8)(v7 - 5) > 1u && v7 != 9 )
  {
LABEL_15:
    if ( !under_debugger )
      sub_383060(0xCAD9u, *(double *)a4.m128i_i64);
    BUG();
  }
  sub_12FF70(a1, &v15, nullptr, 0, a3, 0, a4, a5, a2);
  result = v15;
LABEL_6:
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(int *)(a2 + 4);
  v12 = v10;
  if ( (int)v11 <= v10 )
    v12 = *(int *)(a2 + 4);
  if ( v10 )
    v11 = v12;
  if ( result < 0 || v11 <= result )
    return 0xFFFFFFFFLL;
  return result;
}

