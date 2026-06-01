__int64 __fastcall sub_5E800(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int16 *v15; // r12
  unsigned __int16 *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int16 *v29; // [rsp+8h] [rbp-70h]
  __int128 v30; // [rsp+10h] [rbp-68h]
  __int128 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a3 == 115 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v30 = 0;
    v28 = 56;
    v29 = nullptr;
    v32 = -1;
    v31 = -1;
    v8 = node2ea(a4);
    v9 = (const char *)a5;
    if ( (unsigned __int8)sub_54AC0((__int64)&v28, a5, v8) )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( (_QWORD)v30 )
      {
        if ( v10 )
        {
          v12 = v10 + 5;
          v11 = v10 + 6;
          --v10;
        }
        else
        {
          v11 = 7;
          v12 = 6;
        }
        v13 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v11 )
        {
          v25 = qvector_reserve(a1, v13, v11, 1);
          *(_QWORD *)a1 = v25;
          v13 = v25;
        }
        *(_QWORD *)(a1 + 8) = v11;
        *(_BYTE *)(v13 + v12) = 0;
        v14 = *(_QWORD *)a1 + v10;
        *(_DWORD *)v14 = 1734701683;
        *(_WORD *)(v14 + 4) = 14963;
        v15 = v29;
        v16 = &v29[v30];
        if ( v29 != v16 )
        {
          do
          {
            v17 = *(_QWORD *)(a5 + 16);
            v18 = *v15;
            v19 = "UNK";
            if ( (int)v18 < *(_DWORD *)(v17 + 64) )
              v19 = *(const char **)(*(_QWORD *)(v17 + 56) + 8 * v18);
            sub_5E740((__int64 *)a1, (__int64)"%s,", v19);
            ++v15;
          }
          while ( v16 != v15 );
        }
        v20 = *(_QWORD *)(a1 + 8);
        v9 = *(const char **)a1;
        v21 = v20 - 1;
        if ( v20 - 1 <= 1 )
        {
          if ( v9 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            qfree(v9, v9);
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 16) = 0;
          }
        }
        else
        {
          if ( *(_QWORD *)(a1 + 16) < v21 )
          {
            v27 = qvector_reserve(a1, v9, v20 - 1, 1);
            *(_QWORD *)a1 = v27;
            v9 = (const char *)v27;
          }
          *(_QWORD *)(a1 + 8) = v21;
          v9[v20 - 2] = 0;
        }
      }
      else
      {
        if ( v10 )
        {
          v23 = v10 + 8;
          v22 = v10 + 9;
          --v10;
        }
        else
        {
          v22 = 10;
          v23 = 9;
        }
        v9 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v22 )
        {
          v26 = qvector_reserve(a1, v9, v22, 1);
          *(_QWORD *)a1 = v26;
          v9 = (const char *)v26;
        }
        *(_QWORD *)(a1 + 8) = v22;
        v9[v23] = 0;
        v24 = *(_QWORD *)a1 + v10;
        *(_QWORD *)v24 = 0x6573207974706D65LL;
        *(_BYTE *)(v24 + 8) = 116;
      }
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29, v9);
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v5 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = 1;
    *v5 = 0;
  }
  return a1;
}

