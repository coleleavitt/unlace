__int64 __fastcall sub_95C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 *v7; // r15
  __int64 v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // r12
  char v11; // dl
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]

  v6 = 0;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v10 = *v7 + 40 * v6;
      v11 = *(_BYTE *)(v10 + 1);
      if ( v11 == 1 )
      {
        a1 = *(_QWORD *)(v8 + 888);
        a2 = v8 + 16;
        if ( sub_94B0(a1, v8 + 16, *(unsigned __int16 *)(v10 + 6), -1, a5, a6) )
          goto LABEL_9;
        v11 = *(_BYTE *)(v10 + 1);
      }
      if ( v11 != 99 )
        goto LABEL_3;
      v6 = *(unsigned __int16 *)(v8 + 40);
      if ( (unsigned __int16)v6 <= 0x1Eu )
      {
        if ( (unsigned __int16)v6 <= 1u )
          goto LABEL_3;
        v20 = 1342111756;
        if ( !_bittest64(&v20, v6) )
          goto LABEL_3;
LABEL_9:
        if ( !v7[1] )
          break;
        v13 = 0;
        do
        {
          a1 = v8;
          a2 = 40 * v13 + *v7;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a2, v10) )
            *(_BYTE *)(*v7 + 40 * v13 + 1) = 0;
          v14 = v7[1];
          ++v13;
        }
        while ( v13 < v14 );
        v6 = ++v9;
        if ( v9 >= v14 )
          break;
      }
      else
      {
        v6 = (unsigned int)(v6 - 63);
        if ( (unsigned __int16)v6 <= 0x27u )
        {
          v12 = 0xD30045A3C1LL;
          if ( _bittest64(&v12, v6) )
            goto LABEL_9;
        }
LABEL_3:
        v6 = ++v9;
        if ( v9 >= (unsigned __int64)v7[1] )
          break;
      }
    }
  }
  result = get_ph(a1, a2, v6);
  v16 = *(unsigned __int16 *)(v8 + 40);
  v17 = *(_DWORD *)(result + 104);
  if ( v16 >= v17 && v16 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v16 - v17) + 8);
    v22 = result;
    if ( (_DWORD)result )
    {
      v18 = &unk_11DC0;
      v19 = v8 + 56;
      do
      {
        result = *v18 & v22;
        if ( (*v18 & v22) != 0 && *(_BYTE *)(v19 + 1) > 1u && v7[1] )
        {
          v21 = 0;
          do
          {
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v8 + 8LL))(
                       v8,
                       *v7 + 40 * v21,
                       v19);
            if ( (_BYTE)result )
            {
              result = *v7;
              *(_BYTE *)(*v7 + 40 * v21 + 1) = 0;
            }
            ++v21;
          }
          while ( v21 < v7[1] );
        }
        v19 += 40;
        ++v18;
      }
      while ( v19 != v8 + 176 );
    }
  }
  return result;
}

