__int64 __fastcall sub_12C290(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6, char *a7)
{
  bool v9; // zf
  char v10; // al
  __int64 result; // rax
  _DWORD *v12; // rsi
  bool v13; // al
  bool v14; // dl
  char v15; // al
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r8
  _DWORD *v19; // rsi
  bool v20; // al
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h] BYREF
  __int64 v24; // [rsp+18h] [rbp-70h] BYREF
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  char *v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v9 = *(_BYTE *)a5 == 4;
  v24 = a4;
  v23 = a6;
  v29 = __readfsqword(0x28u);
  v10 = *a7;
  if ( v9 && (v19 = *(_DWORD **)(a5 + 8), (unsigned int)(*v19 - 12) <= 1) )
  {
    v25 = 0;
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    if ( v10 != 4 )
    {
      v26 = a7;
      goto LABEL_26;
    }
    v12 = *((_DWORD **)a7 + 1);
  }
  else
  {
    if ( v10 != 4 )
      return 0;
    v12 = *((_DWORD **)a7 + 1);
    if ( (unsigned int)(*v12 - 12) > 1 )
      return 0;
    v25 = 0;
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
  }
  v21 = a5;
  v13 = sub_11F300(&v25, v12, 0);
  a5 = v21;
  v14 = v13;
  v15 = *(_BYTE *)v21;
  if ( !v14 )
  {
    v26 = a7;
    v25 = 0;
  }
  if ( v15 != 4 )
    goto LABEL_10;
  v19 = *(_DWORD **)(v21 + 8);
LABEL_26:
  v22 = a5;
  v27 = 0;
  v28 = 0;
  v20 = sub_11F300(&v27, v19, 0);
  a5 = v22;
  if ( !v20 )
  {
LABEL_10:
    v28 = a5;
    v27 = 0;
  }
  v16 = v24;
  v17 = 0;
LABEL_12:
  v18 = v23;
  if ( v16 )
  {
LABEL_13:
    if ( v18 )
      goto LABEL_14;
LABEL_21:
    if ( !under_debugger )
      sub_37EEE0(51928);
    BUG();
  }
  while ( 1 )
  {
    if ( v18 )
      goto LABEL_21;
LABEL_14:
    v17 = v25 + v17 - v27;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 24LL) != 8 )
      v17 = (int)v17;
    result = sub_12B040(a1, a3, v16, v28, v18, (__int64)v26, 0);
    if ( (_BYTE)result )
      break;
    v27 = 0;
    v25 = 0;
    if ( sub_125CD0(&v25, &v23, (__int64)a3) )
      goto LABEL_12;
    if ( !sub_125CD0(&v27, &v24, (__int64)a3) )
      return 0;
    v16 = v24;
    v18 = v23;
    if ( v24 )
      goto LABEL_13;
  }
  if ( a2 )
    *a2 = v17;
  return result;
}

