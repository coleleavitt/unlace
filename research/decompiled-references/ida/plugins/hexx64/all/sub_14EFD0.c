__int64 __fastcall sub_14EFD0(__int128 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5, __m128i a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  _DWORD *v15; // r11
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int64 *v20; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-80h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v9 = *((_QWORD *)&a1 + 1);
  v10 = *(_QWORD *)(a1 + 480);
  v26 = __readfsqword(0x28u);
  v20 = *(unsigned __int64 **)(v10 + 112);
  v12 = sub_B0800(a1, a2, *((_DWORD **)&a1 + 1), a3, *((__int64 *)&a1 + 1), *(double *)a6.m128i_i64, a4, a5);
  if ( (_BYTE)v12 )
    return 1;
  v13 = v12;
  if ( *(_BYTE *)a3 == 4 )
  {
    v15 = *(_DWORD **)(a3 + 8);
    if ( ((*v15 - 19) & 0xFFFFFFFD) == 0 )
    {
      v22 = *(_QWORD *)(a3 + 8);
      v24 = 0xFFFFFFFF00000000LL;
      v21 = (unsigned __int8 *)(v15 + 8);
      v25 = 0;
      if ( (unsigned __int8)sub_14EFD0(a1, *((__int64 *)&a1 + 1), (__int64)&v24, (__int64)(v15 + 8), a4, a5) )
      {
        sub_14EF00(
          a2,
          *(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL),
          **(unsigned int **)(a3 + 8),
          (unsigned __int8 *)&v24,
          (unsigned __int8 *)(v22 + 48),
          SHIDWORD(v24));
      }
      else
      {
        v13 = sub_14EFD0(a1, *((__int64 *)&a1 + 1), (__int64)&v24, *(_QWORD *)(a3 + 8) + 48LL, a4, a5);
        if ( !(_BYTE)v13 )
        {
LABEL_10:
          sub_11CDA0((__int64)&v24);
          return v13;
        }
        sub_14EF00(
          a2,
          *(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL),
          **(unsigned int **)(a3 + 8),
          (unsigned __int8 *)&v24,
          v21,
          SHIDWORD(v24));
      }
      sub_1207E0(
        (char *)(*(_QWORD *)(a2 + 8) + 48LL),
        v20,
        9,
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL),
        *(_DWORD *)(a2 + 4),
        a6);
      v13 = 1;
      goto LABEL_10;
    }
  }
  if ( (unsigned __int64)*(int *)(a4 + 4) <= 7 && (unsigned __int8)sub_11FD80((char *)a4, &v23, 0) )
  {
    v16 = *(_DWORD *)(a3 + 4);
    v24 = 0xFFFFFFFF00000000LL;
    v17 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
    v25 = 0;
    sub_14EF00(a2, v17, 19, (unsigned __int8 *)a3, (unsigned __int8 *)&v24, 2 * v16);
    sub_11CDA0((__int64)&v24);
    sub_1207E0((char *)(*(_QWORD *)(a2 + 8) + 32LL), v20, 9, *(_QWORD *)(v9 + 24), *(_DWORD *)(a2 + 4), a6);
    v18 = 0;
    v19 = 8 * (*(_DWORD *)(a2 + 4) / 2);
    if ( (unsigned __int64)v19 <= 0x3F )
      v18 = v23 << v19;
    sub_120A10(*(_QWORD *)(a2 + 8) + 48LL, v20, v18, *(_DWORD *)(a2 + 4), *(_QWORD *)(v9 + 24), 0);
    return 1;
  }
  return v13;
}

