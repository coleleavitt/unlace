__int64 __fastcall sub_12FCD0(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        char *a9)
{
  bool v11; // zf
  char v12; // al
  __int64 result; // rax
  _DWORD *v14; // rsi
  bool v15; // al
  bool v16; // dl
  char v17; // al
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r8
  _DWORD *v21; // rsi
  bool v22; // al
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  char *v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v11 = *(_BYTE *)a5 == 4;
  v26 = a4;
  v25 = a6;
  v31 = __readfsqword(0x28u);
  v12 = *a9;
  if ( v11 && (v21 = *(_DWORD **)(a5 + 8), (unsigned int)(*v21 - 12) <= 1) )
  {
    v27 = 0;
    v28 = nullptr;
    v29 = 0;
    v30 = 0;
    if ( v12 != 4 )
    {
      v28 = a9;
      goto LABEL_26;
    }
    v14 = *((_DWORD **)a9 + 1);
  }
  else
  {
    if ( v12 != 4 )
      return 0;
    v14 = *((_DWORD **)a9 + 1);
    if ( (unsigned int)(*v14 - 12) > 1 )
      return 0;
    v27 = 0;
    v28 = nullptr;
    v29 = 0;
    v30 = 0;
  }
  v23 = a5;
  v15 = sub_122D40(&v27, v14, 0);
  a5 = v23;
  v16 = v15;
  v17 = *(_BYTE *)v23;
  if ( !v16 )
  {
    v28 = a9;
    v27 = 0;
  }
  if ( v17 != 4 )
    goto LABEL_10;
  v21 = *(_DWORD **)(v23 + 8);
LABEL_26:
  v24 = a5;
  v29 = 0;
  v30 = 0;
  v22 = sub_122D40(&v29, v21, 0);
  a5 = v24;
  if ( !v22 )
  {
LABEL_10:
    v30 = a5;
    v29 = 0;
  }
  v18 = v26;
  v19 = 0;
LABEL_12:
  v20 = v25;
  if ( v18 )
  {
LABEL_13:
    if ( v20 )
      goto LABEL_14;
LABEL_21:
    if ( !under_debugger )
      sub_383060(0xCAD8u, *(double *)a7.m128i_i64);
    BUG();
  }
  while ( 1 )
  {
    if ( v20 )
      goto LABEL_21;
LABEL_14:
    v19 = v27 + v19 - v29;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 24LL) != 8 )
      v19 = (int)v19;
    result = sub_12EA80(a1, a3, v18, v30, v20, (__int64)v28, a7, a8, 0);
    if ( (_BYTE)result )
      break;
    v29 = 0;
    v27 = 0;
    if ( sub_129710(&v27, &v25, (__int64)a3, *(double *)a7.m128i_i64, a8) )
      goto LABEL_12;
    if ( !sub_129710(&v29, &v26, (__int64)a3, *(double *)a7.m128i_i64, a8) )
      return 0;
    v18 = v26;
    v20 = v25;
    if ( v26 )
      goto LABEL_13;
  }
  if ( a2 )
    *a2 = v19;
  return result;
}

