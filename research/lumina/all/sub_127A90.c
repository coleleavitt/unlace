__int64 __fastcall sub_127A90(__int64 a1, __int64 a2, int a3, double a4)
{
  int v5; // r12d
  int *v6; // r13
  int *v7; // rbx
  int *v8; // r14
  __int64 result; // rax
  __m128i *v10; // rax
  unsigned __int8 *v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r13d
  unsigned int v18; // eax
  int v19; // edx
  _BYTE *v20; // rcx
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]
  unsigned int v23; // [rsp+Ch] [rbp-3Ch]

  v5 = a3;
  v6 = *(int **)(a1 + 88);
  v21 = (unsigned int)a3 >> 31;
  if ( !v6 || a3 >= 0 || (v7 = v6 + 2, *v6 <= 0) )
  {
LABEL_9:
    if ( a2 && (v10 = sub_DD6E0(*(_QWORD *)a1, a2, 0, nullptr), (v11 = (unsigned __int8 *)v10) != nullptr) )
    {
      if ( (v10->m128i_i8[4] & 4) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        v15 = sub_E1710(v14, 14, 0, 0, 0);
        v16 = *(_QWORD *)a1;
        *(_BYTE *)(a1 + 35) = 0;
        v17 = v15;
        v18 = v5;
        if ( !*(_BYTE *)(v16 + 103) )
        {
          if ( v5 < 0 )
          {
            v18 = *(_DWORD *)(a1 + 56) + 1;
            *(_DWORD *)(a1 + 56) = v18;
          }
          if ( *(_QWORD *)(a1 + 16) )
          {
            v22 = v18;
            sub_127300(a1, v11, v18, a4);
            v16 = *(_QWORD *)a1;
            v18 = v22;
          }
        }
        *(_BYTE *)(a1 + 35) = 1;
        v23 = v18;
        sub_D7720(v16, (__int64)v11);
        v19 = *(_DWORD *)(v14 + 144);
        result = v23;
        if ( v17 < 0 )
          v17 = v19 - 1;
        v20 = byte_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v14 + 103LL) )
          v20 = (_BYTE *)(*(_QWORD *)(v14 + 136) + 24LL * v17);
        *((_DWORD *)v20 + 2) = v19;
        return result;
      }
    }
    else
    {
      v11 = nullptr;
    }
    v12 = sub_E0F20((__int64 *)a1, v6, (__int64)v11);
    result = (unsigned int)v5;
    if ( v12 )
    {
      v13 = *(_DWORD *)v12 - 1;
      BYTE1(v12[3 * v13 + 3]) = BYTE1(v12[3 * v13 + 3]) & 0xF7 | (8 * v21);
      if ( v5 < 0 )
      {
        v5 = *(_DWORD *)(a1 + 56) + 1;
        *(_DWORD *)(a1 + 56) = v5;
      }
      HIDWORD(v12[3 * v13 + 3]) = v5;
      result = (unsigned int)v5;
    }
    *(_QWORD *)(a1 + 88) = v12;
    return result;
  }
  v8 = &v7[6 * (*v6 - 1) + 6];
  while ( (*((_BYTE *)v7 + 17) & 8) == 0 || (unsigned int)sub_F80F0(0, *(char **)v7, a2, 0xFFFFFFFF, a4) )
  {
    v7 += 6;
    if ( v7 == v8 )
      goto LABEL_9;
  }
  return (unsigned int)v7[5];
}
