__int64 __fastcall sub_F100(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  __int64 *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned int i; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+0h] [rbp-48h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v3 = a2[1];
  for ( i = 0; i < v3; v2 = ++i )
  {
    while ( 1 )
    {
      v4 = *a2;
      v5 = *a2 + 40 * v2;
      v6 = *(_BYTE *)(v5 + 1);
      if ( v6 != 1 )
        break;
      if ( (unsigned __int8)sub_ED60(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v5 + 6)) )
        goto LABEL_7;
LABEL_4:
      v2 = ++i;
      if ( i >= v3 )
        goto LABEL_13;
    }
    if ( v6 != 99 )
      goto LABEL_4;
    v14 = *(unsigned __int16 *)(a1 + 40);
    if ( (unsigned __int16)v14 <= 0x2Cu )
    {
      if ( (unsigned __int16)v14 > 1u )
      {
        v16 = 0x102548FFFF84LL;
        if ( _bittest64(&v16, v14) )
          goto LABEL_4;
        if ( (_WORD)v14 == 5 )
          goto LABEL_25;
      }
    }
    else
    {
      v15 = v14 - 48;
      if ( v15 <= 0x3Eu )
      {
        if ( ((1LL << v15) & 0x727FBF0270801439LL) != 0 )
          goto LABEL_4;
        if ( ((1LL << v15) & 0x4000008004LL) != 0 )
        {
LABEL_25:
          if ( *(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 102) != 43 )
            goto LABEL_4;
        }
      }
    }
LABEL_7:
    v7 = 0;
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v4 + 40 * v7, v5) )
        *(_BYTE *)(*a2 + 40 * v7 + 1) = 0;
      v3 = a2[1];
      if ( ++v7 >= v3 )
        break;
      v4 = *a2;
    }
  }
LABEL_13:
  result = get_ph();
  v9 = *(unsigned __int16 *)(a1 + 40);
  v10 = *(_DWORD *)(result + 104);
  if ( v9 >= v10 && v9 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v9 - v10) + 8);
    v20 = result;
    if ( (_DWORD)result )
    {
      v11 = qword_182C0;
      v12 = a1 + 56;
      v13 = a1 + 176;
      do
      {
        result = *(_DWORD *)v11 & v20;
        if ( (*(_DWORD *)v11 & v20) != 0 && *(_BYTE *)(v12 + 1) > 1u && a2[1] )
        {
          v17 = 0;
          do
          {
            v19 = v13;
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       40 * v17 + *a2,
                       v12);
            v13 = v19;
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + 40 * v17 + 1) = 0;
            }
            ++v17;
          }
          while ( v17 < a2[1] );
        }
        v12 += 40;
        v11 = (__int64 *)((char *)v11 + 4);
      }
      while ( v12 != v13 );
    }
  }
  return result;
}

