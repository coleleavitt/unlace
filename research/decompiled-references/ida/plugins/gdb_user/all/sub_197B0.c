__int64 __fastcall sub_197B0(__int64 a1)
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
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rbp
  __int64 v16; // rsi
  bool v17; // cf
  __int64 v18; // rsi
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r10
  int v26; // eax
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rcx
  __m128i v29; // xmm0
  struct _Unwind_Exception *v30; // rbp
  char v31; // [rsp+0h] [rbp-58h]
  _QWORD *v32; // [rsp+0h] [rbp-58h]
  int v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 *v35; // [rsp+18h] [rbp-40h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v34 = qlseek() - *(_QWORD *)(a1 + 480);
    if ( qlseek() != -1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 558);
      v33 = *(unsigned __int16 *)(a1 + 560);
      v5 = *(_WORD *)(a1 + 560);
      v6 = qlseek();
      v7 = qlsize() - v6;
      if ( ((v7 | v6) & 0x8000000000000000LL) != 0LL )
      {
        LODWORD(v10) = 0;
LABEL_31:
        sub_17C70(
          (__int64)"%s is incorrect, maximum possible value is %u%s",
          (__int64)"PHT entries",
          (unsigned int)v10,
          (__int64)&unk_54999,
          v8,
          v9,
          v31);
      }
      if ( v7 < v5 * v4 )
      {
        v10 = v7 / v4;
        goto LABEL_31;
      }
      v35 = (__int64 *)(a1 + 32);
      sub_19720((__int64 *)(a1 + 32), v5);
      *(_BYTE *)(a1 + 72) = 1;
      if ( !v33 )
      {
LABEL_47:
        v1 = 1;
        goto LABEL_29;
      }
      v32 = nullptr;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v16 = v12 * *(unsigned __int16 *)(a1 + 558);
        v17 = __CFADD__(*(_QWORD *)(a1 + 536), v16);
        v18 = *(_QWORD *)(a1 + 536) + v16;
        v19 = v17;
        if ( v17 )
          break;
        v13 = *(_QWORD *)(a1 + 472);
        v14 = *(_QWORD *)(a1 + 480) + v18;
        if ( qlseek() == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 72) )
        {
          v30 = (struct _Unwind_Exception *)sub_17410(v13, v14);
          sub_96F0(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480), v34);
          _Unwind_Resume(v30);
        }
        v15 = (_QWORD *)(v11 + *(_QWORD *)(a1 + 32));
        if ( (int)sub_18510(a1, (__int64)v15, 4) < 0
          || *(_BYTE *)(a1 + 617) && (int)sub_18510(a1, (__int64)v15 + 4, 4) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 1), *(int *)(a1 + 428)) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 2), *(int *)(a1 + 424)) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 3), *(int *)(a1 + 424)) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 4), *(int *)(a1 + 432)) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 5), *(int *)(a1 + 432)) < 0
          || !*(_BYTE *)(a1 + 617) && (int)sub_18510(a1, (__int64)v15 + 4, 4) < 0
          || (int)sub_18510(a1, (__int64)(v15 + 6), *(int *)(a1 + 432)) < 0 )
        {
          v21 = (int)v12 - 1;
          if ( !(_DWORD)v12 )
            v21 = 0;
          sub_19720(v35, v21);
          break;
        }
        if ( *(_DWORD *)v15 == 1 )
        {
          sub_18FD0((_QWORD *)a1, v15);
          v20 = v15[2];
          if ( v20 < *(_QWORD *)(a1 + 56) )
            *(_QWORD *)(a1 + 56) = v20 & 0xFFFFFFFFFFFFF000LL;
        }
        else
        {
          if ( *(_DWORD *)v15 != 2 )
            v15 = v32;
          v32 = v15;
        }
        ++v12;
        v11 += 56;
        if ( v33 <= (int)v12 )
        {
          if ( v32 )
          {
            v22 = v32[5];
            v23 = *(_QWORD *)(a1 + 584);
            v24 = v32[2];
            if ( v32[4] >= v22 )
              v22 = v32[4];
            v25 = v22;
            if ( v23 )
            {
              v26 = 0;
              while ( 1 )
              {
                v27 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v19);
                v28 = v27[2];
                if ( v24 >= v28 && v24 < v28 + v27[1] )
                  break;
                v19 = ++v26;
                if ( v26 >= v23 )
                  goto LABEL_45;
              }
              v29 = (__m128i)(*v27 + (unsigned __int64)(unsigned int)(v24 - v28));
            }
            else
            {
LABEL_45:
              v29 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            }
            *(_QWORD *)(a1 + 16) = v25;
            *(_DWORD *)(a1 + 24) = -1;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v29, (__m128i)v24);
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

