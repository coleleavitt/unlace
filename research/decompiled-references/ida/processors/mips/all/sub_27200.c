__int64 __fastcall sub_27200(__int64 a1, __int64 a2)
{
  char v2; // cl
  __int16 v3; // ax
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 **v8; // rax
  __int64 *v9; // rax
  unsigned __int64 v10; // rax
  int v11; // ebp
  __int16 v12; // r12
  unsigned __int64 *v13; // rax
  int v14; // eax
  __int64 *v15; // rbx
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int16 v21; // [rsp+16h] [rbp-1D2h]
  __int64 v22; // [rsp+18h] [rbp-1D0h]
  __int64 *v23; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-1C0h]
  __int64 v25; // [rsp+30h] [rbp-1B8h]
  __int16 v26; // [rsp+38h] [rbp-1B0h]
  __m128i v27; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-198h]
  __int64 v29; // [rsp+58h] [rbp-190h]
  __int64 v30; // [rsp+60h] [rbp-188h]
  char v31; // [rsp+68h] [rbp-180h] BYREF
  __int16 v32; // [rsp+6Eh] [rbp-17Ah]
  __int64 v33; // [rsp+98h] [rbp-150h]
  unsigned __int64 v34; // [rsp+1A8h] [rbp-40h] BYREF

  v2 = 12;
  v3 = *(_WORD *)(a2 + 46);
  v4 = *(_QWORD *)(a2 + 88);
  v34 = __readfsqword(0x28u);
  v21 = v3;
  if ( *(_DWORD *)(a1 + 260) != 2 )
    v2 = 16;
  v6 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (int)(v4 << v2);
  v8 = *(__int64 ***)(a1 + 616);
  if ( !v8 )
  {
    v23 = nullptr;
    goto LABEL_20;
  }
  v9 = *v8;
  v23 = v9;
  if ( !v9 )
  {
LABEL_20:
    v10 = 0;
    goto LABEL_6;
  }
  v10 = v9[1];
LABEL_6:
  v24 = v10;
  v11 = 0;
  v12 = 0;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    v13 = (unsigned __int64 *)&v31;
    v28 = -1;
    v29 = 0;
    v30 = 0;
    v27 = (__m128i)-1LL;
    do
    {
      *(_WORD *)v13 = 0;
      v13 += 5;
      *((_WORD *)v13 - 19) = 0;
      *((_WORD *)v13 - 18) = 0;
      *((_DWORD *)v13 - 2) = 0;
      *((_WORD *)v13 - 17) = 0;
      *((_OWORD *)v13 - 2) = 0;
      *(v13 - 2) = 0;
    }
    while ( v13 != &v34 );
    if ( !(unsigned __int8)sub_270C0((__int64)&v27, v6) )
      break;
    if ( a2 )
      BYTE1(v30) = *(_BYTE *)(a2 + 33) & 3 | BYTE1(v30) & 0xFC;
    v22 = *(_QWORD *)(a1 + 616);
    v14 = sub_26E20(a1, &v27, (__int64)&v23, 0.0);
    *(_QWORD *)(a1 + 616) = v22;
    if ( !v14 )
      break;
    v6 = v28 + WORD1(v29);
    if ( v21 != v32 )
      break;
    if ( (_WORD)v29 == 33 )
      goto LABEL_26;
    if ( (unsigned __int16)v29 <= 0x21u )
    {
      if ( (_WORD)v29 == 15 )
      {
        v7 <<= v33;
        goto LABEL_27;
      }
      if ( (_WORD)v29 != 32 )
        break;
LABEL_26:
      v7 += (int)v33;
      goto LABEL_27;
    }
    if ( (_WORD)v29 != 37 )
      break;
    v7 |= v33;
LABEL_27:
    ++v11;
    v12 += WORD1(v29);
    if ( v11 == 6 )
      goto LABEL_28;
  }
  if ( v11 > 3 )
  {
LABEL_28:
    *(_WORD *)(a2 + 26) += v12;
    *(_BYTE *)(a2 + 81) = 5;
    *(_QWORD *)(a2 + 88) = v7;
    *(_BYTE *)(a2 + 85) = 7;
    *(_BYTE *)(a2 + 121) = 0;
    *(_WORD *)(a2 + 24) = 838;
    return 1;
  }
  else
  {
    v15 = v23;
    if ( !v23 )
      return 0;
    v16 = v24;
    v17 = v23[1];
    if ( v17 >= v24 )
    {
      if ( v24 != v17 )
        v23[1] = v24;
      return 0;
    }
    v19 = *v23;
    if ( v23[2] < v24 )
    {
      v20 = qvector_reserve(v23, v19, v24, 1);
      *v15 = v20;
      v19 = v20;
      v17 = v15[1];
    }
    memset((void *)(v19 + v17), 0, v16 - v17);
    v15[1] = v16;
    return 0;
  }
}

