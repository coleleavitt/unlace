__int64 __fastcall sub_2A4C0(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v4; // r12
  unsigned __int16 v5; // bp
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rbp
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r10
  int v21; // eax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm0
  struct _Unwind_Exception *v25; // rbp
  char v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+0h] [rbp-58h]
  int v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v29 = qlseek() - *(_QWORD *)(a1 + 480);
    if ( qlseek() != -1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 558);
      v28 = *(unsigned __int16 *)(a1 + 560);
      v5 = *(_WORD *)(a1 + 560);
      v6 = qlseek();
      v7 = qlsize() - v6;
      if ( ((v7 | v6) & 0x8000000000000000LL) != 0LL )
      {
        LODWORD(v10) = 0;
LABEL_31:
        sub_26950(
          (__int64)"%s is incorrect, maximum possible value is %u%s",
          (__int64)"PHT entries",
          (unsigned int)v10,
          (__int64)"",
          v8,
          v9,
          v26);
      }
      if ( v7 < v5 * v4 )
      {
        v10 = v7 / v4;
        goto LABEL_31;
      }
      sub_2A430((__int64 *)(a1 + 32), v5);
      *(_BYTE *)(a1 + 72) = 1;
      if ( !v28 )
      {
LABEL_47:
        v1 = 1;
        goto LABEL_29;
      }
      v27 = nullptr;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v14 = __CFADD__(*(_QWORD *)(a1 + 536), v12 * *(unsigned __int16 *)(a1 + 558));
        if ( __CFADD__(*(_QWORD *)(a1 + 536), v12 * *(unsigned __int16 *)(a1 + 558)) || qlseek() == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 72) )
        {
          v25 = (struct _Unwind_Exception *)sub_25E00();
          sub_98AA(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480), v29);
          _Unwind_Resume(v25);
        }
        v13 = (_QWORD *)(v11 + *(_QWORD *)(a1 + 32));
        if ( (int)sub_27030(a1, (__int64)v13, 4) < 0
          || *(_BYTE *)(a1 + 617) && (int)sub_27030(a1, (__int64)v13 + 4, 4) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 1), *(int *)(a1 + 428)) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 2), *(int *)(a1 + 424)) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 3), *(int *)(a1 + 424)) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 4), *(int *)(a1 + 432)) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 5), *(int *)(a1 + 432)) < 0
          || !*(_BYTE *)(a1 + 617) && (int)sub_27030(a1, (__int64)v13 + 4, 4) < 0
          || (int)sub_27030(a1, (__int64)(v13 + 6), *(int *)(a1 + 432)) < 0 )
        {
          v16 = (int)v12 - 1;
          if ( !(_DWORD)v12 )
            v16 = 0;
          sub_2A430((__int64 *)(a1 + 32), v16);
          break;
        }
        if ( *(_DWORD *)v13 == 1 )
        {
          sub_28620((_QWORD *)a1, v13);
          v15 = v13[2];
          if ( v15 < *(_QWORD *)(a1 + 56) )
            *(_QWORD *)(a1 + 56) = v15 & 0xFFFFFFFFFFFFF000LL;
        }
        else
        {
          if ( *(_DWORD *)v13 != 2 )
            v13 = v27;
          v27 = v13;
        }
        ++v12;
        v11 += 56;
        if ( v28 <= (int)v12 )
        {
          if ( v27 )
          {
            v17 = v27[5];
            v18 = *(_QWORD *)(a1 + 584);
            v19 = v27[2];
            if ( v27[4] >= v17 )
              v17 = v27[4];
            v20 = v17;
            if ( v18 )
            {
              v21 = 0;
              while ( 1 )
              {
                v22 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v14);
                v23 = v22[2];
                if ( v19 >= v23 && v19 < v23 + v22[1] )
                  break;
                v14 = ++v21;
                if ( v21 >= v18 )
                  goto LABEL_45;
              }
              v24 = (__m128i)(*v22 + (unsigned __int64)(unsigned int)(v19 - v23));
            }
            else
            {
LABEL_45:
              v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            }
            *(_QWORD *)(a1 + 16) = v20;
            *(_DWORD *)(a1 + 24) = -1;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v24, (__m128i)v19);
          }
          goto LABEL_47;
        }
      }
    }
    v1 = 0;
LABEL_29:
    qlseek();
  }
  return v1;
}

