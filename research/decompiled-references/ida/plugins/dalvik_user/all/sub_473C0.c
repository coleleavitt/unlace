__int64 __fastcall sub_473C0(__int64 a1, __m128i *a2)
{
  __int16 v2; // r12
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebp
  bool v7; // zf
  char v8; // r13
  char v9; // cl
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int16 v18; // r12
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = *(int *)(a1 + 24);
  if ( v3 >= *(_QWORD *)(a1 + 16) )
    return 0;
  v7 = *(_BYTE *)(a1 + 56) == 0;
  v8 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v3);
  *(_DWORD *)(a1 + 24) = v3 + 1;
  if ( v7 )
  {
    if ( v8 <= 83 )
      goto LABEL_6;
  }
  else
  {
    sub_1FAD0((__int64 *)(a1 + 32));
    if ( v8 <= 83 )
    {
LABEL_6:
      if ( v8 > 65 )
      {
        switch ( v8 )
        {
          case 'B':
            v19.m128i_i8[0] = 66;
            v19.m128i_i16[4] = 0;
            v12 = sub_46860(a1, &v19.m128i_i8[8], 1);
            v8 = 66;
            v2 = v19.m128i_i16[4];
            v4 = v12;
            goto LABEL_22;
          case 'C':
          case 'S':
            v10 = *(int *)(a1 + 24);
            v4 = *(unsigned __int8 *)(a1 + 56);
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)((int)v10 + 2) )
            {
              if ( (_BYTE)v4 )
              {
                sub_43C70((__int64 *)(a1 + 32), 44, 0);
                sub_43D60((__int64 *)(a1 + 32), "},");
              }
              return 0;
            }
            v18 = *(_WORD *)(*(_QWORD *)(a1 + 8) + v10);
            *(_DWORD *)(a1 + 24) = v10 + 2;
            v2 = __ROL2__(v18, 8);
            if ( !(_BYTE)v4 )
              goto LABEL_14;
            sub_1FAD0((__int64 *)(a1 + 32));
            break;
          case 'D':
            v19.m128i_i8[0] = 68;
            goto LABEL_21;
          case 'F':
            v19.m128i_i8[0] = 70;
            goto LABEL_30;
          case 'I':
            v19.m128i_i8[0] = 73;
LABEL_30:
            v19.m128i_i16[4] = 0;
            v16 = sub_46430(a1, &v19.m128i_u32[2], 1);
            v8 = v19.m128i_i8[0];
            v2 = v19.m128i_i16[4];
            v4 = v16;
            goto LABEL_22;
          case 'J':
            v19.m128i_i8[0] = 74;
LABEL_21:
            v19.m128i_i16[4] = 0;
            v11 = sub_468D0(a1, &v19.m128i_i64[1], 1);
            v8 = v19.m128i_i8[0];
            v2 = v19.m128i_i16[4];
            v4 = v11;
            goto LABEL_22;
          case 'L':
            goto LABEL_27;
          default:
            return 0;
        }
        goto LABEL_22;
      }
      return 0;
    }
  }
  v9 = v8 - 86;
  if ( (unsigned __int8)(v8 - 86) > 0x1Eu )
    return 0;
  if ( ((1LL << v9) & 0x60422020) != 0 )
  {
LABEL_27:
    v13 = *(_QWORD *)a1;
    v19.m128i_i8[0] = v8;
    v14 = *(_DWORD *)(v13 + 8);
    v19.m128i_i16[4] = 0;
    v15 = sub_46950(a1, v14, &v19.m128i_i64[1]);
    v2 = v19.m128i_i16[4];
    v4 = v15;
    goto LABEL_22;
  }
  if ( v8 == 90 )
  {
    v19.m128i_i8[0] = 90;
    v19.m128i_i16[4] = 0;
    v17 = sub_46B40(a1, (bool *)&v19.m128i_i8[8]);
    v8 = 90;
    v2 = v19.m128i_i16[4];
    v4 = v17;
    goto LABEL_22;
  }
  if ( ((1LL << v9) & 1) == 0 )
    return 0;
  v4 = *(unsigned __int8 *)(a1 + 56);
  v8 = 86;
  if ( !(_BYTE)v4 )
  {
LABEL_14:
    if ( !a2 )
      return 1;
LABEL_15:
    v19.m128i_i8[0] = v8;
    v19.m128i_i16[4] = v2;
    *a2 = _mm_load_si128(&v19);
    return 1;
  }
  sub_43D60((__int64 *)(a1 + 32), "VOID");
LABEL_22:
  if ( *(_BYTE *)(a1 + 56) )
  {
    sub_43C70((__int64 *)(a1 + 32), 44, 0);
    sub_43D60((__int64 *)(a1 + 32), "},");
  }
  if ( ((unsigned __int8)v4 & (a2 != nullptr)) != 0 )
    goto LABEL_15;
  return v4;
}

