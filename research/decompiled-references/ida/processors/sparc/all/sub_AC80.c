__int64 __fastcall sub_AC80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r13d
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r12
  char v7; // al
  __int64 v8; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // rbp
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v3 = 0;
  v4 = a2[1];
  if ( v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *a2;
        v6 = *a2 + 40 * v2;
        v7 = *(_BYTE *)(v6 + 1);
        if ( v7 != 1 )
          break;
        if ( (unsigned __int8)sub_ABE0(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v6 + 6), -1) )
          goto LABEL_7;
LABEL_4:
        v2 = ++v3;
        if ( v3 >= v4 )
          goto LABEL_13;
      }
      if ( v7 != 99 )
        goto LABEL_4;
      v14 = *(unsigned __int16 *)(a1 + 40);
      if ( (unsigned __int16)v14 > 0xBAu )
        goto LABEL_4;
      if ( (unsigned __int16)v14 <= 0x87u )
      {
        if ( (unsigned __int16)v14 > 8u )
        {
          v16 = (unsigned int)(v14 - 85);
          if ( (unsigned __int16)v16 > 0x1Au )
            goto LABEL_4;
          v17 = 67633233;
          if ( !_bittest64(&v17, v16) )
            goto LABEL_4;
        }
        else
        {
          if ( (unsigned __int16)v14 <= 1u )
            goto LABEL_4;
          v15 = 340;
          if ( !_bittest64(&v15, v14) )
            goto LABEL_4;
        }
      }
      else if ( ((1LL << ((unsigned __int8)v14 + 120)) & 0x11449E5) == 0 )
      {
        if ( (_WORD)v14 == 151 )
        {
          if ( *(_BYTE *)(a1 + 137) != 1 || *(_WORD *)(a1 + 142) != 136 )
            goto LABEL_4;
        }
        else if ( (_WORD)v14 != 186 || *(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 102) != 136 )
        {
          goto LABEL_4;
        }
      }
LABEL_7:
      v8 = 0;
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v5 + 40 * v8, v6) )
          *(_BYTE *)(*a2 + 40 * v8 + 1) = 0;
        v4 = a2[1];
        if ( ++v8 >= v4 )
          break;
        v5 = *a2;
      }
      v2 = ++v3;
    }
    while ( v3 < v4 );
  }
LABEL_13:
  result = get_ph();
  v10 = *(unsigned __int16 *)(a1 + 40);
  v11 = *(_DWORD *)(result + 104);
  if ( v10 >= v11 && v10 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v10 - v11) + 8);
    v19 = result;
    if ( (_DWORD)result )
    {
      v12 = &dword_13CA0;
      v13 = a1 + 56;
      do
      {
        result = *v12 & v19;
        if ( (*v12 & v19) != 0 && *(_BYTE *)(v13 + 1) > 1u && a2[1] )
        {
          v18 = 0;
          do
          {
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       *a2 + 40 * v18,
                       v13);
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + 40 * v18 + 1) = 0;
            }
            ++v18;
          }
          while ( v18 < a2[1] );
        }
        v13 += 40;
        ++v12;
      }
      while ( v13 != a1 + 176 );
    }
  }
  return result;
}

