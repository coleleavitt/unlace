__int64 __fastcall sub_3EA630(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        double a7,
        char a8)
{
  __int64 v10; // r12
  unsigned __int16 v12; // cx
  int v13; // esi
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // rsi
  int v19; // ecx
  bool v20; // zf
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r15d
  int v28; // r15d
  __int64 v29; // rsi
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // r14
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // ebp
  int v38; // r14d
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // r14d
  int v43; // [rsp+Ch] [rbp-3Ch]
  int v44; // [rsp+Ch] [rbp-3Ch]

  v10 = a2;
  v12 = *(_WORD *)(a1 + 842);
  if ( ((v12 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE46u, a7);
    BUG();
  }
  v13 = v12;
  v16 = 8 * v12;
  v17 = v16;
  if ( a4 >= a5 )
  {
    if ( a4 < v16 )
    {
      v28 = a4 - a5 + 1;
      if ( v16 == v28 )
      {
        sub_3E8D60(a1, 4u, v13, a3, 0x3BEA45E214ADDC55LL, (int)v10, 0);
        return 1;
      }
      v29 = *(_QWORD *)(a1 + 832);
      v44 = a3;
      v30 = *(_QWORD *)(v29 + 712);
      if ( !a6 )
        goto LABEL_34;
      v31 = a4 - a5 + 8;
      if ( v28 >= 0 )
        v31 = a4 - a5 + 1;
      if ( v28 & 7 | ((v31 >> 3) - 1) & (v31 >> 3) )
      {
        v32 = v17 - a4 - 1;
        if ( v30 )
        {
          v33 = *(_DWORD *)(*(_QWORD *)(v29 + 704) + 4 * v30 - 4);
          *(_QWORD *)(v29 + 712) = v30 - 1;
          sub_3E9B00(a1, v32, 2, v33, 1);
          sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v44, v33, v10, 0);
          sub_3E6F70(*(_QWORD *)(a1 + 832), v33);
          v34 = *(_QWORD *)(a1 + 832);
          v35 = a5 + v32;
          v36 = *(_QWORD *)(v34 + 712);
          if ( v36 )
          {
            v37 = *(_DWORD *)(*(_QWORD *)(v34 + 704) + 4 * v36 - 4);
            *(_QWORD *)(v34 + 712) = v36 - 1;
            sub_3E9B00(a1, v35, 3, v37, 1);
            sub_3E8D60(a1, 0x18u, *(unsigned __int16 *)(a1 + 842), v10, v37, v10, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v37);
            return 1;
          }
        }
      }
      else
      {
LABEL_34:
        if ( v30 )
        {
          v38 = *(_DWORD *)(*(_QWORD *)(v29 + 704) + 4 * v30 - 4);
          *(_QWORD *)(v29 + 712) = v30 - 1;
          sub_3E9B00(a1, a5, 3, v38, 1);
          sub_3E8D60(a1, 0x17u, *(unsigned __int16 *)(a1 + 842), v44, v38, (int)v10, 0);
          sub_3E6F70(*(_QWORD *)(a1 + 832), v38);
          v39 = *(_QWORD *)(a1 + 832);
          v40 = *(_QWORD *)(v39 + 712);
          if ( v40 )
          {
            v41 = -1;
            v42 = *(_DWORD *)(*(_QWORD *)(v39 + 704) + 4 * v40 - 4);
            *(_QWORD *)(v39 + 712) = v40 - 1;
            if ( (unsigned __int64)v28 <= 0x3F )
              v41 = (1LL << v28) - 1;
            sub_3E9B00(a1, v41, 1, v42, *(unsigned __int16 *)(a1 + 842));
            sub_3E8D60(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), (int)v10, v42, (int)v10, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v42);
            if ( a6 )
              sub_3EA150(a1, v28 / 8, *(unsigned __int16 *)(a1 + 842), v10, v10, 1u, a7);
            return 1;
          }
        }
      }
LABEL_30:
      sub_3E4E50(a7);
    }
  }
  else if ( a8 == 1 && a5 < v16 )
  {
    v18 = *(_QWORD *)(a1 + 832);
    v19 = a5 + 1 - a4;
    v20 = a4 == 0;
    v21 = 1;
    if ( !v20 )
      v21 = v19;
    v22 = *(_QWORD *)(v18 + 712);
    if ( v22 )
    {
      v43 = a3;
      v23 = *(_DWORD *)(*(_QWORD *)(v18 + 704) + 4 * v22 - 4);
      *(_QWORD *)(v18 + 712) = v22 - 1;
      sub_3E9B00(a1, v17 - v21, 2, v23, 1);
      sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v43, v23, v10, 0);
      sub_3E6F70(*(_QWORD *)(a1 + 832), v23);
      v24 = *(_QWORD *)(a1 + 832);
      v25 = *(_QWORD *)(v24 + 712);
      if ( v25 )
      {
        v26 = *(_DWORD *)(*(_QWORD *)(v24 + 704) + 4 * v25 - 4);
        *(_QWORD *)(v24 + 712) = v25 - 1;
        sub_3E9B00(a1, v17 - a5 - 1, 3, v26, 1);
        sub_3E8D60(a1, a6 + 23, *(unsigned __int16 *)(a1 + 842), v10, v26, v10, 0);
        sub_3E6F70(*(_QWORD *)(a1 + 832), v26);
        return 1;
      }
    }
    goto LABEL_30;
  }
  return 0;
}

