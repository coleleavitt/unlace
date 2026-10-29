__int64 __fastcall sub_126F10(int *a1, unsigned __int64 *a2, int a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 result; // rax
  int *v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  char v16; // al
  __int16 v17; // cx
  __int16 v18; // dx
  __int16 v19; // cx
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  unsigned __int8 v30; // [rsp+Fh] [rbp-49h]
  unsigned __int64 v31; // [rsp+10h] [rbp-48h] BYREF
  __int64 v32; // [rsp+18h] [rbp-40h]
  unsigned __int64 v33; // [rsp+28h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( !a3 )
    return 1;
  v5 = *(unsigned __int8 *)a1;
  if ( !(_BYTE)v5 )
    return 1;
  if ( (*((_BYTE *)a1 + 1) & 4) != 0 )
    goto LABEL_50;
  if ( (_BYTE)v5 != 4 )
    goto LABEL_7;
  if ( sub_122600(*((unsigned int **)a1 + 1)) )
  {
LABEL_50:
    if ( sub_11CAD0(a1[1] - a3) )
    {
      v5 = *(unsigned __int8 *)a1;
LABEL_7:
      switch ( v5 )
      {
        case 1LL:
          if ( !(unsigned __int8)sub_32E7D0((__int64)a2, a1 + 2, a3) )
            return 0;
          goto LABEL_24;
        case 2LL:
          if ( a3 < 0 )
            return 0;
          v12 = *((_QWORD *)a1 + 1);
          v13 = 0;
          if ( (unsigned __int64)(8 * a3) <= 0x3F )
            v13 = *(_QWORD *)(v12 + 16) >> (8 * (unsigned __int8)a3);
          v14 = sub_32ABC0(v13, a1[1] - a3, 0);
          *(__m128i *)(v12 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
          goto LABEL_24;
        case 4LL:
          goto LABEL_13;
        case 5LL:
          v26 = *((_QWORD *)a1 + 1);
          v27 = *(_QWORD *)(v26 + 8) + a3;
          if ( v27 < 0 )
            return 0;
          *(_QWORD *)(v26 + 8) = v27;
          goto LABEL_24;
        case 6LL:
          if ( (unsigned __int8)segtype() == 1 )
          {
            LOBYTE(v28) = getinf();
            if ( (_BYTE)v28 )
            {
              v28 = (unsigned __int8)v28;
            }
            else
            {
              v29 = *((_QWORD *)a1 + 1);
              v28 = get_item_end() - v29;
            }
            if ( a3 >= v28 )
              return 0;
          }
          *((_QWORD *)a1 + 1) = *(_QWORD *)(*(_QWORD *)(a2[12] + 24) + 16LL) & (*((_QWORD *)a1 + 1) + a3);
LABEL_24:
          a1[1] -= a3;
          *((_WORD *)a1 + 1) = 0;
          break;
        case 9LL:
          v23 = *((_QWORD **)a1 + 1);
          v24 = *((int *)v23 + 4);
          v25 = v23[1] + a3;
          if ( *(_QWORD *)(*v23 + 440LL) < v24 )
            sub_11B980(a5);
          if ( v25 > *(int *)(*(_QWORD *)(*v23 + 432LL) + 104 * v24 + 88) )
            return 0;
          v23[1] = v25;
          goto LABEL_24;
        case 14LL:
          if ( a1[1] / 2 > a3 )
            return 0;
          sub_123A40((__int64)&v31, (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL), (unsigned int)a1[1], a4);
          v15 = HIDWORD(v31);
          if ( SHIDWORD(v31) >= a3 )
            goto LABEL_31;
          v16 = sub_127850((unsigned __int64)&v31, (__int64)a2, a1[1] - a3, 0);
          if ( v16 )
          {
            v15 = HIDWORD(v31);
LABEL_31:
            v17 = v31;
            LOWORD(v31) = *(_WORD *)a1;
            v18 = *((_WORD *)a1 + 1);
            *(_WORD *)a1 = v17;
            v19 = WORD1(v31);
            WORD1(v31) = v18;
            v20 = a1[1];
            *((_WORD *)a1 + 1) = v19;
            HIDWORD(v31) = v20;
            v21 = v32;
            a1[1] = v15;
            v22 = *((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v21;
            v32 = v22;
            v16 = 1;
          }
          v30 = v16;
          sub_11CDA0((__int64)&v31);
          return v30;
        case 15LL:
          if ( !(unsigned __int8)sub_126980((__int64)a1, a3, a1[1] - a3, 1, a5) )
            return 0;
          *((_WORD *)a1 + 1) = 0;
          return 1;
        default:
          return 0;
      }
      return 1;
    }
    return 0;
  }
LABEL_13:
  if ( a3 < 0 )
    return 0;
  v9 = *((int **)a1 + 1);
  v10 = *v9;
  if ( (unsigned int)(*v9 - 8) > 1 )
    return 0;
  if ( v10 == 9 && v9[9] <= a3 )
  {
    v11 = 0;
LABEL_19:
    sub_120A10((__int64)a1, a2, v11, a1[1] - a3, *((_QWORD *)v9 + 3), 0);
    return 1;
  }
  v31 = 0;
  result = sub_11FD80((char *)v9 + 32, (__int64 *)&v31, v10 == 8);
  if ( (_BYTE)result )
  {
    v9 = *((int **)a1 + 1);
    v11 = v31 >> (8 * (unsigned __int8)a3);
    if ( *v9 == 8 )
      v11 = (__int64)v31 >> (8 * (unsigned __int8)a3);
    goto LABEL_19;
  }
  return result;
}

