unsigned __int64 __fastcall sub_2B45E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  size_t v7; // rax
  __int64 *v8; // r12
  size_t v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-80h]
  const void *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  _BYTE v21[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v4 = a1[1];
  v5 = *a1;
  v22 = __readfsqword(0x28u);
  v20 = 0;
  v19 = nullptr;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v17 = qvector_reserve();
    *a1 = v17;
    v5 = v17;
    v4 = a1[1];
  }
  *(_BYTE *)(v5 + v4) = 1;
  ++a1[1];
  v7 = pack_dd() - (_QWORD)v21;
  if ( v7 )
    sub_2AEB90(a1, v21, v7);
  v8 = *(__int64 **)a2;
  v18 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v18 )
  {
    do
    {
      v9 = pack_dd() - (_QWORD)v21;
      if ( v9 )
        sub_2AEB90(a1, v21, v9);
      v10 = *v8;
      v11 = *v8 + 112 * v8[1];
      if ( v11 != *v8 )
      {
        do
        {
          while ( 1 )
          {
            sub_7CE30(v10, a1);
            v12 = a1[1];
            v13 = *(_DWORD *)(v10 + 104);
            v14 = *a1;
            if ( a1[2] < (unsigned __int64)(v12 + 1) )
            {
              v15 = qvector_reserve();
              *a1 = v15;
              v14 = v15;
              v12 = a1[1];
            }
            *(_BYTE *)(v14 + v12) = v13;
            ++a1[1];
            if ( *(_DWORD *)(v10 + 104) )
            {
              sub_8D530((unsigned __int8 *)(v10 + 24), (__int64)&v19, a3);
              if ( (_QWORD)v20 )
                break;
            }
            v10 += 112;
            if ( v11 == v10 )
              goto LABEL_16;
          }
          sub_2AEB90(a1, v19, v20);
          v10 += 112;
        }
        while ( v11 != v10 );
      }
LABEL_16:
      v8 += 3;
    }
    while ( (__int64 *)v18 != v8 );
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v22 - __readfsqword(0x28u);
}

