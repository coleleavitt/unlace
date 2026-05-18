unsigned __int64 __fastcall sub_E49E0(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int16 v8; // ax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r15
  __m128i *v13; // r14
  int v14; // [rsp+8h] [rbp-90h]
  __int128 v15; // [rsp+10h] [rbp-88h] BYREF
  __int128 v16; // [rsp+20h] [rbp-78h]
  __int128 v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 336);
  v6 = *(_QWORD *)a1;
  v20 = __readfsqword(0x28u);
  if ( v5 )
  {
    v8 = 4;
    if ( *(_BYTE *)(v6 + 197) )
      v8 = (*(_BYTE *)(v6 + 196) != 1) + 4;
    v9 = *(__int16 *)(v5 + 54);
    v10 = *(_QWORD *)(v5 + 8);
    WORD2(v17) = v8;
    DWORD2(v17) = 0;
    *((_QWORD *)&v15 + 1) = sub_CE7B0;
    v11 = v10 + 16 * v9 - 16;
    *(_QWORD *)&v16 = sub_C43E0;
    if ( !a2 || (v14 = a4, sub_CDCD0((__int64)&v15, a2), a4 = v14, WORD2(v17)) )
    {
      if ( (*(_BYTE *)(v11 + 14) & 0x60) != 0 )
      {
        sub_DBD10(a1, "cannot use DEFAULT on a generated column");
      }
      else
      {
        v19 = 0;
        v15 = 0;
        LOBYTE(v15) = -75;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        *((_QWORD *)&v15 + 1) = sub_DCCD0(v6, a3, a4);
        *(_QWORD *)&v16 = a2;
        DWORD1(v15) = 4096;
        v13 = sub_DD6E0(v6, (__int64)&v15, 1u, nullptr);
        if ( *((_QWORD *)&v15 + 1) )
          sub_C9250(v6, *((_QWORD **)&v15 + 1));
        sub_E0FE0((__int64 *)a1, (int **)(v5 + 80), (__int16 *)(v11 + 12), (__int64)v13);
      }
    }
    else
    {
      sub_DBD10(a1, "default value of column [%s] is not constant", *(const char **)v11);
    }
  }
  if ( *(_BYTE *)(a1 + 292) > 1u )
    sub_CE220(a1, a2);
  if ( a2 )
    sub_D7720(v6, a2);
  return __readfsqword(0x28u) ^ v20;
}
