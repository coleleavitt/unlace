unsigned __int64 __fastcall sub_2F400(__int64 a1, __int64 *a2, int a3, char a4, int a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // [rsp+0h] [rbp-58h]
  int v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+10h] [rbp-48h]
  int v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]
  int v30; // [rsp+18h] [rbp-40h]
  int v31; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+28h] [rbp-30h]
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+30h] [rbp-28h]
  int v36; // [rsp+30h] [rbp-28h]
  int v37; // [rsp+38h] [rbp-20h]
  int v38; // [rsp+38h] [rbp-20h]
  int v39; // [rsp+40h] [rbp-18h]
  int v40; // [rsp+40h] [rbp-18h]
  int v41; // [rsp+48h] [rbp-10h]
  int v42; // [rsp+48h] [rbp-10h]
  __int64 v43; // [rsp+50h] [rbp-8h]
  __int64 v44; // [rsp+50h] [rbp-8h]

  v29 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 392);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 384);
    v10 = v8 + 104 * v7;
    if ( *(_DWORD *)(a1 + 408) == 3 )
    {
      if ( v8 != v10 )
      {
        v16 = a2[1];
        do
        {
          v17 = *a2;
          if ( a2[2] < (unsigned __int64)(v16 + 1) )
          {
            v18 = qvector_reserve(a2, v17, v16 + 1, 8);
            v16 = a2[1];
            *a2 = v18;
            v17 = v18;
          }
          *(_QWORD *)(v17 + 8 * v16) = v8;
          v8 += 104;
          v16 = a2[1] + 1;
          a2[1] = v16;
        }
        while ( v8 != v10 );
      }
    }
    else
    {
      v11 = a4 & 1;
      if ( v8 != v10 )
      {
        v12 = 0;
        do
        {
          if ( v11 )
          {
            while ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
            {
              v8 += 104;
              if ( v10 == v8 )
                return v29 - __readfsqword(0x28u);
            }
          }
          if ( v12 && *(_QWORD *)(v8 + 40) == *(_QWORD *)(v12 + 40) )
          {
            if ( (*(_BYTE *)(v12 + 72) & 8) != 0 && (*(_BYTE *)(v8 + 72) & 8) != 0 )
            {
              v20 = sub_5E020((int)v8 + 48, 1, a3, v12, a5, a6, v24, v12, v27, v29, v31, v33, v35, v37, v39, v41, v43);
              v23 = sub_5E020(v25 + 48, 1, a3, v25, v21, v22, v20, v25, v28, v30, v32, v34, v36, v38, v40, v42, v44);
              if ( v24 <= v23 )
              {
                v12 = v26;
                goto LABEL_11;
              }
            }
            *(_QWORD *)(*a2 + 8 * a2[1] - 8) = v8;
          }
          else
          {
            v13 = a2[1];
            v27 = v8;
            v14 = *a2;
            if ( a2[2] < (unsigned __int64)(v13 + 1) )
            {
              v19 = qvector_reserve(a2, v14, v13 + 1, 8);
              *a2 = v19;
              v14 = v19;
              v13 = a2[1];
            }
            *(_QWORD *)(v14 + 8 * v13) = v8;
            ++a2[1];
          }
          v12 = v8;
LABEL_11:
          v8 += 104;
        }
        while ( v8 != v10 );
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

