__int64 __fastcall sub_32CA0(char *a1, char *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // rsi
  __m128i v7; // xmm0
  unsigned int v8; // ebx
  __int64 v10; // rsi
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rdx
  unsigned int utf8_char; // eax
  __int64 v17; // rax
  char v18[8]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+32h] [rbp-36h] BYREF
  char v22; // [rsp+33h] [rbp-35h] BYREF
  char v23; // [rsp+34h] [rbp-34h] BYREF
  char v24; // [rsp+35h] [rbp-33h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
    sub_111A0((__int64)"DEXSIP: set_jdwp_value: idcv.vtype=%d to type '%c'\n", *a2, (unsigned int)*a1);
  v18[0] = 2;
  v19 = 0;
  v20 = 0;
  copy_idcv();
  switch ( *a1 )
  {
    case 'B':
      if ( (unsigned int)idcv_long() )
        goto LABEL_15;
      a1[8] = v19;
      goto LABEL_12;
    case 'C':
      if ( *a2 == 7 )
      {
        utf8_char = get_utf8_char();
      }
      else
      {
        if ( *a2 != 2 )
        {
LABEL_15:
          if ( a4 )
          {
            v10 = *a4;
            if ( (unsigned __int64)a4[2] <= 0x16 )
            {
              v13 = qvector_reserve();
              *a4 = v13;
              v10 = v13;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_6A530);
            a4[1] = 23;
            *(__m128i *)v10 = si128;
            *(_QWORD *)(v10 + 14) = 0x657079742065756CLL;
            *(_BYTE *)(*a4 + 22) = 0;
          }
LABEL_8:
          v8 = 0;
          goto LABEL_9;
        }
        v14 = *((_QWORD *)a2 + 1);
        if ( BYTE3(v14) )
        {
          v23 = BYTE1(v14);
          v21 = BYTE3(v14);
          v15 = &v24;
          v22 = BYTE2(v14);
        }
        else if ( BYTE2(v14) )
        {
          v21 = BYTE2(v14);
          v15 = &v23;
          v22 = BYTE1(v14);
        }
        else if ( BYTE1(v14) )
        {
          v21 = BYTE1(v14);
          v15 = &v22;
        }
        else
        {
          v15 = &v21;
        }
        *v15 = v14;
        v15[1] = 0;
        utf8_char = get_utf8_char();
      }
      if ( utf8_char > 0xFFFF )
        goto LABEL_15;
      *((_WORD *)a1 + 4) = utf8_char;
LABEL_12:
      v8 = 1;
LABEL_9:
      free_idcv();
      return v8;
    case 'D':
      if ( *a2 != 3 )
        goto LABEL_15;
      *((_QWORD *)a1 + 1) = *a3;
      goto LABEL_12;
    case 'F':
      if ( *a2 != 3 )
        goto LABEL_15;
      *((_DWORD *)a1 + 2) = *(_DWORD *)a3;
      goto LABEL_12;
    case 'I':
      if ( (unsigned int)idcv_long() )
        goto LABEL_15;
      *((_DWORD *)a1 + 2) = v19;
      goto LABEL_12;
    case 'J':
      if ( (unsigned int)idcv_int64() )
        goto LABEL_15;
      *((_QWORD *)a1 + 1) = v19;
      goto LABEL_12;
    case 'S':
      if ( (unsigned int)idcv_long() )
        goto LABEL_15;
      *((_WORD *)a1 + 4) = v19;
      goto LABEL_12;
    case 'Z':
      if ( (unsigned int)idcv_int64() )
        goto LABEL_15;
      a1[8] = (_QWORD)v19 != 0;
      goto LABEL_12;
    case 's':
      v12 = sub_135E0(v18, a2);
      if ( !(unsigned __int8)sub_4A690(v12 + 864, a1 + 8, a2 + 8) )
        goto LABEL_15;
      goto LABEL_12;
    default:
      if ( a4 )
      {
        v6 = *a4;
        if ( (unsigned __int64)a4[2] <= 0x19 )
        {
          v17 = qvector_reserve();
          *a4 = v17;
          v6 = v17;
        }
        v7 = _mm_load_si128((const __m128i *)&xmmword_6A510);
        a4[1] = 26;
        *(__m128i *)v6 = v7;
        *(__m128i *)(v6 + 9) = _mm_load_si128((const __m128i *)&xmmword_6A520);
        *(_BYTE *)(*a4 + 25) = 0;
      }
      goto LABEL_8;
  }
}

