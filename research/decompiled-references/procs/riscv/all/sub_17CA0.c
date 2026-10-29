__int64 __fastcall sub_17CA0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // esi
  _DWORD *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // [rsp+0h] [rbp-48h]
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v3 = 0;
  v5 = a2[1];
  if ( v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *a2 + 40 * v3;
        if ( *(_BYTE *)(v6 + 1) == 1 )
        {
          if ( (unsigned __int8)sub_17AE0(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v6 + 6)) )
            break;
        }
        v3 = ++v2;
        if ( v2 >= v5 )
          goto LABEL_12;
      }
      v8 = 0;
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7 + 40 * v8, v6) )
          *(_BYTE *)(*a2 + 40 * v8 + 1) = 0;
        v5 = a2[1];
        if ( ++v8 >= v5 )
          break;
        v7 = *a2;
      }
      v3 = ++v2;
    }
    while ( v2 < v5 );
  }
LABEL_12:
  result = get_ph();
  v10 = *(unsigned __int16 *)(a1 + 40);
  v11 = *(_DWORD *)(result + 104);
  if ( v10 >= v11 && v10 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v10 - v11) + 8);
    v17 = result;
    if ( (_DWORD)result )
    {
      v12 = &unk_2B0E0;
      v13 = a1 + 56;
      do
      {
        result = *v12 & v17;
        if ( (*v12 & v17) != 0 && *(_BYTE *)(v13 + 1) > 1u && a2[1] )
        {
          v14 = 0;
          do
          {
            v16 = v14;
            v15 = 40 * v14;
            result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       40 * v14 + *a2,
                       v13);
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + v15 + 1) = 0;
            }
            v14 = v16 + 1;
          }
          while ( v16 + 1 < (unsigned __int64)a2[1] );
        }
        v13 += 40;
        ++v12;
      }
      while ( v13 != a1 + 216 );
    }
  }
  return result;
}
