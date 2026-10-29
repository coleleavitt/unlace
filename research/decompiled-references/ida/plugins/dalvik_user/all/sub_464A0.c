__int64 __fastcall sub_464A0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebp
  size_t v5; // r15
  __int64 v6; // r12
  const void *v7; // r14
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  size_t v12; // r14
  __int64 v13; // r12
  void *v14; // r8
  size_t v15; // r15
  __int64 v16; // rsi
  size_t v17; // rdx
  __int64 v18; // r12
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  unsigned __int64 v21; // r12
  size_t v22; // r8
  __int64 v23; // r14
  size_t v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+0h] [rbp-A0h]
  size_t v31; // [rsp+0h] [rbp-A0h]
  int v32; // [rsp+8h] [rbp-98h]
  void *v33; // [rsp+8h] [rbp-98h]
  size_t v34; // [rsp+8h] [rbp-98h]
  __int64 v35; // [rsp+10h] [rbp-90h]
  int v36; // [rsp+24h] [rbp-7Ch] BYREF
  __int64 v37; // [rsp+28h] [rbp-78h]
  __int128 v38; // [rsp+30h] [rbp-70h]
  void *src; // [rsp+48h] [rbp-58h]
  size_t n[2]; // [rsp+50h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v38 = 0;
  v37 = 0;
  v3 = sub_46430(a1, (unsigned __int32 *)&v36, 0);
  if ( !(_BYTE)v3 )
    goto LABEL_2;
  v5 = v36;
  v6 = v38;
  v7 = (const void *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 24));
  v8 = v36;
  v9 = v36;
  if ( (_QWORD)v38 )
  {
    v6 = v38 - 1;
    v10 = v37;
    v9 = v36 + v38 - 1;
    v11 = v36 + (_QWORD)v38;
    if ( *((_QWORD *)&v38 + 1) >= v11 )
      goto LABEL_7;
  }
  else
  {
    v10 = v37;
    v11 = v36 + 1LL;
    if ( *((_QWORD *)&v38 + 1) >= v11 )
      goto LABEL_7;
  }
  v35 = v9;
  v32 = v36;
  v30 = v11;
  v37 = qvector_reserve();
  v9 = v35;
  v10 = v37;
  v8 = v32;
  v11 = v30;
LABEL_7:
  *(_QWORD *)&v38 = v11;
  *(_BYTE *)(v10 + v9) = 0;
  v29 = v8;
  memmove((void *)(v6 + v37), v7, v5);
  *(_DWORD *)(a1 + 24) += v29;
  if ( a2 )
  {
    if ( *a2 )
    {
      a2[1] = 0;
      qfree();
      *a2 = 0;
      a2[2] = 0;
    }
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( convert_encoding() > 0 )
    {
      v12 = n[0];
      v13 = a2[1];
      v14 = src;
      v15 = n[0];
      if ( v13 )
      {
        --v13;
        v15 = n[0] + v13;
      }
      v16 = *a2;
      v17 = v15 + 1;
      if ( a2[2] < v15 + 1 )
      {
        v33 = src;
        v26 = qvector_reserve();
        *a2 = v26;
        v14 = v33;
        v16 = v26;
        v17 = v15 + 1;
      }
      a2[1] = v17;
      *(_BYTE *)(v16 + v15) = 0;
      memmove((void *)(v13 + *a2), v14, v12);
    }
    if ( *(_BYTE *)(a1 + 56) )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v19 = 2;
      if ( v18 )
        v19 = v18-- + 1;
      v20 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v19 )
      {
        v27 = qvector_reserve();
        *(_QWORD *)(a1 + 32) = v27;
        v20 = v27;
      }
      *(_QWORD *)(a1 + 40) = v19;
      *(_BYTE *)(v20 + v18) = 34;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v18 + 1) = 0;
      v21 = a2[1];
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v21 != 1 )
        {
          v23 = *(_QWORD *)(a1 + 40);
          v24 = v21 - 1;
          if ( v23 )
          {
            --v23;
            v24 = v22 + v23;
            v21 += v23;
          }
          v25 = *(_QWORD *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 48) < v21 )
          {
            v34 = v24;
            v31 = v22;
            v28 = qvector_reserve();
            *(_QWORD *)(a1 + 32) = v28;
            v24 = v34;
            v25 = v28;
            v22 = v31;
          }
          *(_QWORD *)(a1 + 40) = v21;
          *(_BYTE *)(v25 + v24) = 0;
          memcpy((void *)(v23 + *(_QWORD *)(a1 + 32)), (const void *)*a2, v22);
        }
      }
      sub_43D60((__int64 *)(a1 + 32), "\",");
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
LABEL_2:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v3;
}

