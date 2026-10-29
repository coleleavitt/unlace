__int64 __fastcall sub_25030(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // bp
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rsi
  bool v13; // cf
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm0
  _QWORD *v25; // [rsp+8h] [rbp-70h]
  int v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v1 = 0;
  v29 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 536) )
  {
    v4 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v5 = *(_QWORD *)(a1 + 480);
    v27 = v4 - v5;
    if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 536) + v5, 0) != -1 )
    {
      v6 = *(_QWORD *)(a1 + 472);
      v7 = *(unsigned __int16 *)(a1 + 558);
      v26 = *(unsigned __int16 *)(a1 + 560);
      v8 = *(_WORD *)(a1 + 560);
      v28 = v26;
      v1 = sub_24F80(v6, &v28, v7, -1, -1);
      if ( !(_BYTE)v1 )
        sub_179E0((__int64)"%s is incorrect, maximum possible value is %u%s", "PHT entries", v28, "");
      sub_1F2F0((__int64 *)(a1 + 32), v8);
      *(_BYTE *)(a1 + 72) = 1;
      if ( !v26 )
        goto LABEL_27;
      v25 = nullptr;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v12 = v10 * *(unsigned __int16 *)(a1 + 558);
        v13 = __CFADD__(*(_QWORD *)(a1 + 536), v12);
        v14 = *(_QWORD *)(a1 + 536) + v12;
        v15 = v13;
        if ( v13 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v14, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 72) )
          sub_13640();
        v11 = (_QWORD *)(v9 + *(_QWORD *)(a1 + 32));
        if ( (int)sub_182A0(a1, (__int64)v11, 4, 1) < 0
          || *(_BYTE *)(a1 + 617) && (int)sub_182A0(a1, (__int64)v11 + 4, 4, 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 1), *(int *)(a1 + 428), 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 2), *(int *)(a1 + 424), 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 3), *(int *)(a1 + 424), 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 4), *(int *)(a1 + 432), 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 5), *(int *)(a1 + 432), 1) < 0
          || !*(_BYTE *)(a1 + 617) && (int)sub_182A0(a1, (__int64)v11 + 4, 4, 1) < 0
          || (int)sub_182A0(a1, (__int64)(v11 + 6), *(int *)(a1 + 432), 1) < 0 )
        {
          if ( (_DWORD)v10 )
            v15 = (int)v10 - 1;
          sub_1F2F0((__int64 *)(a1 + 32), v15);
          break;
        }
        if ( *(_DWORD *)v11 == 1 )
        {
          sub_18F80((_QWORD *)a1, v11);
          v16 = v11[2];
          if ( v16 < *(_QWORD *)(a1 + 56) )
            *(_QWORD *)(a1 + 56) = v16 & 0xFFFFFFFFFFFFF000LL;
        }
        else
        {
          if ( *(_DWORD *)v11 != 2 )
            v11 = v25;
          v25 = v11;
        }
        ++v10;
        v9 += 56;
        if ( v26 <= (int)v10 )
        {
          if ( v25 )
          {
            v17 = v25[4];
            v18 = *(_QWORD *)(a1 + 584);
            v19 = v25[2];
            if ( v17 < v25[5] )
              v17 = v25[5];
            if ( v18 )
            {
              v20 = 0;
              v21 = 0;
              while ( 1 )
              {
                v22 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v20);
                v23 = v22[2];
                if ( v19 >= v23 && v19 < v23 + v22[1] )
                  break;
                v20 = ++v21;
                if ( v21 >= v18 )
                  goto LABEL_41;
              }
              v24 = (__m128i)(*v22 + (unsigned __int64)(unsigned int)(v19 - v23));
            }
            else
            {
LABEL_41:
              v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            }
            *(_QWORD *)(a1 + 16) = v17;
            *(_DWORD *)(a1 + 24) = -1;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v24, (__m128i)v19);
          }
          goto LABEL_27;
        }
      }
    }
    v1 = 0;
LABEL_27:
    qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v27, 0);
  }
  return v1;
}

