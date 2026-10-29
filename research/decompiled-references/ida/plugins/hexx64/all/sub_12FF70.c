__int64 __fastcall sub_12FF70(
        __int64 a1,
        __int64 *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9)
{
  unsigned int v12; // r10d
  char v14; // al
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  char v21; // al
  char v22; // al
  __int64 v24; // [rsp+18h] [rbp-68h] BYREF
  __int64 v25; // [rsp+20h] [rbp-60h]
  __int64 v26; // [rsp+28h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h]
  unsigned __int64 v28; // [rsp+40h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_12FCD0(a1, a2, a3, a4, a5, a6, a7, a8, (char *)a9) )
  {
    v24 = -1;
    v25 = 0;
    v26 = -1;
    v27 = 0;
    v14 = sub_1219B0((char *)a5, (__int64)&v24);
    v12 = 0;
    if ( v14 && (v15 = sub_1219B0((char *)a9, (__int64)&v26), v12 = 0, v15) )
    {
      if ( (_BYTE)v25 != (_BYTE)v27 )
        return v12;
      if ( !a2 )
        return 1;
      v16 = v26 - v24;
    }
    else
    {
      if ( *(_BYTE *)a5 != *(_BYTE *)a9 )
        return v12;
      switch ( *(_BYTE *)a5 )
      {
        case 0:
          goto LABEL_25;
        case 1:
        case 5:
          if ( !under_debugger )
            sub_383060(0xCEB9u, *(double *)a7.m128i_i64);
          BUG();
        case 4:
          v19 = *(_DWORD **)(a5 + 8);
          if ( *v19 != 2 )
            return v12;
          v20 = *(_DWORD **)(a9 + 8);
          if ( *v20 != 2 )
            return v12;
          v21 = sub_12EA80(a1, a3, a4, (__int64)(v19 + 8), a6, (__int64)(v20 + 8), a7, a8, 0);
          v12 = 0;
          if ( !v21 )
            return v12;
          if ( (unsigned __int8)sub_12FCD0(
                                  a1,
                                  a2,
                                  a3,
                                  a4,
                                  *(_QWORD *)(a5 + 8) + 48LL,
                                  a6,
                                  a7,
                                  a8,
                                  (char *)(*(_QWORD *)(a9 + 8) + 48LL)) )
            return 1;
          v22 = sub_12EA80(a1, a3, a4, *(_QWORD *)(a5 + 8) + 48LL, a6, *(_QWORD *)(a9 + 8) + 48LL, a7, a8, 0);
          v12 = 0;
          if ( !v22 )
            return v12;
LABEL_25:
          v16 = 0;
LABEL_16:
          if ( !a2 )
            return 1;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 24LL) != 8 )
            v16 = (int)v16;
          break;
        case 6:
          v16 = *(_QWORD *)(a9 + 8) - *(_QWORD *)(a5 + 8);
          goto LABEL_16;
        case 9:
          v17 = *(_QWORD *)(a5 + 8);
          v18 = *(_QWORD *)(a9 + 8);
          if ( *(_DWORD *)(v17 + 16) != *(_DWORD *)(v18 + 16) )
            return v12;
          v16 = *(_QWORD *)(v18 + 8) - *(_QWORD *)(v17 + 8);
          goto LABEL_16;
        default:
          return v12;
      }
    }
    *a2 = v16;
  }
  return 1;
}

