_DWORD *__fastcall sub_96A30(const __m128i *a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r15d
  _DWORD *v9; // rbx
  __int64 v11; // rax
  signed int v12; // edx
  char v13; // al
  _QWORD *v14; // r8
  __int128 v16; // rdi
  _DWORD *v17; // rax
  _DWORD *v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-78h]
  _DWORD *v21; // [rsp+0h] [rbp-78h]
  unsigned __int64 *v22; // [rsp+8h] [rbp-70h]
  unsigned int v24; // [rsp+18h] [rbp-60h]
  char v25; // [rsp+1Ch] [rbp-5Ch]
  _QWORD v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v25 = a6;
  v26[3] = __readfsqword(0x28u);
  v6 = (a6 + 7) >> 3;
  if ( v6 > a3[1] )
    return nullptr;
  v9 = a3;
  while ( 1 )
  {
    v11 = *a2;
    v12 = *(_DWORD *)(a5 + 4);
    v26[1] = 0;
    v20 = v11;
    v26[0] = 0xFFFFFFFF00000000LL;
    v24 = v12;
    if ( v12 > v9[1] )
      break;
    if ( v9 )
    {
      v14 = v9;
      goto LABEL_5;
    }
LABEL_9:
    sub_11CDA0((__int64)v26);
    *((_QWORD *)&v16 + 1) = v9;
    *(_QWORD *)&v16 = a1;
    v17 = (_DWORD *)sub_129440(v16, (__int64)a2, 0);
    v18 = v17;
    if ( !v17 )
      return nullptr;
    v19 = *v17;
    switch ( v19 )
    {
      case 9:
        goto LABEL_14;
      case 20:
        v21 = v18;
        if ( !(unsigned __int8)sub_11FD80((char *)v18 + 48, v26, 1u) || v26[0] < (unsigned __int64)((1 << v25) - 1) )
          return nullptr;
        v9 = v21 + 8;
        if ( v21[9] < v6 )
          return nullptr;
        break;
      case 4:
LABEL_14:
        if ( v18[9] < v6 )
          return nullptr;
        v9 = v18 + 8;
        break;
      default:
        return nullptr;
    }
  }
  v22 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  sub_125180((__int64)v26, (unsigned __int8 *)v9);
  v13 = sub_131780((__int64)v26, v22, v24, 0, 0);
  v14 = v26;
  if ( !v13 )
    goto LABEL_9;
LABEL_5:
  if ( !(unsigned __int8)sub_130BC0(a1, a4, a5, v20, (__int64)v14, 0) )
    goto LABEL_9;
  sub_11CDA0((__int64)v26);
  if ( v6 > v9[1] )
    return nullptr;
  return v9;
}

