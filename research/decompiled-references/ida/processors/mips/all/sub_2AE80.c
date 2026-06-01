unsigned __int64 __fastcall sub_2AE80(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r14d
  __int64 v5; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  char v11; // dl
  unsigned __int16 v12; // cx
  __int64 v13; // r12
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  unsigned __int16 v18; // cx
  __int64 v19; // r12
  int v20; // r14d
  _DWORD *v21; // r13
  __int64 v22; // rbp
  unsigned __int8 v23; // al
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  unsigned __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v3 = a1 + 16;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 888);
  v27 = __readfsqword(0x28u);
  v26 = 0;
  sub_2AAE0(v5, &v26, v3, -1);
  v7 = 0;
  v25 = v26;
  v8 = a2[1];
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *a2;
      v10 = *a2 + 40 * v7;
      v11 = *(_BYTE *)(v10 + 1);
      if ( v11 != 1 )
        break;
      v12 = *(_WORD *)(v10 + 6);
      if ( v12 <= 0x3Fu && ((1LL << v12) & v25) != 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 v9 + 40 * v13,
                 v10) )
          {
            *(_BYTE *)(*a2 + 40 * v13 + 1) = 0;
          }
          v8 = a2[1];
          if ( ++v13 >= v8 )
            break;
          v9 = *a2;
        }
        v7 = ++v4;
        if ( v4 >= v8 )
          goto LABEL_14;
      }
      else
      {
LABEL_4:
        v7 = ++v4;
        if ( v4 >= v8 )
          goto LABEL_14;
      }
    }
    if ( v11 == 4 )
    {
      v18 = *(_WORD *)(v10 + 6);
      if ( v18 <= 0x3Fu && ((1LL << v18) & v25) != 0 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 v9 + 40 * v19,
                 v10) )
          {
            *(_BYTE *)(*a2 + 40 * v19 + 1) = 0;
          }
          v8 = a2[1];
          if ( ++v19 >= v8 )
            break;
          v9 = *a2;
        }
      }
    }
    goto LABEL_4;
  }
LABEL_14:
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 888) + 16LL);
  v15 = *(unsigned __int16 *)(a1 + 40);
  v16 = *(_DWORD *)(v14 + 104);
  if ( v15 >= v16 && v15 < *(_DWORD *)(v14 + 108) )
  {
    v20 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * (v15 - v16) + 8);
    if ( v20 )
    {
      v21 = dword_598C0;
      v22 = a1 + 56;
      do
      {
        if ( (*v21 & v20) != 0 )
        {
          v23 = *(_BYTE *)(v22 + 1);
          if ( v23 != 4 && v23 > 1u && a2[1] )
          {
            v24 = 0;
            do
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                     a1,
                     *a2 + 40 * v24,
                     v22) )
              {
                *(_BYTE *)(*a2 + 40 * v24 + 1) = 0;
              }
              ++v24;
            }
            while ( v24 < a2[1] );
          }
        }
        ++v21;
        v22 += 40;
      }
      while ( a1 + 256 != v22 );
    }
  }
  return v27 - __readfsqword(0x28u);
}

