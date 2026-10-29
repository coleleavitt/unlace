__int64 __fastcall sub_14A660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i a5,
        __m128 a6,
        __m128i a7,
        double a8)
{
  int v8; // r15d
  char v9; // r14
  int v10; // r13d
  int v11; // r12d
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9

  v8 = a2 & 8;
  v9 = a2;
  v10 = a2 & 4;
  v11 = a2 & 2;
  v12 = 0;
  sub_670E0((_QWORD *)a1, a2, a3, a4);
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
LABEL_2:
  if ( v10 )
  {
LABEL_7:
    v20 = (__int64 *)sub_670E0((_QWORD *)a1, a2, v13, v14);
    a2 = v9 & 1;
    v12 += sub_181F80(v20, (__int64 (__fastcall *)(__int64))a2, v21, v22, v23, v24);
    if ( v8 )
    {
LABEL_4:
      while ( 1 )
      {
        v17 = sub_149220(*(__int64 **)(a1 + 784), a2, v13, v14, v15, v16, *(double *)a5.m128i_i64, a6);
        if ( !v17 )
          break;
        v12 += v17;
        sub_670E0((_QWORD *)a1, a2, v18, v19);
        if ( v11 )
        {
LABEL_10:
          while ( sub_144330(a1, a2, v13, v14, v15, v16, a5, a6, a7, a8) )
            ++v12;
          goto LABEL_2;
        }
        if ( v10 )
          goto LABEL_7;
      }
    }
  }
  else if ( v8 )
  {
    goto LABEL_4;
  }
  return v12;
}

