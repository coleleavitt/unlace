unsigned __int64 __fastcall sub_3BB20(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  const void *v14; // r14
  void *v15; // rax
  unsigned __int64 v16; // r12
  const void *v17; // r14
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  _QWORD *v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r13
  const void *v24; // r14
  const void *v25; // r14
  __int64 v26; // [rsp+8h] [rbp-70h] BYREF
  __int128 v27; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v28[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = (_QWORD *)sub_3B4F0(a1);
  if ( v2 )
  {
    v3 = v2;
    if ( *(_QWORD *)(a1 + 64) || !v2[8] )
    {
      if ( v2[12] )
        goto LABEL_5;
LABEL_8:
      v3[12] = a1;
      goto LABEL_5;
    }
    v12 = a1 + 16;
    if ( (_QWORD *)(a1 + 16) != v2 + 2 )
    {
      v13 = v2[3];
      if ( v13 < 2 )
      {
        *(_QWORD *)(a1 + 24) = 0;
      }
      else
      {
        v14 = (const void *)v2[2];
        v15 = *(void **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < v13 )
        {
          v15 = (void *)qvector_reserve(v12, *(_QWORD *)(a1 + 16), v3[3], 1);
          *(_QWORD *)(a1 + 16) = v15;
        }
        *(_QWORD *)(a1 + 24) = v13;
        memmove(v15, v14, v13 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v13 - 1) = 0;
      }
    }
    if ( (_QWORD *)(a1 + 40) != v3 + 5 )
    {
      v16 = v3[6];
      if ( v16 < 2 )
      {
        *(_QWORD *)(a1 + 48) = 0;
      }
      else
      {
        v17 = (const void *)v3[5];
        v18 = *(void **)(a1 + 40);
        if ( *(_QWORD *)(a1 + 56) < v16 )
        {
          v18 = (void *)qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v3[6], 1);
          *(_QWORD *)(a1 + 40) = v18;
        }
        *(_QWORD *)(a1 + 48) = v16;
        memmove(v18, v17, v16 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v16 - 1) = 0;
      }
    }
    sub_348C0(a1, v3 + 8);
    if ( !v3[12] )
      goto LABEL_8;
  }
LABEL_5:
  if ( (*(_BYTE *)(a1 + 143) & 2) != 0 && !*(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 104);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 88LL);
    LODWORD(v27) = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int128 *, _QWORD *))(v6 + 112))(v5, 105, &v27, v28) )
    {
      if ( (_DWORD)v27 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        v8 = *(_QWORD **)(*(_QWORD *)(a1 + 80) + 144LL);
        v9 = v8[11];
        v27 = 0;
        if ( (unsigned __int8)sub_944F0(&v27, v8, v7, 105) )
        {
          v26 = 0;
          if ( !(*(unsigned int (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(v9 + 240))(v27, &v29, &v26) )
          {
            v10 = (_QWORD *)v8[54];
            if ( v10 )
            {
              v11 = v8 + 53;
              do
              {
                if ( v10[4] >= v29 )
                {
                  v11 = v10;
                  v10 = (_QWORD *)v10[2];
                }
                else
                {
                  v10 = (_QWORD *)v10[3];
                }
              }
              while ( v10 );
              if ( v11 != v8 + 53 && v29 >= v11[4] )
              {
                v19 = v11[5];
                v28[1] = v11[6];
                v28[0] = v19;
                if ( (v19 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v19 != -1 )
                {
                  v20 = sub_39BA0(v8[18] + 72LL, (__int64)v28);
                  if ( v20 != v8[18] + 80LL )
                  {
                    v21 = *(_QWORD **)(v20 + 48);
                    if ( (_QWORD *)(a1 + 16) != v21 + 2 )
                    {
                      v22 = v21[3];
                      if ( v22 > 1 )
                      {
                        v24 = (const void *)v21[2];
                        if ( *(_QWORD *)(a1 + 32) < v22 )
                          *(_QWORD *)(a1 + 16) = qvector_reserve(a1 + 16, *(_QWORD *)(a1 + 16), v21[3], 1);
                        *(_QWORD *)(a1 + 24) = v22;
                        memmove(*(void **)(a1 + 16), v24, v22 - 1);
                        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v22 - 1) = 0;
                        v21 = *(_QWORD **)(v20 + 48);
                      }
                      else
                      {
                        *(_QWORD *)(a1 + 24) = 0;
                        v21 = *(_QWORD **)(v20 + 48);
                      }
                    }
                    if ( (_QWORD *)(a1 + 40) != v21 + 5 )
                    {
                      v23 = v21[6];
                      if ( v23 > 1 )
                      {
                        v25 = (const void *)v21[5];
                        if ( *(_QWORD *)(a1 + 56) < v23 )
                          *(_QWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v21[6], 1);
                        *(_QWORD *)(a1 + 48) = v23;
                        memmove(*(void **)(a1 + 40), v25, v23 - 1);
                        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v23 - 1) = 0;
                        v21 = *(_QWORD **)(v20 + 48);
                      }
                      else
                      {
                        *(_QWORD *)(a1 + 48) = 0;
                        v21 = *(_QWORD **)(v20 + 48);
                      }
                    }
                    sub_348C0(a1, v21 + 8);
                  }
                }
              }
            }
          }
        }
        sub_84A10(&v27);
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}

