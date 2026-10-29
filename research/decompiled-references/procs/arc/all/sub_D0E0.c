__int64 __fastcall sub_D0E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r12
  char v8; // al
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // edx
  int v12; // esi
  _DWORD *v13; // rbp
  __int64 v14; // rbx
  __int16 v15; // ax
  unsigned __int64 v16; // r12
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]

  v3 = 0;
  v4 = 0;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *a2;
      v7 = *a2 + 40 * v3;
      v8 = *(_BYTE *)(v7 + 1);
      if ( v8 == 1 )
      {
        if ( sub_CF60(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v7 + 6)) )
          goto LABEL_7;
LABEL_4:
        v3 = ++v4;
        if ( v4 >= v5 )
          break;
      }
      else
      {
        if ( v8 != 99 )
          goto LABEL_4;
        v15 = *(_WORD *)(a1 + 40);
        if ( v15 != 251 && v15 != 55 && v15 != 5 && (unsigned __int16)(v15 - 301) > 1u && (*(_BYTE *)(a1 + 45) & 1) == 0 )
          goto LABEL_4;
LABEL_7:
        v9 = 0;
        while ( 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 v6 + 40 * v9,
                 v7) )
          {
            *(_BYTE *)(*a2 + 40 * v9 + 1) = 0;
          }
          v5 = a2[1];
          if ( ++v9 >= v5 )
            break;
          v6 = *a2;
        }
        v3 = ++v4;
        if ( v4 >= v5 )
          break;
      }
    }
  }
  result = get_ph();
  v11 = *(unsigned __int16 *)(a1 + 40);
  v12 = *(_DWORD *)(result + 104);
  if ( v11 >= v12 && v11 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v11 - v12) + 8);
    v17 = result;
    if ( (_DWORD)result )
    {
      v13 = &unk_1F620;
      v14 = a1 + 56;
      do
      {
        result = *v13 & v17;
        if ( (*v13 & v17) != 0 && *(_BYTE *)(v14 + 1) > 1u && a2[1] )
        {
          v16 = 0;
          do
          {
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       *a2 + 40 * v16,
                       v14);
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
        ++v13;
      }
      while ( v14 != a1 + 136 );
    }
  }
  return result;
}
