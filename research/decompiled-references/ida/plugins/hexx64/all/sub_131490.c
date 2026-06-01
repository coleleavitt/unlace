__int64 __fastcall sub_131490(
        unsigned __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int16 *a4,
        unsigned int a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // edx
  int v17; // r15d
  char v19; // al
  __int64 v20; // rax
  __int16 v21; // si
  __int16 v22; // cx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r13d
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp-10h] [rbp-78h]
  __int64 v30; // [rsp-8h] [rbp-70h]
  unsigned __int8 v31; // [rsp+8h] [rbp-60h]
  int v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h] BYREF
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v13 = *(_BYTE *)a4 == 1;
  v35 = __readfsqword(0x28u);
  v14 = a9;
  if ( v13 && *((_DWORD *)a4 + 2) >= *((_DWORD *)a1 + 17) )
    return 0;
  v15 = a1[12];
  if ( *(_BYTE *)(v15 + 145) )
  {
    v31 = a6;
    v19 = sub_11BB90((unsigned __int8 *)a4, v15, 0, *(double *)a7.m128i_i64);
    a6 = v31;
    v14 = a9;
    if ( v31 != v19 )
    {
LABEL_4:
      v16 = *((_DWORD *)a4 + 1);
      v17 = a5 - v16;
      if ( (int)(a5 - v16) > 0 )
      {
        switch ( *(_BYTE *)a4 )
        {
          case 0:
            goto LABEL_19;
          case 1:
            v32 = v14;
            v27 = *((_DWORD *)a4 + 2) + v16 - a5;
            if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64 *, _QWORD, _QWORD))(*a1 + 88))(a1, v27, a5) )
              return 0;
            *((_DWORD *)a4 + 2) = v27;
            if ( (unsigned __int8)sub_12AB50((unsigned int **)a4, a1, a5, v32, a7) )
              return 1;
            *((_DWORD *)a4 + 2) += v17;
            break;
          case 4:
            goto LABEL_11;
          case 5:
          case 9:
            v25 = *((_QWORD *)a4 + 1);
            v26 = *(_QWORD *)(v25 + 8);
            if ( v26 < v17 )
              return 0;
            *(_QWORD *)(v25 + 8) = v26 - v17;
            if ( (unsigned __int8)sub_12AB50((unsigned int **)a4, a1, a5, v14, a7) )
              return 1;
            *(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL) += v17;
            break;
          case 6:
            v28 = *((_QWORD *)a4 + 1);
            if ( v28 < v17 )
              return 0;
            *((_QWORD *)a4 + 1) = *(_QWORD *)(*(_QWORD *)(a1[12] + 24) + 16LL) & (v28 - v17);
            if ( (unsigned __int8)sub_12AB50((unsigned int **)a4, a1, a5, v14, a7) )
              return 1;
            *((_QWORD *)a4 + 1) = *(_QWORD *)(*(_QWORD *)(a1[12] + 24) + 16LL) & (*((_QWORD *)a4 + 1) + v17);
            break;
          default:
            return 0;
        }
      }
      return 0;
    }
  }
  else if ( a6 )
  {
    goto LABEL_4;
  }
  if ( *(_BYTE *)a4 != 4 )
    return sub_12AB50((unsigned int **)a4, a1, a5, v14, a7);
  if ( (int)(a5 - *((_DWORD *)a4 + 1)) <= 0 )
    return 0;
LABEL_11:
  if ( !(unsigned __int8)sub_131000(a1, a2, *((_QWORD *)a4 + 1), a5, a3, a6, a7, a8, v14, 0) )
    return 0;
  v20 = *((_QWORD *)a4 + 1);
  if ( *(_DWORD *)v20 == 4 )
  {
    if ( a4 )
    {
      v34 = 0;
      sub_123A40((__int64)&v33, (unsigned __int8 *)(v20 + 32), v29, v30);
      v21 = *a4;
      v22 = a4[1];
      v23 = *((_DWORD *)a4 + 1);
      *(_QWORD *)a4 = v33;
      v24 = *((_QWORD *)a4 + 1);
      LOWORD(v33) = v21;
      *((_QWORD *)a4 + 1) = v34;
      WORD1(v33) = v22;
      HIDWORD(v33) = v23;
      v34 = v24;
      sub_11CDA0((__int64)&v33);
    }
  }
  else
  {
LABEL_19:
    *((_DWORD *)a4 + 1) = a5;
    a4[1] = 0;
  }
  return 1;
}

