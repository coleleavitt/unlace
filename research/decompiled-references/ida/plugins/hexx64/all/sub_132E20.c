__int64 __fastcall sub_132E20(__int128 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __m128i a6, __m128 a7)
{
  __int64 v8; // r14
  __int64 v11; // rax
  unsigned int v13; // r10d
  __int64 v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // r15
  bool v18; // al
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+10h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *((_QWORD *)&a1 + 1);
  v11 = *(_QWORD *)(a1 + 480);
  v31[3] = __readfsqword(0x28u);
  v26 = *(_QWORD *)(v11 + 112);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, *(double *)a6.m128i_i64);
  sub_1217B0((const __m128i *)a1, a3, a4, *(double *)a6.m128i_i64);
  if ( (a5 & 8) != 0 || (unsigned __int8)sub_130BC0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, a3, a4, 0, a6, a7) )
  {
    sub_1571F0(a1, *((__int64 *)&a1 + 1), a2, a3, a4, a5);
  }
  else
  {
    if ( (unsigned __int8)sub_11FD80((char *)a4, v31, 0) && !v31[0] )
    {
      v20 = -1;
      if ( *((_QWORD *)&a1 + 1) )
        v20 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      sub_1207E0((char *)a2, (unsigned __int64 *)v26, 9, v20, 2 * *(_DWORD *)(a2 + 4), a6);
      goto LABEL_4;
    }
    if ( *(_BYTE *)a4 != 4
      || !(unsigned __int8)sub_132AB0(a1, a2, a3, *(unsigned int **)(a4 + 8), *(_DWORD *)(a4 + 4), a6, a7) )
    {
      v30 = *((_QWORD *)&a1 + 1);
      v15 = sub_129440(a1, a2, (__int64)&v30, 1, *(double *)a6.m128i_i64, a7);
      if ( v15 )
      {
        if ( *(_DWORD *)(v15 + 68) == *(_DWORD *)(a2 + 4) && *(_DWORD *)v15 != 1 )
        {
          v29 = v15;
          if ( !sub_11F430((_BYTE *)v15, *(_QWORD *)(v26 + 96), 0) )
          {
            if ( *(_DWORD *)v29 == 4 )
            {
              sub_123A40((__int64)v31, (unsigned __int8 *)(v29 + 32), v21, v22);
              *((_QWORD *)&a1 + 1) = v30;
              v28 = v30;
              if ( (unsigned __int8)sub_132E20(a1, (__int64)v31, a3, a4, a5)
                || (unsigned __int8)sub_1321C0((const __m128i *)a1, v8, a2, v28, (__int64)v31, a6, a7)
                && (unsigned __int8)sub_1301F0((const __m128i *)a1, a3, a4, v28, (__int64)v31, a6, a7) )
              {
                sub_11CA10((char *)a2, (char *)v31);
                sub_11CDA0((__int64)v31);
                goto LABEL_4;
              }
              sub_11CDA0((__int64)v31);
            }
            else if ( *(_BYTE *)a4 == 4 )
            {
              v23 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)v23 == 11 && *(_BYTE *)(v23 + 32) == 4 )
              {
                v27 = *(_QWORD *)(a4 + 8);
                if ( sub_125B90(*(unsigned __int8 **)(v23 + 40), v26, (unsigned int *)v29, 0, *(double *)a6.m128i_i64) )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v27 + 40) + 68LL) == *(_DWORD *)(a2 + 4) + *(_DWORD *)(a4 + 4) )
                  {
                    if ( a2 != v27 + 32 )
                    {
                      sub_11CDA0(a2);
                      sub_123A40(a2, (unsigned __int8 *)(v27 + 32), v24, v25);
                    }
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
      }
      v30 = a3;
      v16 = (unsigned int *)sub_129440(a1, a4, (__int64)&v30, 1, *(double *)a6.m128i_i64, a7);
      v13 = 0;
      v17 = v16;
      if ( !v16 )
        return v13;
      if ( *v16 == 1 )
        return v13;
      v18 = sub_11F430(v16, *(_QWORD *)(v26 + 96), 0);
      v13 = 0;
      if ( v18 )
        return v13;
      *((_QWORD *)&a1 + 1) = v8;
      v19 = sub_132AB0(a1, a2, v30, v17, *(_DWORD *)(a4 + 4), a6, a7);
      v13 = 0;
      if ( !v19 )
        return v13;
    }
  }
LABEL_4:
  if ( (a5 & 4) == 0 )
    sub_12AB50((unsigned int **)a2, (unsigned __int64 *)v26, *(_DWORD *)(a2 + 4), 2, a6);
  return 1;
}

