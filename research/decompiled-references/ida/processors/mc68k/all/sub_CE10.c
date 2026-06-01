__int64 __fastcall sub_CE10(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r13
  char v12; // al
  __int64 v13; // rbx
  __int64 result; // rax
  int v15; // edx
  int v16; // esi
  _DWORD *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r12
  unsigned int v25; // [rsp+0h] [rbp-48h]
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+8h] [rbp-40h]

  v6 = a1 + 16;
  v7 = 0;
  v9 = a2[1];
  v25 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *a2;
      v11 = *a2 + 40 * v7;
      v12 = *(_BYTE *)(v11 + 1);
      if ( v12 == 1 )
      {
        if ( (unsigned __int8)sub_CD10(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v11 + 6), v6, a5, a6) )
          goto LABEL_7;
LABEL_4:
        v7 = ++v25;
        if ( v25 >= v9 )
          break;
      }
      else
      {
        if ( v12 != 99 )
          goto LABEL_4;
        v20 = *(unsigned __int16 *)(a1 + 40);
        if ( (unsigned __int16)v20 > 0x7Au )
        {
          v22 = (unsigned int)(v20 - 125);
          if ( (unsigned __int16)v22 > 0x3Bu )
            goto LABEL_4;
          v23 = 0x8FA50F000077C41LL;
          if ( !_bittest64(&v23, v22) )
            goto LABEL_4;
        }
        else if ( (unsigned __int16)v20 <= 0x78u )
        {
          if ( (unsigned __int16)v20 > 0x32u )
          {
            if ( (_WORD)v20 != 117 )
              goto LABEL_4;
          }
          else
          {
            if ( !(_WORD)v20 )
              goto LABEL_4;
            v21 = 0x6D4FDEE3FF7F6LL;
            if ( !_bittest64(&v21, v20) )
              goto LABEL_4;
          }
        }
LABEL_7:
        v13 = 0;
        while ( 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 v10 + 40 * v13,
                 v11) )
          {
            *(_BYTE *)(*a2 + 40 * v13 + 1) = 0;
          }
          v9 = a2[1];
          if ( ++v13 >= v9 )
            break;
          v10 = *a2;
        }
        v7 = ++v25;
        if ( v25 >= v9 )
          break;
      }
    }
  }
  result = get_ph();
  v15 = *(unsigned __int16 *)(a1 + 40);
  v16 = *(_DWORD *)(result + 104);
  if ( v15 >= v16 && v15 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v15 - v16) + 8);
    v27 = result;
    if ( (_DWORD)result )
    {
      v17 = &dword_16E60;
      v18 = a1 + 56;
      v19 = a1 + 176;
      do
      {
        result = *v17 & v27;
        if ( (*v17 & v27) != 0 && *(_BYTE *)(v18 + 1) > 1u && a2[1] )
        {
          v24 = 0;
          do
          {
            v26 = v19;
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       40 * v24 + *a2,
                       v18);
            v19 = v26;
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + 40 * v24 + 1) = 0;
            }
            ++v24;
          }
          while ( v24 < a2[1] );
        }
        v18 += 40;
        ++v17;
      }
      while ( v18 != v19 );
    }
  }
  return result;
}

