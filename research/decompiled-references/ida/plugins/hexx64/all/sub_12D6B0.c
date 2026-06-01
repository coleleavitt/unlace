__int64 __fastcall sub_12D6B0(_QWORD *a1, unsigned int **a2, __int64 a3, __m128i a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 *v9; // r14
  _QWORD *v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // r8
  int v13; // r9d
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v18[3] = __readfsqword(0x28u);
  if ( a2 != (unsigned int **)a3 )
  {
    sub_11CDA0((__int64)a2);
    sub_123A40((__int64)a2, (unsigned __int8 *)a3, v6, v7);
  }
  v8 = a1[1];
  if ( !v8 )
  {
    if ( !under_debugger )
      sub_383060(0xCCFAu, *(double *)a4.m128i_i64);
    BUG();
  }
  v9 = *(unsigned __int64 **)(*(_QWORD *)(v8 + 480) + 112LL);
  if ( *(_BYTE *)a3 )
  {
    v10 = (_QWORD *)a1[5];
    v18[1] = 0;
    v18[0] = 0xFFFFFFFF00000000LL;
    v11 = a1[3];
    if ( a3 == v11 + 64 )
    {
      if ( *((_BYTE *)v10 + 64) )
      {
        v12 = v10 + 8;
        v13 = 1;
      }
      else
      {
        sub_11CDA0((__int64)v18);
        sub_123A40((__int64)v18, (unsigned __int8 *)a3, v16, v17);
        v14 = sub_12CD10((__int16 *)v18, v9, 1, a4);
        if ( !(_BYTE)v14 )
          goto LABEL_10;
        v8 = a1[1];
        v13 = 1;
        v12 = v18;
      }
    }
    else
    {
      if ( a3 == v11 + 32 )
        v12 = v10 + 4;
      else
        v12 = v10 + 6;
      v13 = 0;
    }
    sub_1571F0(v8, a1[2], (__int64)a2, a1[4], (__int64)v12, v13);
    v14 = 1;
LABEL_10:
    sub_11CDA0((__int64)v18);
    return v14;
  }
  return sub_12AB50(a2, v9, 2 * *(_DWORD *)(a3 + 4), 1, a4);
}

