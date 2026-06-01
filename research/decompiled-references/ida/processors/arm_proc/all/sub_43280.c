__int64 __fastcall sub_43280(int a1, __int64 *a2, int a3, __int64 a4, __int64 a5, __int64 *a6)
{
  int v7; // r12d
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // r9
  __int64 *v11; // r11
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  char *v15; // r14
  int v17; // eax
  _BYTE *v18; // rdi
  char *v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  char *v24; // rcx
  int v25; // eax
  char *v26; // rdi
  unsigned __int64 v27; // r11
  __int64 v28; // rsi
  int v29; // eax
  __int128 v30; // rt0
  __int64 *v31; // rdi
  __int64 v32; // rsi
  __m128i si128; // xmm0
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v37; // [rsp+8h] [rbp-E0h]
  __int64 *v38; // [rsp+8h] [rbp-E0h]
  __int64 *v39; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v40; // [rsp+10h] [rbp-D8h]
  __int64 *v41; // [rsp+30h] [rbp-B8h]
  int v43; // [rsp+58h] [rbp-90h]
  _BYTE v44[8]; // [rsp+68h] [rbp-80h]
  unsigned __int64 v45; // [rsp+70h] [rbp-78h] BYREF
  __int64 v46; // [rsp+78h] [rbp-70h]
  _QWORD v47[13]; // [rsp+80h] [rbp-68h] BYREF

  v47[5] = __readfsqword(0x28u);
  v7 = SBYTE1(a1);
  v8 = SBYTE1(a1);
  if ( (unsigned __int64)SBYTE1(a1) > 0x10 )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_65;
  }
  v10 = (char)a1;
  if ( (unsigned __int64)(char)a1 > 0x20 )
  {
LABEL_61:
    if ( !under_debugger )
      interr();
    goto LABEL_65;
  }
  v11 = a2;
  v12 = (char)a1 / v7;
  if ( !v12 )
  {
LABEL_19:
    v21 = v11[1];
    if ( v21 < v10 )
    {
      v34 = *v11;
      if ( v11[2] < v10 )
      {
        v40 = v10;
        v38 = v11;
        v35 = qvector_reserve();
        v11 = v38;
        v10 = v40;
        v34 = v35;
        *v38 = v35;
        v21 = v38[1];
      }
      v39 = v11;
      v37 = v10;
      memset((void *)(v34 + v21), 0, v10 - v21);
      v10 = v37;
      v11 = v39;
      v39[1] = v37;
    }
    else if ( v10 != v21 )
    {
      v11[1] = v10;
    }
    v22 = (_QWORD *)*v11;
    if ( v10 >= 8 )
    {
      *v22 = v47[0];
      *(_QWORD *)((char *)v22 + v10 - 8) = *(_QWORD *)((char *)&v47[-1] + v10);
      qmemcpy(
        (void *)((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)((char *)v47 - ((char *)v22 - ((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8 * (((unsigned __int64)v22 + v10 - ((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL)) >> 3));
      return 1;
    }
    else
    {
      if ( (v10 & 4) != 0 )
      {
        *(_DWORD *)v22 = v47[0];
        *(_DWORD *)((char *)v22 + v10 - 4) = *(_DWORD *)((char *)&v46 + v10 + 4);
      }
      else if ( v10 )
      {
        *(_BYTE *)v22 = v47[0];
        if ( (v10 & 2) != 0 )
          *(_WORD *)((char *)v22 + v10 - 2) = *(_WORD *)((char *)&v46 + v10 + 6);
      }
      return 1;
    }
  }
  v36 = v12;
  v41 = a6;
  v13 = 0;
  v14 = v8;
  v15 = (char *)v47;
  while ( v7 != 16 )
  {
    if ( BYTE2(a1) )
    {
      if ( v14 <= 3 )
      {
        if ( !under_debugger )
        {
          interr();
          goto LABEL_61;
        }
LABEL_65:
        BUG();
      }
      if ( (unsigned int)asctoreal() != 1 || (unsigned int)ieee_realcvt() != 1 )
      {
        v31 = v41;
        goto LABEL_42;
      }
      v43 = 0;
      v17 = 0;
    }
    else
    {
      if ( (unsigned int)qsscanf() != 1 )
        goto LABEL_41;
      v17 = v43;
    }
LABEL_16:
    a3 += v17;
    if ( v14 < 8 )
    {
      if ( (v14 & 4) != 0 )
      {
        *(_DWORD *)v15 = v45;
        *(_DWORD *)&v15[v14 - 4] = *(_DWORD *)&v44[v14 + 4];
      }
      else if ( v14 )
      {
        *v15 = v45;
        if ( (v14 & 2) != 0 )
          *(_WORD *)&v15[v14 - 2] = *(_WORD *)&v44[v14 + 6];
      }
      v15 += v14;
      if ( v36 == ++v13 )
      {
LABEL_18:
        v10 = (char)a1;
        v11 = a2;
        goto LABEL_19;
      }
    }
    else
    {
      v18 = (_BYTE *)((unsigned __int64)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      ++v13;
      *(_QWORD *)v15 = v45;
      v19 = (char *)&v45 - (v15 - v18);
      *(_QWORD *)&v15[v14 - 8] = *(_QWORD *)&v44[v14];
      v20 = (v14 + v15 - v18) >> 3;
      v15 += v14;
      qmemcpy(v18, v19, 8 * v20);
      if ( v36 == v13 )
        goto LABEL_18;
    }
  }
  v24 = (char *)skip_spaces();
  v25 = *v24;
  if ( (_BYTE)v25 != 48 )
  {
LABEL_29:
    if ( (v25 & 0xDF) != 0 )
      goto LABEL_30;
    v27 = 0;
    v28 = 0;
LABEL_40:
    v45 = v27;
    v46 = v28;
    v17 = (_DWORD)v24 - a3;
    goto LABEL_16;
  }
  if ( v24[1] == 120 )
  {
    v25 = v24[2];
    v24 += 2;
    goto LABEL_29;
  }
LABEL_30:
  v26 = v24 + 32;
  v27 = 0;
  v28 = 0;
  do
  {
    ++v24;
    if ( (unsigned __int8)(v25 - 48) <= 9u )
    {
      v29 = v25 - 48;
    }
    else if ( (unsigned __int8)(v25 - 97) > 5u )
    {
      if ( (unsigned __int8)(v25 - 65) > 5u )
        break;
      v29 = v25 - 55;
    }
    else
    {
      v29 = v25 - 87;
    }
    *((_QWORD *)&v30 + 1) = v28;
    *(_QWORD *)&v30 = v27;
    v28 = v30 >> 60;
    v27 = v29 | (16 * v27);
    v25 = *v24;
    if ( (*v24 & 0xDF) == 0 )
      goto LABEL_40;
  }
  while ( v24 != v26 );
LABEL_41:
  v31 = v41;
LABEL_42:
  if ( v31 )
  {
    v32 = *v31;
    if ( (unsigned __int64)v31[2] <= 0x14 )
    {
      v32 = qvector_reserve();
      *v31 = v32;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_89560);
    v31[1] = 21;
    *(_DWORD *)(v32 + 16) = 1952542066;
    *(__m128i *)v32 = si128;
    *(_BYTE *)(*v31 + 20) = 0;
  }
  return 0;
}

