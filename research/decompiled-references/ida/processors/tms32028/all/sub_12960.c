__int64 __fastcall sub_12960(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  char v8; // al
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  __int64 *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned int i; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+0h] [rbp-48h]
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  v4 = 0;
  v5 = a2[1];
  for ( i = 0; i < v5; v4 = ++i )
  {
    while ( 1 )
    {
      v6 = *a2;
      v7 = *a2 + 40 * v4;
      v8 = *(_BYTE *)(v7 + 1);
      if ( v8 != 1 )
        break;
      if ( (unsigned __int8)sub_127D0(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v7 + 6), a4) )
        goto LABEL_7;
LABEL_4:
      v4 = ++i;
      if ( i >= v5 )
        goto LABEL_13;
    }
    if ( v8 != 99 )
      goto LABEL_4;
    a4 = *(unsigned __int16 *)(a1 + 40);
    if ( (_WORD)a4 == 56 )
      goto LABEL_4;
    a4 -= 78;
    if ( (unsigned __int16)a4 <= 0x2Cu )
    {
      if ( ((1LL << a4) & 0x60000069) != 0 )
      {
        if ( *(_BYTE *)(a1 + 57) != 1 || *(_WORD *)(a1 + 62) > 2u )
          goto LABEL_4;
      }
      else if ( ((1LL << a4) & 0x100180000000LL) != 0 )
      {
        goto LABEL_4;
      }
    }
LABEL_7:
    v9 = 0;
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v6 + 40 * v9, v7) )
        *(_BYTE *)(*a2 + 40 * v9 + 1) = 0;
      v5 = a2[1];
      if ( ++v9 >= v5 )
        break;
      v6 = *a2;
    }
  }
LABEL_13:
  result = get_ph();
  v11 = *(unsigned __int16 *)(a1 + 40);
  v12 = *(_DWORD *)(result + 104);
  if ( v11 >= v12 && v11 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v11 - v12) + 8);
    v19 = result;
    if ( (_DWORD)result )
    {
      v13 = qword_1A0A0;
      v14 = a1 + 56;
      v15 = a1 + 136;
      do
      {
        result = *(_DWORD *)v13 & v19;
        if ( (*(_DWORD *)v13 & v19) != 0 && *(_BYTE *)(v14 + 1) > 1u && a2[1] )
        {
          v16 = 0;
          do
          {
            v18 = v15;
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       40 * v16 + *a2,
                       v14);
            v15 = v18;
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + 40 * v16 + 1) = 0;
            }
            ++v16;
          }
          while ( v16 < a2[1] );
        }
        v14 += 40;
        v13 = (__int64 *)((char *)v13 + 4);
      }
      while ( v14 != v15 );
    }
  }
  return result;
}

